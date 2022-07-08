#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <Windows.h>

#define ENTER '\n'

using namespace std;

int getTerminosGenerar()
{
    int nroTerminos;
    int n=1726383514;
    int num[10];
    int i=0;
    int ced;

    cout<<"Ingrese su cedula: "<<endl;
    cin>>ced;

    if( n == ced)
    {
        cout<<"Hola Sebastian Aisalla"<<endl;
    
        while(n>0)
        {
            num[i]= n % 10;
            n = n/10;
            i++;
        }

        if(num[i==9] % 2 == 0)
        {
            cout<<"Se ejecutaran las series pares"<<endl;
        }

        do
        {
            cout<<"Ingrese la cantidad de terminos a generar: "<<endl;
            cin>>nroTerminos;
        } while (nroTerminos%2!=0);
    }
    else
    {
        cout<<"!Error! cedula no identificada"<<endl;
        abort();
    }

    return nroTerminos;
}

enum Colors { // Listado de colores (La letra "L" al inicio, indica que es un color mas claro que su antecesor).
    BLACK      = 0,
    BLUE       = 1,
    GREEN      = 2,
    CYAN       = 3,
    RED        = 4,
    MAGENTA    = 5,
    BROWN      = 6,
    LGREY      = 7,
    DGREY      = 8,
    LBLUE      = 9,
    LGREEN     = 10,
    LCYAN      = 11,
    LRED       = 12,
    LMAGENTA   = 13,
    YELLOW     = 14,
    WHITE      = 15
};

// procedimiento para cambiar el color del fondo y/o pantalla
void setColor(int Background, int Text){ 
    int colorTexto= Text + (Background * 16);         // los colores van del 0 al 255 por eso se multiplica por 16
    HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);   // referenciamos a la consola.
    SetConsoleTextAttribute(terminal, colorTexto); 
}

void SerieFibo(int x)
{
    cout<<"Serie 1: "<<endl;
    int a,b,c;
    a = 0;
    b = 1;
    c = 1;
    
    cout<<"0\t";
    cout<<"1\t";

    for(int i=3;i<=x;i++)
    {
    c= a+b;
    a = b;
    b = c;
    cout<<c<<"\t";
    }
}

void serieSignoFibo(int x)
{
    cout<<"\nSerie 2: "<<endl;
    int a,b,c;

    a = 0;
    b = 1;
    c = 1;

    for(int i=1;i<=x;i++)
    {
        for(int p=1;p<=c;p++)
        {
            cout<<"+";
        }
        c= a+b;
        a = b;
        b = c;
        cout<<"\t";
    }
}     

void serieFiboAumImpar(int x)
{
    cout<<"\nSerie 3: "<<endl;
    int a,b,c,y,z,f;

    a = 0;
    b = 1;
    c = 1;
    y = 0;
    z = 3;

    
    cout<<"0\\1"<<"\t"<<"1\\3"<<"\t";
    

    for(int i=3;i<=x;i++)
    {
    c= a+b;
    a = b;
    b = c;
    y = z + 2;
    z = y;

    cout<<c<<"\\"<<y<<"\t";
    }
}

void serieFiboAumPar(int x)
{
    cout<<"\nSerie 4: "<<endl;
    int a,b,c,y,z,f;

    a = 0;
    b = 1;
    c = 1;
    y = 0;
    z = 4;

    
    cout<<"0\\2"<<"\t"<<"1\\4"<<"\t";
    

    for(int i=3;i<=x;i++)
    {
    c= a+b;
    a = b;
    b = c;
    y = z + 2;
    z = y;

    cout<<c<<"\\"<<y<<"\t";
    }
}

void serieNumPrimos(int n)
{
    cout<<"\nSerie 5: "<<endl;

    int x, d;
    int primo;

    x = 2;
    while (n > 0) 
    {
        /* determinar si x es primo */
        primo = 1;
        for (d = 2; d < x; ++d) 
        {
            if (x % d == 0) 
            {
                primo = 0;
                break;
            }
        }
        /* mostrar el numero y actualizar el contador */
        if (primo) 
        {
            cout<<x<<"\t";
            n--;
        }
        x++;
    }
}

void serieNumPrimossigno(int n)
{
    cout<<"\nSerie 6: "<<endl;

    int  x,d;
    int primo;

    x = 2;
    while (n > 0) 
    {
        /* determinar si x es primo */
        primo = 1;
        for (d = 2; d < x; ++d) 
        {
            if (x % d == 0) 
            {
                primo = 0;
                break;
            }
        }
        /* mostrar el numero y actualizar el contador */
        if (primo) 
        {
            for(int i=1;i<=x;i++)
            {
            cout<<"+";
            }
            n--;
            cout<<"\t";
        }
        x++;
    }
}

void serieSumaTres(int x)
{
    cout<<"\nSerie 7: "<<endl;

    int a,b;

    cout<<"1\t";
    a = 0;
    b = 1;

    for(int i=2;i<=x;i++)
    {
        a = b + 3;
        b = a;
        cout<<a<<"\t";
    }
}

void serieSumaCinco(int x)
{
    cout<<"\nSerie 8: "<<endl;

    int a,b;

    cout<<"3\t";
    a = 0;
    b = 3;

    for(int i=2;i<=x;i++)
    {
        a = b + 5;
        b = a;
        cout<<a<<"\t";
    }
}

void serieMultDos(int x)
{
    cout<<"\nSerie 9: "<<endl;

    int a,b;

    cout<<"2\t";
    a = 0;
    b = 2;

    for(int i=2;i<=x;i++)
    {
        a = b * 2;
        b = a;
        cout<<a<<"\t";
    }
}

void serieMultTres(int x)
{
    cout<<"\nSerie 10: "<<endl;

    int a,b;

    cout<<"3\t";
    a = 0;
    b = 3;

    for(int i=2;i<=x;i++)
    {
        a = b * 3;
        b = a;
        cout<<a<<"\t";
    }
}

void seriePiramide1(int x)
{
    cout<<"\nSeire 11: "<<endl;
    for( int i=x;i>=1; i--)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void seriePiramide2(int x)
{
    cout<<"\nSeire 12: "<<endl;

    for(int i=1;i<=x; i++)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void seriePiramide3(int x)
{
    cout<<"\nSeire 13: "<<endl;

    for(int i = 0; i <= x; i++)
    {
        for(int j = 0; j <= i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}
