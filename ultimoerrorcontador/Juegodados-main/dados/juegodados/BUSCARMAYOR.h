#ifndef BUSCARMAYOR_H_INCLUDED
#define BUSCARMAYOR_H_INCLUDED
int buscarmayor(int vec[],int &puntaje  );
int buscarmayor(int vec[],int &puntaje  )
{   int i=0;


    for (  i=0; i<3; i++)
    {
        if(i==0)
        {
            puntaje=vec[i];

        }
        else if(vec[i]>puntaje)
        {
            puntaje=vec[i];
            cout<<"wl mayor de los puntajes es "<<puntaje;
        }
    }


    return puntaje;
}


#endif // BUSCARMAYOR_H_INCLUDED)
