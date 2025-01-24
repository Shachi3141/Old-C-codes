// fractal using 2d Newton raphson method
//function = z^3-1
//store guess values corrosponding to different 3 root of this equn 
//in 3 different file and plot those data 

#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;



typedef struct
{
float z[6];
}array;
typedef struct
{
float x,y;
}array2;


array u(float x,float y)
{
array g;




g.z[0]=x*x*x-3*x*y*y-1;//u(x,y)
g.z[1]=3*x*x*y-y*y*y;   //v(x,y)
g.z[2]=3*x*x-3*y*y;   //ux(x,y)
g.z[3]=-6*x*y;   //uy(x,y)
g.z[4]=6*x*y;   //vx(x,y)
g.z[5]=3*x*x-3*y*y;  //vy(x,y)

return g;
}

array2 fun(float x0,float y0)
{
float d,delx,dely;

array a;
array2 b;
do
{
a=u(x0,y0);
//d=a.z[2]*a.z[5]-a.z[3]*a.z[4]; //determinant (if i take d insted of long exp then it not working )
delx=-(a.z[5]*a.z[0]-a.z[3]*a.z[1])/(a.z[2]*a.z[5]-a.z[3]*a.z[4]); //not working>> loop is remain stuck at near 0
dely=-(a.z[2]*a.z[1]-a.z[4]*a.z[0])/(a.z[2]*a.z[5]-a.z[3]*a.z[4]);
x0=x0+delx;
y0=y0+dely;
b.x=x0;
b.y=y0;

}
while(abs(a.z[0])+abs(a.z[1])>0.00001);

return b;

}

int main()
{
array2 b;
float y0,x0,tol;
int i=0;
ofstream out1("2dnr1.txt");//out put 
ofstream out2("2dnr2.txt");
ofstream out3("2dnr3.txt");
for (x0=-1;x0<=1;x0=x0+0.01)
{//cout<<x0<<"  ";
for (y0=-1;y0<=1;y0=y0+0.01)
{
b=fun(x0,y0);
tol=0.866025;
if(b.x==1 && b.y<0.00001)
{
out1<<x0<<"  "<<y0<<endl;
}
if(b.x==-0.5 && b.y<0)
{
out2<<x0<<"  "<<y0<<endl;
}
if(b.x==-0.5 && b.y>0)
{
out3<<x0<<"  "<<y0<<endl;
}
}
}


}//end bracket of main 








/*

#include<iostream>
  2 #include<cmath>
  3 using namespace std;
  4 
  5 float fn(float x)
  6 {
  7 float val;
  8 val=x*x*x-5*x;
  9 return val;
 10 }
 11 
 12 float fn1(float x)
 13 {
 14 float val;
 15 val=3*x*x-5;
 16 return val;
 17 }
 18 
 19 
 20 int main()
 21 {
 22 
 23 
 24 float x0,xn,mid,tol,n=0;
 25 cout<<"give the guess value "<<endl;
 26 cin>>x0;
 27 
 28 if (fn1(x0)==0)
 29 cout<<"change your guess value!!!!!";
 30 if (fn(x0)==0)
 31 cout<<"change your guess value!!!!!";
 32 
 33 
 34 tol=pow(10,-6);
 35 
 36 
 37 do
 38 {
 39 xn=x0-(fn(x0)/fn1(x0));
 40 mid=xn;
 41 x0=xn;
 42 n=n+1;
 43 }
 44 while(fabs(fn(mid))>=tol);
 45 
 46 
 47 cout<<"the root is  "<<mid<<endl<<"loop no=  "<<n<<endl;
 48 }
*/

//some lines of most above programe


//cout<<"root is "<<x0<<"+("<<y0<<")i"<<endl;
//cout<<b.x<<"  "<<b.y<<endl;

//cout<<"give the guess values "<<endl;
//cin>>x0>>y0;

/*
g.z[0]=x*x-y*y-2*x+2;//u(x,y)
g.z[1]=2*x*y-2*y;   //v(x,y)
g.z[2]=2*x-2;   //ux(x,y)
g.z[3]=-2*y;   //uy(x,y)
g.z[4]=2*y;   //vx(x,y)
g.z[5]=2*x-2;  //vy(x,y)
*/