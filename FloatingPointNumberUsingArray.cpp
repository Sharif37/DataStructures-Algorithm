//Bismillah
#include<bits/stdc++.h>
using namespace std ;


//void desc_sort(double a[], int n)
//{
// int i, j ;
//double  temp;
// for(i=0;i< n-1;i++)
// {
//  for(j=i+1;j< n;j++)
//  {
//   if(a[i]< a[j])
//   {
//    temp = a[i];
//    a[i] = a[j];
//    a[j] = temp;
//   }
//  }
// }
//}
void Asc_sort(double a[], int n)
{
 int i, j ;double temp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]> a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
}
void read_from_file(double arr[])
{
    FILE *fp;
    char file_name[]="floating.txt" ;
    double a;
    int j=0;
    fp=fopen(file_name,"r");
    while (!feof(fp))
    {
        fscanf(fp,"%lf",&a);
        arr[j++]=a ;


    }
    fclose(fp) ;

}


int main()
{
    int n=1000 ;
    double v[n];
    double v_A[n];
    //double v_D[n];

read_from_file(v) ;
read_from_file(v_A);
//read_from_file(v_D);


//cout<<"size of vector: "<<l<<endl ;
double sumRandom=0.0 ;
double sumAscending=0.0 ;
double sumDescending=0.0 ;

//desc_sort(v_D,n);
Asc_sort(v_A,n);

for(int i=0 ;i<n ;i++){
    sumRandom+=v[i] ;
    sumAscending+=v_A[i] ;

}

for(int i=n-1;i>=0 ;i--){
    sumDescending+=(v_A[i]) % 1 ;
}

//for(int i=0 ;i<n ;i++)
//printf("%.10lf \t", v_A[i]) ;

printf("sum of random arrange floating number:    %.20lf\n",sumRandom);
printf("sum of Ascending arrange floating number:  %.20lf\n",sumAscending);
printf("sum of descending arrange floating number: %.20lf\n",sumDescending);


}
