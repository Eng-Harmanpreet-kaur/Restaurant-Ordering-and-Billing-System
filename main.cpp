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
        cout << "11. Check Recent Added Item \n";
        cout << "12. Delete Recent Added Item \n";
        cout << "=====================================\n";
    }
};

struct OrderNode
{
    string itemName;
    int price;
    int quantity;
    int amount;
    int category;
    OrderNode *next;

    OrderNode(string name, int p, int q, int a, int c)
    {
        itemName = name;
        price = p;
        quantity = q;
        amount = a;
        category = c;
        next = nullptr;
    }
};

struct StackNode
{
    string itemName;
    StackNode *next;

    StackNode(string name)
    {
        itemName = name;
        next = nullptr;
    }
};

class OrderStack
{
private:
    StackNode *top;

public:
    OrderStack()
    {
        top = nullptr;
    }
    void push(string name)
    {
        StackNode *newNode = new StackNode(name);
        newNode->next = top;
        top = newNode;
    }

    void showLastOrderstack()
    {
        if (top == nullptr)
        {
            cout << "No order has been placed yet.\\n";
        }
        else
        {
            cout << "Most recent item: " << top->itemName << endl;
        }
    }

    void removeLastOrderstack()
    {
        if (top == nullptr)
        {
            cout << "No recent item to delete.\n";
            return;
        }

        StackNode *temp = top;
        top = top->next;
        delete temp;
    }

    ~OrderStack()
    {
        while (top != nullptr)
        {
            StackNode *temp = top;
            top = top->next;
            delete temp;
        }
    }
};

struct QueueNode
{
    string itemName;
    QueueNode *next;

    QueueNode(string name)
    {
        itemName = name;
        next = nullptr;
    }
};

