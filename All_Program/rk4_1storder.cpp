//Solution of 1st order diff eqn using Runge kutta4
//error in Rk2 is O(h^3)
//error in Rk4 is O()

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

float f(float x,float y)
{
float z;
z=-y;
return(z);
}

int main(void)
{
    float x0,y0,x,y,xf,h;
    float k1,k2,k3,k4;
    ofstream out("rk4_1st.txt");
    cout<<"give the value of x0,y0,xf and n "<<endl;
    cin>>x0>>y0>>xf>>h;
    for(x=x0;x<xf;x=x+h)
    {
        out<<x<<" "<<y0<<endl;
        k1=h*f(x,y0);
        k2=h*f(x+h/2,y0+k1/2);
        k3=h*f(x+h/2,y0+k2/2);
        k4=h*f(x+h,y0+k3);
        y=y0+(k1+2*k2+2*k3+k4)/6;
        y0=y;
    }

}