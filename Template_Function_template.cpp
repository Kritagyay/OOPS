#include <bits/stdc++.h>

using namespace std;


template<class t>
void swapp(t &a,t &b)
{
    t temp=a;
    a=b;
    b=temp;
}


template<class T1,class T2 >
float average (T1 a,T2 b)
{
    float x=(a+b)/2;
    return x;
}
int main()

{
    float y=average(8,8.5);
    cout<<"The value is "<<y<<endl;
  
    int x=5, m=9;
    swapp(x,m);
    cout<<x<<endl<<m;


    return 0;
}