#include  <iostream> 
#include<iomanip> 
#include  <cmath> 
using  namespace  std; 
const  double  PI=3.1415926; 
class cylinder
{
	public:void init(double R,double H);
	       double getvolumn();
	       double getarea();
	private:double r, h;
};
 void cylinder :: init(double H,double R)
        {
        	r=R;
        	h=H;
		}
 double cylinder :: getvolumn()
        {
        	double V;
        	V=PI*r*r*h;
        	return V;
		}
 double cylinder :: getarea()
        {
        	double S;
        	S=PI*r*r*2+2*PI*r*h;
        	return S;
		}
int  main() 
{ 
        double  d,h; 
        cin>>d>>h;   
        cylinder can;
        can.init(h,d/2); 
        cout<<fixed<<setprecision(6); 
        cout<<"油桶的容积是"<<can.getvolumn()<<"  "<<endl; 
        cout<<"铁皮的面积是"<<can.getarea()<<endl; 
} 
