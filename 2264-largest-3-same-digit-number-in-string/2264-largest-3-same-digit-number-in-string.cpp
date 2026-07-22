class Solution {
public:
    string largestGoodInteger(string num) {
        int n =num.size();
        char ans=0;
        for (int i=2;i<n;i++){
            if (num[i]==num[i-1]&&num[i]==num[i-2]){
                ans=max(ans,num[i]);
            }
        }
        if(ans==0) return "";
        return string(3,ans);
    }
};