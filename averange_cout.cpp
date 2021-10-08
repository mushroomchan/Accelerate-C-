#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<double> vec;
    double num;

    while(cin>>num)
    {
        vec.push_back(num);
    }
    double avg = accumulate(vec.begin(),vec.end(),0.0)/vec.size();
    cout<<"Averange: "<<avg<<endl;
    return 0;
}