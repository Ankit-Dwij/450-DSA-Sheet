vector<int> find(int arr[], int n , int x )
{   vector<int> v;
    int a1=-1; int a2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            a1=i;break;}
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            a2=i;break;}
    }
    v.push_back(a1);
    v.push_back(a2);
    return v;
}