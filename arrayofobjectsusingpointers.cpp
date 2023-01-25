#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    ShopItem *ptr = new ShopItem[3];
    ShopItem *ptrtemp = ptr;
    int p, i;
    float q;

    for (i = 0; i < 3; i++)
    {
        cout << "Enter the item id and it's price " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < 3; i++)
    {
        cout << "Item Number " << i + 1 << endl;
        ptrtemp->getData();
        ptrtemp++;
    }
    return 0;
}