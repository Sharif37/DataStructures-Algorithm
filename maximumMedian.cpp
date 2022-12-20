//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int main()
{
 int n,k ;
 cin>>n>>k ;

 int arr[n+1] ;
 for(int i=1 ;i<=n ;i++)
 {
     cin>>arr[i] ;
 }
 sort(arr+1,arr+n+1) ;

 while(k)
 {
     for(int i=(1+n)/2 ;i<=n ;i++)
     {
         arr[i]++ ;
         cout<<arr[i]<<" " ;
         k-=(1+n)/2 ;
     }
     cout<<endl  ;
 }

//cout<<arr[(1+n)/2]<<endl ;
}

