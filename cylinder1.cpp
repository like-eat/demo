#include<iostream>
#include<iomanip>
using namespace std;
const double PI=3.1415926;
class cylinder
{
	public:cylinder(double H,double R);
	        ~cylinder();
			double getvolumn();
			double getarea();
	private:double r,h;
};
cylinder::cylinder(double H,double R)
{
	h=H;
	r=R;
	cout<<"构造函数被调用"<<endl;
}
cylinder::~cylinder()
{
	cout<<"析构函数被调用";
}
double cylinder::getvolumn()
{
	return PI*r*r*h;
} 
double cylinder::getarea()
{
	return 2*PI*r*h+PI*r*r*2;
}
int main()

{

    double d,h;

    cin>>d>>h;

    cylinder can(h,d/2);

    cout<<fixed<<setprecision(6);

    cout<<"油桶的容积是"<<can.getvolumn()<<" "<<endl;

    cout<<"铁皮的面积是"<<can.getarea()<<endl;

}
