#include <iostream> 
#include <string>

using namespace std; 

class Purchase{

    private:
    string itemName;
    int qty;
    float price;
    float total;

    public:
    Purchase(string name, int quantity, float p);
    void set_data(string name, int quantity, float p);
    void calculate();
    void print();

};

Purchase::Purchase(string name, int quantity, float p){

    itemName = name;
    qty = quantity;
    price = p;
}

void Purchase::set_data(string name, int quantity, float p){

    itemName = name;
    qty = quantity;
    price = p;
}

void Purchase::calculate(){

    total = qty * price;
}

void Purchase::print(){

    cout << endl << "Name: " << itemName;
    cout << endl << "Quantity: " << qty;
    cout << endl << "Price: " << price;
    cout << endl << "Payment: " << total;

}


int main(){

    string itemName;
    int qty;
    float price;
    float total;

    cout << "Enter Item name: " ;
    cin >> itemName;

    cout << "Enter Quantity: " ;
    cin >> qty;

    cout << "Enter Price: " ;
    cin >> price;

    Purchase p1(itemName, qty, price);

    p1.set_data(itemName, qty, price);

    p1.calculate();

    p1.print();
    
    return 0;

}


