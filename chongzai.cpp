#include  <iostream> 
#include  <iomanip> 
using  namespace  std; 

struct  complex 
{ 
        double  r; 
        double  i; 
};
 complex add(complex a,complex b)
 {
 	complex f;
 	f.r=a.r+b.r;f.i=a.i+b.i;
 	return f;
 }
 complex add(complex a,double b)
 {
 	complex f;
 	f.r=a.r+b;f.i=a.i;
 	return f;
 }
 complex add(double a,complex b)
 {
 	complex f;
 	f.r=a+b.r;f.i=b.i;
 	return f;
 }
int  main() 
{ 
        double  num; 
        complex  a,  b,  c; 
        cin  >>  a.r  >>  a.i; 
        cin  >>  b.r  >>  b.i; 
        cin  >>  num; 
        c  =  add(a,  b); 
        cout  <<  c.r  <<  "+"  <<  c.i  <<  "i"  <<  endl; 
        c  =  add(a,  num); 
        cout  <<  c.r  <<  "+"  <<  c.i  <<  "i"  <<  endl; 
        c  =  add(num,  b); 
        cout  <<  c.r  <<  "+"  <<  c.i  <<  "i"  <<  endl; 
} 
