#include "paymoney.h"
#include<iostream>
#include<string>
#include<cmath>
#include<QDebug>
#include<iomanip>
#include<QtGlobal>
#include "ui_mainwindow.h"
using namespace std;
double paymoney::monthlixi1(double money,int period,double monthrate)
{
    double x=pow(1+monthrate,period);
    double y=(x-1)/monthrate;
    double z=money*x/y;
    return z;
}
double paymoney::daikuanlixi1(double money,int period,double monthrate)
{
    double x=pow(1+monthrate,period);
    double y=(x-1)/monthrate;
    double z=money*x/y;//每月还款
    double w=z*period-money;//全部利息
    return w;
}
double paymoney::huankuan1(double money,int period,double monthrate)
{
    double x=pow(1+monthrate,period);
    double y=(x-1)/monthrate;
    double z=money*x/y;//每月还款
    double w=z*period-money;//全部利息
    return (z+w);
}
double paymoney::firstmonth2(double money,int period,double monthrate)
{
    double a=money/period;//每月还款
    double b=money*monthrate;//第一个月的利息
    return (a+b);
}
double paymoney::monthdijian2(double money,int period,double monthrate)
{
    double a=money/period;//每月还款
    double c;
    c=a*monthrate;//每月减少还款
    return c;
}
double paymoney::daikuanlixi2(double money,int period,double monthrate)
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
    return sum;
}
double paymoney::huankuan2(double money,int period,double monthrate)
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
    return (money+sum);
}

