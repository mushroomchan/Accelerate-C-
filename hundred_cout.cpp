#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    for(int i=1; i<=100; i++)
    {
        cout<<setw(3)<<i<<setw(6)<<pow(i,2)<<endl;
    }
    return 0;
}