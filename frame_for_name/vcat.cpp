#include <string>
#include <vector>

using namespace std;

// 纵向连接
vector<string> vcat(const vector<string>& top, const vector<string>& bottom)
{
    vector<string> ret = top;
    // for(vector<string>::const_iterator it=bottom.begin(); it!=bottom.end();it++)
    //     ret.push_back(*it);
    // 与上面效果相同
    ret.insert(ret.end(), bottom.begin(), bottom.end());
    return ret;
}