//FIBONACCI SERIES 0,1,1,2,3,5,8,13,21,34,55

#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main()
{
float s=0,s2=1,s1=0;
cout<<"Fibonacci numbers are: \n" <<0 <<' '<<0.1;
ofstream in("fibonacci_point.data");
for (int i=0;i<100;i++)
{
    s=s1+s2;
    s1=s2;
    s2=s;
    in <<i<<" "<< s<<"\n";
}
}

