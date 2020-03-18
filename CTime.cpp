#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int data[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
int runnian(int n)
{
	int i=0;
	if(n%400==0||n%4==0&&n%100!=0)
	i=1;
	return i;
}//判断是否是闰年
int riqi(int a,int b,int c)
{
	int i=1;
	if(a<0||b<0||c<0)
	   i=0;//日期不正确 
	if(runnian(a)==0&&b==2)
	   if(c>28)
	   i=0;//非闰年二月不能过28天 
	if(runnian(a)==1&&b==2)
	   if(c>29)
	   i=0;//闰年二月不能过29天 
	switch(b)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			if(c>31)
			i=0;break;//不能超过31天 
		case 4:case 6:case 9:case 11:
			if(c>30)
			i=0;break;//不能超过30天 
		default:i=0;//不在1-12月内，不正确 
	}
	return i;
}
int shijian(int a,int b,int c)
{
	int i=1;
	if(a>23||b>59||c>59)
	i=0;//判断时间是否合理
	return i; 
}
class CTime
{
	public:CTime(int Nyear,int Nmonth,int Nday,int Nhour,int Nminute,int Nsecond);
	       CTime(CTime &p);
	       ~CTime();
	       int dayDiff(CTime t);
	       int isvalid();
	       void showTime();
	private:int year,month,day,hour,minute,second;
};//定义类 
CTime::CTime(int Nyear,int Nmonth,int Nday,int Nhour=0,int Nminute=0,int Nsecond=0)
{
	if(riqi(Nyear,Nmonth,Nday)==0)
	{
		cout<<"date error!"<<endl;
		Nyear=0;Nmonth=0;Nday=0,Nhour=0;Nminute=0;Nsecond=0;
	}
	else if(shijian(Nhour,Nminute,Nsecond)==0)
	{
		cout<<"time error!"<<endl;
		Nyear=0;Nmonth=0;Nday=0,Nhour=0;Nminute=0;Nsecond=0;
	}
	else if(riqi(Nyear,Nmonth,Nday)==0&&shijian(Nhour,Nminute,Nsecond)==0)
	{
		cout<<"date and time error!"<<endl;
		Nyear=0;Nmonth=0;Nday=0;Nhour=0;Nminute=0;Nsecond=0;
	}
	else
	year=Nyear;month=Nmonth;day=Nday;hour=Nhour;minute=Nminute;second=Nsecond;
	cout<<"构造函数被调用"<<endl; 
}
CTime::CTime(CTime &p)
{
	year=p.year;month=p.month;day=p.day;hour=p.hour;minute=p.minute;second=p.second;
	cout<<"拷贝构造函数被调用"<<endl;
}//拷贝构造函数 
CTime::~CTime()
{
	cout<<"析构函数被调用"<<endl;
}//析构函数 
int CTime::dayDiff(CTime t)
{
	int i,j,sum=0,num=0;
	for(i=0;i<year;i++)
	{
		if(runnian(i)==1)
		sum=sum+366;
		else
		sum=sum+365;
	}
	if(runnian(year)==1)
	data[2]=29;
	else
	data[2]=28;
	for(i=1;i<=month;i++)
    sum=sum+data[i];
    sum=sum+day;
    for(i=0;i<t.year;i++)
    {
    	if(runnian(i)==1)
    	num=num+366;
    	else
    	num=num+365;
    }
    if(runnian(t.year)==1)
    data[2]=29;
    else
    data[2]=28;
    for(i=1;i<=t.month;i++)
    num=num+data[i];
    num=num+t.day;
	j=abs(sum-num);
	return j;
}//计算时间差 
int CTime::isvalid()
{
	int i=1;
	if(riqi(year,month,day)==0||shijian(hour,minute,second)==0)
	{
		i=0;
	}
	return i;
}//判断时间是否合理 
void CTime::showTime()
{
	cout<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
}//输出 
int  main() 
{ 
        int  year,  month,  day,  hour,  minute,  second; 
        cin  >>  year  >>  month  >>  day  >>  hour  >>  minute  >>  second; 
        CTime  t1(year,  month,  day,  hour,  minute,  second); 
        t1.showTime(); 
        CTime  t2(2000,  1,  1);  //利用默认形参将时间初始化为00:00:00 
        if  (t1.isvalid())          //如果日期和时间合法，则计算天数 
        { 
                int  days=0; 
                days=t1.dayDiff(t2); 
                cout  <<  "这两天之间相隔了"  <<  days  <<  "天"  <<  endl; 
                days=t2.dayDiff(t1); 
                cout  <<  "这两天之间相隔了"  <<  days  <<  "天"  <<  endl; 
        } 
}
