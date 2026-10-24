#include <iostream>
#include <fstream>
#include <string>
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
        case 1:
            return 550;
        case 2:
            return 550;
        case 3:
            return 750;
        case 4:
            return 900;
        case 5:
            return 850;
        default:
            return 0;
        }
    }

    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Grilled Veggies Pizza";
        case 2:
            return "Veggie Supreme Pizza";
        case 3:
            return "Margherita Pizza";
        case 4:
            return "Tandoori Paneer Pizza";
        case 5:
            return "Paneer Tikka Pizza";
        default:
            return " ";
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
        case 1:
            return 200;
        case 2:
            return 260;
        case 3:
            return 380;
        case 4:
            return 150;
        case 5:
            return 200;
        default:
            return 0;
        }
    }

    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Fettuccine Alfredo";
        case 2:
            return "Penne Arrabbiata";
        case 3:
            return "Tandoori Paneer Pasta";
        case 4:
            return "Red Sauce Pasta";
        case 5:
            return "White Sauce Pasta";
        default:
            return " ";
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
        case 1:
            return 200;
        case 2:
            return 90;
        case 3:
            return 150;
        default:
            return 0;
        }
    }

    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Cheese Burger";
        case 2:
            return "Veggie Burger";
        case 3:
            return "Hamburger";
        default:
            return " ";
        }
    }
};

class FrenchFries : public FoodItem
{
public:
    FrenchFries() : FoodItem("French Fries") {}
    void displayMenu() override
    {
        cout << "\n---------- FRENCH FRIES MENU ----------\n";
        cout << "1. Classic / Straight-Cut Fries - Rs. 150\n";
        cout << "2. Peri-Peri Fries - Rs. 109\n";
        cout << "3. Crinkle-Cut Fries - Rs. 99\n";
        cout << "4. Cheese / Loaded Fries - Rs. 165\n";
        cout << "5. Masala / Indian Spice Fries - Rs. 109\n";
    }
    int getPrice(int choice) override
    {
        switch (choice)
        {
        case 1:
            return 150;
        case 2:
            return 109;
        case 3:
            return 99;
        case 4:
            return 165;
        case 5:
            return 109;
        default:
            return 0;
        }
    }
    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Classic / Straight-Cut Fries";
        case 2:
            return "Peri-Peri Fries";
        case 3:
            return "Crinkle-Cut Fries";
        case 4:
            return "Cheese / Loaded Fries";
        case 5:
            return "Masala / Indian Spice Fries";
        default:
            return " ";
        }
    }
};

class Manchurian : public FoodItem
{
public:
    Manchurian() : FoodItem("Manchurian") {}
    void displayMenu() override
    {
        cout << "\n---------- MANCHURIAN MENU ----------\n";
        cout << "1. Veg Manchurian - Rs. 150\n";
        cout << "2. Gobi Manchurian - Rs. 160\n";
        cout << "3. Paneer Manchurian - Rs. 200\n";
        cout << "4. Chicken Manchurian - Rs. 220\n";
        cout << "5. Soya Chaap Manchurian - Rs. 180\n";
        cout << "6. Baby Corn Manchurian - Rs. 180\n";
    }
    int getPrice(int choice) override
    {
        switch (choice)
        {
        case 1:
            return 150;
        case 2:
            return 160;
        case 3:
            return 200;
        case 4:
            return 220;
        case 5:
            return 180;
        case 6:
            return 180;
        default:
            return 0;
        }
    }
    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Veg Manchurian";
        case 2:
            return "Gobi Manchurian";
        case 3:
            return "Paneer Manchurian";
        case 4:
            return "Chicken Manchurian";
        case 5:
            return "Soya Chaap Manchurian";
        case 6:
            return "Baby Corn Manchurian";
        default:
            return " ";
        }
    }
};

class Noodles : public FoodItem
{
public:
    Noodles() : FoodItem("Noodles") {}
    void displayMenu() override
    {
        cout << "\n---------- NOODLES MENU ----------\n";
        cout << "1. Veg Hakka Noodles - Rs. 130\n";
        cout << "2. Schezwan Noodles - Rs. 150\n";
        cout << "3. Chilli Garlic Noodles - Rs. 140\n";
        cout << "4. Singapore Noodles - Rs. 160\n";
        cout << "5. Pan-Fried Noodles - Rs. 180\n";
        cout << "6. American Chopsuey - Rs. 190\n";
        cout << "7. Chicken / Egg Noodles - Rs. 180\n";
    }
    int getPrice(int choice) override
    {
        switch (choice)
        {
        case 1:
            return 130;
        case 2:
            return 150;
        case 3:
            return 140;
        case 4:
            return 160;
        case 5:
            return 180;
        case 6:
            return 190;
        case 7:
            return 180;
        default:
            return 0;
        }
    }
    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Veg Hakka Noodles";
        case 2:
            return "Schezwan Noodles";
        case 3:
            return "Chilli Garlic Noodles";
        case 4:
            return "Singapore Noodles";
        case 5:
            return "Pan-Fried Noodles";
        case 6:
            return "American Chopsuey";
        case 7:
            return "Chicken / Egg Noodles";
        default:
            return " ";
        }
    }
};

