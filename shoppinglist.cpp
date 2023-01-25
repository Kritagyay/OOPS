#include <bits/stdc++.h>

using namespace std;

class Item
{
public:
    int itemcode[50];
    int itemprice[50];
    int count;
    void cnt(void)
    {
        count = 0;
    }
    void getitem(void);
    void displaysum(void);
    // void remove (void);
    // void displayitem (void);
};

void Item::getitem(void)
{
    cout << "Enter the item code";
    cin >> itemcode[count];
    cout << "Enter item cost ";
    cin >> itemprice[count];
    count++;
}
void Item::displaysum(void)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
        sum = sum + itemprice[i];
    cout << "\n Total Value " << sum << "\n";
}
int main()
{
    Item order;
    order.cnt();
    int x;
    do
    {
        /* code */
        cout << "\n Enter the number \n";
        cout << "1: Add an item" << endl;
        cout << "2: Display the item " << endl;

        cin >> x;

        switch (x)
        {
        case 1:
            order.getitem();
            break;
        case 2:
            order.displaysum();
            break;
        case 5:break;
        default:
            cout << "Error in input ";
        }
    } while (x != 5);

    return 0;
}