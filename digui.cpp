#include<iostream>
using namespace std;
int xunhuan(int m,int n,int number)
{
	int pingzi,pinggai;
	pingzi=m;pinggai=n;
	pingzi=m-2*(m/2)+m/2+n/3;//����ˮ֮���ƿ������ 
	pinggai=n-3*(n/3)+n/3+m/2;//ƿ������ 
	number=number+m/2+n/3;//ƿ�� 
	if(pingzi>=2||pinggai>=3)//������ܻ� 
	xunhuan(pingzi,pinggai,number);//�ݹ� 
	else
	return number;
	
}
int main()
{
	int money,num,ping,gai;
	cin>>money;
	num=money;
	ping=money;
	gai=money;//��һ�ι����ƿ����ƿ�ӣ�ƿ�� 
	num=xunhuan(ping,gai,num);
	cout<<num<<endl;
	return 0;
} 
