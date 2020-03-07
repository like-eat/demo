#include<iostream>
using namespace std;
int xunhuan(int m,int n,int number)
{
	int pingzi,pinggai;
	pingzi=m;pinggai=n;
	pingzi=m-2*(m/2)+m/2+n/3;//换完水之后的瓶子数量 
	pinggai=n-3*(n/3)+n/3+m/2;//瓶盖数量 
	number=number+m/2+n/3;//瓶数 
	if(pingzi>=2||pinggai>=3)//如果还能换 
	xunhuan(pingzi,pinggai,number);//递归 
	else
	return number;
	
}
int main()
{
	int money,num,ping,gai;
	cin>>money;
	num=money;
	ping=money;
	gai=money;//第一次购买后瓶数，瓶子，瓶盖 
	num=xunhuan(ping,gai,num);
	cout<<num<<endl;
	return 0;
} 
