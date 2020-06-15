#include "iostream"
#include "cmath"
void mifuncion(int*,int*,int*);
using namespace std;

int main(void)
{
   int h,m,s;

   mifuncion(&h,&m,&s);
   cout<<"La hora un segundo despues es: "<<h<<"h"<<m<<"m"<<s<<"s";
   cout<<endl;
   return 0;
 }

void mifuncion(int* h,int *m,int* s)
{ 
  cout<<"Ingrese la hora: ";
   cin>>*h;
   cout<<"Ingrese los minutos: ";
   cin>>*m;
   cout<<"Ingrese los segundos:";
   cin>>*s;
    
        *s= *s +1;
        if ( *s == 60 )
        {
            *s = 0;
            *m=*m+1;
            if (*m == 60 )
            {
                *m = 0;
                *h=*h+1;
                if (* h == 24 )
                    *h = 0;
            }     
 }
}