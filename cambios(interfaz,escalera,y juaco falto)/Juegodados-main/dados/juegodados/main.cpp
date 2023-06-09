using namespace std;
#include <iostream>
#include <string>
#include "rlutil.h"
#include "funcion.h"
#include "combinaciones.h"
#include "contnum.h"
#include "escalera.h"


int main()
{
    int vec[6]= {0},puntaje=0,cont[6]= {0},escalera=0;
    string jugador;
    int opcion;
    cin>>opcion;
    cout<<"elige modo de juego ";
    switch(opcion)
    {
    case 1:


        lanzardados(vec);
        contnum(vec,cont);
        trios(cont,puntaje);
        fescalera(vec);



        break;
    case 2:




        break;




    }


    cout<< "el puntaje de esta ronda es: "<< puntaje;

}