class OrderQueue
{
private:
    QueueNode *front;
    QueueNode *rear;

public:
    OrderQueue()
    {
        front = nullptr;
        rear = nullptr;
    }
    void enqueue(string name)
    {
        QueueNode *newNode = new QueueNode(name);

        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void displayOrdersQueue()
    {
        if (front == nullptr)
        {
            cout << "No orders in queue.\n";
            return;
        }

        QueueNode *current = front;
        cout << "=======================================\n";
        cout << "\nOrders (First to Last):\n";
        cout << "=======================================\n";
        while (current != nullptr)
        {
            cout << current->itemName << endl;
            current = current->next;
        }
    }

    void removeLastOrderQueue()
    {
        if (front == nullptr)
            return;
        if (front == rear)
        {
            delete front;
            front = rear = nullptr;
            return;
        }
        QueueNode *current = front;
        while (current->next != rear)
            current = current->next;
        delete rear;
        rear = current;
        rear->next = nullptr;
    }

    void removeFirstOrderQueue()
    {
        if (front == nullptr)
        {
            cout << "No pending order to mark as ready.\n";
            return;
        }

        QueueNode *temp = front;
        string readyItem = temp->itemName;

        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;

        cout << "Ready order delivered and removed from pending orders: "
             << readyItem << "\n";
    }
    ~OrderQueue()
    {
        while (front != nullptr)
        {
            QueueNode *temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr;
    }
};

class Restaurant
{
private:
    OrderNode *orderHead;
    OrderNode *orderTail;
    OrderStack recentOrders;
    OrderQueue orderQueue;

    string categoryName(int category)
    {
        switch (category)
        {
        case 1:
            return "Pizza";
        case 2:
            return "Pasta";
        case 3:
            return "Burger";
        case 4:
            return "French Fries";
        case 5:
            return "Manchurian";
        case 6:
            return "Noodles";
        case 7:
            return "Dessert";
        case 8:
            return "Cold Coffee";
        case 9:
            return "Shakes";
        case 10:
            return "Mojito";
        default:
            return "Other";
        }
    }

    void writeBill()
    {
        if (orderHead == nullptr)
        {
            cout << "No items ordered.\n";
            return;
        }

        int grandTotal = 0;
        cout << "\n========== FINAL RESTAURANT BILL ==========\n";

        for (int category = 1; category <= 10; category++)
        {
            OrderNode *current = orderHead;
            int categoryTotal = 0;
            bool headingPrinted = false;

            while (current != nullptr)
            {
                if (current->category == category)
                {
                    if (!headingPrinted)
                    {
                        cout << "\n************ " << categoryName(category) << " BILL ************\n";
                        headingPrinted = true;
                    }
                    cout << current->itemName << "\n";
                    cout << "Price: Rs. " << current->price << "\n";
                    cout << "Quantity: " << current->quantity << "\n";
                    cout << "Calculation: Rs. " << current->price << " x "
                         << current->quantity << " = Rs. " << current->amount << "\n";
                    cout << "----------------------------------\n";
                    categoryTotal += current->amount;
                }
                current = current->next;
            }

            if (headingPrinted)
                cout << categoryName(category) << " Total: Rs. " << categoryTotal << "\n";
        }

        OrderNode *current = orderHead;
        while (current != nullptr)
        {
            grandTotal += current->amount;
            current = current->next;
        }

        cout << "\n-------------------------------------\n";
        cout << "GRAND TOTAL: Rs. " << grandTotal << "\n";
        cout << "=====================================\n";
    }

    void writeBillToFile(ofstream &file)
    {
        if (orderHead == nullptr)
        {
            file << "No items ordered.\n";
            return;
        }

        int grandTotal = 0;
        file << "\n========== FINAL RESTAURANT BILL ==========\n";

        for (int category = 1; category <= 10; category++)
        {
            OrderNode *current = orderHead;
            int categoryTotal = 0;
            bool headingPrinted = false;

            while (current != nullptr)
            {
                if (current->category == category)
                {
                    if (!headingPrinted)
                    {
                        file << "\n************ " << categoryName(category) << " BILL ************\n";
                        headingPrinted = true;
                    }
                    file << current->itemName << "\n";
                    file << "Price: Rs. " << current->price << "\n";
                    file << "Quantity: " << current->quantity << "\n";
                    file << "Calculation: Rs. " << current->price << " x ";
                    file << current->quantity << " = Rs. " << current->amount << "\n";
                    file << "----------------------------------\n";
                    categoryTotal += current->amount;
                }
                current = current->next;
            }

            if (headingPrinted)
                file << categoryName(category) << " Total: Rs. " << categoryTotal << "\n";
        }

        OrderNode *current = orderHead;
        while (current != nullptr)
        {
            grandTotal += current->amount;
            current = current->next;
        }

        file << "\n-------------------------------------\n";
        file << "GRAND TOTAL: Rs. " << grandTotal << "\n";
        file << "=====================================\n";
    }

public:
    Restaurant()
    {
        orderHead = nullptr;
        orderTail = nullptr;
    }

    int getInteger(string message)
    {
        int value;
        cout << message;
        while (!(cin >> value))
        {
            cout << "Please enter an integer only.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << message;
        }
        return value;
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

        int more = 1;
        while (more == 1)
        {
            menu.displayMainMenu();
            int category = getInteger("Enter choice: ");

            if (category == 11)
            {
                recentOrders.showLastOrderstack();
                continue;
            }
            if (category == 12)
            {
                deleteLastNode();
                continue;
            }

            FoodItem *item = nullptr;
            switch (category)
            {
            case 1:
                item = &pizza;
                break;
            case 2:
                item = &pasta;
                break;
            case 3:
                item = &burger;
                break;
            case 4:
                item = &fries;
                break;
            case 5:
                item = &manchurian;
                break;
            case 6:
                item = &noodles;
                break;
            case 7:
                item = &dessert;
                break;
            case 8:
                item = &coffee;
                break;
            case 9:
                item = &shake;
                break;
            case 10:
                item = &mojito;
                break;
            default:
                cout << "Invalid category! Please select 1 to 12.\n";
                continue;
            }

            item->displayMenu();
            int choice = getInteger("Enter food item Choice: ");
            int price = item->getPrice(choice);
            if (price <= 0)
            {
                cout << "Invalid food item! Please select a valid number.\n";
                continue;
            }

            int quantity = getInteger("Enter quantity: ");
            if (quantity <= 0)
            {
                cout << "Quantity must be greater than zero.\n";
                continue;
            }

            string itemName = item->getItemName(choice);
            int amount = price * quantity;
            OrderNode *newOrder = new OrderNode(itemName, price, quantity, amount, category);

            if (orderHead == nullptr)
                orderHead = orderTail = newOrder;
            else
            {
                orderTail->next = newOrder;
                orderTail = newOrder;
            }

            recentOrders.push(itemName);
            orderQueue.enqueue(itemName);
            cout << "\nItem added successfully!\n";

            more = getInteger("\nDo you want to order more?\n1. Yes\n2. No\nEnter choice: ");
            while (more != 1 && more != 2)
            {
                cout << "Please enter 1 or 2 only.\n";
                more = getInteger("Enter choice: ");
            }
        }

        displayBill();
        saveBill();
        deleteAllNodes();
    }

    void deleteLastNode()
    {
        if (orderHead == nullptr)
        {
            cout << "No items to delete.\n";
            return;
        }

        OrderNode *removed = orderTail;
        string removedName = removed->itemName;

        if (orderHead == orderTail)
            orderHead = orderTail = nullptr;
        else
        {
            OrderNode *current = orderHead;
            while (current->next != orderTail)
                current = current->next;
            current->next = nullptr;
            orderTail = current;
        }

        delete removed;
        recentOrders.removeLastOrderstack();
        orderQueue.removeLastOrderQueue();
        cout << "Deleted most recent item: " << removedName << "\n";
    }
    void deleteAllNodes()
    {
        if (orderHead == nullptr)
        {
            cout << "Linked list is already empty.\n";
            return;
        }

        OrderNode *current = orderHead;

        while (current != nullptr)
        {
            OrderNode *temp = current;
            current = current->next;
            delete temp;
        }

        orderHead = nullptr;
        orderTail = nullptr;
    }

    void removeFirstPendingOrder()
    {
        orderQueue.removeFirstOrderQueue();
    }

    void displayOrderList()
    {
        if (orderHead == nullptr)
        {
            cout << "No items ordered.\n";
            return;
        }
        cout << "\n========== ORDER LIST ==========\n";
        OrderNode *current = orderHead;
        while (current != nullptr)
        {
            cout << current->itemName;
            cout << ",      Price: Rs. " << current->price;
            cout << ",      Quantity: " << current->quantity;
            cout << ",      Amount: Rs. " << current->amount << "\n";
            current = current->next;
        }
    }

    void displayOrderQueue()
    {
        orderQueue.displayOrdersQueue();
    }
    void displayBill()
    {
        writeBill();
    }

    void saveBill()
    {
        ofstream file("restaurant_bill.dat", ios::app);
        if (!file)
        {
            cout << "Unable to save bill.\n";
            return;
        }
        writeBillToFile(file);
        cout << "\nBill saved successfully!\n";
    }

    void readBill()
    {
        ifstream file("restaurant_bill.dat");
        if (!file)
        {
            cout << "No saved bill found.\n";
            return;
        }
        string line;
        cout << "\n========== SAVED BILLS ==========\n";
        while (getline(file, line))
            cout << line << '\n';
    }

    ~Restaurant()
    {
        while (orderHead != nullptr)
        {
            OrderNode *temp = orderHead;
            orderHead = orderHead->next;
            delete temp;
        }
        orderTail = nullptr;
    }
};

void coustomer(Restaurant &restaurant)
{
    cout << "Welcome to Our Restaurant!\n";
    restaurant.placeOrder();
}

void staff(Restaurant &restaurant)
{
    int code = 9874;
    int enteredCode;
    int choice;

    enteredCode = restaurant.getInteger("Enter staff password: ");

    if (enteredCode != code)
    {
        cout << "Incorrect password! Access denied.\n";
        return;
    }
    cout << "\n========== STAFF PANEL ==========\n";
    do
    {
        cout << "\n1. View Saved Bills\n";
        cout << "2. View Pending Orders\n";
        cout << "3. Remove first Pending Order\n";
        cout << "4. Logout\n";

        choice = restaurant.getInteger("Enter your choice: ");

        switch (choice)
        {
        case 1:
            restaurant.readBill();
            break;

        case 2:
            restaurant.displayOrderQueue();
            break;
        case 3:
            restaurant.removeFirstPendingOrder();
            break;
        case 4:
            cout << "Staff logged out successfully.\n";
            break;

        default:
            cout << "Invalid choice! Please select 1 to 3.\n";
        }

    } while (choice != 4);
}

int main()
{
    Restaurant restaurant;
    int position = 0;
    system("cls");
    do
    {
        cout << "\n================ RESTAURANT SYSTEM ================\n";
        cout << "1> Customer\n2> Staff\n3> Exit\n";
        position = restaurant.getInteger("Enter your position: ");

        if (position == 1)
            coustomer(restaurant);
        else if (position == 2)
            staff(restaurant);
        else if (position == 3)
        {
            return 0;
        }
        else if (position != 3)
            cout << "Invalid position.\n";

    } while (position != 3);

    cout << "\nThank you for visiting our restaurant!\n";
    return 0;
}
