#include <iostream>
#include <iomanip>
#include <cstring> // strcpy
using namespace std;

// Function to display a welcome banner
void displayWelcome() {
    cout << "*************************************************" << endl;
    cout << "*                                               *" << endl;
    cout << "*           WELCOME TO DUNE DELIGHT             *" << endl;
    cout << "*         EXQUISITE DINING EXPERIENCE           *" << endl;
    cout << "*                                               *" << endl;
    cout << "*************************************************" << endl;
    cout << endl;
}

// Structure to store menu items
struct MenuItem {
    char name[50];
    float price;
};

// Function to display the menu
void displayMenu(MenuItem menu[], int size) {
    cout << "--------------------DUNE DELIGHT MENU--------------------\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << menu[i].name << " - $" << fixed << setprecision(2) << menu[i].price << endl;
    }
    cout << "---------------------------------------------------------\n";
}

// Function to calculate total with discount
float calculateBill(MenuItem *menu, int *order, int *quantity, int orderSize, float discount) {
    float total = 0;
    for (int i = 0; i < orderSize; i++) {
        total += menu[order[i] - 1].price * quantity[i]; // Multiply price by quantity
    }
    return total - (total * discount / 100);
}

int main() {
    // Display welcome banner
    displayWelcome();

    // Menus for Breakfast, Lunch, and Dinner
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
    MenuItem *selectedMenu = nullptr; // Pointer to the selected menu
    int menuSize = 0;
    float discount = 0.0;

    cout << "Welcome and enjoy your day with good meal!\n";
    cout << "Select a category:\n";
    cout << "1. Breakfast (10% discount)\n";
    cout << "2. Lunch (15% discount)\n";
    cout << "3. Dinner (20% discount)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Assigning the selected menu based on user input
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

    // Display selected menu
    displayMenu(selectedMenu, menuSize);

    // Take the order
    int order[10]; // Array to store ordered item indices
    int quantity[10]; // Array to store quantity of each item
    int itemCount = 0;
    char more = 'y';
    cout << "Enter the item numbers you want to order (Max 10 items):\n";
    while (more == 'y' || more == 'Y') {
        if (itemCount >= 10) {
            cout << "You cannot order more than 10 items.\n";
            break;
        }
        cout << "Enter item number: ";
        cin >> order[itemCount];
        if (order[itemCount] < 1 || order[itemCount] > menuSize) {
            cout << "Invalid item number. Try again.\n";
            continue;
        }
        cout << "Enter quantity: ";
        cin >> quantity[itemCount];
        itemCount++;
        cout << "Do you want to order more? (y/n): ";
        cin >> more;
    }

    // Calculate and display the bill
    float totalBill = calculateBill(selectedMenu, order, quantity, itemCount, discount);
    cout << "---------------------------------------------------------\n";
    cout << "Total items ordered: " << itemCount << endl;
    cout << "Discount Applied: " << discount << "%\n";
    cout << "Final Bill Amount: $" << fixed << setprecision(2) << totalBill << endl;
    cout << "Thank you for dining with us!\n";

    return 0;
}


