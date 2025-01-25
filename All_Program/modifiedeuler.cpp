//sollution of diff equn by modified Euler method
//Insted of (k1+k2)/2 write k1 it will become Euler method
//error in Euler method is O(h^2) = (h^2/2)*df/dx (first ordre error)
//For modfied Eular error=error in trapizodal=-(h^3/12)*f''(xi)


#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

float f(float x,float y)
{
float z;
z=-y;
return(z);
}

int main (void)
{
    float x0,y0,x,y,h,xf;
    float k1,k2;
    ofstream out("modeuler.data");
    cout<<"give the values of x0,y0,xf and h according to this order";
    cin>>x0>>y0>>xf>>h;
    for (x=x0;x<xf;x=x+h)
    {
        out<<x<<" "<<y0<<endl;
        k1=h*f(x,y0);
        k2=h*f(x+h,y0+k1);
        y=y0+(k1+k2)/2;
        y0=y;
    }
}