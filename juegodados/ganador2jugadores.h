#ifndef GANADOR2JUGADORES_H_INCLUDED
#define GANADOR2JUGADORES_H_INCLUDED
void ganador(bool escalera,bool escalera2, int puntajetotal, int puntajetotal2,string jugador1, string jugador2);
void ganador(bool escalera,bool escalera2, int puntajetotal, int puntajetotal2,string jugador1, string jugador2)
{

    if( escalera==true )
    {
        rlutil::locate(50,10);
        cout<<"GANASTE -----"<<jugador1<<"---------"<<endl;
        rlutil::locate(50,11);
        cout<<"---PUNTAJE TOTAL---"<<puntajetotal<<endl;


    }
    else if(escalera2==true)
    {
        rlutil::locate(50,10);
        cout<<"GANASTE -----"<<jugador2<<"---------"<<endl;
        rlutil::locate(50,11);
        cout<<"---PUNTAJE TOTAL---"<<puntajetotal2<<endl;

    }
    else if(puntajetotal2>puntajetotal)
    {

        rlutil::locate(50,10);
        cout<<"GANASTE -----"<<jugador2<<"---------"<<endl;
        rlutil::locate(50,11);
        cout<<"---PUNTAJE TOTAL---"<<puntajetotal2<<endl;
    }
    else
    {

        rlutil::locate(50,10);
        cout<<"GANASTE -----"<<jugador1<<"---------"<<endl;
        rlutil::locate(50,11);
        cout<<"---PUNTAJE TOTAL---"<<puntajetotal<<endl;
    }
    system ("pause");






}


#endif // GANADOR2JUGADORES_H_INCLUDED
