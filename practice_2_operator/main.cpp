#include "util/clock.h"
#include "util/complex.hpp"

int main(){
    Time t1(12,10,11);
    t1.ShowTime();
    t1.operator()(23,20,34);	
    t1.ShowTime();
    t1(10,10,10);               	
    t1.ShowTime();

    Complex c1(1,2),c2(3,4),c3,c4,c5,c6; 
    Complex a,b(2,3);
    Complex a1=b+2;       			
    Complex a2=2+b;       	 
    a1.display();
    a2.display();  
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c6=c1/c2;
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();

    cin.get();
}