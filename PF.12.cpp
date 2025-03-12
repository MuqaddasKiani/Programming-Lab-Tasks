//                                TASK1

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//	int num;
//	cout<<"Enter a number:";
//	cin>>num;
//
//	int ans= sqrt(num);
//	cout<<ans;

//	int ans= sin(num);
//	cout<<ans;
//
//int ans= cos(num);
//cout<<ans;
//
//int ans= pow(num,3);
//cout<<ans;
//}
  
  
//                                   TASK2

//#include<iostream>
//using namespace std;
//void greet();
//int main()
//{
//	greet();
//	return 0;
//}
//void greet(){
//	cout<<"Hello! Welcome to C++ Functions.";
//}

//                                    TASK3


//#include <iostream>
//using namespace std;
//
//void checkEvenOdd(int num) 
//{
//    if (num % 2 == 0)
//        cout << "Even" << endl;
//    else
//        cout << "Odd" << endl;
//}
//
//int main() 
//{
//    checkEvenOdd(5);
//    checkEvenOdd(10);
//    return 0;
//}

//                                       TASK4

//#include <iostream>
//using namespace std;
//
//long long factorial(int num) 
//{
//    long long fact = 1;
//    for (int i = 1; i <= num; i++)
//        fact *= i;
//    return fact;
//}
//
//int main() 
//{
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
//    return 0;
//}

//                                        TASK5

//#include <iostream>
//using namespace std;
//
//double add(double a, double b) { return a + b; }
//double subtract(double a, double b) { return a - b; }
//double multiply(double a, double b) { return a * b; }
//double divide(double a, double b) 
//{ 
//    if (b == 0) 
//	{
//        cout << "Error! Division by zero is not allowed." << endl;
//        return 0;
//    }
//    return a / b; 
//}
//
//int main() 
//{
//    int choice;
//    double num1, num2;
//    
//    do {
//        cout << "\nCalculator Menu:\n";
//        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        
//        if (choice >= 1 && choice <= 4) 
//		{
//            cout << "Enter two numbers: ";
//            cin >> num1 >> num2;
//        }
//
//        switch (choice) 
//		{
//            case 1: cout << "Result: " << add(num1, num2) << endl; break;
//            case 2: cout << "Result: " << subtract(num1, num2) << endl; break;
//            case 3: cout << "Result: " << multiply(num1, num2) << endl; break;
//            case 4: cout << "Result: " << divide(num1, num2) << endl; break;
//            case 5: cout << "Exiting the program.\n"; break;
//            default: cout << "Invalid choice! Try again.\n";
//        }
//    } 
//	while (choice != 5);
//    
//    return 0;
//}




