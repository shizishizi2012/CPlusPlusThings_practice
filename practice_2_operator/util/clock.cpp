#include "clock.h"

Time::Time(int h,int m,int s) {
    hour=h;
    minute=m;
    second=s;
    if (hour>=24)
        hour=0;
    if (minute>=60)
        minute=0;
    if (second>=60)
        second=0;
}

void Time::swap(Time& t) {
    using std::swap;
    swap(this->second, t.second);
    swap(this->minute, t.minute);
    swap(this->hour, t.hour);
}

void Time::operator()(int h,int m,int s) {
    hour=h;
    minute=m;
    second=s;
    if (hour>=24)
        hour=0;
    if (minute>=60)
        minute=0;
    if (second>=60)
        second=0;
}

Time& Time::operator=(Time t) {
    swap(t);
    return *this;
}

void Time::ShowTime() {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
}

Time Time::operator++() {
    ++second;
    if (second>=60){
        second=0;
        ++minute;
        if(minute>=60){
            minute=0;
            ++hour;
            if(hour>=24)
                hour=0;
        }
    }
    return *this;  
}

Time Time::operator--() {
    --second;
    if (second>=60){
        second=0;
        ++minute;
        if(minute>=60){
            minute=0;
            ++hour;
            if(hour>=24)
                hour=0;
        }
    }
    return *this;  
}

Time Time::operator++(int) {
    second++;
    if (second>=60){
        second=0;
        ++minute;
        if(minute>=60){
            minute=0;
            ++hour;
            if(hour>=24)
                hour=0;
        }
    }
    return *this;  
}

Time Time::operator--(int) {
    second--;
    if (second>=60){
        second=0;
        ++minute;
        if(minute>=60){
            minute=0;
            ++hour;
            if(hour>=24)
                hour=0;
        }
    }
    return *this;  
}