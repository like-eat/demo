#include<iostream>
#include<cstdio>
using namespace std;
struct fushu
{
	double shi;
	double xu;
}fushu1,fushu2,result;
int main()
{
	cin>>fushu1.shi>>fushu1.xu>>fushu2.shi>>fushu2.xu;
	result.shi=fushu1.shi-fushu2.shi;
	result.xu=fushu1.xu-fushu2.xu;
	printf("%.2lf %.2lf",result.shi,result.xu);
	return 0;
} 
