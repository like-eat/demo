#include "paymoney.h"
#include<iostream>
#include<string>
#include<cmath>
#include<QDebug>
#include<iomanip>
using namespace std;
void paymoney::Paymoney(double money,int period,double rate,int type)
{
    if(money<=0||period<=0)
        qDebug()<<"输入不合法！";
    else
    {
        period=period*12;
        double monthrate=rate/1200;
        if(type==1)//类型为等额本息时
        {
            Paymoney1(money,period,monthrate);
        }
        else if(type==2)//类型为等额本金时
        {
            Paymoney2(money,period,monthrate);
        }
    }
}
void paymoney::combined(double money1, double rate1, double money2, double rate2, int period, int type)
{
    if(money1<=0||money2<=0||period<=0)
        qDebug()<<"输入不合法！";
    else
    {
        period=period*12;
        double monthrate1=rate1/1200;
        double monthrate2=rate2/1200;
        qDebug()<<"第一部分商业贷款还款"<<endl;
        if(type==1)
        {
            Paymoney1(money1,period,monthrate1);
        }
        else if(type==2)
        {
            Paymoney2(money1,period,monthrate1);
        }
        qDebug()<<"第二部分公积金贷款还款"<<endl;
        if(type==1)
        {
            Paymoney1(money2,period,monthrate2);
        }
        else if(type==2)
        {
            Paymoney2(money2,period,monthrate2);
        }
    }
}
void paymoney::Paymoney1(double money, int period, double monthrate)//等额本息
{
     double x=pow(1+monthrate,period);
     double y=(x-1)/monthrate;
     double z=money*x/y;//每月还款
     double w=z*period-money;//全部利息
     qDebug()<<"每月还款"<<QString("%1").arg(z,0,'f',1)<<endl;
     qDebug()<<"贷款总额"<<QString("%1").arg(money,0,'f',0)<<endl;
     qDebug()<<"贷款利息"<<QString("%1").arg(w,0,'f',0)<<endl;
     qDebug()<<"贷款总额"<<QString("%1").arg(w+money,0,'f',0)<<endl;
     qDebug()<<"还款月数"<<period<<endl;
}
void paymoney::Paymoney2(double money, int period, double monthrate)//等额本金
{
    double a=money/period;//每月还款
    double b=money*monthrate;//第一个月的利息
    double c,sum;
    c=a*monthrate;//每月减少还款
    sum=b*period;
    for(int i=0;i<period;i++)
    {
        sum=sum-c*(i+1);
    }
    qDebug()<<"首月月供"<<QString("%1").arg(a+b,0,'f',1)<<endl;
    qDebug()<<"每月递减"<<QString("%1").arg(c,0,'f',0)<<endl;
    qDebug()<<"贷款总额"<<QString("%1").arg(money,0,'f',0)<<endl;
    qDebug()<<"支付利息"<<QString("%1").arg(sum,0,'f',0)<<endl;
    qDebug()<<"贷款总额"<<QString("%1").arg(money+sum,0,'f',0)<<endl;
    qDebug()<<"贷款月数"<<period<<endl;
}
