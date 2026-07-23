class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> hash;
        for (int x:nums){
            if (x%2==0){
                hash[x]++;
            }
        }
        for (int x:nums){
            if (x%2==0&&hash[x] ==1){
                return x;
            }
        }
        return -1;
    }
};