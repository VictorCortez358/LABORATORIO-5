#include "iostream"
void mifuncion(int*,int*,int*);
using namespace std;

int main(void)
{
    int dd,mm,aa;
    cout<<"MUESTRA LA FECHA INGRESADA DESPUES DE UN DIA"<<endl<<endl;
    mifuncion(&dd,&mm,&aa);
    cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
    return 0;
}
void mifuncion(int*dd,int*mm,int*aa)
{
    cout<<"Ingrese un dia: ";
    cin>>*dd;
    cout<<"Ingrese el mes: ";
    cin>>*mm;
    cout<<"Ingrese el a"<<(char)164<<"o: ";
    cin>>*aa;

    while(*aa%4==0 &&*aa%100!=0 || *aa%400==0)
    {
       *dd++;
        if(*dd>31){
            *dd=*dd+1;
            *mm++;
            if(*mm>12){
                *mm=*mm+1;
                *aa++;
                
            }
        }
        
   
    }
}