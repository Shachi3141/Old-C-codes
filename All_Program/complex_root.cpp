//this program is not completed
//find complex root using function(without structure)



#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
float u(float x,float y)
{
float z;
z=x*x*x-3*x*y*y-1;//u(x,y)
return z;
}
float v(float x,float y)
{
float z;
z=3*x*x*y-y*y*y;   //v(x,y)
return z;
}
float ux(float x,float y)
{
float z;
z=3*x*x-3*y*y;   //ux(x,y)
return z;
}
float uy(float x,float y)
{
float z;
z=-6*x*y;    //uy(x,y)
return z;
}


float vx(float x,float y)
{
float z;
z=6*x*y;   //vx(x,y)
return z;
}

float vy(float x,float y)
{
float z;
z=3*x*x-3*y*y;  //vy(x,y)
return z;
}



int main(void)
{

float x0,y0;
cout <<"give the guess value "<<endl;



}