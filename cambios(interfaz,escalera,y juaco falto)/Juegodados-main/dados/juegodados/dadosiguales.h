#ifndef DADOSIGUALES_H_INCLUDED
#define DADOSIGUALES_H_INCLUDED
int iguales_6(int [],int&puntaje);
int iguales_6(int cont[], int &puntaje){

      for(int i=0;i<5;i++){
        if(cont[i]==6){
            cout<<"sacaste 6 iguales,con el numero "<<i+1<<endl;
            puntaje=(i+1)*50;

        }
      }
 return puntaje;
}


#endif // 6DADOSIGUALES_H_INCLUDED
