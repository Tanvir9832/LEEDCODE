class Solution
{

public:
    bool bs(vector<int> &nums1, int num)
    {
        int l = 0, r = nums1.size() - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums1[mid] == num)
                return true;
            else if (nums1[mid] > num)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }

public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        for (int i = 0; i < nums2.size(); i++)
        {
            if (bs(nums1, nums2[i]))
            {
                return nums2[i];
            }
        }
        return -1;
    }
};