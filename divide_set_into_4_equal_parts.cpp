#include <iomanip>  //iostream的操控器
#include <ios>      //iostream的类型
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cout<<"Please enter number: "<<endl;
    vector<int> numbers;
    int x;
    while(cin>>x)
    {
        numbers.push_back(x);
    }
    sort(numbers.rbegin(),numbers.rend());
    typedef vector<int>::size_type vec_sz;
    vec_sz size = numbers.size();
    if(size%4 == 0)
    {
        int len = size/4;
        for(int r=0;r<4;r++)
        {
            cout<<"The "<<r<<" set are: ";
            for(int c=0; c<len; c++)
            {
                cout<<numbers[r*len+c]<<' ';
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Please input 4 times numbers";
    }
    return 0;
}