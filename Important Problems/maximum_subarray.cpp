#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int current_max = nums[0];
        int global_max = nums[0];
        for(int i = 1; i < nums.size(); i++){
            current_max = max(nums[i], nums[i] + current_max);
                if(current_max > global_max)
                    global_max = current_max;
        }
        return global_max;
    }
int main(){
  int n;
  cin>>n;
  vector<int>nums;
  int x;
  for(int i = 0 ; i< n ; i++){
    cin>>x;
    nums.push_back(x);
  }
  cout<<maxSubArray(nums)<<endl;
  return 0;
}
