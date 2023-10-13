#ifndef NINGUNACOMBINACION_H_INCLUDED
#define NINGUNACOMBINACION_H_INCLUDED

void combinacion0(int [], int &puntaje, bool escalera,bool dados_6iguales,bool puntaje0);
void combinacion0(int vec [], int &puntaje, bool escalera,bool dados_6iguales,bool puntaje0){
    int sum=0;

  if(puntaje==0 && escalera==false && dados_6iguales==false && puntaje0==false)
   {

    for(int i=0;i<6;i++){
        sum+=vec[i];

    }
    puntaje=sum;
    cout<<" NO OBTUVISTE NINGUNA COMBIANCION , EL PUNTAJE OBTENIDO ES "<<puntaje<<endl;
  }
}

#endif // NINGUNACOMBINACION_H_INCLUDED
