class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows=accounts.size();
        int cols=accounts[0].size();
        vector <int> rich (rows);
        for (int row=0;row<rows;row++){
            int sum=0;
            for (int col=0;col<cols;col++){
                sum+=accounts[row][col];
            }
            rich[row]=sum;
        }
        int ans=0;
        for (int i=0;i<rich.size();i++){
            ans=max(ans,rich[i]);
        }
        return ans;
    }
};