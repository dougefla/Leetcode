#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre =0;
        int maxAns = nums[0];
        for (const auto &x:nums){
            pre = max(pre+x, x);
            maxAns = max(maxAns, pre);
        }
        return maxAns;
    }
};

int main(){
    class Solution s = Solution();
    vector<int> nums = {-2,1,5,3,-9,-10,5,-8};
    cout << s.maxSubArray(nums);
}