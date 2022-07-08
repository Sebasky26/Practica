#include <iostream>
#include "../lib/loading.h"

using namespace std;

/*void Porcentajes()
{
    int porcenty = 0;
    for(int x=0;x<=99;x++)
    {
        porcenty++;
        cout<<"\r"<<porcenty<<"%";
        usleep(2000);
    }
}*/

int main()
{
    loading1();
    cout << endl;
    loading2();
    cout << endl;
    loading3();
    cout << endl;
    loading4();
    cout << endl;
    loading5();
    return 0;
}
