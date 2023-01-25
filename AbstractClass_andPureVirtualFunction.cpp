#include <bits/stdc++.h>

using namespace std;
class CWH
{
protected:
    string title;
    float ratings;

public:
    
    CWH(string s, float r)
    {
        title = s;
        ratings = r;
    }
    virtual void display()=0; // Now it became a pure virtual function
};

class CWHvideo : public CWH
{
protected:
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }

    void display()
    {
        cout << "The title of the video is " << title << endl;
        cout << "The ratings  of the video is " << ratings <<" star"<< endl;
        cout << "The length of the video is " <<videolength <<" minutes"<< endl;
    }
};

class CWHtext : public CWH
{
protected:
    int textlength;

public:
    CWHtext(string s, float r, int Tl) : CWH(s, r)
    {
        textlength = Tl;
    }

    void display()
    {
        cout << "The title of the text is " << title << endl;
        cout << "The ratings  of the text is " << ratings<<" star" << endl;
        cout << "The length of the text is " << textlength<<" words " << endl;
    }
};

int main()

{
    string s;
    float vl,r;
    int tl;

    cout<<"Enter the title of the video "<<endl;
    cin>>s;
    cout<<"Enter the length of the video "<<endl;
    cin>>vl;
    cout<<"Enter the rating which u want to give according to your experience to the video "<<endl;
    cin>>r;
    cout<<"Enter the words present in the textual content"<<endl;
    cin>>tl;

    //for video content 
    CWHvideo obj1(s,r,vl);
    // obj1.display();

    //for text content 
    CWHtext obj2(s,r,tl);
    // obj2.display();

    // using pointer 
    CWH *tuts[2];
    tuts[0]=&obj1;
    tuts[1]=&obj2;

    tuts[0]->display();
    tuts[1]->display();



    return 0;
}