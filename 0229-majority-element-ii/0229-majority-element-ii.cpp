class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int el1 , el2;
      int count1 = 0 ,count2 =0;

      vector<int> mEl;

      for(int i=0;i<nums.size();i++){
          if(count1==0 && el2 != nums[i]){
              count1=1;
              el1=nums[i];
          }
          else if(count2==0 && el1 != nums[i]){
              count2=1;
              el2=nums[i];
          }
          else if(el1 == nums[i]){
              count1++;
          }
          else if(el2 == nums[i]){
              count2++;
          }
          else{
              count1--;
              count2--;

          }
      }
      int counter1=0 , counter2=0;

      for(int i=0;i<nums.size();i++){
          if(el1==nums[i]){
              counter1++;
          }
      }
      if(counter1 > nums.size()/3){
          mEl.push_back(el1);
      }
      for(int i=0;i<nums.size();i++){
          if(el2==nums[i]){
              counter2++;
          }
      }
      if(counter2 > nums.size()/3){
          mEl.push_back(el2);
      }

      return mEl;
    }
};