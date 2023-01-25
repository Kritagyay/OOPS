// #include <bits/stdc++.h>
// #include<fstream>
// using namespace std;

// int main()

// {
//    ofstream out ;
//     out.open("sample");
//     out<<"USA"<<endl;
//     out<<"UK"<<endl;
//     out<<"South Korea ";

//     out.close();

//     ifstream in;
//     in.open("sample");
//     string s;
//     while(in.eof()==0)
//     {
//         getline(in,s);
//         cout<<s<<endl;
//     }
//     in.close();

//     return 0;
// }



#include <bits/stdc++.h>

using namespace std;

int main()

{
    ofstream out ;
    out.open("Country");
    out<<"Capital of USA"<<endl;
    out<<"Capital of Uk"<<endl;
    out<<"Capital of SK"<<endl;
    out.close();

    out.open("Capital");
    out<<"Washington"<<endl;
    out<<"London"<<endl;
    out<<"Seoul"<<endl;

    out.close();

    ifstream fin1,fin2;
    fin1.open("Country");
    fin2.open("Capital");
    string s,st;
    for (int i = 0; i < 10; i++)
    {
        if (fin1.eof()!=0)
        {
            cout<<"Exit from country"<<endl;
            exit(1);
        }

        
        getline(fin1,s);
        cout<<"Capital of "<<s;

        if (fin2.eof()!=0)
        {
            cout<<"Exit from country"<<endl;
            exit(1);
        }

        getline(fin2,st);
        cout<<st<<endl;

    }
    
    

    return 0;
}