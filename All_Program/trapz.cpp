#include<iostream>

using namespace std;

float fun(float x)
{
return x*x+x+(1.0/6);
}

float f2(float a,float b,int n)  //another function for integration

{

float s=0,val,h;
int i;
h=(b-a)/n;
for (i=1;i<n;i++)
{
s=s+fun(a+i*h);
}
return (h/2)*(fun(a)+fun(b)+2*s);

}

int main()
{
int n=2;
float a,b,i1,i2,d;

cout<<"give the value of a and b"<<endl;
cin>>a>>b;

do
{
i1=f2(a,b,n);
i2=f2(a,b,n+2);
d=i1-i2;
n=n+2;
}
while(abs(d)>0.00001);
cout<<"value of integration is"<<endl<<i2<<endl<<"n="<<n<<endl;
}

