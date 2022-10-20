// https://leetcode.com/problems/two-sum/
#include <map>
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        std::map<int, int> reminderIndex;

        for (int i = 0; i < nums.size(); i++)
        {
            int number = nums[i];

            if (reminderIndex.find(number) != reminderIndex.end())
            {
                return {i, reminderIndex[number]};
            }
            else
            {
                reminderIndex[target - number] = i;
            }
        }
        return {0, 0};
    }
};