class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        
        int start=0;
        int end=nums.size()-1;
        
        while(start<end){
            if(nums[start]%2!=0 && nums[end]%2==0){
                swap(nums[start],nums[end]);
                start++;
                end--;
                
            }
            else if(nums[start]%2==0){
                start++;
            }
            else{
                end--;
            }
            
            
        }
        
        return nums;
    }
};