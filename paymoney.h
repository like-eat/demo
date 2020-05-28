#ifndef PAYMONEY_H
#define PAYMONEY_H


class paymoney
{
public:
    void Paymoney(double money,int period,double rate,int type);
    void combined(double money1,double rate1,double money2,double rate2,int period,int type);
private:
    void Paymoney1(double money,int period,double monthrate);
    void Paymoney2(double money,int period,double monthrate);//money贷款金额,period还款日期,rate代表利率，这里采取输入的方法,type代表是等额本金还是等额本息。
};

#endif // PAYMONEY_H
