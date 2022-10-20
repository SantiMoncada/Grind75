// https://leetcode.com/problems/valid-parentheses/
#include <stack>
#include <map>
class Solution
{
public:
    bool isValid(string s)
    {
        std::map<char, char> match;
        match[')'] = '(';
        match[']'] = '[';
        match['}'] = '{';

        std::stack<char> stack;

        for (char &current : s)
        {
            if (match.find(current) != match.end())
            {
                // it`s a closer
                if (stack.empty())
                {
                    return false;
                }

                if (stack.top() != match[current])
                {
                    return false;
                }

                stack.pop();
            }
            else
            {
                // it's an openning
                stack.push(current);
            }
        }
        return stack.empty();
    }
};