class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0;
        int end = start + 1;
        vector<int> expectednums;
        while (end < nums.size()) {
            if (nums[start] < nums[end]) {
                expectednums.push_back(nums[start]);
            }
            start++;
            end++;
        }
        expectednums.push_back(nums.back());
        int k = expectednums.size();
        nums=expectednums;
        for (int i = 0; i < expectednums.size(); i++) {
            cout << expectednums[i] << " ";
        }
        return k;
    }
};