#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,k,m=0;
	int j;int p=1,q=1;
	char lie[20];
	cin>>lie;
	for(i=0;i<8;i++)
    {
    	if(lie[i]=='*')
	    {
		    k=i;//�ҵ�*�� 
	    }
	}
	for(i=0;i<k;i++)
	m=m+(lie[i]-'0');
	for(i=k+1;i<8;i++)
	m=m+(lie[i]-'0');
	j=36-m-1;//����*������ 
	if(j>=8)
	cout<<"No Answer";
	else
	{
		for(i=0;i<k;i++)
    {
        if(i-(lie[i]-'0'-1)==k-j||i+(lie[i]-'0'-1)==k+j)
        {
        	p=0;
		}
	}
	for(i=k+1;i<8;i++)
	{
		if(i-(lie[i]-'0'-1)==k-j||i+(lie[i]-'0'-1)==k+j)
		{
			q=0;
		}
	}//��б���Ƿ����ظ� 
	if(p&&q)
	cout<<j+1<<endl;//����������� 
	else
	cout<<"No Answer"<<endl;
	}
	return 0;
}
