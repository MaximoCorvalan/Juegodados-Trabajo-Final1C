#ifndef FUNCION_H_INCLUDED
#define FUNCION_H_INCLUDED
#include <iostream>
#include <string>
#include "rlutil.h"
#include <cstdlib>
#include <ctime>
#include <windows.h>

 void lanzardados(  int []);

 void lanzardados(int vec[]){
     int i;
     cout<<"lanzando dados"<<endl;
     srand(time(NULL));
     for ( i=0;i<6;i++){
        vec[i]=rand()%6+1;
     }
     Sleep(2000);
     cout<<"los dados que te tocaron son "<<endl;
       for( i=0;i<6;i++){
        cout<<vec[i]<<endl;
     }

 }


#endif // FUNCION_H_INCLUDED
