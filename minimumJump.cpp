//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    void minJumps(int arr[], int n){

        int ans=0 ,c=0,mx=0;
        for(int i= ;i<n ;i++)
        {


            for(int j=i+1 ;j<=arr[i] ;j++)
            {
                mx=max(mx,arr[j]) ;

               cout<<"mx="<<mx<<endl  ;

            }


        }


    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        obj.minJumps(arr, n) ;
    }
    return 0;
}

// } Driver Code Ends
