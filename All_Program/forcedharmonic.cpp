//date 26 may ss sir class
//forced harmonic oscillator D^2y+w0^2y=cos(wx)
//                            y(0)=10 ; y'(0)=1

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

float f1(float x,float y,float u)
{
float z;
z=u;
return(z);
}
float f2(float x,float y,float u)
{
float z ,w=10,w0=20;
z=cos(w*x)-w0*y;
return(z);
}

int main(void)
{
    float x0,y0,u0,x,y,u,xf,h;
    float k1,k2,k3,k4,m1,m2,m3,m4;
    ofstream out("forcedharmonic.txt");
    cout<<"give the value of x0,y0,u0,xf and h "<<endl;
    cin>>x0>>y0>>u0>>xf>>h;
    for(x=x0;x<xf;x=x+h)
    {
        out<<x<<" "<<y0<<" "<<u0<<" "<<endl;
        k1=h*f1(x,y0,u0);
        m1=h*f2(x,y0,u0);
        k2=h*f1(x+h/2,y0+k1/2,u0+m1/2);
        m2=h*f2(x+h/2,y0+k1/2,u0+m1/2);
        k3=h*f1(x+h/2,y0+k2/2,u0+m2/2);
        m3=h*f2(x+h/2,y0+k2/2,u0+m2/2);
        k4=h*f1(x+h,y0+k3,u0+m3);
        m4=h*f2(x+h,y0+k3,u0+m3);
        y=y0+(k1+2*k2+2*k3+k4)/6;
        u=u0+(m1+2*m2+2*m3+m4)/6;
        y0=y;
        u0=u;
    }

}