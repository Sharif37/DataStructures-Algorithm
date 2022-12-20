//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int  lowerbound(int arr[],int n,int key)
{
    int l=0 ,h=n-1 ,ans=-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2 ;
        if(arr[mid]==key)
        {
            ans=mid ;
            h=mid-1;
        }
        else if(arr[mid]<key)
        {
            l=mid+1 ;
        }
        else
        {
            h=mid-1 ;
        }
    }
    return ans ;
}
int upperbound(int arr[],int n ,int key)
{
     int l=0 ,h=n-1 ,ans=-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2 ;
        if(arr[mid]==key)
        {
            ans=mid ;
            l=mid+1;
        }
        else if(arr[mid]<key)
        {
            l=mid+1 ;
        }
        else
        {
            h=mid-1 ;
        }
    }
    return ans ;
}
int main()
{
 int n ,key;
 cin>>n ;
 int arr[n];
 for(int i=0;i<n ;i++)
    cin>>arr[i] ;
    cout<<"key: "<<endl ;
    cin>>key ;
 int a=lowerbound(arr,n,key);
 int b=upperbound(arr,n,key);
 cout<<key<<" repeated : "<<b-a+1<<" times"<<endl ;

}

