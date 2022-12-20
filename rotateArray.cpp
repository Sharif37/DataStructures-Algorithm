//Bismillah
#include<bits/stdc++.h>
using namespace std ;
void rotate(int arr[],int n)
{
    int i=0 ,j=n-1 ;
    while(i!=j)
    {
        swap(arr[i],arr[j]);
        i++ ;
    }

}
void rotateBYshift(int arr[],int n)
{
    int a=arr[n-1] ;
    for(int i=n-1 ;i>=1 ;i--)
    {
        arr[i]=arr[i-1] ;
    }
    arr[0]=a ;
}
int main()
{
 int arr[]={1,2,3,4,5,6,7,8,9,10} ;
 int n=sizeof(arr)/sizeof(int) ;
 rotate(arr,n);
 rotateBYshift(arr,n) ;

 for(auto u:arr)
 {
     cout<<u<<" " ;
 }


}

