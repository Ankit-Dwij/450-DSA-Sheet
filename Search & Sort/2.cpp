class Solution {
public:
    int search(vector<int>& nums, int target) {
          int f=0; int l = nums.size()-1;

        while(f<=l){
            int m= (f+l)/2;
            if(nums[m]==target) return m;

            if(nums[m]<=nums[l] ){
                //right sorted
                if(target<=nums[l] && target>=nums[m])
                    f=m+1;
                l=m-1;
            }
            else if(nums[m]>=nums[f]){
                //left sorted
                if(target>=nums[f] && target<=nums[m]){
                    l=m-1;}
                else{
                f=m+1;}
            }
        }
        return -1;
    }
};