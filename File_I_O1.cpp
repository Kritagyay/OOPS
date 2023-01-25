#include <bits/stdc++.h>

using namespace std;

int main()

{
    // connecting our file with out stream
    ofstream out("Samplefile.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter your name: " << endl;
    getline(cin, name);

    // writing a string to the file
    out << "My name is " + name;

    // disconnecting our file
    out.close();

    // connecting our file with in stream
    ifstream in("samplefile.txt");

    // creating a 's' string variable and filling it with string present there in the text file
    string s;
    getline(in, s);
    cout << s << endl;

    in.close();

    return 0;
}