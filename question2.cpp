//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int N=10005 ;
int main()
{
    int n ,m ;
    set<int>st ;
printf("enter element of first array: ");
cin>>n ;
printf("enter element of first array: ");
cin>>m ;
int arr1[n],arr2[m];
for(int i=0;i<n ;i++)
{
    cin>>arr1[i];
}
for(int i=0;i<m ;i++)
{
    cin>>arr2[i];
}
for(int i=0;i<n ;i++)
{
    for(int j=0;j<m ;j++)
    {
        if(arr1[i]==arr2[j])
        {
           st.insert(arr1[i]);
        }
    }
}
for(auto u:st)
    cout<<u<<" " ;



}

