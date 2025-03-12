#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,e;
	cout<<"Trip cost Estimator"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"Enter distance of trip in kilometers:";
	cin>>a;
	cout<<"Enter vicheles fuel efficient (km per liter)";
	cin>>b;
	cout<<"Enter fuel cost per liter:";
	cin>>c;
	d=a/b;
	e=d*c;
	cout<<"Total trip cost: Rs"<<e<<endl;
	return 0;
}
