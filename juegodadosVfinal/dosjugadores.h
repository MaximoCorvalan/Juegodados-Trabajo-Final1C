#ifndef DOSJUGADORES_H_INCLUDED
#define DOSJUGADORES_H_INCLUDED
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
#include "ganador2jugadores.h"
void mododosjugadores(string jugador1,string jugador2,int opcion,int opcion_simulado);
void mododosjugadores(string jugador1,string jugador2,int opcion,int opcion_simulado)
{

    int vec[6]= {0},puntaje=0,cont[6] {};
    bool escalera=false,dados_6iguales=false,puntaje0=false,escalera2=false;
    int puntajetotal=0,  puntajetotal2=0, mayorpuntaje=0;
    int on=0,ronda=1,i;
    int contlanzamiento=0;

    if(opcion_simulado==2)
    {
        opcion=3;

    }


    while( on==0)
    {
        contlanzamiento=0;
        mayorpuntaje=0;
        puntaje=0;
        puntaje0=false;
        for(i=0; i<6; i++)

        {
            contlanzamiento++;
            system("cls");

            if(escalera2==false && escalera==false)
            {
                if(i!=0)
                {

                    rlutil::locate(50,10);
                    cout<<"TURNO DE: "<<jugador1<< endl;
                    rlutil::locate(50,11);
                    cout<<"EL PUNTAJE "<<puntajetotal;
                    Sleep(2000);
                    system("cls");

                }
            }



            if (puntajetotal2>=300||puntajetotal>=300|| escalera==true ||escalera2==true)
            {
                on=1;
                i=3;
            }
            else
            {   //INTERFAZ
                cout << "-------------------------"<< endl;
                cout << "TURNO DE: " << jugador1 << endl;
                cout<<"----PUNTAJE TOTAL----"<<puntajetotal<<endl;
                cout<<"RONDA NUMERO: "<<ronda<<endl;
                cout<< "LANZAMIENTO N:"<<contlanzamiento<<endl;
                cout<<"---MAYOR PUNTAJE DE LA RONDA---"<< mayorpuntaje <<endl;
                cout << "-------------------------"<< endl;
                if(opcion==3)
                {
                    cargardados(vec);
                }
                else
                {
                    lanzardados(vec);
                }                           //SACAMOS LA COMBINACION GANADORA
                contnum(vec,cont);           //VAMOS PISANDO EL PUNTAJE SI APARECE UNO MAS ALTO
                puntaje=0;
                trios(cont, puntaje);
                fescalera(cont,escalera);
                iguales_6(cont,puntaje,dados_6iguales);
               // seis6(cont,dados_6iguales,puntaje0);
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
                system("cls");
                rlutil::locate(50,10);
                cout<<"TURNO DE: "<<jugador2<< endl;
                rlutil::locate(50,11);
                cout<<"EL PUNTAJE "<<puntajetotal2;
                Sleep(2000);
                system("cls");
            }

            /**---------------------------------modo dos jugadores-----------------------------------------------*/


            i++;

            if (puntajetotal2>=300||puntajetotal>=300|| escalera==true ||escalera2==true)
            {
                on=1;
                i=6;
            }
            else
            {

                cout << "-------------------------"<< endl;
                cout << "TURNO DE: " << jugador2 << endl;
                cout<<"----PUNTAJE TOTAL----"<<puntajetotal2<<endl;
                cout<<"RONDA NUMERO: "<<ronda<<endl;
                cout<< "LANZAMIENTO N:"<<contlanzamiento<<endl;
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
                fescalera(cont,escalera2);
                iguales_6(cont,puntaje,puntaje0);
               // seis6(cont,dados_6iguales,puntaje0);
                combinacion0(vec,puntaje,escalera2,dados_6iguales,puntaje0);
                ponerencerovec(cont);
                puntajetotal2+=puntaje;
                mayorpuntaje=buscarmayor(puntaje,mayorpuntaje,i,puntaje0);

            }

            if(puntaje0==true)
            {
                puntajetotal2=0;
            }


        if(on==0)
        {
           system ("pause");
            system("cls");
            rlutil::locate(50,10);
            cout<<"TURNO DE: "<<jugador1<< endl;
            rlutil::locate(50,11);
            cout<<"EL PUNTAJE "<<puntajetotal;
            Sleep(2000);
            system("cls");
        }
        }




        ronda++;


    }
     ganador(escalera,escalera2,puntajetotal,puntajetotal2,jugador1,jugador2);


}

#endif // DOSJUGADORES_H_INCLUDED
