//modified lorentz chatic system
//source : wikipedia
//dont know why it give us nan nan


#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

float f1(float t,float x,float y,float z)
{
float val,f,a=10.0,c=137.0/5;
val=(1.0/3)*((-x*(a+1))+a-c+y*z)+((1-a)*(x*x-y*y)+2*(a+c-z)*x*y)*(1.0/(3*sqrt(x*x-y*y)));
cout<<"1. "<<val<<endl;     //here is output
return(val);
}
float f2(float t,float x,float y,float z)
{
float val,f,a=10.0,c=137.0/5;
val=(1.0/3)*((c-a-z)*x-(a+1)*y)+((2*x*y*(a-1)+(a+c-z)*(x*x-y*y))*(1.0/(3*sqrt(x*x-y*y))));
cout<<"2. "<<val<<endl;
return(val);
}
float f3(float t,float x,float y,float z)
{
float val,b=8.0/3;
val=0.5*(3*x*x*y-y*y*y)-b*z;
cout<<"3. "<<val<<endl;
return(val);
}

int main(void)
{
    float t0=0.0,x0=-8.0,y0=4.0,z0=10.0,t,x,y,z,tf=5.0,h=0.1;
    float k1,k2,k3,k4,m1,m2,m3,m4,l1,l2,l3,l4;
    
    ofstream out("attractor1.txt");
    cout<<"give the value of t0,x0,y0,z0,tf and h "<<endl;
    //cin>>t0>>x0>>y0>>z0>>tf>>h;
    for(t=t0;t<tf;t=t+h)
    {cout<<"t= "<<t<<endl;
        //out<<t<<" "<<x0<<" "<<y0<<" "<<z0<<endl;
        k1=h*f1(t,x0,y0,z0);
        m1=h*f2(t,x0,y0,z0);
        l1=h*f3(t,x0,y0,z0);
        k2=h*f1(t+h/2,x0+k1/2,y0+m1/2,z0+l1/2);
        m2=h*f2(t+h/2,x0+k1/2,y0+m1/2,z0+l1/2);
        l2=h*f3(t+h/2,x0+k1/2,y0+m1/2,z0+l1/2);
        //cout<<k1<<" "<<l1<<" "<<m1<<endl;
        k3=h*f1(t+h/2,x0+k2/2,y0+m2/2,z0+l2/2);
        m3=h*f2(t+h/2,x0+k2/2,y0+m2/2,z0+l2/2);
        l3=h*f3(t+h/2,x0+k2/2,y0+m2/2,z0+l2/2);
        //cout<<k2<<" "<<l2<<" "<<m2<<endl;
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
