#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
using namespace std;
const int PRO_BAR_LENGTH = 30;

void loadingNumeral(int porcent) //[################] 100%
{
    int num_caracteres=(porcent*PRO_BAR_LENGTH)/100;
    cout<<"\r[";
    for(int i=0;i<=PRO_BAR_LENGTH;i++)
    {
    if (i<=num_caracteres)
        cout<<"#";
    else
        cout<<" ";
    }
    cout<<"] "<<porcent<<"%";
}
void loading1()
{
    for (int i = 0; i <=100; i++)
    {
        loadingNumeral(i);
        usleep(20000);
    }
}

void Retornar( int porcent) //[------<<<-------] 100%
{   
    int num_caracteres=(porcent*PRO_BAR_LENGTH)/100;
    cout<<"\r[";
        
        for (int  i = PRO_BAR_LENGTH; i >=0; i--)
        {
        if (i==num_caracteres && i%2==0)
        {
            cout<<"<<<";
        }
        else
        {
            cout<<"-"; 
        }
    }
}
void loadingArrow(int porcent) //[------->>>-------] 100%
{
    int porcenty=0;
    int num_caracteres=(porcent*PRO_BAR_LENGTH)/100;
    cout<<"\r[";
    for (int  i = 0; i <=PRO_BAR_LENGTH; i++)
    {
        if (i==(num_caracteres))
        {
            cout<<">>>";
        }
        else
        {
            cout<<"-"; 
        }
    }
    cout<<"] Cargando...";
}
void loading2()
{
    for (int i = 0; i <=100; i++)
    {
        loadingArrow(i);
        usleep(20000);
    }

    for (int j = 0; j <=100; j++)
    {
        Retornar(j);
        usleep(20000);
    }
    
}

void loadingAvance(int porcent) //[=-=-=-=-=-=-=-] 100%
{
    int num_caracteres=(porcent*PRO_BAR_LENGTH)/100;
    cout<<"\r[";
    for (int  i = 0; i <=PRO_BAR_LENGTH; i++)
    {
        if ( i<=num_caracteres)
        {
            if (i==num_caracteres)
            {
                for (int j = 1; j <=2 ; j++)
                {
                    if (j==1)
                    {
                        cout<<"-";
                    }  
                    else
                    {
                        usleep(200000);
                        cout<<"\b="; 
                    }
                }
            }
            else
            {
                cout<<"=";
            }   
        }
        else
        {
            cout<<" ";
        }
    } 
    cout<<"] "<<porcent<<"%";

}
void loading3()
{
    for (int i = 0; i <=100; i++)
    {
        loadingAvance(i);
        usleep(200000);
    }
}


void Regresar( int porcentx) //[------< + >-------] 100%
{   
    int num_caracteres=(porcentx*PRO_BAR_LENGTH)/100;
    cout<<"\r[";
        
        for (int  i = PRO_BAR_LENGTH; i >=0; i--)
        {
        if (i==num_caracteres && i%2==0)
        {
            cout<<"< + >";
        }
        else
        {
            cout<<" "; 
        }
        
    }
}
void loadingSpaceship(int porcent) //[------< + >-------] 100%
{
    int num_caracteres=(porcent*PRO_BAR_LENGTH)/100;
    cout<<"\r[";
        for (int  i=0; i <=PRO_BAR_LENGTH; i++)
        {
            if (i==num_caracteres)
            {
                cout<<"< + >"; 
            }
            else
            {
                cout<<" ";
            }
        }
    cout<<"] Cargando...";
    usleep(20000);
}
void loading4()
{
    for (int i = 0; i <=100; i++)
    { 
        loadingSpaceship(i);
        usleep(20000);
    }
    
    for (int j = 0; j <=100; j++)
    {
        Regresar(j);
        usleep(20000);
    }
}

void loadingO(int porcent) //[OOOOOOOOOOOOOOO] 100%
{
    int num_caracteres=(porcent*PRO_BAR_LENGTH)/100;
    cout<<"\r[";
    for(int i=0;i<=PRO_BAR_LENGTH;i++)
    {
    if (i<=num_caracteres)
        cout<<"O";
    else
        cout<<" ";
    }
    cout<<"] "<<porcent<<"%";
}
void loading5()
{
    for (int i = 0; i <=100; i++)
    {
        loadingO(i);
        usleep(20000);
    }
}