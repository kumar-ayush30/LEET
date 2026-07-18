class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minNum=INT_MAX;
        int maxNum=INT_MIN;
        for (int i =0;i<nums.size();i++){
            minNum=min(minNum,nums[i]);
            maxNum=max(maxNum,nums[i]);
        }
        return gcd(minNum,maxNum);
    }
};