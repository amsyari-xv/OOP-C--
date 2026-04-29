#include <iostream>
#include <string>
using namespace std;


    class Book 
    {
    private:
    
    string title;
    float price;
    string currency;
  
    public:

    Book(string a_title, float a_price, string a_currency) 
    {
        title = a_title;
        price = a_price;
        currency = a_currency;
    }

    void displayinfo(){

        
    }

   };


int main(){

    
    Book b1("C++ is Fun", 50.0, "RM");
    /* 
    cout <<"\n I just bought the book " << b1.getTitle(); 
    b1.showPriceTitle(); 
 
    cout <<endl ; 
    Book b2("Snow White", 50.0, "USD"); 
    cout <<"\n I just bought the book "  << b2.getTitle(); 
    b2.showPriceTitle();
    */
    
}