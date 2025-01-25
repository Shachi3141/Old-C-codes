//integration by simpson 1/3 rule
//This program will take only two limit of integ
//and calculate upto some accuracy

#include<iostream>
#include<cmath>
 
using namespace std;

float fun(float x)
{
return x*x+x+(1.0/6);//this the given function
}
 
float I(float a,float b,int N)  //another function for integration
 
{
 
float so=0,se=0,val,h;
int i;
h=(b-a)/(2*N);
for (i=1;i<(2*N);i=i+2)
{
so=so+fun(a+i*h);
}
for (i=2;i<(2*N)-1;i=i+2)
{
se=se+fun(a+i*h);
}
val=(h/3)*(fun(a)+fun(b)+(2*se)+(4*so));

return val; 
}
 
int main()
{
int N=0;
float a,b,i1,i2,d;
//cout<<"give the value of N";
//cin>>N; 
cout<<"give the value of a=lower limit and b=upper limit"<<endl;
cin>>a>>b;
//cout<<"value of int is"<<endl<<I(a,b,N);

do
{
i1=I(a,b,N);
i2=I(a,b,N+1);
d=i1-i2;
N=N+1;
 }
while(abs(d)>0.0000001);
cout<<"value of integration is"<<endl<<i2<<endl<<"n="<<N<<endl;


}
 
                                                                    
