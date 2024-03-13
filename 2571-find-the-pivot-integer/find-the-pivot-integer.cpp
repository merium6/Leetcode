class Solution {
public:
    int pivotInteger(int n) {
        vector<int> v{};
        for (int i = 1; i <= n; i++)
            v.push_back(i);
        for (int i = 0; i < n; i++) {
                int prefix_sum = accumulate(v.begin(), v.begin() + i, 0);
                int post_sum = accumulate(v.begin() + i + 1, v.end(), 0);
                if (prefix_sum == post_sum) {
                    int val= v[i];
                    return val;
                }
            }
        return -1;

        
    }
};