#include<iostream> 
#include<cstdio> 
#include<cmath>
using namespace std;
int main()
{
	char a[10],b[10];int i,j,min;
	cin>>a>>b;
	for(i=0;i<10;i++)
    {
    	if(a[i]>='A'&&a[i]<='Z')
	    a[i]=a[i]+32;
	    if(b[i]>='A'&&b[i]<='Z')
	    b[i]=b[i]+32;
	}//´óÐ´×ÖÄ¸±äÐ¡Ð´ 
	min=abs(a[0]-b[0]);
	for(i=0;a[i]!='\0';i++)
	for(j=0;b[j]!='\0';j++)
	{
		if(abs(a[i]-b[j])<min)
		min=abs(a[i]-b[j]);
	}
	cout<<min<<endl;
	return 0;
}
