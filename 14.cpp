#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        else{
            return longestCommonPrefix(strs, 0, strs.size()-1);
        }
    }
private:
    string longestCommonPrefix(vector<string>& strs, int l, int r){
        if(l == r){
            return strs[l];
        }
        else{
            int mid = (l+r)/2;
            string lcp_l = longestCommonPrefix(strs, l, mid);
            string lcp_r = longestCommonPrefix(strs, mid+1, r);
            return bi_longestCommonPrefix(lcp_l, lcp_r);
        }
    }

    string bi_longestCommonPrefix(string str_l, string str_r){
        int size_min = min(str_l.size(), str_r.size());
        for (int i=0;i<size_min;i++){
            if(str_l[i]!=str_r[i]){
                return str_l.substr(0,i);
            }
        }
        return str_l.substr(0,size_min);
    }
};

int main(){
    class Solution solution = Solution();
    vector<string> strs = {"adada","adaf","ad"};
    cout<<solution.longestCommonPrefix(strs);
}