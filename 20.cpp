#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        if (s.size() % 2 != 0)
        {
            return false;
        }
        stack<char> s1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s1.empty())
            {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                {
                    s1.push(s[i]);
                }
                else
                {
                    return false;
                }
            }
            else
            {
                switch (s[i])
                {
                case '(':
                    s1.push('(');
                    break;
                case '[':
                    // if (s1.top() == '(')
                    // {
                    //     return false;
                    // }
                    s1.push('[');
                    break;
                case '{':
                    // if (s1.top() == '(' || s1.top() == '[')
                    // {
                    //     return false;
                    // }
                    s1.push('{');
                    break;
                case ')':
                    if (s1.top() != '(')
                    {
                        return false;
                    }
                    s1.pop();
                    break;
                case ']':
                    if (s1.top() != '[')
                    {
                        return false;
                    }
                    s1.pop();
                    break;
                case '}':
                    if (s1.top() != '{')
                    {
                        return false;
                    }
                    s1.pop();
                    break;
                default:
                    break;
                }
            }
        }
        if(s1.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};

int main()
{
    string strs = "([])";
    class Solution solution = Solution();
    cout << solution.isValid(strs);
}