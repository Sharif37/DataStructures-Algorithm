

#include<bits/stdc++.h>
using namespace std ;


//sort using pointer partitions
void sort_using_pointer_approach(int arr[],int n)
{
    int low=0 ;
    int high=n-1 ;
    int mid=0 ;
    while(mid<=high)
    {
        switch(arr[mid])
        {
        case 0 :
            swap(arr[low++],arr[mid++]);
            break ;
        case 1 :
            mid++ ;
            break ;
        case 2 :
            swap(arr[mid],arr[high--]);
            break ;

        }
    }
}
//sort using counting
void sort012(int a[], int n)
{


 int c0=0,c1=0,c2=0;

 int arr1[n];
 for(int i=0 ;i<n ;i++)
 {

     c0+=(a[i]==0) ;
     c1+=(a[i]==1) ;
     c2+=(a[i]==2) ;
 }
int  j=0 ;
  while(c0--)
  {
      arr1[j++]=0 ;
  }
  while(c1--)
  {
      arr1[j++]=1 ;
  }
  while(c2--)
  {
      arr1[j++]=2 ;
  }

}







int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        //sort012(arr, n);
        sort_using_pointer_approach(arr,n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}


