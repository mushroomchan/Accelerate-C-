#include <vector>
#include <string>
#include <iostream>

using namespace std;

string::size_type width(const vector<string>& v);

vector<string> center(const vector<string>& image)
{
    string::size_type wid = width(image);
    vector<string> cimage;
    vector<string>::const_iterator iter = image.begin(); //begin要用const迭代器指
    while(iter!=image.end())
    {
        string::size_type pad_left = (wid-iter->size())/2;
        string::size_type pad_right = wid - pad_left - iter->size();
        string s = string(pad_left,' ');
        s += (*iter);
        s += string(pad_right,' ');
        cimage.push_back(s);
        iter++;
    }
    
    return cimage;
}

int main(void)
{
    vector<string> image;
    image.push_back("*");
    image.push_back("***");
    image.push_back("*****");

    vector<string> cimage = center(image);

    for(vector<string>::const_iterator iter=cimage.begin();iter!=cimage.end();iter++)
        cout<<*iter<<endl;

    return 0;
}

string::size_type width(const vector<string>& v)
{
    string::size_type maxlen = 0;
    for(vector<string>::size_type i=0; i!=v.size();i++)
        maxlen = max(maxlen,v[i].size());
    return maxlen;
}