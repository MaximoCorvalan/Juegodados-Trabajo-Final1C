#ifndef BUSCARMAYOR_H_INCLUDED
#define BUSCARMAYOR_H_INCLUDED
int buscarmayor(int puntaje,int puntajemayor,int i  );
int buscarmayor(int puntaje, int puntajemayor,int i )
{
        if(i==0)
        {
            puntajemayor=puntaje;

        }
        else if(puntaje>puntajemayor)
        {
            puntajemayor=puntaje;

        }




    return puntajemayor;
}


#endif // BUSCARMAYOR_H_INCLUDED)
