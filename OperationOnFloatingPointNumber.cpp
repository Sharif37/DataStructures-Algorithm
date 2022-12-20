//Bismillah
#include<bits/stdc++.h>
using namespace std ;

void read_from_file(vector<int>&v)
{
    FILE *fp;
    char file_name[]="input.txt" ;
    int i=0,a;
    fp=fopen(file_name,"r");
    while (!feof(fp))
    {
        fscanf(fp,"%d",&a);
        v.push_back(a) ;
        st.insert(a) ;

    }
    fclose(fp) ;

}

int main()
{



}

