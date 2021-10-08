#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string,int> word_count;

    cout<<"Please enter word to count (command+d to end): "<<endl;
    
    // print all pairs in word_count
    cout<<endl;
    cout<<"Here are words we count: "<<endl;
    for(auto& x: word_count)
        cout<<x.first << ": " << x.second <<endl;
    cout<<endl;
    return 0;
}

istream& read(istream& in, unordered_map<string,int>& word_count)
{
    string word;
    unordered_map<string,int>::iterator got;
    while(in>>word)
    {
        got = word_count.find(word);
        // if not exist, then create
        if(got==word_count.end())
            word_count.insert({word,1});
        // if exist, then add up    
        else
            word_count.at(word) += 1;
    }
}