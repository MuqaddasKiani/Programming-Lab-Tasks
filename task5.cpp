#include<iostream>
using namespace std;
int main()
{
//	                   TASK1


//	int num;
//	cout<<"Enter one integer:";
//	cin>>num;
//	if (num>0)
//	{ cout<<"The number is positive."<<endl;
//	
//	}
//	
//	return 0;
    
//                     TASK2


//    int num;
//    cout<<"Enter one number: ";
//    cin>>num;
//    if (num%2==0)
//    {
//    	cout<<"The number is even."<<endl;
//    	
//	}
//	return 0;
    
//                    TASK3


//    int a,b,c;
//    cout<<"Enter three numbers:";
//    cin>>a;
//    cin>>b;
//    cin>>c;
//    if (a>b&&b>c)
//   {
//    	cout<<"a is greater"<<endl;	
//	}
//	  if (b>a&&a>c)
//	{
//		cout<<"b is greater"<<endl;
//	}
//	  if (c>b&&b>c)
//	{
//		cout<<"c is greater"<<endl;
//	}  	return 0;

//                  TASK4
       
//     int marks;
//     cout<<"Enter student marks:";
//     cin>>marks;
//     if(marks>=90)
//     {
//       	cout<<"A+ GRADE"<<endl;
//	   }
//	   if(marks>=80 && marks<=89)
//	   {
//	   	cout<<"A GRADE"<<endl;
//	   }
//	   if(marks>=70 && marks<=79)
//	   {
//	   	cout<<"B GRADE"<<endl;
//	   }
//	   if(marks>=60 && marks<=69)
//	   {
//	   	cout<<"C GRADE"<<endl;
//	   }
//	   if(marks<=60)
//	   {
//	   	cout<<"FAIL"<<endl;
//	   }
//	   return 0;

//              TASK5

//    char trafficsignal;
//	 cout<<"Enter the colour of traffic light:";
//	 cin>>trafficsignal;
//	 if(trafficsignal=='R')
//	 {cout<<"Stop"<<endl;
//	 }
//	 if(trafficsignal=='G')
//	 {cout<<"Go"<<endl;
//	 }
//	 if(trafficsignal=='Y')
//	 {cout<<"Slow down"<<endl;
//	 }
//	 return 0;

//                TASK6

    
//    int accbal, wdamnt, diff;
//    cout<<"Enter your account balance:";
//    cin>>accbal;
//    cout<<"Insert the withdrawal amount:";
//    cin>>wdamnt;
//    if (accbal>=wdamnt){
//    	diff= accbal-wdamnt;
//    	cout<<"Your remaining balance is"<<diff<<endl;
//	}
//	else{
//		cout<<"Insufficient Balance"<<endl;
//	}
//	return 0;

//               TASK7

//   int sal,exp;
//   cout<<"Enter your monthly salary:$";
//   cin>>sal;
//   cout<<"Enter your number of working years:";
//   cin>>exp;
//   if(sal>=25000){
//   	cout<<"You are eligible for taking loan"<<endl;
//   }
//   if(sal<25000&&sal>=20000&&exp>5){
//   	cout<<"You are eligible for taking loan"<<endl;
//   }
//   else{
//   	cout<<"You are not eligible for taking loan"<<endl;
//   }
//   return 0;


//                TASK8

   cout<<"EMPLOYEE PLAYROLL MANAGEMENT SYSTEM"<<endl;
   
   char grade;
   int basic_salary,gross_salary,bonous,tax,service,net_salary;
   cout<<"Enter your grade: ";
   cin>>grade;
   cout<<"Enter your service duration: ";
   cin>>service;
   
   if(grade=='a'){
   	basic_salary= 50000;
   }
   if(grade=='b'){
   	basic_salary=30000;
   }
   if(grade=='c'){
   	basic_salary=20000;
   }
   if(service>=10){
   	bonous=(10*basic_salary)/100;
   }
   if(service>=5 && service<10){
   	bonous=(5*basic_salary)/100;
   }
   if(service<5){
   	bonous=0;
   }
   gross_salary=basic_salary+bonous;
   if(gross_salary>40000){
   	tax=(20*gross_salary)/100;
   }
   if(gross_salary>=30000 && gross_salary<40000){
   	tax=(10*gross_salary);
   }
   
   net_salary=gross_salary-tax;
   cout<<"Your basic_salary is: "<<basic_salary<<endl;
   cout<<"Your bonous is: "<<bonous<<endl;
   cout<<"Your gross_salary is: "<<bonous<<endl;
   cout<<"Your tax is: "<<tax<<endl;
   cout<<"Your net_salary is: "<<net_salary<<endl;
   
   return 0;



}
