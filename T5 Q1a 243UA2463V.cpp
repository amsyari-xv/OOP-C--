#include <iostream> 
using namespace std; 

class Fraction{
private:
int numerator;
int denominator;
int result;

public:
Fraction(){}
Fraction(int a_num, int a_den){

numerator = a_num;
denominator = a_den;

}

Fraction add(Fraction f){

int n,d;

n = (this->numerator * f.denominator) + (f.numerator * this->denominator);
d = this->denominator * f.denominator;
    
    return Fraction(n, d);

}

Fraction multiply(Fraction f){

int num, den;
num = this->numerator * f.numerator;
den = this->denominator * f.denominator;
    
return Fraction(num, den);
}

void display(){

cout << numerator << " / " << denominator << endl;

}

};

int main() {
Fraction f1(3, 4);
Fraction f2(1, 2);
Fraction result;

cout << "f1: ";
f1.display();

cout << "f2: ";
f2.display();

cout << "f1 + f2: ";
result = f1.add(f2);
result.display();

cout << "f1 * f2: ";
result = f1.multiply(f2);
result.display();

}