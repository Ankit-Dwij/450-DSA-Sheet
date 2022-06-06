class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        ll count=0;
        ll sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0)  count++;
            if(mp.find(sum)!=mp.end()){
                count+=mp[sum];
            }
            mp[sum]++;
        }
        return count;
    }
};