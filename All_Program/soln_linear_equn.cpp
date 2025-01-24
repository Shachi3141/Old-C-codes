/*
soln of n linear equation by Gauss seidel method
date 07/07/2023 (i was absent)
*/
#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main()
{
    float a[10][10],x[10],b[10],y[10],s,n;
    int i,j;
    ifstream in("soln_linear_equn.dat");
    in>>n;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            in>>a[i][j];
        }
        in>>b[i];
        y[i]=1;
    }




}