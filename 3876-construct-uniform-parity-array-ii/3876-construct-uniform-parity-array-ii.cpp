class Solution {
public:
// ham odd number isliye search karenge kyunki hame even-odd krke odd bna skte hai to agar sbse chota odd mil jaye toh hame all odd vecctor form kar skte hai.
    bool uniformArray(vector<int>& nums1) {
        int m=INT_MAX;
        //find the minimu odd number in nums1
        for (int x : nums1) {
            if (x % 2 !=0) {
                m = min(m,x);
            }
        }
        //check if any even number is smaller than the minimum odd number
        for (auto &x : nums1) {
            if (x % 2==0 && m!= INT_MAX && x < m) {
                return false;
            }
        }
        return true;
    }
};