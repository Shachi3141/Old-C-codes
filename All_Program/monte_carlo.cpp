//Integration using monte carlo method 
//date 05/07/2023

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

//code for cos(x)dx 

float f(float x)
{return cos(x);}

int main()
{
    int i,n=10000;
    float x,y,count,count1=0,count2=0,a=0,b=M_PI,max,min,y1,s;
    max=f(a);
    min=f(a);
    //srand(time(NULL));
    for (x=a;x<b;x=x+0.01)
    {
        if (f(x)>max)
        max=f(x);
    }
    for (x=a;x<b;x=x+0.01)
    {
        if (f(x)<min)
        min=f(x);
    }
    for (i=0;i<n;i++)
    {
        x=rand()/float(RAND_MAX);
        x=a+(b-a)*x;
        y=rand()/float(RAND_MAX);
        y=min+(max-min)*y;
        y1=f(x);
        if (y>0 && y<y1)
        count1=count1+1;
        if (y<0 && y>y1)
        count2=count2+1;
        
    }
    count=count1-count2;
    s=(b-a)*(max-min)*count/n;
    cout<<"value of integration is "<<s<<endl;
}


//code for sin(x)dx 
/* 
float f(float x)
{return sin(x);}

int main()
{
    int i,n=10000;
    float x,y,count=0,a=0,b=M_PI,max,y1,s;
    max=f(a);
    for (x=a;x<b;x=x+0.01)
    {
        if (f(x)>max)
        max=f(x);
    }
    for (i=0;i<n;i++)
    {
        x=rand()/float(RAND_MAX);
        x=a+(b-a)*x;
        y=rand()/float(RAND_MAX);
        y=max*y;
        y1=f(x);
        if (y<y1)
        count=count+1;
    }
    s=(b-a)*max*count/n;
    cout<<"value of integration is "<<s<<endl;
}
*/