#include  <iostream> 
#include  <iomanip> 
using  namespace  std;
int xiaoshu(double n)
{
	int num=0;
	while(n!=int(n))
	{
		n*=10;
		num++;
	}
	return num;
}
class Account
{
	public:void init(const char* newnumber,const char* newname,const char* newgenger,int newage,double newmoney);
           void printmoney();
		   void deposit(double Newmoney);
		   void withdraw(double Nmoney); 	
	private:const char* number,*name,*genger;int age;double money;
};
    void Account ::init(const char* newnumber,const char* newname,const char* newgenger,int newage,double newmoney)
    {
    	number=newnumber;name=newname;genger=newgenger;age=newage;money=newmoney;
    	int c;c=xiaoshu(money);
    	if(c>2)
    	{
    		cout<<"������Ľ��Ϸ�"<<endl;
    		money=0;
		}
	}
	void Account ::printmoney()
	{
		int c;c=xiaoshu(money);
		cout.setf(ios::fixed);
		cout<<name<<"�Ĵ��Ϊ"<<setprecision(2)<<money<<endl;
	}
	void Account ::deposit(double Newmoney)
	{
		int a;a=xiaoshu(Newmoney);
		if(a>2)
		cout<<"������Ľ��Ϸ�"<<endl;
		else
		money=money+Newmoney; 
	}
	void Account ::withdraw(double Nmoney)
	{
		int b;b=xiaoshu(Nmoney);
		if(b>2)
		cout<<"������Ľ��Ϸ�"<<endl;
		else if(Nmoney>money)
		cout<<"���Ĵ�����"<<endl; 
		else
		money=money-Nmoney;
	}
int  main() 
{ 
        Account  tom; 
        tom.init("32020320011001876X",  "Tom  Black",  "��",  19,  2000.89); 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ2000.89 
        tom.deposit(89.471);//�����������Ľ��Ϸ� 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ2000.89 
        tom.deposit(10000); 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ12000.89 
        tom.withdraw(10001); 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ1999.89 
        tom.withdraw(10000.123);//�����������Ľ��Ϸ� 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ1999.89 
        tom.withdraw(10000.9);//��������Ĵ����� 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ1999.89 
        Account  jerry; 
        jerry.init("320203200910116569",  "Jerry  Black",  "Ů",  11,  100.956);//�����������Ľ��Ϸ� 
        jerry.printmoney();//�����Jerry  Black�Ĵ��Ϊ0.00 
}
