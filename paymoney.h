#ifndef PAYMONEY_H
#define PAYMONEY_H


class paymoney
{
public:
    //等额本息
    double monthlixi1(double money,int period,double monthrate);
    double daikuanlixi1(double money,int period,double monthrate);
    double huankuan1(double money,int period,double monthrate);
    double firstmonth2(double money,int period,double monthrate);
    double monthdijian2(double money,int period,double monthrate);
    double daikuanlixi2(double money,int period,double monthrate);
    double huankuan2(double money,int period,double monthrate);
};

#endif // PAYMONEY_H
