#include<iostream>
using namespace std;
int main()
{
float x,y,s=0,r=0,m=0,d=0;
 cout<<"Ingrese valor 1: ";
 cin>>x;
 cout<<"Ingrese valor 2: ";
 cin>>y;
 s=x+y;
 r=x-y;
 m=x*y;
 d=x/y;
 cout<<"La suma de "<<x<<"+"<<y<<"="<<s<<endl;
 cout<<"La resta de "<<x<<"-"<<y<<"="<<r<<endl;
 cout<<"La multiplicación de "<<x<<"*"<<y<<"="<<m<<endl;
 cout<<"La división de "<<x<<"/"<<y<<"="<<d<<endl;
return 0;
}
