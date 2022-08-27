#include <vector>
#include <iostream>

using namespace std;

class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            for (int i=digits.size()-1;i>=0;i--){
                if(!(digits[i] == 9)){
                    digits[i]++;
                    return digits;
                }
                digits[i] = 0;
            }
            vector<int> temp(digits.size()+1);
            temp[0] = 1;
            return temp;
        }
};


int main(){
    vector<int> nums = {9};
    class Solution s = Solution();
    for(auto x:s.plusOne(nums)){
        cout<<x;
    }
}