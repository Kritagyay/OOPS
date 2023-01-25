#include <bits/stdc++.h>

using namespace std;
typedef void(*func)(int ,int);
void add(int i,int j)
{
    cout<<"The value after addition is "<<i+j<<endl;
}
int main()

{
func ptr ;
ptr=&add;
ptr(1,3);
    

    return 0;
}