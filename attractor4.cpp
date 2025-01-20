//Lu chen attractor

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

float f1(float t,float x,float y,float z)
{
float val,a=36.0;
val=a*(y-x);
return(val);
}
float f2(float t,float x,float y,float z)
{
float val,c=20.0,u=-15.15;
val=x-x*z+c*y+u;
return(val);
}
float f3(float t,float x,float y,float z)
{
float val,b=3.0;
val=x*y-b*z;
return(val);
}

int main(void)
{
    float t0=0,x0=0.1,y0=0.3,z0=-0.6,t,x,y,z,tf=50,h=0.01;
    float k1,k2,k3,k4,m1,m2,m3,m4,l1,l2,l3,l4;
    
    ofstream out("attractor4.txt");
    cout<<"give the value of t0,x0,y0,z0,tf and h "<<endl;
    //cin>>t0>>x0>>y0>>z0>>tf>>h;
    for(t=t0;t<tf;t=t+h)
    {
        out<<t<<" "<<x0<<" "<<y0<<" "<<z0<<endl;
        k1=h*f1(t,x0,y0,z0);
        m1=h*f2(t,x0,y0,z0);
        l1=h*f3(t,x0,y0,z0);
        k2=h*f1(t+h/2,x0+k1/2,y0+m1/2,z0+l1/2);
        m2=h*f2(t+h/2,x0+k1/2,y0+m1/2,z0+l1/2);
        l2=h*f3(t+h/2,x0+k1/2,y0+m1/2,z0+l1/2);

        k3=h*f1(t+h/2,x0+k2/2,y0+m2/2,z0+l2/2);
        m3=h*f2(t+h/2,x0+k2/2,y0+m2/2,z0+l2/2);
        l3=h*f3(t+h/2,x0+k2/2,y0+m2/2,z0+l2/2);

        k4=h*f1(t+h,x0+k3,y0+m3,z0+l3);
        m4=h*f2(t+h,x0+k3,y0+m3,z0+l3);
        l4=h*f3(t+h,x0+k3,y0+m3,z0+l3);

        x=x0+(k1+2*k2+2*k3+k4)/6;
        y=y0+(m1+2*m2+2*m3+m4)/6;
        z=z0+(l1+2*l2+2*l3+l4)/6;
        x0=x;
        y0=y;
        z0=z;
    }
}