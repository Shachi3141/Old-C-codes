#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    float x,y,p,n=10000;
    int i,count=0;
    //srand(time(NULL));
    for (i=0;i<n;i++)
    {
        x=rand()/float(RAND_MAX);
        x=-1+(2*x);
        y=rand()/float(RAND_MAX);
        y=-1+(2*y);
        if((pow(x,2)+pow(y,2)<1) )
        count=count+1;
    }
    p=4*count/n;
    cout<<"value of pi is = "<<p<<endl;
}