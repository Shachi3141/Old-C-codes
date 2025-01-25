//matrix multiplication using structure and subroutine
//taking data from file 
//date 28/04/2023 (home work)

#include<iostream>
#include<fstream>
using namespace std;

 //structure define
struct matrix  
{
   int n1,n2;
   float x[10][10];
};

//subroutine
matrix mat_mult(matrix a,matrix b)
{
  int i,j,k;
  matrix c;
  c.n1=a.n1;
  c.n2=b.n2;
  ofstream sm1("matrixmultdata.out");
  sm1<<endl<<c.n1<<" "<<c.n2 <<endl;

  for (i=0;i<c.n1;i++)
 {
 for (j=0;j<c.n2;j++)
  {  
   c.x[i][j]=0;
   for(k=0;k<a.n2;k++)
   {
   c.x[i][j]=c.x[i][j]+a.x[i][k]*b.x[k][j];
   }
   sm1<<c.x[i][j]<<" ";
  }
  sm1<<endl;
 }
 return (c);
}

int main()
{
int i,j,k;
matrix a1,b1,c1;
ifstream sm("matrixmultdata.dat");

//data reading from file
sm>>a1.n1>>a1.n2;
for (i=0;i<a1.n1;i++)
{
 for (j=0;j<a1.n2;j++)
 {
   sm>>a1.x[i][j];
 }
}
sm>>b1.n1>>b1.n2;
for (i=0;i<b1.n1;i++)
{
 for (j=0;j<b1.n2;j++)
 {
   sm>>b1.x[i][j];
 }
}
//condition for multiplication
if (a1.n2!=b1.n1)
{
   cout<<"multiplication not possible";
}
else
{

c1=mat_mult(a1,b1);




//loops for output
cout<<"answer is "<<c1.n1<<" by "<<c1.n2<<" matrix"<<endl<<"="<<endl;
for (i=0;i<c1.n1;i++)
{
 for (j=0;j<c1.n2;j++)
 {
   cout<<c1.x[i][j]<<"  ";
 }
 cout <<endl;
}


}





/*

//data writing in the data file
c1.n1=a1.n1;
c1.n2=b1.n2;
sm1<<endl<<c1.n1<<" "<<c1.n2 <<endl;

for (i=0;i<c1.n1;i++)
{
 for (j=0;j<c1.n2;j++)
 {  
   sm1<<c1.x[i][j]<<" ";
 }
 sm1<<endl;
}
*/




}