class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int red{}, white{}, blue = nums.size() - 1;
        while (white <= blue)
            if (nums[white] == 0) swap(nums[white++], nums[red++]);
            else if (nums[white] == 1) white++;
            else swap(nums[white], nums[blue--]);
    }
};