class Dessert : public FoodItem
{
public:
    Dessert() : FoodItem("Dessert") {}
    void displayMenu() override
    {
        cout << "\n---------- DESSERT MENU ----------\n";
        cout << "1. Gulab Jamun with Ice Cream - Rs. 80\n";
        cout << "2. Sizzling Brownie with Ice Cream - Rs. 180\n";
        cout << "3. Sizzling Darsaan / Honey Noodles - Rs. 160\n";
        cout << "4. Cheesecake - Rs. 180\n";
        cout << "5. Molten Lava Cake - Rs. 110\n";
        cout << "6. Rasmalai (2 pieces) - Rs. 60\n";
    }
    int getPrice(int choice) override
    {
        switch (choice)
        {
        case 1:
            return 80;
        case 2:
            return 180;
        case 3:
            return 160;
        case 4:
            return 180;
        case 5:
            return 110;
        case 6:
            return 60;
        default:
            return 0;
        }
    }
    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Gulab Jamun with Ice Cream";
        case 2:
            return "Sizzling Brownie with Ice Cream";
        case 3:
            return "Sizzling Darsaan / Honey Noodles";
        case 4:
            return "Cheesecake";
        case 5:
            return "Molten Lava Cake";
        case 6:
            return "Rasmalai (2 pieces)";
        default:
            return " ";
        }
    }
};

class ColdCoffee : public FoodItem
{
public:
    ColdCoffee() : FoodItem("Cold Coffee") {}
    void displayMenu() override
    {
        cout << "\n---------- COLD COFFEE MENU ----------\n";
        cout << "1. Classic Cold Coffee - Rs. 90\n";
        cout << "2. Iced Americano - Rs. 120\n";
        cout << "3. Iced Latte - Rs. 140\n";
        cout << "4. Frappe / Blender Coffee - Rs. 160\n";
        cout << "5. Mocha Frappe - Rs. 170\n";
        cout << "6. Vietnamese Chilled Coffee - Rs. 160\n";
    }
    int getPrice(int choice) override
    {
        switch (choice)
        {
        case 1:
            return 90;
        case 2:
            return 120;
        case 3:
            return 140;
        case 4:
            return 160;
        case 5:
            return 170;
        case 6:
            return 160;
        default:
            return 0;
        }
    }
    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Classic Cold Coffee";
        case 2:
            return "Iced Americano";
        case 3:
            return "Iced Latte";
        case 4:
            return "Frappe / Blender Coffee";
        case 5:
            return "Mocha Frappe";
        case 6:
            return "Vietnamese Chilled Coffee";
        default:
            return " ";
        }
    }
};

class Shake : public FoodItem
{
public:
    Shake() : FoodItem("Shake") {}
    void displayMenu() override
    {
        cout << "\n---------- SHAKES MENU ----------\n";
        cout << "1. Classic Shake - Rs. 90\n";
        cout << "2. Chocolate / Oreo Shake - Rs. 120\n";
        cout << "3. KitKat / Snickers Shake - Rs. 140\n";
        cout << "4. Brownie / Loaded Shake - Rs. 160\n";
        cout << "5. Nutella / Hazelnut Shake - Rs. 180\n";
        cout << "6. Dry Fruit / Kesar Pista Shake - Rs. 150\n";
    }
    int getPrice(int choice) override
    {
        switch (choice)
        {
        case 1:
            return 90;
        case 2:
            return 120;
        case 3:
            return 140;
        case 4:
            return 160;
        case 5:
            return 180;
        case 6:
            return 150;
        default:
            return 0;
        }
    }
    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Classic Shake";
        case 2:
            return "Chocolate / Oreo Shake";
        case 3:
            return "KitKat / Snickers Shake";
        case 4:
            return "Brownie / Loaded Shake";
        case 5:
            return "Nutella / Hazelnut Shake";
        case 6:
            return "Dry Fruit / Kesar Pista Shake";
        default:
            return " ";
        }
    }
};

