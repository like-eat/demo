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
}//�ж��Ƿ�������
int riqi(int a,int b,int c)
{
	int i=1;
	if(a<0||b<0||c<0)
	   i=0;//���ڲ���ȷ 
	if(runnian(a)==0&&b==2)
	   if(c>28)
	   i=0;//��������²��ܹ�28�� 
	if(runnian(a)==1&&b==2)
	   if(c>29)
	   i=0;//������²��ܹ�29�� 
	switch(b)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			if(c>31)
			i=0;break;//���ܳ���31�� 
		case 4:case 6:case 9:case 11:
			if(c>30)
			i=0;break;//���ܳ���30�� 
		default:i=0;//����1-12���ڣ�����ȷ 
	}
	return i;
}
int shijian(int a,int b,int c)
{
	int i=1;
	if(a>23||b>59||c>59)
	i=0;//�ж�ʱ���Ƿ����
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
};//������ 
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
	cout<<"���캯��������"<<endl; 
}
CTime::CTime(CTime &p)
{
	year=p.year;month=p.month;day=p.day;hour=p.hour;minute=p.minute;second=p.second;
	cout<<"�������캯��������"<<endl;
}//�������캯�� 
CTime::~CTime()
{
	cout<<"��������������"<<endl;
}//�������� 
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
}//����ʱ��� 
int CTime::isvalid()
{
	int i=1;
	if(riqi(year,month,day)==0||shijian(hour,minute,second)==0)
	{
		i=0;
	}
	return i;
}//�ж�ʱ���Ƿ���� 
void CTime::showTime()
{
	cout<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
}//��� 
int  main() 
{ 
        int  year,  month,  day,  hour,  minute,  second; 
        cin  >>  year  >>  month  >>  day  >>  hour  >>  minute  >>  second; 
        CTime  t1(year,  month,  day,  hour,  minute,  second); 
        t1.showTime(); 
        CTime  t2(2000,  1,  1);  //����Ĭ���βν�ʱ���ʼ��Ϊ00:00:00 
        if  (t1.isvalid())          //������ں�ʱ��Ϸ������������ 
        { 
                int  days=0; 
                days=t1.dayDiff(t2); 
                cout  <<  "������֮�������"  <<  days  <<  "��"  <<  endl; 
                days=t2.dayDiff(t1); 
                cout  <<  "������֮�������"  <<  days  <<  "��"  <<  endl; 
        } 
}
