#include <iostream>
#include "funcion.h"
int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;
int combinacion(int []);
int combinacion(int vec[]){

for (int i=0;i<6;i++){
        if(vec[i]==1){
        cont1++;
        }else if(vec[i]==2){
        cont2++;
        }else if(vec[i]==3){
        cont3++;
        }else if(vec[i]==4){
        cont4++;
        }else if(vec[i]==5){
        cont5++;
        }else if(vec[i]==6){
        cont6++;
        }


}
    cout<<"-----------------"<<endl;
    cout<<cont6;

}
