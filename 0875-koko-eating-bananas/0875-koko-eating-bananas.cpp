class Solution {
public:
    
    
    bool checkiff(vector<int>& piles,int mid,int h){
        int time=0;
        
        for(int i=0;i<piles.size();i++){
            if(piles[i]%mid!=0){
                time+=(piles[i]/mid)+1;
            }
            else{
                time+=piles[i]/mid;
                
                
            }
        }
        
        if(time<=h){
            return true;
        }
        else{
            return false;
        }
        
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;

        int end =  *max_element(piles.begin(),piles.end());
        
        

        while(start<end){
            int mid=start+(end-start)/2;

            if(checkiff(piles,mid,h)==true){
                end=mid;
            }
            else{
                start=mid+1;
            }
            
        }
        return end;
        


    }
};