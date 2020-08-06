#ifndef _CLOCK_HPP_
#define _CLOCK_HPP_

#include <iostream>
using namespace std;
class Time{
private:
    int hour,minute,second;
public:
    Time(int h=0,int m=0,int s=0);
    ~Time(){}
    void swap(Time& t);
    void operator()(int h,int m,int s);
    Time& operator=(Time t);
    Time operator++();      // 前缀++
    Time operator--();      // 前缀--
    Time operator++(int);   // 后缀++
    Time operator--(int);   // 后缀--
    void ShowTime();
};

#endif