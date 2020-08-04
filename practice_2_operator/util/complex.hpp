/*
在C++的标准命名空间std中预定义了复数类Complex，
并且通过友元重载了Complex的各种运算，包括本程序中重载的+、-、*、/。
若使用using namespace std将std名字空间引入本程序，
则本程序中的Complex将与std名字空间中的Complex类的运算符重载函数产生冲突，引起编译错误。
*/
/*
对于不要求左值且可以交换参数次序的运算符（如+、-、*、/ 等运算符），
最好用非成员形式（包括友元和普通函数）的重载运算符函数实现。[如此，“你+别人”或者“别人+你”都能正常使用]
[解决前面“Complex+2没问题，但是2+Complex出了问题”的情况。]
*/

#include<iostream>


class Complex{
    private:
        double r,i;
    public:
        Complex(double R=0,double I=0):r(R),i(I){};
        friend Complex operator+(Complex a, Complex b);
        friend Complex operator-(Complex a, Complex b);
        friend Complex operator*(Complex a, Complex b);
        friend Complex operator/(Complex a, Complex b);

        //你+别人
        friend Complex operator+(Complex a,double b){
            return Complex(a.r+b,a.i);
        }
        //别人+你
        friend Complex operator+(double a,Complex b){
            return Complex(a+b.r,b.i);
        }
        
        void display();
};

Complex operator+(Complex a, Complex b){
    return Complex(a.r+b.r,a.i+b.i); 
}
Complex operator-(Complex a, Complex b){
    return Complex(a.r-b.r,a.i-b.i);
}
Complex operator*(Complex a, Complex b){
    Complex t;
    t.r = a.r*b.r-a.i*b.i;
    t.i = a.r*b.i+a.i*b.r;
    return t;
}
Complex operator/(Complex a, Complex b){
    Complex t;
    double x;
    x = 1/(b.r*b.r+b.i*b.i);
    t.r = x*(a.r*b.r+a.i*b.i);
    t.i = x*(a.i*b.r-a.r*b.i);
    return t;
}

void Complex::display(){
    std::cout<<r;
    if(i>0)
        std::cout<<"+";
    if(i!=0)
        std::cout<<i<<"i"<<std::endl;
}