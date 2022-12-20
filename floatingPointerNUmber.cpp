//Bismillah
#include<bits/stdc++.h>
using namespace std ;


void read_from_file(vector<double>&v)
{
    FILE *fp;
    char file_name[]="floating.txt" ;
    double a;
    fp=fopen(file_name,"r");
    while (!feof(fp))
    {
        fscanf(fp,"%lf",&a);
        v.push_back(a) ;


    }
    fclose(fp) ;

}


int main()
{
vector<double>v ;
vector<double>v_A;
vector<double>v_D;
read_from_file(v) ;
read_from_file(v_A);
read_from_file(v_D);

int l=v.size() ;
cout<<"size of vector: "<<l<<endl ;
double sumRandom=0.0 ;
double sumAcending=0.0 ;
double sumDecending=0.0 ;

sort(v_A.begin(),v_A.end());
sort(v_D.rbegin(),v_D.rend());

for(int i=0 ;i<l ;i++){
    sumRandom+=v[i] ;
    sumAcending+=v_A[i] ;
    sumDecending+=v_D[i] ;
}

cout<<"sum when randomly arrange: " <<sumRandom<<endl ;
cout<<"sum when Acending arrange: " <<sumAcending<<endl ;
cout<<"sum when Dcending arrange: " <<sumDecending<<endl ;



}

