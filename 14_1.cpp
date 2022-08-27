#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
    string longestCommonPrefix(vector<string>& strs){
        sort(strs.begin(),strs.end());
        string &s1 = strs.front();
        string &s2 = strs.back();
        int i = 0;
        while(i<s1.size() && i<s2.size() && s1[i]==s2[i]){
            i++;
        }
        return s1.substr(0,i);
    }
};

int main(){
    class Solution solution = Solution();
    vector<string> strs = {"adada","adaf","ad"};
    cout<<solution.longestCommonPrefix(strs);
}