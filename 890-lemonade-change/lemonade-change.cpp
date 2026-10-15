class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int rem1 =0;
        int rem2 =0;
        int rem3 =0;
        for(int i =0;i<n;i++){
            if(bills[i]==5){
                rem1 += bills[i];
            }
            else if(bills[i]==10){
               if(rem1 - 5 < 0) {
                return false;
               }
               rem1 = rem1-5;
               rem2 = rem2 +10;
            }
               else {
                
                if(rem1 ==0 || rem1+rem2<15){
                    return false;
                }
               if(rem2<10){
                rem1 = rem1-15;
               }
               else{
                rem2 = rem2-10;
                rem1 = rem1-5;
               }
               
            
        }
        }
        return true;
    }
};