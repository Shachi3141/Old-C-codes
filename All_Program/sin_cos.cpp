#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

//main function for cos(x)
 /*
int main()
 { 
    int i;
    float term,sum,x;
    cout<<"give the value of x in degree "<<endl;
    cin>>x;
    x=(x*M_PI)/180;
    term=1;
    sum=1;

    for (i=1;i>=1;i++)
    {
      term=((-1)*term*x*x)/((2*i-1)*(2*i));
      sum=sum+term;
      if (abs(term)<0.0000000001)
      break;
    }
    cout<<sum;

    return 0;
 }

*/


//main function for sin(x)
/*
 int main()
 { 
    int i;
    float term,sum=0,x;
    cout<<"give the value of x in degree "<<endl;
    cin>>x;
    x=(x*M_PI)/180;
    term=x;
    sum=x;

    for (i=1;i>=1;i++)
    {
      term=((-1)*term*x*x)/((2*i+1)*(2*i));
      sum=sum+term;
      if (abs(term)<0.0000000001)
      break;
    }
    cout<<sum;

    return 0;
 }
*/

//sin using while

int main()
{
  int i=1;
  float term,sum=0,x;
  cout<<"give the value of x in degree "<<endl;
  cin>>x;
  x=(x*M_PI)/180;
  term=x;
  sum=x;

  do
  {
  term=((-1)*term*x*x)/((2*i+1)*(2*i));
  sum=sum+term;
  i=i+1;
  } while (abs(term)>0.00000001);
  cout<<"answer is "<<sum<<endl;
  

}