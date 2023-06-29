#ifndef COMBINACIONES_H_INCLUDED
#define COMBINACIONES_H_INCLUDED
void trios(int cont[], int &puntaje);
void seis6(int cont[],bool dados_6iguales,bool &puntaje0);

void trios(int cont[], int &puntaje)
{
    int j;
    int num;
    int band=0;
    for (j=0; j<6; j++)
    {

        if (cont[j]>=3&&cont[j]<6)
        {
            num=j+1;
            puntaje =(j+1)*10;
            band=1;
        }
    }
    if(band==1)
    {
        cout << "SACASTE TRIO CON EL NUMERO "<<num<<" EL PUNTAJE OBTENIDO ES "<<puntaje<< endl  ;
    }


}


void seis6(int cont[],bool dados_6iguales,bool &puntaje0)
{

    if(cont[5]==6 && dados_6iguales==true )
    {

        cout<<"SACASTE SEIS 6, TU PUNTAJE ES 0 "<<endl;
        puntaje0=true;


    }

}
#endif
