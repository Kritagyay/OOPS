#include <bits/stdc++.h>

using namespace std;
class Addstr
{
    public:
    char s[100];

    Addstr(){}

    Addstr(char str[])
    {
        strcpy(s,str);
    }

    Addstr operator  +(Addstr &str2)
    {
        Addstr str3;
        str3=strcat(s,str2.s);
        return str3;
    }

    void print()
    {
        cout<<s;
    }

};
int main()

{
    char st[]="Hello";
    char st1[]="World";

    Addstr a1(st);
    Addstr a2(st1);
    Addstr a3;
    a3=a1+a2;

    a3.print();
    


    return 0;
}