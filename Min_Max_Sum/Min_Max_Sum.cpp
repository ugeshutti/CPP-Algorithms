//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

#include<iostream>
#include <memory>

using namespace std;

int main() {
    int i,j;
    long int sum[10]={0},temp;
    int *arr = new int[5];
    cout<<"Enter 5 values of an array : ";
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
        cin>>arr[arr_i];
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j)
            {
                sum[i]=sum[i]+arr[j];
            }
        }
    
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(sum[i]>sum[j])
            {
                temp=sum[j];
                sum[j]=sum[i];
                sum[i]=temp;
            }
        }  
    }
    cout<<sum[0]<<" "<<sum[4];

    delete[] arr;
    return 0;
}
