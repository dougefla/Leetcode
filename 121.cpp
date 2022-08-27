#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> profit;
        profit.push_back(0);
        for(int i=1;i<prices.size();i++){
            profit.push_back(prices[i]-prices[i-1]);
        }

        int cur_profit = 0;
        int max_profit = 0;
        for (int i=0;i<profit.size();i++){
            cur_profit += profit[i];
            if(cur_profit<0){
                cur_profit = 0;
            }
            max_profit = max(max_profit, cur_profit);
        }

        return max_profit;
    }
};

int main(){
    class Solution s = Solution();
    vector<int> prices = {-1,7,6,8,9,0};

    int max_profit = s.maxProfit(prices);

    cout<<max_profit;
}