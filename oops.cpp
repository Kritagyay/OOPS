#include <bits/stdc++.h>

using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chkbin(void);
    void onescompliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter the value to be checked :"
         << " ";
    cin >> s;
    // cout<<s<<endl;
}

void binary::chkbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "You have entered the wrong number ." << endl;
            exit(0);
        }
    }
}
void binary::onescompliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i) << " ";
    }
    cout << endl;
}
int main()

{
    binary b;
    b.read();
    b.chkbin();
    b.onescompliment();
    b.display();
    return 0;
}