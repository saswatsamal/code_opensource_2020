#include<iostream>
using namespace std;
 int main()
 {
     int n;
     cin>>n; //array size
     int a[n];
     //Input in  array
     for(int i=0;i<n;i++)
     {
         cin>>a[i]; 
     }
     //shell sort
     for(int gap=n;gap>0;gap/=2)
     {
         for(int i=gap;i<n;i++)
         {
             int j,t=a[i];
             for( j=i;j>=gap&&a[j-gap]>t;j-=gap)
             {
                 a[j]=a[j-gap];
             }
             a[j]=t;
         }
     }
     //print orted array
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     return 0;
 }
 
