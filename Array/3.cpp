
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int a[], int n)
{
    int l,m,h;
    l=0; m=0; h=n-1;
    
    while(m<=h){
        switch(a[m]){
            case 0:
            swap(&a[m++],&a[l++]);
            break;
            
            case 1:
            m++;
            break;
            
            case 2:
            swap(&a[m],&a[h--]);
            break;
            
        }
    }
    
}