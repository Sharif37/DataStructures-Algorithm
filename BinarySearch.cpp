//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int binary_search(int arr[],int target ,int n)
{
    int low=0 ;
    int high=n;
     int savemid=0 ;
     int mid=0;
    while(low<=high)
    {
         mid=low+(high-low)/2 ;
        if(arr[mid]==target)
        {
            savemid=mid ;
            low=mid+1 ;
        }
        else if(arr[mid]<target)
        {
            low=mid+1 ;
        }
        else
        {
            high=mid-1 ;
        }
    }
    return savemid ;

}
int main()
{
  int n ,target;

  cin>>n>>target ;
  int arr[n];
  for(int i=0 ;i<n ;i++)
  {
      cin>>arr[i];
  }
  sort(arr,arr+n);

    cout<<"found this element at "<<binary_search(arr,target,n)<<endl ;




}

