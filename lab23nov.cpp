//Bismillah
#include<bits/stdc++.h>
using namespace std ;

void countingSort(int A[],int k,int n)
{
    int c[n+1] ,B[n+1];
    for(int i=0 ;i<k ;i++)
    {
        c[i]=0 ;
    }
    for(int j=0 ;j<n ;j++)
    {
        c[A[j]]=c[A[j]]+1 ;
    }
    for(int i=1 ;i<k+1 ;i++)
    {
        c[i]=c[i]+c[i-1] ;
    }
    for(int j=n-1 ;j>=0 ;j--)
    {
        B[c[A[j]]-1]=A[j] ;
        c[A[j]]=c[A[j]]-1 ;

    }

    for(int i=0 ;i<n ;i++)
    {
        cout<<B[i]<<" "  ;
    }

}


int main()
{
int mx=0 ;
int arr[]={2,4,1,6,3,8,5,7} ;
int n=sizeof(arr)/sizeof(int) ;

 for(int i=0 ;i<n ;i++)
 {
     if(mx<arr[i])
        mx=arr[i] ;
 }
countingSort(arr,mx,n) ;










}

