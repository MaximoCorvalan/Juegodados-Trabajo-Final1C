#ifndef ESCALERA_H_INCLUDED
#define ESCALERA_H_INCLUDED

void fescalera(int [],bool &escalera);
void fescalera(int vec[],bool &escalera){

int band=0;

for(int i=0;i<6;i++){
    if(vec[i]==1){
        band++;

    }
}
if(band==6){
   cout<< "ESCALERA, GANASTE LA PARTIDA "<<endl;

   escalera=true;


}

}

#endif // ESCALERA_H_INCLUDED
