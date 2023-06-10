using namespace std;
#include <iostream>
#include <string>
#include "rlutil.h"
#include "funcion.h"
#include "combinaciones.h"
#include "contnum.h"
#include "escalera.h"
#include "cargardados.h"
#include "dadosiguales.h"
#include "ningunacombinacion.h"


int main()
{
    int vec[6]= {0},puntaje,cont[6]= {0};
    bool escalera=false;
    string jugador;
    int opcion;

    cout<<"elige modo de juego "<<endl;
    cout<<"1-un jugador"<<endl;
    cout<<"2-Modo simulado"<<endl;
      cin>>opcion;
    switch(opcion)
    {
    case 1:


        lanzardados(vec);
        contnum(vec,cont);
        trios(cont,puntaje);
        fescalera(vec,escalera);
        seis6(cont,puntaje);
        iguales_6(cont,puntaje);
        combinacion0(vec,puntaje,escalera);



        break;
    case 2:

         cargardados(vec);
         contnum(vec,cont);
         trios(cont,puntaje);
         fescalera(vec,escalera);
         seis6(cont,puntaje);
         iguales_6(cont,puntaje);
         combinacion0(vec,puntaje,escalera);




        break;




    }


    cout<< "el puntaje de esta ronda es: "<< puntaje;

}
