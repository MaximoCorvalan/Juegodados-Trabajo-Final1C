
int trios(int [], int &puntaje);
int seis6(int [],int &puntaje,int dados_6iguales);
int trios( int cont[], int &puntaje){
 int j;
 int num;
 int band=0;
for (j=0;j<6;j++){

if (cont[j]>=3&&cont[j]<6)
    {
       num=j+1;
       puntaje =(j+1)*10;
   band=1;
    }
}
if(band==1){
     cout << "SACASTE TRIO CON EL NUMERO "<<num<<"EL PUNTAJE OBTENIDO ES "<<puntaje<< endl  ;
}

return puntaje;
}
int seis6(int cont[],int &puntaje,bool dados_6iguales){

     if(cont[5]==6 && dados_6iguales==true ){
     puntaje=0;
      cout<<"SACASTE SEIS 6, TU PUNTAJE ES "<<puntaje<<endl;

      }
return puntaje;
}

