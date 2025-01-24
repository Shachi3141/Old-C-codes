
/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i, a[3], b[3], s = 0;
    ifstream sm("testdata.dat");
    for (i = 0; i < 3; i++) // reading a from data file
    {
        sm >> a[i];
    }
    for (i = 0; i < 3; i++) // reading b from data file
    {
        sm >> b[i];
    }

    for (i = 0; i < 3; i++) // lop for product
    {
        s = s + a[i] * b[i];
    }
    cout << "dot product is " << s << endl;
}
*/
/////////////////////////////////////////////////////////
//extension of kaperacar constant 6174
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int f1(int m,int num)
{
   
    int iteration_num=0,bignum=0,smallnum=0,diff1=0,diff2=0;
    while (num != diff2)
    {
    int n[m],r,i,j,k,temp,diff;
    diff2=diff1;
    diff1=num;
    for (k=0;k<m;k++)
{
    n[k]=num/pow(10,m-(k+1));
    r=num%int(pow(10,m-(k+1)));// bug in this line : pow(10,2)=100 but int(pow(10,2))=99 why?
    num=r;
    
}
    
    for (i=0;i<m-1;i++)
    {
        for (j=i+1;j<m;j++)
        {
        if (n[i]>n[j])
        {
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
        }
        }
    }
    for (k=0;k<m;k++)
    {
        bignum=bignum+(n[k]*pow(10,k));
    smallnum=smallnum+(n[k]*pow(10,m-(k+1)));
    }
    diff=bignum-smallnum;
    num=diff;

   cout<<"\n newnum="<<diff<<"\n";
    iteration_num=iteration_num+1;
    }
    cout<<"Number of itration = "<<iteration_num<<"\n";
 return 0;
}

int main()
{
    int m,num1;

    cout<<"give number of digit than number \n";
    cin>>m>>num1;

f1(m,num1);


}
