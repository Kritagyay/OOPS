// // #include <bits/stdc++.h>

// // using namespace std;
// // class Complex{
// // int x,y;
// // public:
// // void setdata(int a, int b)
// // {
// //     x=a;
// //     y=b;
// // }
// // void print()
// // {
// //     cout<<"The value of complex number is "<<x<<"+ i"<<y<<endl;
// // }
// // friend Complex Complexsum(Complex c1,Complex c2);
// // };

// // Complex Complexsum(Complex c1,Complex c2)
// // {
// //     Complex c3;
// //     c3.setdata((c1.x+c2.x),(c1.y+c2.y));
// //     return c3;
// // }

// // int main()

// // {
// // Complex c1,c2,c3;
// // c1.setdata(2,4);
// // c2.setdata(3,5);

// // c3=Complexsum(c1,c2);
// // c3.print();


    

// //     return 0;
// // }




// #include <bits/stdc++.h>

// using namespace std;
// class Y;
// class X
// {
//     int data;
//     public:
//     void setdata(int x)
//     {
//         data=x;
//     }
//     friend void exchange (X&,Y&);
// };

// class Y
// {
//     int val;
//     public:
//     void setdata1(int s)
//     {
//         val=s;
//     }
//     friend void exchange (X& ,Y&);
// };

// void exchange (X &c1,Y &c2)
// {
//     int temp=c1.data;
//     c1.data=c2.val ;
//     c2.val=temp;
// }
// int main()

// {
//      ;
    

//     return 0;
// }



#include <bits/stdc++.h>

using namespace std;
class A
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void print ()
    {
        cout<<"The value is "<<a<<endl;
    }
    friend class B;
};

class B 
{
    int data ;
    public:
    void add(A obj)
    {
        data=obj.a+obj.b;
        cout<<"value is "<<data<<endl;
    }
};
int main()

{
A ob1 ;
B ob2 ;
ob1.setdata(4,5);
ob2.add(ob1);

    

    return 0;
}