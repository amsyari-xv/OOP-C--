#include <iostream>
using namespace std;

class Point{

public:
int x, y;


Point(int a_x, int a_y);

};

class Line{

private:
Point p1;
Point p2;

float d;

public:
float length(Point p1, Point p2)
{

}

};

int main()
{

Point p1(0, 0);
Point p2(3, 4);
Line line1(p1, p2);

cout << "Length of line: " << line1.length() << endl;
return 0;
}