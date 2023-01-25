#include <bits/stdc++.h>

using namespace std;
class complexnum
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void sum(complexnum o1, complexnum o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void getdata(void)
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()

{
    complexnum c1, c2, c3;
    c1.setdata(1, 2);
    c1.getdata();

    c2.setdata(3,4);
    c2.getdata();

    c3.sum(c1, c2);
    c3.getdata();

    return 0;
}