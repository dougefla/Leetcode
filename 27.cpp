#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0 || (nums.size()==1 && nums[0] == val)){
            return 0;
        }
        int j=-1;
        for (int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[++j] = nums[i];
            }
        }
        return j+1;
    }
};

int main(){
    vector<int> nums = {3,2,2,3};
    int target = 3;
    class Solution solution = Solution();
    int result = solution.removeElement(nums, target);
    for (int i=0;i<result;i++){
        cout<<" "<<nums[i];
    }
}