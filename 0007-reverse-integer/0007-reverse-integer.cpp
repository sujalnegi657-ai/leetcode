class Solution {
public:
    int reverse(int x) {
        string s =to_string(x);
        int start= 0;
        if (s[0] =='-') {
            start = 1;
        }
        int end= s.size() -1;
        while (start <end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        try{
            return stoi(s);
        }
        catch(...){
            return 0;
        }
    }
};
