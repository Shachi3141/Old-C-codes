//matrix multiplication 
//date 28/04/2023
//taking data from data file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int a[4][4],b[4][4],c[4][4],n,m,i,j,k;
ifstream in ("data.dat");
in>>n;
cout<<endl;
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        in >> a[i][j];
    }
}
in>>m;
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        in >> b[i][j];
    }

}
if (n != m)
{
    cout<<"multiplication not possible";
}

else
{
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        c[i][j]=0;
         for(k=0;k<3;k++)
    {
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
    cout<<c[i][j]<<" ";

    }


cout<<endl;
}
}
}


/*

//matrix multiplication using structure and 
//reding data from console
//date 28/04/2023

#include<iostream>
#include<fstream>
using namespace std;

typedef struct matrix   //structure define
{
   int n;
   float x[10][10];
};
// matrix;

//martix a,b;

int main(void)
{
int i,j,k;
matrix a,b,c;
cout<<"give the element of a";
for (i=0;i<3;i++)
{
 for (j=0;j<3;j++)
 {
   cin>>a.x[i][j];
 }
}
cout<<"give the element of b";
for (i=0;i<3;i++)
{
 for (j=0;j<3;j++)
 {
   cin>>b.x[i][j];
 }
}
for (i=0;i<3;i++)
{
 for (j=0;j<3;j++)
 {  
   c.x[i][j]=0;
   for(k=0;k<3;k++)
   {
   c.x[i][j]=c.x[i][j]+a.x[i][k]*b.x[k][j];
   }
 }
}

for (i=0;i<3;i++)
{
 for (j=0;j<3;j++)
 {
   cout<<c.x[i][j]<<"  ";
 }
 cout <<endl;
}
}

*/