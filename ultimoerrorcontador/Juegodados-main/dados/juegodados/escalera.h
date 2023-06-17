#ifndef ESCALERA_H_INCLUDED
#define ESCALERA_H_INCLUDED

void fescalera(int [],bool &escalera);
void fescalera(int vec[],bool &escalera){

int num=vec[0];
int band=0;

for(int i=1;i<6;i++){
    if(num<vec[i]){
        num=vec[i];

    }else{
    band=1;
    }
}
if(band==0){
   cout<< "escalera,ganaste la ronda"<<endl;

   escalera=true;


}
}

#endif // ESCALERA_H_INCLUDED
