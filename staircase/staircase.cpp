//Write a program that prints a staircase of size n

#include<iostream>
using namespace std;

int main(){
    int n,i,k,j,p,q;
    cout<<"Enter value of n: ";
    cin>>n;
    k=n-1;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
    {
           if(j==k)
           {
               for(p=j;p<n;p++)
               {
                cout<<"#";
               }
               cout<<"\n";
               break;
           }
           cout<<" ";
    }
      k--;   
    }
   return 0;
}
