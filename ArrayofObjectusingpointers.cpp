#include <bits/stdc++.h>

using namespace std;
class shopitem
{
protected:
    int id;
    float price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }

    void getdata()
    {
        cout << "The id of the item is " << id << endl;
        cout << "The price of the item is " << price << endl;
    }
};
int main()

{
    int size = 3;
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;

    int i, j;
    float k;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the id and the price of item " << i + 1 << endl;
        cin >> j >> k;
        ptr->setdata(j, k);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}