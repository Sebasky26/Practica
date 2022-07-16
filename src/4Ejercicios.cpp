#include <iostream>

using namespace std; 

/*
Ejercicios (if-else) 1: Registrar su numero de cedula en una variable, luego pedir que se ingrese el numero de cedula, si la cedula  
coincide con la del sistema, imprimir la cedula y un mensaje de que se ha accedido al sistema, caso contario presentar un 
mensaje que informe que el sistema se ha bloqueado.
*/

/*int main()
{
    string cedula = "1728487644";
    string ci; 

    cout<<"Bienvenido, por favor ingesa tu numero de cedula"<<endl;
    cin>>ci;

    if( ci == cedula)
    {
        cout<<"Su cedula esta registrada en el sistema, su cedula es: "<<ci<<endl;
        cout<<"Accedio correctamente al sistema"<<endl;
    }
    else{
        cout<<"!Cedula incorrecta!"<<endl;
        cout<<"Lo sentimos, el sistema se ha bloqueado"<<endl;
        }
    return 0;
}*/

/*
Ejercicios (if-else) 2: En una pizzeria se tiene 2 tipos de pizza en promocion con igredientes misteriosos, 
la primera pizza cuesta 25$ y la segunda pizza 20$,presentar un menu al usuario que indique solo el precio 
de las pizzas y segun la opcion que elija presentar los ingrediente de cada pizza.
*/

/*int main()
{ 
    int opcion;

    cout<<"Bienvenido a la Pizzeria Estrella"<<endl;
    cout<<"Elige una de las opciones de nuestra pizza misteriosa: "<<endl;
    cout<<"1: Pizza 1 25$ \n2: Pizza 2 20$ "<<endl;
    cin>>opcion;

    if( opcion == 1)
    {
        cout<<"Haz seleccionado la Pizza 1 que contiene los siguientes ingredientes: "<<endl;
        cout<<"Queso,Jamon,Salami, Carne"<<endl;
        cout<<"Disfruta de tu deliciosa Pizza"<<endl;
    }
    else{
        cout<<"Haz seleccionado la Pizza 2 que contiene los siguientes ingredientes: "<<endl;
        cout<<"Pina,Queso, Champinones, Vegetales"<<endl;
        cout<<"Disfruta de tu deliciosa Pizza"<<endl;
        }
    return 0;
}*/


/*
Ejercicios (if-else) 3: Mostrar 16 palabras al usuario y el significado de palabras esdrujulas, y pedir al usuario 
que ingrese cuantas palabras esdrujulas encontro, si es correto presentar un mensaje y si es incorrecto presentar otro mensaje.
*/

/*int main () 
{
    int num,num_es;
    num_es = 7;

    cout<<"Las palabras esdrujulas son aquellas que llevan el acento en la antepenultima silaba"<<endl;
    cout<<"ambito | coche   | angulo | circulo    | nave       | decimo   | deposito | foraneo |"<<endl;
    cout<<"Hola   | America | pasto  | comunmente | casa       | color    | cortina  | perro   |"<<endl;
    cout<< "Ingresa el numero de palabras esdrujulas que encontro: "<<endl;
    cin>>num;

    if (num == num_es)
    {   
        cout<<"!CORRECTO! El numero de palabras esdrujulas es: "<<num<<endl;
    }
    else
    { 
        cout<<"!INCORRECTO! El numero de palabras esdrujulas es: "<<num_es<<endl; 
    }
    return 0;
} */

/*
Ejercicios (if-else-if) 1: Hacer un menu que permita multiplicar dos numeros, dividir dos numeros y salir del menu.
*/

/*int main () 
{
    int num1,num2,mult,opc;
    float division;

    cout<< "MENU"<<endl;
    cout<< "1. Multiplicar 2 numeros"<<endl;
    cout<< "2. Dividir 2 numeros"<<endl;
    cout<< "3. Salir"<<endl;
    cin>>opc;

    if (opc == 1)
    {   
        cout<<"Ingrese el primer numero que desea multiplicar: "<<endl;
        cin>>num1;
        cout<<"Ingrese el segundo numero que desea multiplicar: "<<endl;
        cin>>num2;

        mult = num1 * num2;

        cout<<"La multiplicacion es: "<<mult<<endl;
    }
    else if(opc == 2)
    { 
        cout<<"Ingrese el primer numero que desea dividir: "<<endl;
        cin>>num1;
        cout<<"Ingrese el segundo numero que desea dividir: "<<endl;
        cin>>num2;

        division = num1 / num2;

        cout<<"La division es: "<<division<<endl;
    }
    else if(opc == 3)
    {
        cout<<"Saliendo del menu"<<endl;
    }
    else
    {
        cout<<"Opcion incorrecta"<<endl;
    }
    return 0;
}*/

/*
Ejercicios (if-else-if) 2: Hacer un programa que lea una letra y diga si es una vocal.
*/

/*int main () 
{
    char letra;
    
    cout<< "Ingresa una letra"<<endl;
    cin>>letra;

    if ((letra == 'a') || (letra == 'A')) 
    { 
        cout<<"La letra ingresa es una vocal "<<endl; 
    } 
    else if ((letra == 'e') || (letra == 'E')) 
    { 
        cout<<"La letra ingresa es una vocal "<<endl; 
    } 
    else if ((letra == 'i') || (letra == 'I')) 
    { 
        cout<<"La letra ingresa es una vocal "<<endl; 
    } 
    else if ((letra == 'o') || (letra == 'O')) 
    { 
        cout<<"La letra ingresa es una vocal "<<endl; 
    } 
    else if ((letra == 'u') || (letra == 'U')) 
    { 
        cout<<"La letra ingresa es una vocal "<<endl; 
    } 
    else 
    { 
        cout<<"La letra ingresada no es una vocal"<<endl; 
    } 
    return 0;
}*/

/*
Ejercicios (if-else-if) 3: Elaborar un programa que muestre el nombre de aniversario de bodas de cada decada hasta los 60.
*/

int main () 
{
    int decada;
    
    cout<< "Ingrese una decada para saber el nombre del aniversario de bodas"<<endl;
    cin>>decada;

    if (decada == 10) 
    { 
        cout<<"El aniversario es Bodas de Hojalata, cuando la decada es "<<decada<<endl; 
    } 
    else if (decada == 20) 
    { 
        cout<<"El aniversario es Bodas de Porcelana, cuando la decada es "<<decada<<endl; 
    } 
    else if (decada == 30) 
    { 
        cout<<"El aniversario es cuando Bodas de Perlas, la decada es "<<decada<<endl; 
    } 
    else if (decada == 40) 
    { 
        cout<<"El aniversario es Bodas de Rubi, cuando la decada es "<<decada<<endl; 
    } 
    else if (decada == 50) 
    { 
        cout<<"El aniversario es Bodas de Oro, cuando la decada es "<<decada<<endl; 
    } 
    else if (decada == 60) 
    { 
        cout<<"El aniversario es Bodas de Diamante, cuando la decada es "<<decada<<endl; 
    } 
    else 
    { 
        cout<<"No es una decada valida o no ingreso una decada"<<endl; 
    } 
    return 0;
}