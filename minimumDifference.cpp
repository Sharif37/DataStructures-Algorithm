//Bismillah
#include<bits/stdc++.h>
using namespace std ;

int main()
{
 int n ;
 cin>>n ;
 int arr[n] ;
 for(int i=0 ;i<n ;i++)
    cin>>arr[i] ;
 int k ;
 cin>>k ;

 sort(arr,arr+n);

 int tempMin=arr[0],tempMax=arr[n-1],ans=(arr[n-1]-arr[0]) ;

 for(int i=1 ;i<n;i++){
    if( (arr[i]-k)<0)
    continue ;

   tempMin=min(arr[0]+k ,arr[i]-k) ;
   tempMax=max(arr[n-1]-k ,arr[i-1]+k) ;
   ans=min(ans,tempMax-tempMin) ;


 }
 cout<<ans<<endl ;



}

