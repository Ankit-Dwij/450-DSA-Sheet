class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
{
       sort(arr,arr+n);
       int count=0;
       for(int i=0;i<n-2;i++){
           int l=i+1;
           int h=n-1;
           while(l<=h){
               if(arr[i]+arr[l]+arr[h]<sum){
               count=count+(h-l);
               l++;
               }
               else if(arr[i]+arr[l]+arr[h]>=sum){
               h--;
               }
           }
       }
       return count;
}
 

};
