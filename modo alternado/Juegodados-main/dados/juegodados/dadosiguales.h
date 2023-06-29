#ifndef DADOSIGUALES_H_INCLUDED
#define DADOSIGUALES_H_INCLUDED
void iguales_6(int [],int&puntaje,bool &puntaje0);
void iguales_6(int cont[], int &puntaje,bool &puntaje0){
      if(cont[5]!=6){
      for(int i=0;i<6;i++){
        if(cont[i]==6 ){


            puntaje=(i+1)*50;
            cout<<"SACASTE 6 IGUALES, CON EL NUMERO "<<i+1<<" EL PUNTAJE OBTENIDO ES "<<puntaje<< endl;
        }


        }

      }else {
       puntaje0=true;

      }

}


#endif // 6DADOSIGUALES_H_INCLUDED
