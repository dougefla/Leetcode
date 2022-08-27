#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last_num;
        int cur_num;
        if(nums.size()==0){
            return 0;
        }
        last_num = nums[0];
        for(int i =1; i< nums.size();i++){
            cur_num = nums[i];
            if(cur_num == last_num){
                nums.erase(nums.begin()+i);
                i--;
            }
            else{
                last_num = cur_num;
            }
        }
        return nums.size();
    }
};

int main(){
    class Solution solution = Solution();

    vector<int> nums = {1,1,2};

    solution.removeDuplicates(nums);

    return 0;

}