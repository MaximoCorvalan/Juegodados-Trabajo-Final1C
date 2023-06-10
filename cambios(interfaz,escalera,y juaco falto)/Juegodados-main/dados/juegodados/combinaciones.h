
int trios(int [], int &puntaje);
int seis6(int [],int &puntaje);
int trios( int cont[], int &puntaje){
 int j;
 int num;
 int band=0;
for (j=0;j<6;j++){

if (cont[j]>=3&&cont[j]<5)
    {
       num=j+1;
       puntaje =(j+1)*10;
   band=1;
    }
}
if(band==1){
     cout << "sacaste trio x con el num " << num << endl  ;
}

return puntaje;
}
int seis6(int cont[],int &puntaje){

     if(cont[5]==6){
      cout<<"sacaste seis 6, perdiste todos los puntos"<<endl;
      puntaje=0;
      }
return puntaje;
}

