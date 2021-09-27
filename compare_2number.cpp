#include <iostream>

using namespace std;

int main()
{
    cout<<"Please enter two number to compare their value: ";
    int a=0,b=0;
    cin>>a>>b;
    cout<<endl;
    if(a>b)
        cout<<a<<" is larger than "<<b<<endl;
    else if(a<b)
        cout<<b<<" is larger than "<<a<<endl;
    else 
        cout<<a<<" is equal to "<<b<<endl;
    return 0;
}