#include "iostream"

int mifuncion(int,int);
using namespace std;

int main(void)
{

    cout<<"MCD DE DOS NUMEROS ENTEROS INGRESADOS"<<endl<<endl;
    int num1,num2,mcd;
   cout<<"Introduzca el primer numero: ";
   cin>>num1;
   cout<<"Introduzca el segundo numero: ";
   cin>>num2;

    if(num1==num2)
    mcd= num1;
    if(0==num1||0==num2)
    mcd=(0==num1)? num2:num1;
    else
    {
        if (num1 > num2)          
        mcd = mifuncion(num1, num2);
        else
        mcd = mifuncion (num2, num1);  
    

    }
    cout<<"El MCD es: "<<mcd<<endl;
    return 0;
}

int mifuncion (int u, int v)          
                           
{               
int temp;              
               
while (u>v)              
               
{                
if (0 == u%v)            
return v;              
               
temp = u;             
u = v;             
v = temp - u;           
               
if (v > u) {temp=v; v=u;u = temp; }       
}   
                               
}