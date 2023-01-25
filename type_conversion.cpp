// #include <bits/stdc++.h>

// using namespace std;
// class Complex // TYPE CONVERSION BASE TYPE TO CLASS TYPE
// {
//     int a;

// public:
//     Complex() {}
//     Complex(int x)
//     {
//         a = x;
//     }
//     void print()
//     {
//         cout << "The value of a is " << a << endl;
//     }
// };
// int main()

// {
//     Complex c1;
//     int x = 10;
//     c1 = x;
//     c1.print();

//     return 0;
// }

// THIS IS CLASS TO BASE CLASS CONVERSION 
// #include <bits/stdc++.h>

// using namespace std;
// class Complex
// {
//     int real, imag;

// public:
//     void setdata(int x, int y)
//     {
//         real = x;
//         imag = y;
//     }
//     void show()
//     {
//         cout << "The value of the complex number is " << real << " +i" << imag << endl;
//     }
//     operator int()
//     {
//         return (real);
//     }
// };
// int main()

// {
//     Complex c1;
//     c1.setdata(2, 3);
//     int x;
//     x = c1;
//     cout << x;
//     return 0;
// }


//VECTOR TO DOUBLE
#include <bits/stdc++.h>

using namespace std;
class base
{
vector <int> v={1,2,3};
public:
operator double()
{
    double sum=0;
    for (int i = 0; i < 3; i++)
    {
         sum=sum+v[i]*v[i];
    }

    return sqrt(sum);
    
  
}
};
int main()

{
    base v1 ;
    double l=v1;
    l=v1.operator double();
    cout<<l;
    

    return 0;
}

// THIS IS ONE CLASS TO ANOTHER CLASS CONVERSION
// #include <bits/stdc++.h>

// using namespace std;          //In this we copy the data of source int the destination 
                                    // it can only be done withe the help of constructor
// class Source
// {
//     int a,b;
//     public:
//     void setdata (int x,int y)
//     {
//         a=x;
//         b=y;
//     }
//     int getA()
//     {
//         return a;
//     }
//     int getB()
//     {
//         return b;
//     }
//     void print ()
//     {
//         cout<<"The value of product data is "<<a<<" "<<b<<endl;
//     }
// };
// class destination
// {
//     int m,n;
//     public:
//     destination(){}
//     destination(Source &obj)
//     {
//         m=obj.getA();
//         n=obj.getB();
//     }
//     void show()
//     {
//         cout<<"The data of item is "<<m<<" "<<n<<endl;
//     }
// };
// int main()

// {
// Source p1;
// p1.setdata(4,5);
// p1.print();
// destination i1;
// i1=p1;
// i1.show();
    

//     return 0;
// }


// USING oVERLOADING CASTING OPERATOR 
// #include <bits/stdc++.h>

// using namespace std;
// class Source
// {
//     int x;
//     public:
//     Source()
//     {
//         x=0;
//     }
//     int getX()
//     {
//         return x;
//     }
//     void print()
//     {
//         cout<<"The value at the source is "<<x<<endl;
//     }
// };
// class Destination
// {
//     int data;
//     public:
//     void setdata(int x)
//     {
//         data=x;
//     }
//     void show()
//     {
//         cout<<"The value st the destination is "<<data<<endl;
//     }

//     operator Source()
//     {
//        Source obj;
//      data=obj.getX();
//        return obj;
//     }
// };


// int main()

// {
//     Destination d1;
//     d1.setdata(4);
//     Source obj1 ;
//     obj1=d1;
//     obj1.print();
    

//     return 0;
// }