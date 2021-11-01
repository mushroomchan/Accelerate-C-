#include <string>
#include <vector>
#include "width.h"

using namespace std;

vector<string> hcat(const vector<string>& left, const vector<string>& right)
{
    vector<string> ret;
    string::size_type width1 = width(left)+1; //留一个空格长度
    vector<string>::size_type i=0,j=0;

    while(i!=left.size()||j!=right.size())
    {
        string s;
        if(i!=left.size())
            s = left[i++]; //先取i，i再增加

        s += string(width1-s.size(),' ');

        if(j!=right.size())
            s += right[j++];

        ret.push_back(s);
    }
    return ret;
}

int main()
{
    return 0;
}