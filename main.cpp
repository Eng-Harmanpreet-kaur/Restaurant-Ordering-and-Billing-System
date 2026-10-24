#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;
class FoodItem
{
protected:
    string name;

public:
    FoodItem(string n)
    {
        name = n;
    }

    virtual void displayMenu() = 0;
    virtual int getPrice(int choice) = 0;
    virtual string getItemName(int choice) = 0;

    virtual ~FoodItem() {}
};


class Pizza : public FoodItem
{
public:
    Pizza() : FoodItem("Pizza") {}

    void displayMenu() override
    {
        cout << "\n---------- PIZZA MENU ----------\n";
        cout << "1. Grilled Veggies Pizza - Rs. 550\n";
        cout << "2. Veggie Supreme Pizza  - Rs. 550\n";
        cout << "3. Margherita Pizza      - Rs. 750\n";
        cout << "4. Tandoori Paneer Pizza - Rs. 900\n";
        cout << "5. Paneer Tikka Pizza    - Rs. 850\n";
    }

    int getPrice(int choice) override
    {
        switch (choice)
        {
            case 1: return 550;
            case 2: return 550;
            case 3: return 750;
            case 4: return 900;
            case 5: return 850;
            default: return 0;
        }
    }

    string getItemName(int choice) override
    {
        switch (choice)
        {
            case 1: return "Grilled Veggies Pizza";
            case 2: return "Veggie Supreme Pizza";
            case 3: return "Margherita Pizza";
            case 4: return "Tandoori Paneer Pizza";
            case 5: return "Paneer Tikka Pizza";
            default: return " ";
        }
    }
};


class Pasta : public FoodItem
{
public:
    Pasta() : FoodItem("Pasta") {}

    void displayMenu() override
    {
        cout << "\n---------- PASTA MENU ----------\n";
        cout << "1. Fettuccine Alfredo    - Rs. 200\n";
        cout << "2. Penne Arrabbiata      - Rs. 260\n";
        cout << "3. Tandoori Paneer Pasta - Rs. 380\n";
        cout << "4. Red Sauce Pasta       - Rs. 150\n";
        cout << "5. White Sauce Pasta     - Rs. 200\n";
    }

    int getPrice(int choice) override
    {
        switch (choice)
        {
            case 1: return 200;
            case 2: return 260;
            case 3: return 380;
            case 4: return 150;
            case 5: return 200;
            default: return 0;
        }
    }

    string getItemName(int choice) override
    {
        switch (choice)
        {
            case 1: return "Fettuccine Alfredo";
            case 2: return "Penne Arrabbiata";
            case 3: return "Tandoori Paneer Pasta";
            case 4: return "Red Sauce Pasta";
            case 5: return "White Sauce Pasta";
            default: return " ";
        }
    }
};



class Burger : public FoodItem
{
public:
    Burger() : FoodItem("Burger") {}

    void displayMenu() override
    {
        cout << "\n---------- BURGER MENU ----------\n";
        cout << "1. Cheese Burger - Rs. 200\n";
        cout << "2. Veggie Burger - Rs. 90\n";
        cout << "3. Hamburger     - Rs. 150\n";
    }

    int getPrice(int choice) override
    {
        switch (choice)
        {
            case 1: return 200;
            case 2: return 90;
            case 3: return 150;
            default: return 0;
        }
    }

    string getItemName(int choice) override
    {
        switch (choice)
        {
            case 1: return "Cheese Burger";
            case 2: return "Veggie Burger";
            case 3: return "Hamburger";
            default: return " ";
        }
    }
};



class Menu
{
public:
    void displayMainMenu()
    {
        cout << "\n========== RESTAURANT MENU ==========\n";
        cout << "1. Pizza\n";
        cout << "2. Pasta\n";
        cout << "3. Burger\n";
        cout << "=====================================\n";
    }
};



class Restaurant
{
private:
    string pizzaDetails;
    string pastaDetails;
    string burgerDetails;

    int pizzaBill;
    int pastaBill;
    int burgerBill;
    int totalBill;

public:
    int getInteger( string message)
    { 
        int value =0;
        cout << message;
        cin >> value;
         if (cin.fail())
    {
        cout << "\n< ERROR: "<< message <<"must be an integer >" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return 0;
        cin.ignore();
    }
   else return value;
    
    }

    Restaurant()
    {
        pizzaBill = 0;
        pastaBill = 0;
        burgerBill = 0;
        totalBill = 0;
    }

