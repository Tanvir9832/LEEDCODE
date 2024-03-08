class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int final = 1, z = 0;
        for (auto u : nums)
        {
            if (u != 0)
                final = final * u;
            else
                z++;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (z == 0)
            {
                nums[i] = final / nums[i];
            }
            else if (z == 1)
            {
                if (nums[i] == 0)
                    nums[i] = final;
                else
                    nums[i] = 0;
            }
            else
                nums[i] = 0;
        }

        return nums;
    }
};