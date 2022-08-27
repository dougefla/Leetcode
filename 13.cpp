#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>hm = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int s_size = s.size();
        int res = 0;
        for (int i=0;i<s_size;i++){
            if(i==s_size-1 || hm[s[i]]>=hm[s[i+1]]){
                res +=hm[s[i]];
            }
            else{
                res -=hm[s[i]];
            }
        }
        return res;
    }
};

int main(){
    class Solution solution = Solution();
    cout<<solution.romanToInt("MCMXCIV");
}