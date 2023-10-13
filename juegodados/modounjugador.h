#ifndef MODOUNJUGADOR_H_INCLUDED
#define MODOUNJUGADOR_H_INCLUDED
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

void modounjugador(string jugador1,int opcion_simulado,int opcion);
void modounjugador(string jugador1, int opcion_simulado,int opcion)
{
    system("cls");
    int vec[6]= {0},puntaje=0,cont[6] {};
    bool escalera=false,dados_6iguales=false,puntaje0=false;
    int puntajetotal=0, mayorpuntaje=0;
    int on=0,ronda=1,i;
    if(opcion_simulado==3)
    {
        opcion=3;
    }

    while( on==0)
    {
        mayorpuntaje=0;
        puntaje=0;
        puntaje0=false;
        for(i=0; i<3; i++)
        {
            system("cls");


            if (puntajetotal>=300|| escalera==true)
            {
                on=1;
                i=3;
            }
            else
            {
                cout << "-------------------------"<< endl;
                cout << "TURNO DE: " << jugador1 << endl;
                cout<<"----PUNTAJE TOTAL----"<<puntajetotal<<endl;
                cout<<"RONDA NUMERO: "<<ronda<<endl;
                cout<< "LANZAMIENTO N:"<<i+1<<endl;
                cout<<"---MAYOR PUNTAJE DE LA RONDA---"<<mayorpuntaje<<endl;
                cout << "-------------------------"<< endl;

                if(opcion==3)
                {
                    cargardados(vec);
                }
                else
                {
                    lanzardados(vec);
                }
                contnum(vec,cont);
                puntaje=0;
                trios(cont, puntaje);
                fescalera(cont,escalera);
                iguales_6(cont,puntaje,puntaje0);
                //seis6(cont,dados_6iguales,puntaje0);
                combinacion0(vec,puntaje,escalera,dados_6iguales,puntaje0);
                ponerencerovec(cont);
                puntajetotal+=puntaje;
                mayorpuntaje=buscarmayor(puntaje,mayorpuntaje,i,puntaje0);
            }

            if(puntaje0==true)
            {
                puntajetotal=0;
            }
            if(on==0)
            {
                system ("pause");
            }
        }
        if(on==0)
        {

            system("cls");
            rlutil::locate(50,10);
            cout<<"TURNO DE: "<<jugador1<< endl;
            rlutil::locate(50,11);
            cout<<"EL PUNTAJE "<<puntajetotal;
            Sleep(2000);
            system("cls");

        }

        ronda++;



    }

    rlutil::locate(45,10);
    if(escalera==false)
    {
        cout<<jugador1<<" GANASTE LA PARTIDA CON UN TOTAL DE "<<puntajetotal<<endl;
    }
    system ("pause");


}


#endif // MODOUNJUGADOR_H_INCLUDED
