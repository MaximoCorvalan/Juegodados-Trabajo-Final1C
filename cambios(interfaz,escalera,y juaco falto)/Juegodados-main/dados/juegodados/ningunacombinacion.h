#ifndef NINGUNACOMBINACION_H_INCLUDED
#define NINGUNACOMBINACION_H_INCLUDED

int combinacion0(int [], int &puntaje, bool &escalera);
int combinacion0(int vec [], int &puntaje, bool &escalera){
    int sum=0;
  if(puntaje==0 && escalera==false){
    for(int i=0;i<6;i++){
        sum+=vec[i];

    }
    puntaje=sum;
    cout<<" no obtuviste ninguna combinación, la suma total de puntos es ";
  }
return puntaje;

}


#endif // NINGUNACOMBINACION_H_INCLUDED
