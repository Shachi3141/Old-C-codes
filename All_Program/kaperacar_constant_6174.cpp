//kaperakar constant 6174
//take a four digit no. 1234 write descending order 4321 
//write in ascending order 1234 take 4321-1234=3087 write desc...repeat
//after few itration you get 6174 

#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main()
{
    int num,n[4],iteration_num;

    cout<<"give 4 digit number \n";
    cin>>num;
    iteration_num=0;
    while (num != 6174)
    {
    int r3,r2,r1,i,j,temp,bignum,smallnum,diff;
    n[0]=num/1000;
    r3=num%1000;
    n[1]=r3/100;
    r2=r3%100;
    n[2]=r2/10;
    r1=r2%10;
    n[3]=r1;
    
    for (i=0;i<3;i++)
    {
        for (j=i+1;j<4;j++)
        {
        if (n[i]>n[j])
        {
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
        }
        }
    }
 //   cout<<n[1] << " \n"<<n[2] <<"\n"<< n[3]<<"\n"<<n[4]<<"\n";
    bignum=1000*n[3]+100*n[2]+10*n[1]+n[0];
    smallnum=1000*n[0]+100*n[1]+10*n[2]+n[3];
 //   cout<<"bignum= \n "<<bignum<<"smallnum= "<<smallnum;
    diff=bignum-smallnum;
    num=diff;
   cout<<"\n newnum="<<diff<<"\n";
    iteration_num=iteration_num+1;
    }
    cout<<"Number of itration = "<<iteration_num<<"\n";
  
}
