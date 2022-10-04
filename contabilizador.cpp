#include<iostream>
using namespace std;

int main()
{
int i=0,l; 
float jtgr_x,jtgr_s=0;
     cout << "Ingresé limite: ";
     cin >>l;
    do {
     cout << "Ingresé número : ";
     cin >>jtgr_x;
     i=i+1;
     jtgr_s=jtgr_s+jtgr_x;
    }while(i<l);
     cout << "Se ingresaron "<<l<<" números "<<" que sumaron "<<jtgr_s<<endl;

    return 0;
}
