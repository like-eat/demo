#include<iostream>
#include<cstdio>
using namespace std;
double fushu(double a,double b)
{
	double num;
	num=a-b;
	return num;
}
int main()
{
	double num1,num2,num3,num4,shibu,xubu;
	cin>>num1>>num2>>num3>>num4;
	shibu=fushu(num1,num3);
	xubu=fushu(num2,num4);
	printf("%.2lf %.2lf",shibu,xubu);
	return 0;
}
