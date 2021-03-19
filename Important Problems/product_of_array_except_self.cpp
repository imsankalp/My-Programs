class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int n = nums.size();
        int zero_index;
        int p = 1, zero_count = 0;
        for(int  i = 0; i < n; i++){
            if(nums[i] == 0){
                zero_count++;
                zero_index = i;
            }
            else{
                p = p * nums[i];
            }
        }
        for(int i = 0; i < n; i++){
               if(zero_count > 0){
                   if(zero_count > 1){
                        for(int j = 0; j < n; j++){
                            answer.push_back(0);
                        }
                       return answer;
                   }
                   else{
                       for(int j = 0; j < n; j++){
                           if(j != zero_index)
                               answer.push_back(0);
                           else
                               answer.push_back(p);
                       }
                       return answer;
                   }
               }
            else{
                answer.push_back(p/nums[i]);
            }
        }
        return answer;
    }
};
