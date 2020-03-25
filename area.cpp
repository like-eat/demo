#include<iostream>
#include<cmath>
using namespace std;
class CRectangle;
class CPoint
{
	friend CRectangle;
	public:CPoint();
	       CPoint(int Newx,int Newy);
	       CPoint(CPoint &q);
	private:int x,y;
};
CPoint::CPoint()
{
	x=0;y=0;
	cout<<"CPoint contstructor with default value(0,0) is called."<<endl;
}
CPoint::CPoint(int Newx,int Newy)
{
	x=Newx;y=Newy;
	cout<<"CPoint contstructor with default value(0,0) is called."<<endl;
}
CPoint::CPoint(CPoint &q)
{
	x=q.x;y=q.y;
	cout<<"CPoint copy contstructor is called."<<endl;
}
class CRectangle
{
	public:
	CRectangle();
	CRectangle(CPoint p,CPoint q);
	CRectangle(int a,int b,int c,int d);
	CRectangle(CRectangle &a);
	int GetArea();
	private:CPoint p1,p2;
};
CRectangle::CRectangle()
{
	cout<<"CRectangle default contstructor is called."<<endl;
}
CRectangle::CRectangle(CPoint p,CPoint q):p1(p),p2(q)
{
	cout<<"CRectangle contstructor with (CPoint,CPoint) is called."<<endl;
}
CRectangle::CRectangle(int a,int b,int c,int d):p1(a,b),p2(c,d)
{
	cout<<"CRectangle contstructor with (int,int,int,int) is called."<<endl;
}
CRectangle::CRectangle(CRectangle &a):p1(a.p1),p2(a.p2)
{
	cout<<"CRectangle copy contstructor is called."<<endl;
}
int CRectangle::GetArea()
{
	return (p1.x-p2.x)*(p1.y-p2.y);
}
int main()

{

    int a=1, b=1, c=6, d=11;

    cout<<"# Define p1 ######"<<endl;

    CPoint p1;

    cout<<"# Define p2 ######"<<endl;

    CPoint p2(10,20);

    cout<<"# Define rect1 ######"<<endl;

    CRectangle rect1;

    cout<<"# Define rect2 ######"<<endl;

    CRectangle rect2(p1, p2);

    cout<<"# Define rect3 ######"<<endl;

    CRectangle rect3(a, b, c, d);

    cout<<"# Define rect4 ######"<<endl;

    CRectangle rect4(rect2);

    cout<<"# Calculate area ######"<<endl;

    cout << "rect1面积为" << rect1.GetArea() << endl;

    cout << "rect2面积为" << rect2.GetArea() << endl;

    cout << "rect3面积为" << rect3.GetArea() << endl;

    cout << "rect4面积为" << rect4.GetArea() << endl;

    system("pause");

    return 0;

}
