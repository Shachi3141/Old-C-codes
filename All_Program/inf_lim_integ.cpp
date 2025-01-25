//Integration with one limit is infinity like gamma fun
//The idea is, we simply change the upper limit in a loop and ...
//when diff of two succsive result is very low then print that value 

#include<iostream>
#include<cmath>
 
using namespace std;

float fun(float x)
{
return exp(-x*x);  //ans must be 0.5*sqrt(pi)=0.88622692
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
int N=50;
float a,b=2,i1,i2,d;
cout<<"give the value of a=lower limit "<<endl;
cin>>a;
do
{
i1=I(a,b,N);
i2=I(a,b+2,N);
d=i1-i2;
b=b+1;
 }
while(abs(d)>0.0000001);
cout<<"value of integration is"<<endl<<i2<<endl<<"b="<<b<<endl;


}