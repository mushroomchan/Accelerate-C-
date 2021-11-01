#include <string>
#include <vector>
#include "width.h"

using namespace std;

vector<string> frame(const vector<string>& v)
{
    vector<string> ret;
    string::size_type maxlen  = width(v);
    string boarder(maxlen+4,'*');

    // 输出顶部的边框
    ret.push_back(boarder);
    // 输出内部的行
    for(vector<string>::size_type i=0; i!=v.size();i++)
    {
        ret.push_back('*'+v[i]+string(maxlen-v[i].size(),' ')+'*');
    }
    // 输出底部的边框
    ret.push_back(boarder);
    return ret;
}

int main()
{
    vector<string> v;
    v.push_back("*");
    v.push_back("***");
    frame(v);
}