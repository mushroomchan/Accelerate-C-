#include <iostream>
#include <string>

using namespace std;

int main()
{
    int res = 1;
    for(int i=1;i<10;i++)
    {
        res *= i;
    }
    cout<<"The product from 1 to 9 is: "<<res<<endl;
    return 0;
}