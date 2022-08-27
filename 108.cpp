
#include <vector>
#include <iostream>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST_(nums, 0, nums.size()-1);
    }
    TreeNode* sortedArrayToBST_(vector<int>& nums, int left, int right){
        if(left>right){
            return nullptr;
        }

        int mid = (left+right)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = sortedArrayToBST_(nums, left, mid-1);
        root->right = sortedArrayToBST_(nums, mid+1, right);
        return root;
    }
};

int main(){
    class Solution s = Solution();
    vector<int> nums = {0,1,2,3,4,5};
    TreeNode* tr = s.sortedArrayToBST(nums);
}