//You are in charge of the cake for a child's birthday. 
// It will have one candle for each year of their total age. 
// They will only be able to blow out the tallest of the candles. 
// Your task is to count how many candles are the tallest.

#include <iostream>
using namespace std;

int birthdayCakeCandles(int n, int ar_size, int* ar)
{
    int i,j,count=1,temp;
    
    for(i=1;i<ar_size;i++)
    {  
            if(ar[0]<ar[i])
            {
                temp=ar[i];
                ar[i]=ar[0];
                ar[0]=temp;
             }
    }
    for(j=1;j<ar_size;j++)
    {
        if(ar[0]==ar[j])
        {
            count++;
        }
    }
    return count;
}

int main() {
    int n; 
    cout<<"Enter number of candle heights : ";
    cin>>n;
    
    int *ar = new int;

    for(int ar_i = 0; ar_i < n; ar_i++){
       cin>>ar[ar_i];
    }

    int result = birthdayCakeCandles(n, n, ar);

    cout<<"The tallest number of candles are : "<< result;

    delete ar;
    return 0;
}
