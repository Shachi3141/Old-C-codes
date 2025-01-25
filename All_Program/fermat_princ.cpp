//Farmet principle:For light ray optical path b/w two points is minimum
//from farmet lpronciple we can proof law of refrection
//sini/sinr=mu 

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
typedef struct
{
    float a,b,c;
}array;
array fun(float x,float l)
{
    float h1=15,h2=10,p1,p2,p;
    array s;
    p1=sqrt(x*x+h1*h1);
    p2=sqrt((l-x)*(l-x)+h2*h2);
    p=p1+2.5*p2;
    s.a=p;
    s.b=p1;
    s.c=p2;
  return(s);
}

int main(void)
{
    
    float l=20,x,h=0.001;
    float xmin,p1min,p2min,sini,sinr,mu,min;
    array s1,s2;
    s1=fun(0,l);
    min=s1.a;
    for(x=0;x<l;x=x+h)
    {
        s2=fun(x,l);
        if (s2.a<min)
        {
            xmin=x+h;
            p1min=s2.b;
            p2min=s2.c;
            min=s2.a;
        }


    }
    //sini=xmin/p1min;
    //sinr=(l-xmin)/p2min;
    mu=(xmin/p1min)/((l-xmin)/p2min);
    cout<<"refrective index is= "<<mu<<endl<<"xmin= "<<xmin;


}
//we can do it without structure by calculating mu inside if condition