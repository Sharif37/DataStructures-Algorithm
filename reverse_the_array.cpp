//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int reverse_array_using_recursion(int arr[],int start ,int last);
void reverse_array(int arr[],int n)
{
    int start=0,last=n-1 ;
    while(start<last)
    {
        int temp =arr[start];
       arr[start]=arr[last];
       arr[last]=temp ;
       start++ ;
       last-- ;

}
}
int  reverse_array_using_recursion(int arr[],int start ,int last){

    int temp ;
    if(start>last)
        return 0;

       temp =arr[start];
       arr[start]=arr[last];
       arr[last]=temp ;
       reverse_array_using_recursion(arr,++start ,--last);

        return 0 ;
}
void reverse_string(char *arr)
{
     int start=0,last=strlen(arr)-1;
     char temp ;
    while(start<last)
    {
        temp = arr[start];
       arr[start]=arr[last];
       arr[last]=temp ;
       start++ ;
       last-- ;

}
}
void display(int arr[],int n)
{
    for(int i=0 ;i<n ;i++)
{
    cout<<arr[i]<<" " ;
}
cout<<endl ;
}

void display_string(string str)
{
    for(int i=0 ;i<str.size();i++)
    {
        cout<<str[i] ;
    }
}

int main()
{
int arr[]={1,2,3,4,5,6,7} ;
char str[]="kazi omar sharif" ;
reverse_array_using_recursion(arr,0,(sizeof(arr)/sizeof(int))-1);
display(arr,(sizeof(arr)/sizeof(int)));
reverse_array(arr,sizeof(arr)/sizeof(int));
display(arr,(sizeof(arr)/sizeof(int)));
reverse_string(str);
display_string(str);

}

