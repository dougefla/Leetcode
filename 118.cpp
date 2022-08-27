#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> zero_line = {1};
        vector<int> this_line = zero_line;
        for(int i=0;i<numRows;i++){
            res.push_back(this_line);
            this_line = next_line(this_line);
        }
        return res;
    }

    vector<int> next_line(vector<int> line){
        vector<int> this_line(line.size()+1);
        this_line[0] = 1;
        this_line[this_line.size()-1] = 1;
        for(int i=1;i<line.size();i++){
            this_line[i] = line[i-1] + line[i];
        }
        return this_line;
    }
};

int main(){
    class Solution s = Solution();
    vector<vector<int>> res = s.generate(3);
    return 0;
}