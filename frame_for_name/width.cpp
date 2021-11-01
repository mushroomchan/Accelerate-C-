#include "width.h"

using namespace std;

// 获得字符串向量中的字符串最大长度
string::size_type width(const vector<string>& v)
{
    string::size_type maxlen = 0;
    for(vector<string>::size_type i=0; i!=v.size();i++)
        maxlen = max(maxlen,v[i].size());
    return maxlen;
}