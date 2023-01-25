#include <bits/stdc++.h>

using namespace std;
class test 
{
    protected :
    int a;
    int b;
    public:
    //test (int i,int j):a(i),b(j)

   // test (int i,int j):a(i),b(2*j)

    // test (int i,int j):a(i),b(a+j)

    /*test (int i,int j):b(j),a(i+b) --> This can't happen because in the protected int a is called first then 
    int b is called due to which while calling constructor it is showing garbage value so the one which is 
    intialised first is called first in constructor and its value cant be stored in it.*/
    
    test (int i,int j)
    {
        a=i;
        b=j;
        cout<<"Constructor is called "<<endl;
        cout<<"The value of A is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;

    }
    };
int main()

{
test t(5,6);
    

    return 0;
}