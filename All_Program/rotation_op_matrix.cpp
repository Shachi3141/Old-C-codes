/*
A rotating operator defined by a matrix R(0)
a vector given a=(2,1,2)
write a c++ program to obtain a1=R(0)*a for agiven 0
*/


#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float R[3][3],a[3][1],a1[3][1],theta,thetar,c;
    int i,j,k;
    cout<<"give the value of angle in degree"<<endl;
    cin>>theta;
    thetar=theta*(M_PI/180);
 //components of rotation matrix
    R[0][0]=cos(thetar);
    R[0][1]=sin(thetar);
    R[0][2]=0;
    R[1][0]=-sin(thetar);
    R[1][1]=cos(thetar);
    R[1][2]=0;
    R[2][0]=0;
    R[2][1]=0;
    R[2][2]=1;
 //components of a
    a[0][0]=2;
    a[1][0]=1;
    a[2][0]=2;
    for (i=0;i<3;i++)
    for(j=0;j<1;j++)
    {
    a1[i][j]=0;
    for (k=0;k<3;k++)
    {
    c=R[i][k]*a[k][j];
    a1[i][j]=a1[i][j]+c;
    }
    }
    for (i=0;i<3;i++)
    for(j=0;j<1;j++)
    cout<<a1[i][j]<<endl;
}