//integration with infinite limit by Trapizoidal rule


#include<iostream>
#include<cmath>
using namespace std;
float f(float x)
{
	return(exp(-x*x));
}

float In(float b)
{
	float a=0,n=50,h,i,I,sum;
	h=(b-a)/n;
	sum=f(a)+f(b);
	for(i=1;i<n;++i)
	{
		sum=sum+2*f(a+i*h);
	}
	I=(h/2)*sum;
	return I;
}
int main()
{
	float I1,I2,n,a,b,d;
	//a=0;n=50;
	b=1;
	
	do
	{
		I1=In(b);
		I2=In(b+1);
		d=I1-I2;
		//cout<<"I="<<I1<<endl;
		b=b+1;
	}
	while(fabs(d)>0.00001);
	cout<<"I="<<I1<<endl;
}
