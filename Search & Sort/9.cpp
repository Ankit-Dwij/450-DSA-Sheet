bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    for(int i=size-1;i>=0;i--){
        int j=0;
        while(j<i){
            if(abs(arr[i]-arr[j])==n)   return true;
            if(abs(arr[i]-arr[j])<n)   break;
            j++;            
        }
    }
    return false;
    
}