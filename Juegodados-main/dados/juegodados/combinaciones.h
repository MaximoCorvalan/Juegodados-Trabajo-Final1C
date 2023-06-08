#include <iostream>
#include "funcion.h"
int cont[6]={0,0,0,0,0,0};
int combinacion(int []);
int combinacion(int vec[]){
int j,i,puntaje,num;
for ( i=0;i<6;i++){
        if(vec[i]==1){
        cont[0]++;
        }else if(vec[i]==2){
        cont[1]++;
        }else if(vec[i]==3){
        cont[2]++;
        }else if(vec[i]==4){
        cont[3]++;
        }else if(vec[i]==5){
        cont[4]++;
        }else if(vec[i]==6){
        cont[5]++;
        }}
        cout << "----------------------------" << endl;
for (j=0;j<6;j++){

if (cont[j]>=3&&cont[j]<5)
    {
       num=j+1;
       puntaje =(j+1)*10;
    }
}
cout << "sacaste trio x con el num " << num << endl  ;
return puntaje;
}

