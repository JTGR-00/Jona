#include<iostream>
using namespace std;

int main()
{
int i=0,l; 
float x,s=0;
     cout << "Ingresé limite: ";
     cin >>l;
    do {
     cout << "Ingresé número : ";
     cin >>x;
     i=i+1;
     s=s+x;
    }while(i<l);
     cout << "Se ingresaron "<<l<<" números "<<" que sumaron "<<s<<endl;

    return 0;
}
