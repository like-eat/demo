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
    		cout<<"您输入的金额不合法"<<endl;
    		money=0;
		}
	}
	void Account ::printmoney()
	{
		int c;c=xiaoshu(money);
		cout.setf(ios::fixed);
		cout<<name<<"的存款为"<<setprecision(2)<<money<<endl;
	}
	void Account ::deposit(double Newmoney)
	{
		int a;a=xiaoshu(Newmoney);
		if(a>2)
		cout<<"您输入的金额不合法"<<endl;
		else
		money=money+Newmoney; 
	}
	void Account ::withdraw(double Nmoney)
	{
		int b;b=xiaoshu(Nmoney);
		if(b>2)
		cout<<"您输入的金额不合法"<<endl;
		else if(Nmoney>money)
		cout<<"您的存款金额不足"<<endl; 
		else
		money=money-Nmoney;
	}
int  main() 
{ 
        Account  tom; 
        tom.init("32020320011001876X",  "Tom  Black",  "男",  19,  2000.89); 
        tom.printmoney();//输出：Tom  Black的存款为2000.89 
        tom.deposit(89.471);//输出：您输入的金额不合法 
        tom.printmoney();//输出：Tom  Black的存款为2000.89 
        tom.deposit(10000); 
        tom.printmoney();//输出：Tom  Black的存款为12000.89 
        tom.withdraw(10001); 
        tom.printmoney();//输出：Tom  Black的存款为1999.89 
        tom.withdraw(10000.123);//输出：您输入的金额不合法 
        tom.printmoney();//输出：Tom  Black的存款为1999.89 
        tom.withdraw(10000.9);//输出：您的存款金额不足 
        tom.printmoney();//输出：Tom  Black的存款为1999.89 
        Account  jerry; 
        jerry.init("320203200910116569",  "Jerry  Black",  "女",  11,  100.956);//输出：您输入的金额不合法 
        jerry.printmoney();//输出：Jerry  Black的存款为0.00 
}
