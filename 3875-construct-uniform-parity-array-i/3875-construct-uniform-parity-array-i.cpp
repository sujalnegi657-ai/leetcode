class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int sum = 0;
        int odd = 0;
        int even = 0;
        for (auto &i : nums1) {
            sum += i;
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 0 || even == 0){
            return true;
        }
        return true;
    }
};
