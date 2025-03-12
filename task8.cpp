#include<iostream>
using namespace std;
int main()
{
//	            TASK1
	
//   double num1, num2;
//   char opr;
//
//   cout<<"SIMPLE CALCULATOR\n";
//   cout<<"Enter first number:";
//   cin>>num1;
//   cout<<"Enter operator:";
//   cin>>opr;
//   cout<<"Enter second number:";
//   cin>>num2;
//   
//   switch(opr){
//   	case'+':
//   		cout<<"Result:"<<num1+num2<<endl;
//   		break;
//   	case'-':
//   		cout<<"Result:"<<num1-num2<<endl;
//   		break;
//   	case'*':
//	   cout<<"Result:"<<num1*num2<<endl;
//	   break;
//	case'/':
//		if(num2!=0){
//		cout<<"Result:"<<num1/num2<<endl;
//	}
//	   else {
//	   	cout<<"ERROR!!: Divided by zero."<<endl;
//	   }
//	   break;
//	 default:
//	  cout<<"ERROR: Invalid Operator!!"<<endl;
//	  break;  	
//   }

//          TASK2

//    int day;
//    cout << " Enter a number (1-7) for the day of the week: ";
//    cin >> day;
//    switch (day) 
//	{
//        case 1:
//            cout << "Monday" << endl;
//            break;
//        case 2:
//            cout << "Tuesday" << endl;
//            break;
//        case 3:
//            cout << "Wednesday" << endl;
//            break;
//        case 4:
//            cout << "Thursday" << endl;
//            break;
//        case 5:
//            cout << "Friday" << endl;
//            break;
//        case 6:
//            cout << "Saturday" << endl;
//            break;
//        case 7:
//            cout << "Sunday" << endl;
//            break;
//        default:
//            cout << "Error: Invalid input!" << endl;
//    }

//                                    TASK3


//    int choice;
//    double area;
//    cout << " Choose a shape (1 for Circle, 2 for Rectangle, 3 for Triangle): ";
//    cin >> choice;
//    switch (choice) 
//	{
//        case 1: 
//		{
//            double radius;
//            cout << "Enter the radius of the circle: ";
//            cin >> radius;
//            area = 3.14159 * radius * radius;
//            cout << "Area of Circle: " << area << endl;
//            break;
//        }
//        case 2: 
//		{
//            double length, width;
//            cout << "Enter length and width of the rectangle: ";
//            cin >> length >> width;
//            area = length * width;
//            cout << "Area of Rectangle: " << area << endl;
//            break;
//        }
//        case 3: 
//		{
//            double base, height;
//            cout << "Enter base and height of the triangle: ";
//            cin >> base >> height;
//            area = 0.5 * base * height;
//            cout << "Area of Triangle: " << area << endl;
//            break;
//        }
//        default:
//            cout << "Error: Invalid shape!" << endl;
//    }

//                                    TASK4

//   double usd, converted;
//    int choice;
//    cout << "Enter amount in USD: ";
//    cin >> usd;
//    cout << "Choose the currency to convert to (1 for PKR, 2 for INR, 3 for Euros): ";
//    cin >> choice;
//    switch (choice) 
//	{
//        case 1:
//            converted = usd * 280;
//            cout << "Converted amount in PKR: " << converted << endl;
//            break;
//        case 2:
//            converted = usd * 80;
//            cout << "Converted amount in INR: " << converted << endl;
//            break;
//        case 3:
//            converted = usd * 0.9; 
//            cout << "Converted amount in Euros: " << converted << endl;
//            break;
//        default:
//            cout << "Error: Invalid currency!" << endl;
//    }
//    return 0;

//                          TASK5

// int category, quantity;
//    double price = 0, total = 0, discount = 0, final_amount = 0;
//    cout << "Select category (1 for Electronics, 2 for Clothing, 3 for Groceries): ";
//    cin >> category;
//    switch (category) 
//	{
//        case 1: 
//		{
//            int item;
//            cout << "Choose item (1 for Laptop - $1000, 2 for Smartphone - $700, 3 for Headphones - $150): ";
//            cin >> item;
//            switch (item) 
//			{
//                case 1: price = 1000; break;
//                case 2: price = 700; break;
//                case 3: price = 150; break;
//                default: cout << "Invalid item!" << endl; return 1;
//            }
//            break;
//        }
//        case 2: 
//		{
//            int item;
//            cout << "Choose item (1 for Jacket - $120, 2 for T-shirt - $40, 3 for Jeans - $60): ";
//            cin >> item;
//            switch (item) 
//			{
//                case 1: price = 120; break;
//                case 2: price = 40; break;
//                case 3: price = 60; break;
//                default: cout << "Invalid item!" << endl; return 1;
//            }
//            break;
//        }
//        case 3: 
//		{
//            int item;
//            cout << "Choose item (1 for Milk - $2, 2 for Bread - $3, 3 for Eggs - $5): ";
//            cin >> item;
//            switch (item) 
//			{
//                case 1: price = 2; break;
//                case 2: price = 3; break;
//                case 3: price = 5; break;
//                default: cout << "Invalid item!" << endl; return 1;
//            }
//            break;
//        }
//        default:
//            cout << "Invalid category!" << endl;
//            return 1;
//    }
//    cout << "Enter quantity: ";
//    cin >> quantity;
//    total = price * quantity;
//    if (total >= 500) 
//	{
//        discount = 0.2 * total;
//    }
//	else if (total >= 100) 
//	{
//        discount = 0.1 * total;
//    }
//    final_amount = total - discount;
//    cout << "Total Price: $" << total << endl;
//    cout << "Discount: $" << discount << endl;
//    cout << "Final Amount: $" << final_amount << endl;
    
   return 0; 
}

