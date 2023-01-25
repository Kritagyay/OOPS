#include <bits/stdc++.h>

using namespace std;
template <class t>
class Base
{
public:
    t a;
    Base(t x)
    {
        a = x;
    }
    void display();
};

// now how to declare the definition of a member function outside the class is given below
template <class t>
void Base<t>::display()
{
    cout << "The value is " << a << endl;
}

void func(int x)
{
    cout << "This is the exact function and the value is " << x << endl;
}

template <class T>
void func(T x)
{
    cout << "This is templatised function and the value is " << x << endl;
}

int main()

{
    // Base<int>obj1(3) ;
    // obj1.display();

    func(2); // every time whenever overlooading a function with template the the highest priority
             // is given to the exact function rather than template function

    return 0;
}