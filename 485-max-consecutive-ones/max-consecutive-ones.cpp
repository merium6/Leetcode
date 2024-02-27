class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> countarr{};
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                count++;

            if (nums[i] == 0) {
                countarr.push_back(count);
                count = 0;
            }
        }
        if (count != 0) {
            countarr.push_back(count);
        }

        count = *max_element(countarr.begin(), countarr.end());
        return count;
    }
};