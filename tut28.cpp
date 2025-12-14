#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

    // Friend function declaration
    friend float distance(Point p1, Point p2);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "Point is (" << x << ", " << y << ")" << endl;
    }
};

// Friend function definition
float distance(Point p1, Point p2)
{
    return sqrt(
        (p2.x - p1.x) * (p2.x - p1.x) +
        (p2.y - p1.y) * (p2.y - p1.y)
    );
}

int main()
{
    Point p1(3, 4);
    Point p2(0, 0);

    p1.displayPoint();
    p2.displayPoint();

    cout << "Distance is: " << distance(p1, p2) << endl;

    return 0;
}
