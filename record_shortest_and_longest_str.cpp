#include <iostream>
#include <string>

using namespace std;

int main()
{
    typedef string::size_type str_sz;
    cout<<"Please enter strings and we will record"
        <<"the shortest and longest one: "<<endl;
    string input;
    str_sz shortest = 65535;
    str_sz longest = 0;
    while(cin>>input)
    {
        string::size_type tmp = input.size();
        if(tmp<shortest)
            shortest = tmp;
        if(tmp>longest)
            longest = tmp;
    }
    cout<<"The longest size of strings is "<<longest<<", and the"
        <<"shortest size of strings is "<<shortest<<endl;
    return 0;
}