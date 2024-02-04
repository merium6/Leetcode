class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (count(nums.begin(), nums.end(), nums[i]) > 2) {
                int val = nums[i];
                int j = i + 2;
                while (j < nums.size()) {
                    if (nums[j] == val) {
                        nums.erase(nums.begin() + j);
                    } else {
                        j++;
                    }
                }
            }
        }
        int k=nums.size();
        return k;
    }
};