    void placeOrder()
    {
        Menu menu;
        Pizza pizza;
        Pasta pasta;
        Burger burger;

        int category, choice, quantity;
        int more = 1;

        while (more == 1)
        {
            menu.displayMainMenu();

            category = getInteger("Enter choice: ");

            FoodItem* item = nullptr;

            if (category == 1)
            {
                item = &pizza;
            }
            else if (category == 2)
            {
                item = &pasta;
            }
            else if (category == 3)
            {
                item = &burger;
            }
            else
            {
                cout << "Invalid category! Please select 1, 2 or 3.\n";
                continue;
            }

            item->displayMenu();

            choice = getInteger("Enter food item Choice: ");

            int price = item->getPrice(choice);

            if (price == 0)
            {
                cout << "Invalid food item! Please select a valid number.\n";
                continue;
            }

            quantity = getInteger("Enter quantity: ");

            if (quantity <= 0)
            {
                cout << "Quantity must be greater than zero.\n";
                continue;
            }

            string itemName = item->getItemName(choice);

            int amount = price * quantity;

            
            if (category == 1)
            {
                pizzaBill += amount;

                pizzaDetails += itemName + "\n";
                pizzaDetails += "Price: Rs. " + to_string(price) + "\n";
                pizzaDetails += "Quantity: " + to_string(quantity) + "\n";
                pizzaDetails += "Calculation: Rs. " + to_string(price) + " x " + to_string(quantity) + " = Rs. " +  to_string(amount) + "\n";
                pizzaDetails += "----------------------------------\n";
            }
            else if (category == 2)
            {
                pastaBill += amount;

                pastaDetails += itemName + "\n";
                pastaDetails += "Price: Rs. " + to_string(price) + "\n";
                pastaDetails += "Quantity: " + to_string(quantity) + "\n";
                pastaDetails += "Calculation: Rs. " + to_string(price) + " x " + to_string(quantity) + " = Rs. " + to_string(amount) + "\n";
                pastaDetails += "----------------------------------\n";
            }
            else
            {
                burgerBill += amount;

                burgerDetails += itemName + "\n";
                burgerDetails += "Price: Rs. " + to_string(price) + "\n";
                burgerDetails += "Quantity: " + to_string(quantity) + "\n";
                burgerDetails += "Calculation: Rs. " + to_string(price) + " x " +  to_string(quantity) + " = Rs. " + to_string(amount) + "\n";
                burgerDetails += "----------------------------------\n";
            }

            totalBill += amount;

            cout << "\nItem added successfully!\n";

            more = getInteger(
                "\nDo you want to order more?\n1. Yes\n2. No\nEnter choice: "
            );

            while (more != 1 && more != 2)
            {
                cout << "Please enter 1 or 2 only.\n";
                more = getInteger("Enter choice: ");
            }
        }
    }


    void displayBill()
    {
        cout << "\n\n========== FINAL RESTAURANT BILL ==========\n";

        if (pizzaBill > 0)
        {
            cout << "\n************ PIZZA BILL ************\n";
            cout << pizzaDetails;
            cout << "Pizza Total: Rs. " << pizzaBill << endl;
        }

        if (pastaBill > 0)
        {
            cout << "\n************ PASTA BILL ************\n";
            cout << pastaDetails;
            cout << "Pasta Total: Rs. " << pastaBill << endl;
        }

        if (burgerBill > 0)
        {
            cout << "\n************ BURGER BILL ************\n";
            cout << burgerDetails;
            cout << "Burger Total: Rs. " << burgerBill << endl;
        }

        cout << "\n-------------------------------------\n";
        cout << "GRAND TOTAL: Rs. " << totalBill << endl;
        cout << "=====================================\n";
    }


    void saveBill()
    {
        ofstream file("restaurant_bill.dat");

        if (!file)
        {
            cout << "Unable to save bill.\n";
            return;
        }

        file << "========== FINAL RESTAURANT BILL ==========\n";

        if (pizzaBill > 0)
        {
            file << "\n************ PIZZA BILL ************\n";
            file << pizzaDetails;
            file << "Pizza Total: Rs. " << pizzaBill << endl;
        }

        if (pastaBill > 0)
        {
            file << "\n************ PASTA BILL ************\n";
            file << pastaDetails;
            file << "Pasta Total: Rs. " << pastaBill << endl;
        }

        if (burgerBill > 0)
        {
            file << "\n************ BURGER BILL ************\n";
            file << burgerDetails;
            file << "Burger Total: Rs. " << burgerBill << endl;
        }

        file << "\nGRAND TOTAL: Rs. " << totalBill << endl;
        file << "============================================\n";

        file.close();

        cout << "\nBill saved successfully!\n";
    }


    void readBill()
    {
        ifstream file("restaurant_bill.dat");

        if (!file)
        {
            cout << "Unable to read saved bill.\n";
            return;
        }

        string line;

        cout << "\n========== BILL FROM FILE ==========\n";

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
};
void coustomer(){
    Restaurant restaurant;

    cout << "Welcome to Our Restaurant!\n";

    restaurant.placeOrder();

    restaurant.displayBill();

    restaurant.saveBill();
}

void staff(){
    Restaurant restaurant;
    int code = 4567;
    int c;
    c = restaurant.getInteger("Enter code :");
    if (code == c )
    {
    restaurant.readBill();
    }
    else {
        cout<<" code is in correct! try again";
        return;
    }
}

int main()
{ 
    Restaurant restaurant;

    int position;
    cout<<"================Enter your position================\n";
    cout<<"1> Coustomer \n2> Staff\n";
    position = restaurant.getInteger("Enter your position: ");
    switch(position){
        case 1:
            coustomer();
        case 2:
            staff();
        default :" invelid Position" ;   
    }
    cout << "\nThank you for visiting our restaurant!\n";

    return 0;
}

