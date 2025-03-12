#include<iostream>
using namespace std;
int main()
{
	int num1,num2,addition,subtraction,multiplication,divide,modulus;
	cout<<"Enter two number\n Number1 :";
	cin>>num1;
	cout<<"Number2 :";
	cin>>num2;
	addition=num1+num2;
	subtraction=num1-num2;
	multiplication=num1*num2;
	divide=num1/num2;
	modulus=num1%num2;
	
	cout<<"\tAddition:\n\t"<<"\t"<<num1<<"+"<<num2<<"="<<addition<<endl;
	cout<<"\tSubtraction:\n\t"<<"\t"<<num1<<"-"<<num2<<"="<<subtraction<<endl;
	cout<<"\tMultiplication:\n\t"<<"\t"<<num1<<"*"<<num2<<"="<<multiplication<<endl;
	cout<<"\tDivide:\n\t"<<"\t"<<num1<<"/"<<num2<<"="<<divide<<endl;
	cout<<"\tModulus:\n\t"<<"\t"<<num1<<"%"<<num2<<"="<<modulus<<endl;
	return 0;
	
	
}