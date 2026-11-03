class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int i=0;
       
        while(i<n){
            int v=nums[i];
            if(v>=1 &&v<=n && nums[v-1]!=v){
                   swap(nums[v-1], nums[i]);
            }
            else{
                i++;
            }
        
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j+1){
                return j+1;
            }
        }
        return n+1;
  
        
    }
};