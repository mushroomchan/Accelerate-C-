//
// Created by 陈冬冬 on 2021/9/27.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout<<"Please enter your first name: ";
    string name;
    cin>>name;

    const string greeting = "Hello, "+name+"!";

    int pad = 1;
    cout<<"Please input the pad you want: ";
    cin>>pad;
    const int rows = pad*2+3;
    const string::size_type cols = greeting.size()+pad*2+2;
    const string space = string(greeting.size()+pad*2, ' ');
    
    for(int r=0;r!=rows;++r)
    {
        string::size_type c = 0;
        while(c!=cols)
        {
            if(r==pad+1 && c==pad+1)
            {
                cout<<greeting;
                c += greeting.size();
            }
            else
            {
                if(r==0||r==rows-1||c==0||c==cols-1)
                {
                    cout<<"*";
                    ++c;
                }    
                else
                {
                    if(r==pad+1)
                    {
                        cout<<" ";
                        ++c;
                    }
                    else
                    {
                        cout<<space;
                        c += space.size();
                    }
                    
                }        
            }
        }
        cout<<endl;
    }

    return 0;
}