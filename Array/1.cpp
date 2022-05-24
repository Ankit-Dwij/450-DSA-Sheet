//https://practice.geeksforgeeks.org/problems/reverse-an-array/0

#include <iostream>
using namespace std;

int main() {
	//code
    int t,n;
    while(t>0){
        cin>>n;
        int arr[n];

        for(int i=0;i<n-1;i++)
            cin>>arr[i];

        for(int i=n-1;i>=0;i--)
            cout<<arr[i]<<" ";

            cout<<endl;
            t--;
    }
	return 0;
}