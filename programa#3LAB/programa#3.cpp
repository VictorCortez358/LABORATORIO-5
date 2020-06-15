#include "iostream"
#include "cmath"
#include "cstdlib"

bool mifuncion(int*);
using namespace std;
int main(void)
{
    int a;
    cout<<"VERIFICAR SI ES BISIESTO O NO"<<endl<<endl;
    mifuncion(&a);
    cout<<"Es bisiesto"<<endl;
    cout<<"No es bisiesto"<<endl;
    return 0;

}

bool mifuncion(int*a)
{
    cout<<"Introduce un a"<<(char)164<<"o: ";
    cin>>*a;
    bool condition= (*a% 4 == 0 && *a% 100 != 0 || *a % 400 == 0);

    
    
}