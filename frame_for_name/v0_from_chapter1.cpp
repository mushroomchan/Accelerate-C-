//
// Created by 陈冬冬 on 2021/9/26.
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

    const string space(greeting.size(),' ');
    const string second = "* "+space+" *";

    const string first(second.size(),'*');

    cout<<endl;
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<"* "<<greeting<<" *"<<endl;
    cout<<second<<endl;
    cout<<first<<endl;

    return 0;
}