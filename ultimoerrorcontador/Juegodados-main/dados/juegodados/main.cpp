using namespace std;
#include <iostream>
#include <string>
#include <cstdlib>
#include "rlutil.h"
#include "funcion.h"
#include "combinaciones.h"
#include "contnum.h"
#include "escalera.h"
#include "cargardados.h"
#include "dadosiguales.h"
#include "ningunacombinacion.h"
#include "BUSCARMAYOR.h"
#include "ponerencero.h"


int main()
{
    int vec[6]={0},puntaje=0,cont[6]{},vecpunto[3]{};
    bool escalera=false,dados_6iguales=false;
    string nombre;
    int opcion;
    int puntajetotal=0;
    int on2=0,on=0,ronda=1,i;
    cout<<"INGRESE NOMBRE DEL JUGADOR"<<endl;
    cin>>nombre;
    cout<<"ELIGE MODO DE JUEGO:"<<endl;
    cout<<"1-UN JUGADOR"<<endl;
    cout<<"2-DOS JUGADORES"<<endl;
    cout<<"3-MODO SIMULADO== MODO HACK"<<endl;

    cin>>opcion;
    switch(opcion)
    {
    case 1:

        while(on==0)
        { puntaje=0;
          for(i=0;i<3;i++){
               if(ronda>1){
                cout<<"-PUNTAJE TOTAL----"<<puntajetotal<<endl;
                }
                cout<<"RONDA NUMERO "<<ronda<<endl;
                cout<< "LANZAMIENTO N°"<<i+1<<endl;
                cout<<"MAYOR PUNTAJE DE LA RONDA---"<<puntaje<<endl;
            lanzardados(vec);
            contnum(vec,cont);
            trios(cont,puntaje);
            fescalera(vec,escalera);
            iguales_6(cont,puntaje,dados_6iguales);
            seis6(cont,puntaje,dados_6iguales);
            combinacion0(vec,puntaje,escalera,dados_6iguales);
            ponerencerovec(cont);
            puntaje=vecpunto[i];
            buscarmayor(vecpunto,puntaje);

            system("pause");
            if (puntajetotal>200)
            {
                on2=1;

            }
            if (on2==1 || escalera==true)
            {
                on=1;
            }
              system("cls");
            }

          ronda++;

           cout<<puntaje<<"------------";
          puntajetotal+=puntaje;


        }

        break;
    case 3:
        while( on==0)
        {
            puntaje=0;
        for(i=0;i<3;i++){
                 if(ronda>1){
                cout<<"-PUNTAJE TOTAL----"<<puntajetotal<<endl;
                }
                cout<<"RONDA NUMERO "<<ronda<<endl;
                cout<< "LANZAMIENTO N°"<<i+1<<endl;
              if(i!=0){
                cout<<"MAYOR PUNTAJE DE LA RONDA---"<<puntaje<<endl;
            }


            cargardados(vec);
            contnum(vec,cont);
            trios(cont,puntaje);
            fescalera(vec,escalera);
             iguales_6(cont,puntaje,dados_6iguales);
            seis6(cont,puntaje,dados_6iguales);
            combinacion0(vec,puntaje,escalera,dados_6iguales);
            ponerencerovec(cont);
             vecpunto[i]=puntaje;
            buscarmayor(vecpunto,puntaje);

            if (puntajetotal>200)
            {
                on2=1;

            }
            if (on2==1 || escalera==true)
            {
                on=1;
            }


        }

        puntajetotal+=puntaje;

        ronda++;
        system("cls");
        cout<<"RONDA NUMERO "<<ronda<<" FINALIZADA EL PUNTAJE TOTAL ES "<<puntajetotal<<endl;


    }
      break;

}


}
