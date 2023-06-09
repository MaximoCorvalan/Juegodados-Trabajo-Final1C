#ifndef ESCALERA_H_INCLUDED
#define ESCALERA_H_INCLUDED

void fescalera(int []);
void fescalera(int vec[]){
int num=vec[1];
int band=0;
for(int i=1;i<5;i++){
    if(num<vec[i]){
        num=vec[i];
    }else{
    band=1;
    }
}
if(band==0){
   cout<< "escaleraaaaaaa";
}
}

#endif // ESCALERA_H_INCLUDED
