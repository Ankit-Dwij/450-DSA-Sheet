//https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1#
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) {
    long long min=INT_MAX; 
    long long max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]<min)
            min = a[i];
        if(a[i]>max)
            max=a[i];
    }
    pair<long long, long long> p;
    p.first = min; p.second=max;
    return p;
    
}
