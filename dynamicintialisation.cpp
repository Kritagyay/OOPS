#include <bits/stdc++.h>

using namespace std;
class bankdeposit
{
    int principal, years;
    float interestrate;
    float returnvalue;

public:
    bankdeposit(){}; // this is a dynamic constructor which will check what objects is called can be accesed by other constructr
    bankdeposit(int p, int y, int r);
    bankdeposit(int p, int y, float R);
    void show();
};

bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;

    returnvalue = p;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

bankdeposit ::bankdeposit(int p, int y, float R)
{
    principal = p;
    years = y;
    interestrate = R;
    returnvalue = p;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void bankdeposit::show()
{
    cout << "The pricipal amount is " << principal
         << "rs and the returnvalue after " << years << " years is "
         << returnvalue << endl;
}

int main()

{
    bankdeposit b1, b2, b3;
    int P, Y;
    float R;
    int r;
    cout << "Enter the principal amount , years and the rate of interest :" << endl;
    cin >> P >> Y >> r;
    b1 = bankdeposit(P, Y, r);
    b1.show();

    cout << "Enter the principal amount , years and the rate of interest :" << endl;
    cin >> P >> Y >> R;
    b2 = bankdeposit(P, Y, R);
    b2.show();

    return 0;
}