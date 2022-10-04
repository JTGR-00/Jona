#include<iostream>
using namespace std;
int main()
{
	float jtgr_v,jtgr_d,jtgr_t;
	cout<<"Ingrese la distancia (en km) d= ";
	cin>>jtgr_d;
	cout<<"Ingrese el tiempo (en horas) t= ";
	cin>>jtgr_t;
	jtgr_v=jtgr_d/jtgr_t;
	cout<<"La velocidad calculada es de v= ";
	cout<<jtgr_v<<endl;
return 0;
}
