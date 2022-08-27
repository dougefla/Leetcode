#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int flag = 1;
        int MAX_INT = 2147483647;
        int will_overflow = 0;
        if(x < 0){
            if (x == -1*MAX_INT-1){
                return 0;
            }
            x = -1*x;
            flag = -1;
        }
        while(1){
            int last = x%10;
            if (result > MAX_INT/10 || (result > MAX_INT/10) && last>7){
                return 0;
            }
            result = result*10 + last;
            x = x/10;
            if (x == 0){
                break;
            }
        }
        if (flag == -1){
            return -1*result;
        }
        else{
            return result;
        }
    }
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if (reverse(x) == x){
            return true;
        }
        return false;

    }
};

int main(){
    class Solution solution = Solution();
    cout<<solution.isPalindrome(121);
}