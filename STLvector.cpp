#include <bits/stdc++.h>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout  <<v[i] << " ";
    }
    cout << endl;
}
int main()

{
    int size, elem;
    cout << "Enter the size of vector " << endl;
    cin >> size;
    vector<int> vec1; //this is a zero length vector in which we have to provide the size
    vector<int> vec2(4); //this is a vector having 4 memory blocks in it with no elementd
    vector<int> vec3(vec2); // this is vector in ehich vec2 is passed bassically it's size 
    vector<int> vec4(3,12); //this is a vector having size 3 and all the elements are 12 only 

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element u want to insert " << endl;
        cin >> elem;
        vec1.push_back(elem);
    }

    /* if we have to insert an element in a vector at any position we cana do it with the help of
    iterator*/
    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter+1,1);
    display(vec1);

    return 0;
}