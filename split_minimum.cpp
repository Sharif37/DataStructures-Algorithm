//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int main()
{
 int t ;
 cin>>t ;
 while(t--)
 {
     int n ;
     cin>>n ;
     int arr[n];
     int arr_helper[n];
     long sum=0 ;
     for(int i=0;i<n ;i++){
        cin>>arr[i];
        sum+=arr[i];
     }
     arr_helper[0]=arr[0];
     for(int i=1;i<n;i++)
     {
         arr_helper[i]=arr[i-1]+arr[i];
     }
     int minimum=n ;

    for(int i=0;i<n ;i++)
     {
         int dx=i ,Max=i ;
         for(int j=i+1 ;j<n ;j++)
         {
             if(arr_helper[j]-arr_helper[dx]==arr_helper[i])
             {
                 Max=max(Max,j-dx);
                 dx=j ;
             }
             if(dx==n-1)
             minimum=min(minimum,Max);

         }

     }
    cout<<minimum<<endl ;

 }
}


