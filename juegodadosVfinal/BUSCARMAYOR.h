#ifndef BUSCARMAYOR_H_INCLUDED
#define BUSCARMAYOR_H_INCLUDED
int buscarmayor(int puntaje,int puntajemayor,int i ,bool puntaje0 );
int buscarmayor(int puntaje, int puntajemayor,int i, bool puntaje0)
{
/*if (bool puntaje0=true)
{
puntajemayor=0;
}*/
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
