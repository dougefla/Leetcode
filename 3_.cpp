#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution{
    public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> exist_chars;
        int n = s.size();
        int r = 0;//r is the new char to be decided
        int res = 0;
        for (int i=0;i<n;i++){
            while(r<n&&!exist_chars.count(s[r])){
                exist_chars.insert(s[r]);
                r++;
            }
            //out the while, means s[r] exists in exists_chars;
            //Update res;
            res = max(res, r-i);
            //Move i to right 1 step
            exist_chars.erase(s[i]);
        }
        return res;
    }
};

int main(){
    class Solution solution = Solution();
    cout<<solution.lengthOfLongestSubstring("abcabcbb");
}