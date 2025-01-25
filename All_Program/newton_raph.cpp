/*
find root of algebric equation
date 10/05/2023 
 newton raphson method of one variable
 next class>> how to find complex root
*/

#include<iostream>
#include<cmath>
using namespace std;

double fn(float x)
{
double val;
val=tan(x)-x; //this function has saddle point at guess value
return val;
}

double fn1(float x)
{
double val;
val=((1/(cos(x)*cos(x)))-1);
return val;
}


int main()
{


double x0,xn,mid,tol,n=0;
cout<<"give the guess value "<<endl;
cin>>x0;

if (fn1(x0)==0) //may not be perfectly zero, if close to zero then also we can not get root
cout<<"change your guess value!!!!!"; //think graphically... not only guess value,if we get  
if (fn(x0)==0)                       //another value of x corrosponding to local maxima or 
cout<<"change your guess value!!!!!";//min during looping then also we can not get root. 


tol=pow(10,-6);  //what are another way to erite power?


do
{
xn=x0-(fn(x0)/fn1(x0));
mid=xn;
x0=xn;
n=n+1;
}
while(fabs(fn(mid))>=tol);


cout<<"the root is  "<<mid<<endl<<"loop no=  "<<n<<endl;
}

