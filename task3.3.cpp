#include<iostream>
using namespace std;
int main()
{
//	int weight;
//	double height;
//	cout<<"BMI Calculator"<<endl;
//	cout<<"--------------"<<endl;
//	cout<<"Enter your weight in kilograms:"<<endl;
//	cin>>weight;
//	cout<<"Enter your height in meters:"<<endl;
//	cin>>height;
//	double height2;
//	height2= height*height;
//	double BMI= weight/height2;
//	cout<<"Your BMI is:"<<BMI<<endl;
//	return 0;
	
	float a,b,c,d,e;
	cout<<"Trip cost Estimator"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"Enter distance of trip in kilometers:";
	cin>>a;
	cout<<"Enter vichel's fuel efficient (km per liter):";
	cin>>b;
	cout<<"Enter fuel cost per liter:";
	cin>>c;
	d=a/b;
	e=d*c;
	cout<<"Total trip cost: Rs"<<e<<endl;
	
}