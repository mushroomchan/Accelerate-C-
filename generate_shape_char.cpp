#include <iostream>
#include <string>

using namespace std;

int main()
{
    //generate square
    int s = 4;
    string line = string(s,'*');
    cout<<"This is a square:"<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<line<<endl;
    }
    //generate rectangle
    int w = 4, h = 5;
    line = string(w,'*');
    cout<<"This is a rectangle:"<<endl;
    for(int i=0;i<h;i++)
    {
        cout<<line<<endl;
    }
    //generate triangle
    int height = 2;
    w = 2*height-1; //3
    cout<<"This is a triangle:"<<endl;
    for(int i=1;i<=height;i++) //0 1 2
    {
        string pad = string((w+1-(2*i))/2,' '); //1 0
        line = pad+string(2*i-1,'*')+pad;
        cout<<line<<endl;
    }
    return 0;
}