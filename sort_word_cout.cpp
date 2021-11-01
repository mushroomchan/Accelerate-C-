#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    vector<string> bag;
    string word;
    while(cin>>word)
        bag.push_back(word);
    vector<string>::iterator iter = bag.begin();
    vector<string>::iterator seg = bag.begin();
    vector<string> upperword;
    // 先输出全部小写，再输出全部大写
    for(;iter!=bag.end();iter++)
    {
        if(islower((*iter)[0])) // 如果小写
        {
            if(iter!=seg)
                *seg = *iter;
                seg++;
        }
        else //如果是大写
        {
            upperword.push_back(*iter);
        }
    }
    iter = bag.begin();
    while(iter!=seg)
    {
        cout<<*iter<<endl;
        iter++;
    }
    iter = upperword.begin();
    while(iter!=upperword.end())
    {
        cout<<*iter<<endl;
        iter++;
    }
    return 0;
}