class Mojito : public FoodItem
{
public:
    Mojito() : FoodItem("Mojito") {}
    void displayMenu() override
    {
        cout << "\n---------- MOJITO MENU ----------\n";
        cout << "1. Classic Virgin Mojito - Rs. 90\n";
        cout << "2. Watermelon Mojito - Rs. 120\n";
        cout << "3. Green Apple Mojito - Rs. 130\n";
        cout << "4. Blue Lagoon / Blue Mojito - Rs. 120\n";
        cout << "5. Paand / Masala Mojito - Rs. 110\n";
        cout << "6. Strawberry Mojito - Rs. 130\n";
    }
    int getPrice(int choice) override
    {
        switch (choice)
        {
        case 1:
            return 90;
        case 2:
            return 120;
        case 3:
            return 130;
        case 4:
            return 120;
        case 5:
            return 110;
        case 6:
            return 130;
        default:
            return 0;
        }
    }
    string getItemName(int choice) override
    {
        switch (choice)
        {
        case 1:
            return "Classic Virgin Mojito";
        case 2:
            return "Watermelon Mojito";
        case 3:
            return "Green Apple Mojito";
        case 4:
            return "Blue Lagoon / Blue Mojito";
        case 5:
            return "Paand / Masala Mojito";
        case 6:
            return "Strawberry Mojito";
        default:
            return " ";
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
        cout << "4. French Fries\n";
        cout << "5. Manchurian\n";
        cout << "6. Noodles\n";
        cout << "7. Dessert\n";
        cout << "8. Cold Coffee\n";
        cout << "9. Shakes\n";
        cout << "10. Mojito\n";
        cout << "=====================================\n";
    }
};

class Restaurant
{
private:
    string pizzaDetails;
    string pastaDetails;
    string burgerDetails;
    string friesDetails;
    string manchurianDetails;
    string noodlesDetails;
    string dessertDetails;
    string coffeeDetails;
    string shakeDetails;
    string mojitoDetails;

    int pizzaBill;
    int pastaBill;
    int burgerBill;
    int friesBill;
    int manchurianBill;
    int noodlesBill;
    int dessertBill;
    int coffeeBill;
    int shakeBill;
    int mojitoBill;
    int totalBill;

public:
    int getInteger(string message)
    {
        int value = 0;
        cout << message;
        cin >> value;
        if (cin.fail())
        {
            cout << "\n< ERROR: " << message << "must be an integer >" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            return 0;
            cin.ignore();
        }
        else
            return value;
    }

    Restaurant()
    {
        pizzaBill = 0;
        pastaBill = 0;
        burgerBill = 0;
        friesBill = 0;
        manchurianBill = 0;
        noodlesBill = 0;
        dessertBill = 0;
        coffeeBill = 0;
        shakeBill = 0;
        mojitoBill = 0;
        totalBill = 0;
    }

