
//top down
class Solution {
  public:
  long long int solve(int a[],int m,int n,vector<vector<long long int>> &v){
     long long int x=0,y=0,z=0;
     if(m<0) return 0;
     if(n==0) return 1;
     if(v[m][n]!=-1) return v[m][n];
     if(a[m]<=n){
         y=solve(a,m,n-a[m],v);
     }
         z=solve(a,m-1,n,v);
     return v[m][n]=y+z;
 }
    long long int count(int S[], int m, int n) {

        // code here.
       vector<vector<long long int>> v(m+1,vector<long long int> (n+1,-1));
       return solve(S,m-1,n,v);
    }
};