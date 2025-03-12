#include <iostream>
using namespace std;
int main() 
{
//	                   TASK1
	
//    int N, i = 1;
//    cout << " Enter a number (N): ";
//    cin >> N;
//    while (i <= N) 
//	{
//        cout << i << " ";
//        i++;
//    }
//    cout << endl;
    
//                            TASK2
    
// int num, i = 1;
//    cout << " Enter a number: ";
//    cin >> num;    
//    while (i <= 20) 
//	{
//        cout << num << " x " << i << " = " << num * i << endl;
//        i++;
//    }   
    
//                                 TASK3 
    
// int num;    
//    do 
//	{
//        cout << "Enter a positive number: ";
//        cin >> num;    
//        if (num <= 0) 
//		{
//            cout << "Error! Please enter a valid positive number." << endl;
//        }
//    }
//	while (num <= 0);
//    cout << " You entered: " << num << endl;   
    
//                         TASK4
    
//  int sum = 0, i = 1;    
//    while (i <= 5) 
//	{
//        sum += i;
//        i++;
//    }
//    cout << " Sum of first five natural numbers: " << sum << endl;    
    
//                            TASK5   
    
//    int choice;
//    double balance = 1000, amount;
//    do 
//	{
//        cout << "\nBanking System Menu:\n";
//        cout << "1. Deposit Money\n";
//        cout << "2. Withdraw Money\n";
//        cout << "3. Check Balance\n";
//        cout << "4. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) 
//		{
//            case 1:
//                cout << "Enter amount to deposit: ";
//                cin >> amount;
//                if (amount > 0) 
//				{
//                    balance += amount;
//                    cout << "Amount deposited successfully!\n";
//                } 
//				else 
//				{
//                    cout << "Invalid amount!\n";
//                }
//                break;
//            case 2:
//                cout << "Enter amount to withdraw: ";
//                cin >> amount;
//                if (amount > 0 && amount <= balance) 
//				{
//                    balance -= amount;
//                    cout << "Amount withdrawn successfully!\n";
//                } 
//				else 
//				{
//                    cout << "Invalid or insufficient balance!\n";
//                }
//                break;
//            case 3:
//                cout << "Current balance: $" << balance << endl;
//                break;
//            case 4:
//                cout << "Exiting program...\n";
//                break;
//            default:
//                cout << "Invalid choice! Please try again.\n";
//        }
//    }
//	while (choice != 4);
    
//                      TASK6
    
// 	const string correctPassword = "maina123"; 
//	string enteredPassword;
//	do
//	{
//		cout << " Enter the correct password:";
//		cin >> enteredPassword;
//		if(enteredPassword != correctPassword)
//		{
//			cout << " Incorrect password. Try again." <<endl;
//		}
//    }
//		while (enteredPassword != correctPassword);
//		cout << " Access granted!" << endl;   
    
//                          TASK7 
    
     
//    int choice, subChoice;    
//    do 
//	{
//        cout << "\nMain Menu:\n";
//        cout << "1. Breakfast\n";
//        cout << "2. Lunch\n";
//        cout << "3. Dinner\n";
//        cout << "4. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) 
//		{
//            case 1:
//                cout << "\nBreakfast Menu:\n";
//                cout << "1. Anda Paratha (RS.40)\n";
//                cout << "2. Nan Channy (RS.60)\n";
//                cout << "3. Siri Paye (RS.150)\n";
//                cout << "4. Tea (RS.15)\n";
//                cout << "Enter your choice: ";
//                cin >> subChoice;
//                cout << "Order placed successfully!\n";
//                break;
//            case 2:
//                cout << "\nLunch Menu:\n";
//                cout << "1. Chicken Karahi (RS.1050/KG)\n";
//                cout << "2. Mutton Karahi (RS.1800/KG)\n";
//                cout << "3. Egg Fried Rice (RS.450/plate)\n";
//                cout << "4. BBQ (RS.1050/dozen)\n";
//                cout << "Enter your choice: ";
//                cin >> subChoice;
//                cout << "Order placed successfully!\n";
//                break;
//            case 3:
//                cout << "\nDinner Menu:\n";
//                cout << "1. Chicken Karahi (RS.1050/KG)\n";
//                cout << "2. Mutton Karahi (RS.1800/KG)\n";
//                cout << "3. Egg Fried Rice (RS.450/plate)\n";
//                cout << "4. BBQ (RS.1050/dozen)\n";
//                cout << "5. Sajji (RS.800/KG)\n";
//                cout << "Enter your choice: ";
//                cin >> subChoice;
//                cout << "Order placed successfully!\n";
//                break;
//            case 4:
//                cout << "Exiting the program...\n";
//                break;
//            default:
//                cout << "Invalid choice! Please try again.\n";
//        }
//    }
//	 while (choice != 4);
    
     
    return 0;
}
