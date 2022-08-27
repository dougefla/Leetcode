#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;

        while((numbers[left]+numbers[right])!=target && left<right){
            if ((numbers[left]+numbers[right]) > target){
                right--;
            }
            else{
                left++;
            }
        }
        vector<int> res = {left+1, right+1};
        return res;
    }
};

int main(){
    class Solution s = Solution();

    vector<int> nums = {5,25,75};

    vector<int> res = s.twoSum(nums, 100);

    return 0;
}