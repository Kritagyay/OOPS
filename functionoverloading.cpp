#include <bits/stdc++.h>

using namespace std;
int mymax(int x,int y)
{
    return (x>y)?x:y;
}
int mymax(int x, int y ,int z)
{
    return mymax(mymax(x,y),z);
}
int main()
    {
int a=40,b=15,c=0;

cout<<mymax(a,b)<<"\n";
cout<<mymax(a,b,c)<<"\n";    

    return 0;
    }