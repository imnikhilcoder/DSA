class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int num=0;
        int count=0;
        
        for(int ele : nums){
            if(ele<target){
                num++;
            }
            else if(ele==target){
                count++;
            }
        }
           vector<int> ans;
            while(count>0){
            ans.push_back(num);
            num++;
            count--;
        }
        return ans;
        
    }
};