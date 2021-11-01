#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> split(const string& s);

int main()
{
    vector<string> rotset; // 转轮集合
    vector<string> ss;
    string s;   // 当前字符串
    // 读入字符串
    while(getline(cin,s))
    {
        ss = split(s);
        rotset.push_back(rotation(ss));
    }
    //排序
    sort(rotset);
    // 输出
    
}

vector<string> rotation(vector<string> ss)
{

}

vector<string> split(const string& s)
{
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0;

    while(i!=s.size())
    {
        // 跳过空格
        while(i!=s.size() && isspace(s[i]))
            i++;
        
        // 跳到空格
        string_size j = i;
        while(j!=s.size() && !isspace(s[j]))
            j++;
        
        if(i!=j)
        {
            ret.push_back(s.substr(i,j-i));
            i=j;
        }
    }
    return ret;
}