    void placeOrder()
    {
        Menu menu;
        Pizza pizza;
        Pasta pasta;
        Burger burger;
        FrenchFries fries;
        Manchurian manchurian;
        Noodles noodles;
        Dessert dessert;
        ColdCoffee coffee;
        Shake shake;
        Mojito mojito;

        int category, choice, quantity;
        int more = 1;

        while (more == 1)
        {
            menu.displayMainMenu();

            category = getInteger("Enter choice: ");

            FoodItem *item = nullptr;

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
            else if (category == 4)
            {
                item = &fries;
            }
            else if (category == 5)
            {
                item = &manchurian;
            }
            else if (category == 6)
            {
                item = &noodles;
            }
            else if (category == 7)
            {
                item = &dessert;
            }
            else if (category == 8)
            {
                item = &coffee;
            }
            else if (category == 9)
            {
                item = &shake;
            }
            else if (category == 10)
            {
                item = &mojito;
            }
            else
            {
                cout << "Invalid category! Please select 1 to 10.\n";
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

            string details = itemName + "\n";
            details += "Price: Rs. " + to_string(price) + "\n";
            details += "Quantity: " + to_string(quantity) + "\n";
            details += "Calculation: Rs. " + to_string(price) + " x " + to_string(quantity) + " = Rs. " + to_string(amount) + "\n";
            details += "----------------------------------\n";

            if (category == 1)
            {
                pizzaBill += amount;
                pizzaDetails += details;
            }
            else if (category == 2)
            {
                pastaBill += amount;
                pastaDetails += details;
            }
            else if (category == 3)
            {
                burgerBill += amount;
                burgerDetails += details;
            }
            else if (category == 4)
            {
                friesBill += amount;
                friesDetails += details;
            }
            else if (category == 5)
            {
                manchurianBill += amount;
                manchurianDetails += details;
            }
            else if (category == 6)
            {
                noodlesBill += amount;
                noodlesDetails += details;
            }
            else if (category == 7)
            {
                dessertBill += amount;
                dessertDetails += details;
            }
            else if (category == 8)
            {
                coffeeBill += amount;
                coffeeDetails += details;
            }
            else if (category == 9)
            {
                shakeBill += amount;
                shakeDetails += details;
            }
            else if (category == 10)
            {
                mojitoBill += amount;
                mojitoDetails += details;
            }

            totalBill += amount;

            cout << "\nItem added successfully!\n";

            more = getInteger(
                "\nDo you want to order more?\n1. Yes\n2. No\nEnter choice: ");

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

        if (friesBill > 0)
        {
            cout << "\n************ FRENCH FRIES BILL ************\n"
                 << friesDetails;
            cout << "French Fries Total: Rs. " << friesBill << endl;
        }
        if (manchurianBill > 0)
        {
            cout << "\n************ MANCHURIAN BILL ************\n"
                 << manchurianDetails;
            cout << "Manchurian Total: Rs. " << manchurianBill << endl;
        }
        if (noodlesBill > 0)
        {
            cout << "\n************ NOODLES BILL ************\n"
                 << noodlesDetails;
            cout << "Noodles Total: Rs. " << noodlesBill << endl;
        }
        if (dessertBill > 0)
        {
            cout << "\n************ DESSERT BILL ************\n"
                 << dessertDetails;
            cout << "Dessert Total: Rs. " << dessertBill << endl;
        }
        if (coffeeBill > 0)
        {
            cout << "\n************ COLD COFFEE BILL ************\n"
                 << coffeeDetails;
            cout << "Cold Coffee Total: Rs. " << coffeeBill << endl;
        }
        if (shakeBill > 0)
        {
            cout << "\n************ SHAKES BILL ************\n"
                 << shakeDetails;
            cout << "Shakes Total: Rs. " << shakeBill << endl;
        }
        if (mojitoBill > 0)
        {
            cout << "\n************ MOJITO BILL ************\n"
                 << mojitoDetails;
            cout << "Mojito Total: Rs. " << mojitoBill << endl;
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

        if (friesBill > 0)
        {
            file << "\n************ FRENCH FRIES BILL ************\n"
                 << friesDetails;
            file << "French Fries Total: Rs. " << friesBill << endl;
        }
        if (manchurianBill > 0)
        {
            file << "\n************ MANCHURIAN BILL ************\n"
                 << manchurianDetails;
            file << "Manchurian Total: Rs. " << manchurianBill << endl;
        }
        if (noodlesBill > 0)
        {
            file << "\n************ NOODLES BILL ************\n"
                 << noodlesDetails;
            file << "Noodles Total: Rs. " << noodlesBill << endl;
        }
        if (dessertBill > 0)
        {
            file << "\n************ DESSERT BILL ************\n"
                 << dessertDetails;
            file << "Dessert Total: Rs. " << dessertBill << endl;
        }
        if (coffeeBill > 0)
        {
            file << "\n************ COLD COFFEE BILL ************\n"
                 << coffeeDetails;
            file << "Cold Coffee Total: Rs. " << coffeeBill << endl;
        }
        if (shakeBill > 0)
        {
            file << "\n************ SHAKES BILL ************\n"
                 << shakeDetails;
            file << "Shakes Total: Rs. " << shakeBill << endl;
        }
        if (mojitoBill > 0)
        {
            file << "\n************ MOJITO BILL ************\n"
                 << mojitoDetails;
            file << "Mojito Total: Rs. " << mojitoBill << endl;
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
void coustomer()
{
    Restaurant restaurant;

    cout << "Welcome to Our Restaurant!\n";

    restaurant.placeOrder();

    restaurant.displayBill();

    restaurant.saveBill();
}

void staff()
{
    Restaurant restaurant;
    int code = 4567;
    int c;
    c = restaurant.getInteger("Enter code :");
    if (code == c)
    {
        restaurant.readBill();
    }
    else
    {
        cout << " code is in correct! try again";
        return;
    }
}

int main()
{
    Restaurant restaurant;

    int position;
    cout << "================Enter your position================\n";
    cout << "1> Coustomer \n2> Staff\n";
    position = restaurant.getInteger("Enter your position: ");
    switch (position)
    {
    case 1:
        coustomer();
        break;
    case 2:
        staff();
        break;
    default:
        cout << "Invalid Position";
        break;
    }
    cout << "\nThank you for visiting our restaurant!\n";

    return 0;
}
