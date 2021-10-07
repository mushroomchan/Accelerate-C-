#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int begin=1, end = 999;
    int max1 = log10(end*1.0) + 1;;
    int max2 = log10(pow(end,2)*1.0) + 2;

    for(int i=begin; i<=end; i++)
    {
        cout<<setw(max1)<<i<<setw(max2)<<pow(i,2)<<endl;
    }
    return 0;
}