#ifndef CONTNUM_H_INCLUDED
#define CONTNUM_H_INCLUDED
#include <iostream>
#include "funcion.h"
void contnum(int vec[], int cont[]);
void contnum(int vec[], int cont[])
{
    int i;
    for (int i = 0; i < 6; i++)
    {
        switch (vec[i])
        {
        case 1:
            cont[0]++;
            break;
        case 2:
            cont[1]++;
            break;
        case 3:
            cont[2]++;
            break;
        case 4:
            cont[3]++;
            break;
        case 5:
            cont[4]++;
            break;
        case 6:
            cont[5]++;
            break;
        }
    }

    for ( i = 0; i < 6; i++)
    {
        cout << cont[i] << " -----" << endl;
    }


}


#endif // CONTNUM_H_INCLUDED
