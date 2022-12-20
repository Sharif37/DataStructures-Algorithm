//Bismillah
#include<bits/stdc++.h>
using namespace std ;
 int main()
{
 long long int t ,odd=0,even=0,sum=0,oddc=0,evenc=0 ;
 cin>>t  ;
 while(t--){
 long long int n,q ;
 cin>>n>>q ;
 long long int arr[n];
 for(int i=0;i<n ;i++)
 {
     cin>>arr[i] ;
     sum+=arr[i];
     if(arr[i]%2)
     {
         oddc++;
         odd+=arr[i];
     }
     else
     {
         evenc++;
         even+=arr[i] ;
     }
 }

 //1 sum with odd
 //0 sum with even
 for( int i=0;i<q ;i++){
  long typej,x ;
  cin>>typej>>x ;
  if(typej)
  {
      cout<<(oddc*x)+odd+even<<endl ;

  }
  else
  {
      cout<<(x*evenc)+even+odd<<endl ;

  }

 }
 }
}

