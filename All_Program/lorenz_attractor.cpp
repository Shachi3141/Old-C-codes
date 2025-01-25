//Lorentz attractor 

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

float f1(float t,float x,float y,float w)
{
float z,sig=10;
z=sig*(y-x);
return(z);
}
float f2(float t,float x,float y,float w)
{
float z,roh=28;
z=x*(roh-w)-y;
return(z);
}
float f3(float t,float x,float y,float w)
{
float z,beta=8.0/3;
z=y*x-beta*w;
return(z);
}

int main(void)
{
    float t0,x0,y0,w0,t,x,y,w,tf,h;
    float k1,k2,k3,k4,m1,m2,m3,m4,l1,l2,l3,l4;
    
    ofstream out("lorentz.txt");
    cout<<"give the value of t0,x0,y0,w0,tf and h "<<endl;
    cin>>t0>>x0>>y0>>w0>>tf>>h;
    for(t=t0;t<tf;t=t+h)
    {
        out<<t<<" "<<x0<<" "<<y0<<" "<<w0<<endl;
        k1=h*f1(t,x0,y0,w0);
        m1=h*f2(t,x0,y0,w0);
        l1=h*f3(t,x0,y0,w0);
        k2=h*f1(t+h/2,x0+k1/2,y0+m1/2,w0+l1/2);
        m2=h*f2(t+h/2,x0+k1/2,y0+m1/2,w0+l1/2);
        l2=h*f3(t+h/2,x0+k1/2,y0+m1/2,w0+l1/2);

        k3=h*f1(t+h/2,x0+k2/2,y0+m2/2,w0+l2/2);
        m3=h*f2(t+h/2,x0+k2/2,y0+m2/2,w0+l2/2);
        l3=h*f3(t+h/2,x0+k2/2,y0+m2/2,w0+l2/2);

        k4=h*f1(t+h,x0+k3,y0+m3,w0+l3);
        m4=h*f2(t+h,x0+k3,y0+m3,w0+l3);
        l4=h*f3(t+h,x0+k3,y0+m3,w0+l3);

        x=x0+(k1+2*k2+2*k3+k4)/6;
        y=y0+(m1+2*m2+2*m3+m4)/6;
        w=w0+(l1+2*l2+2*l3+l4)/6;
        x0=x;
        y0=y;
        w0=w;
    }
}