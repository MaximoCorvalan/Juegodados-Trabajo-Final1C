using namespace std;
#include <iostream>
#include "modounjugador.h"
#include "dosjugadores.h"

int main()
{
            bool juego=false;

 while(juego==false)
{


    rlutil::setBackgroundColor(rlutil::WHITE);
    system("cls");
    rlutil::setColor(rlutil::BLACK);
    string jugador1,jugador2;
    int opcion,opcion_simulado;
    rlutil::locate(50,10);
    cout<<"ELIGE MODO DE JUEGO:"<<endl;
    rlutil::locate(50,11);
    cout<<"1-UN JUGADOR"<<endl;
    rlutil::locate(50,12);
    cout<<"2-DOS JUGADORES"<<endl;
    rlutil::locate(50,13);
    cout<<"3-MODO SIMULADO"<<endl;
    rlutil::locate(50,14);
    cout<<"4-SALIDA"<<endl;
    rlutil::locate(50,15);
    cin>>opcion;
    system("cls");

    switch(opcion)
    {
    case 1:
        rlutil::locate(50,10);
        cout<<"INGRESE NOMBRE DEL JUGADOR"<<endl;
        rlutil::locate(50,11);
        cin>> jugador1;
        modounjugador(jugador1,opcion_simulado,opcion);

        break;

    case 2:
        rlutil::locate(50,10);
        cout<<"INGRESE NOMBRE DEL JUGADOR 1 "<<endl;
        rlutil::locate(50,11);
        cin>> jugador1;
        rlutil::locate(50,12);
        cout<<"INGRESE NOMBRE DE JUGADOR 2 "<<endl;
        rlutil::locate(50,13);
        cin>>jugador2;
        system("cls");
        mododosjugadores(jugador1,jugador2,opcion,opcion_simulado);


        break;



    case 3:
        rlutil::locate(50,10);
        cout<<"INGRESE NOMBRE DEL JUGADOR"<<endl;
        rlutil::locate(50,11);
        cin>> jugador1;
        system("cls");
        rlutil::locate(50,10);
        cout<<"MODO SIMULADO PARA"<<endl;
        rlutil::locate(50,11);
        cout<<"1-MODO UN JUGADOR "<<endl;
        rlutil::locate(50,12);
        cout<<"2-MODO DOS JUGADORES "<<endl;
        rlutil::locate(50,13);
        cin>>opcion_simulado;
        if(opcion_simulado==1){
            modounjugador(jugador1,opcion_simulado,opcion);
        }else{
        rlutil::locate(50,14);
        cout<<"INGRESE NOMBRE DE JUGADOR 2"<<endl;
        rlutil::locate(50,15);
        cin>>jugador2;
        system("cls");
        mododosjugadores(jugador1,jugador2,opcion,opcion_simulado);
        }

break;
    case 4:

        juego=true;


        break;


    }



}}
