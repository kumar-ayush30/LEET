class Solution {
public:
    string largestEven(string s) {
        int n = s.size();
        while (!s.empty() && (s.back()% 2 == 1) ){
            s.pop_back();
        }
        return s;
    }
};