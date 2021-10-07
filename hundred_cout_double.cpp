#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double begin=1, end = 999;
    int prec = 2;
    double max1 = log10(end*1.0) + 2 + prec;
    double max2 = log10(pow(end,2)*1.0) + 3 + prec;
    

    for(double i=begin; i<=end; i++)
    {
        cout<<setw(max1)<<fixed<<setprecision(2)<<i<<setw(max2)<<pow(i,2)<<endl;
    }
    return 0;
}