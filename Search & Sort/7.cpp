
//Moores voting algo
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int count=0;
        int ele;
        for(int i=0;i<size;i++){
            if(count==0)    ele=a[i];
            if(ele == a[i]) count+=1;
            if(ele != a[i]) count-=1;
        }

        return ele;
    }
};
