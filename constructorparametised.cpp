#include <bits/stdc++.h>

using namespace std;
class point2;
class point1
{
    int a, b;
    friend void distance(point1, point2);

public:
    point1(int, int);

};

point1::point1(int x, int y)
{
    a = x;
    b = y;
}

class point2
{
    int a, b;
    friend void distance(point1, point2);

public:
    point2(int, int);
};

point2::point2(int x, int y)
{
    a = x;
    b = y;
}

void distance(point1 ob1, point2 ob2)
{
    cout << sqrt(pow((ob1.a - ob2.a), 2) + pow((ob1.b - ob2.b), 2)) << endl;
    // return ans ;
}
int main()

{
    point1 obj1(5, 7);
    point2 obj2(3, 4);

    cout << "The distance between them is " << endl;
    distance(obj1, obj2);

    return 0;
}