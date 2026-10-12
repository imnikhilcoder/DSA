class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int sum=0;
            int temp=nums[i];
            while(temp!=0){
                int d=temp%10;
                sum +=d;
                temp=temp/10;
            }
            ans=min(ans,sum);
        }
        return ans;
    }
};