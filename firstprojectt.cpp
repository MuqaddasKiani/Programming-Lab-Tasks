#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

struct MenuItem{
	char name[50];
	float price;
};

void displayMenu(MenuItem menu[], int size){
	cout<<"-----------DUNE DELIGHT MENU-------------\n";
	for (int i=0; i<size; i++){
		cout<<i+1<<" . "<<menu[i].name<<" - $ "<<fixed<<setprecision(2)<<menu[i].price<<endl;
	}
	cout<<"------------------------------------------\n";
}

float calculateBill(MenuItem*menu, int *order, int ordersize, float discount){
	float total=0;
	for(int i=0; i<ordersize; i++){
		total+= menu[order[i]-1].price;
	}
	return total- (total*discount/100);
}  

int main(){
	MenuItem breakfastMenu[] = {
        {"Hummus", 5.99}, {"Shakshuka", 4.99}, {"Tea", 2.50}, {"Kunafa", 3.00}
    };
    MenuItem lunchMenu[] = {
        {"Saleeg", 8.99}, {"Cauliflower Grafin", 12.50}, {"Jareesh", 10.75}, {"Alsa Drink", 7.25}
    };
    MenuItem dinnerMenu[] = {
        {"Al-Hassawi Rice", 18.99}, {"Mutabbaq", 15.50}, {"Araz Madini", 13.75}, {"Saleeg", 6.00}
    };
  

int choice;
MenuItem*selectedMenu=nullptr;
int menuSize=0;
float discount=0.0;

cout<<"WELCOME TO DUNE DELIGHT RESTAURANT BILLING SYSTEM\n";
cout<<"Select a category:\n";
cout<<"1. Breakfast (10% discount)\n";
cout<<"2. Lunch (15% discount)\n";
cout<<"3. Dinner (20% discount)\n";
cout<<"Enter your choice:";
cin>>choice;

    switch(choice){
    	case 1:
    	    selectedMenu=breakfastMenu;
    	    menuSize=sizeof(breakfastMenu)/sizeof(breakfastMenu[0]);
    	    discount=10.0;
    	    break;
    	case 2:
    		selectedMenu=lunchMenu;
    	    menuSize=sizeof(lunchMenu)/sizeof(lunchMenu[0]);
    	    discount=15.0;
    	    break;
    	case 3:
		    selectedMenu=dinnerMenu;
    	    menuSize=sizeof(dinnerMenu)/sizeof(dinnerMenu[0]);
    	    discount=20.0;
    	    break;
    	  default:
		    cout<<"Ivalid choice. Existing program.\n";
		    return 0;		
	}
	
	displayMenu(selectedMenu,menuSize);
	
	int order[10];
	int itemCount=0;
	char more='y';
	
	cout<<"Enter the item numbers you want to order(Max 10 item):\n";
	while(more=='y' || more=='y'){
		if(itemCount>=10){
			cout<<"You cannot order more than 10 items.\n";
			break;
		}
		cout<<"Enter item numbers:";
		cin>>order[itemCount];
		
		if(order[itemCount]<1 || order[itemCount]>menuSize){
			cout<<"Invalid item number. Try again...\n";
			continue;
		}
		
		itemCount++;
		cout<<"Do you want to order more? (y/n):";
		cin>>more;
	}
	
	float totalBill=calculateBill(selectedMenu,order,itemCount,discount);
	cout<<"----------------------------------------------------------\n";
	cout<<"Total item ordered:"<<itemCount<<endl;
	cout<<"Discount Applied: "<<discount<<"%\n";
	cout<<"Final Bill Amount: $"<<fixed<<setprecision(2)<<totalBill<<endl;
	cout<<"Thank you for dining with us!!\n";
	
	return 0;
}  

  int choice;
    MenuItem*selectedMenu= nullptr;
    int menuSize=0;
    float discount=0.0;
    
    cout<<"WELCOME TO DUNE DELIGHT RESTAURANT BILLING SYSTEM\n";
    cout<<"Select a category:\n";
    cout<<"1. Breakfast (10% discount)\n";
    cout<<"2. Lunch (15% discount)\n";
    cout<<"3. Dinner (20% discount)\n";
    cout<<"Enter your choice:";
    cin>>choice;
    
    switch (choice) {
        case 1:
            selectedMenu = breakfastMenu;
            menuSize = sizeof(breakfastMenu) / sizeof(breakfastMenu[0]);
            discount = 10.0;
            break;
        case 2:
            selectedMenu = lunchMenu;
            menuSize = sizeof(lunchMenu) / sizeof(lunchMenu[0]);
            discount = 15.0;
 break;
        case 3:
            selectedMenu = dinnerMenu;
            menuSize = sizeof(dinnerMenu) / sizeof(dinnerMenu[0]);
            discount = 20.0;
            break;
        default:
            cout << "Invalid choice. Exiting program.\n";
            return 0;
    }

    displayMenu(selectedMenu,menuSize);
	
	int order[10];
	int itemCount=0;
	char more='y';
	
	cout<<"Enter the item numbers you want to order(Max 10 item):\n";
	while(more=='y' || more=='y'){
		if(itemCount>=10){
			cout<<"You cannot order more than 10 items.\n";
			break;
		}
		cout<<"Enter item numbers:";
		cin>>order[itemCount];
		
		if(order[itemCount]<1 || order[itemCount]>menuSize){
			cout<<"Invalid item number. Try again...\n";
			continue;
		}
		
		itemCount++;
		cout<<"Do you want to order more? (y/n):";
		cin>>more;
	}
	
	float totalBill=calculateBill(selectedMenu,order,itemCount,discount);
	cout<<"----------------------------------------------------------\n";
	cout<<"Total item ordered:"<<itemCount<<endl;
	cout<<"Discount Applied: "<<discount<<"%\n";
	cout<<"Final Bill Amount: $"<<fixed<<setprecision(2)<<totalBill<<endl;
	cout<<"Thank you for dining with us!!\n";
	
	return 0;
}

cout<<"Enter the item numbers you want to order(Max 10 item):\n";
	while(more=='y' || more=='y'){
		if(itemCount>=10){
			cout<<"You cannot order more than 10 items.\n";
			break;
		}
		cout<<"Enter item numbers:";
		cin>>order[itemCount];
		
		if(order[itemCount]<1 || order[itemCount]>menuSize){
			cout<<"Invalid item number. Try again...\n";
			continue;
		}
		
		itemCount++;
		cout<<"Do you want to order more? (y/n):";
		cin>>more;
	}
	
	float totalBill=calculateBill(selectedMenu,order,itemCount,discount);
	cout<<"----------------------------------------------------------\n";
	cout<<"Total item ordered:"<<itemCount<<endl;
	cout<<"Discount Applied: "<<discount<<"%\n";
	cout<<"Final Bill Amount: $"<<fixed<<setprecision(2)<<totalBill<<endl;
	cout<<"Thank you for dining with us!!\n";
	
	return 0;
}
	
		

	    
	    
	
	
    
    