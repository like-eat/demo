#include<iostream>
using namespace std;
int main()
{
	int i,j,k,s=0;
	int a[3][3],b[3][3],c[3][3];
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    cin>>a[i][j];
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    cin>>b[i][j];
    for(k=0;k<3;k++)
    {
     for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      s=s+a[k][j]*b[j][i];
	  c[k][i]=s;
	  cout<<c[k][i]<<' ';
	  s=0;
	}
	cout<<endl;
	}
	return 0;
 } 
