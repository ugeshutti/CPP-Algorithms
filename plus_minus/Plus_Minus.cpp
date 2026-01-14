//calculate the ratios of its elements that are positive, negative and zero.
#include<iostream>
#include<algorithm>
#include<memory>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i; 
    float a,b,c,count1=0,count2=0,count3=0;
    cout<<"Enter value of n : "; 
    cin>>n;
    int arr[n];
    cout<<"Enter n values for an array to read : "; 
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
      cin>>arr[arr_i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count1++;
        }
        if(arr[i]<0)
        {
            count2++;
        }
        if(arr[i]==0)
        {
            count3++;
        }  
    }
        a = count1/n;
        b = count2/n;
        c = count3/n;
        cout<<a<<","<<b<<","<<c;
    return 0;
}
