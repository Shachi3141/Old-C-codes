#include<iostream>
#include<fstream>
using namespace std;

//define a structure
typedef struct
{
int N;
float x[5],y[5];

}l_fit; //name of structure is l_fit

//subroutine for average 
float avg(int n,float x[5])
{
int i;
float s=0,val;
for(i=0;i<5;i++)
{
s=s+x[i];
}
val=s/n;
return val;
}
//subroutine for square average
float sqavg(int n,float x[5])
{
int i;
float s=0,val;
for(i=0;i<5;i++)
{
s=s+x[i]*x[i];
}
val=s/n;
return val;
}
//subroutine for xy average
float xyavg(int n,float x[5],float y[5])
{
int i;
float s=0,val;
for(i=0;i<5;i++)
{
s=s+x[i]*y[i];
}
val=s/n;
return val;
}

//   
int main()
{
int i;
l_fit A;
//we want to take data from file
ifstream in("lfit.dat");
in>>A.N;
for(i=0;i<5;i++)
{
in>>A.x[i];
}
for(i=0;i<5;i++)
{
in>>A.y[i];
}

float x_bar,y_bar,xy_bar,xsq_bar,del,a,b;


x_bar=avg(A.N,A.x);
y_bar=avg(A.N,A.y);
xy_bar=xyavg(A.N,A.x,A.y);
xsq_bar=sqavg(A.N,A.x);

del=xsq_bar-(x_bar*x_bar);
a=(((xsq_bar*y_bar)-(x_bar*xy_bar))/del);
b=((xy_bar-(x_bar*y_bar))/del);

cout<<"the value of a is "<<endl<<a<<endl;
cout<<"the value of b is "<<endl<<b<<endl;
ofstream out("lfitout.dat");
for (i=0;i<5;i++)
{
out<<A.x[i]<<" "<<a+b*A.x[i]<<" "<<A.y[i]<<endl;
}

return 0;
}

/*
we can make another structure in which we define two float variable
which will be a and b 
*/