#ifndef _EXCEPTION_HPP_
#define _EXCEPTION_HPP_

const int MAX=3;
class Full{
    int a;
    public:
        Full(int i):a(i){}
        int getValue(){return a;}
};
class Empty{};
class Stack{
    private:
        int s[MAX];
        int top;
    public:
        Stack(){top=-1;}
        void push(int a){
            if(top>=MAX-1)  
                throw Full(a);			
            s[++top]=a;
        }
        int pop(){
            if(top<0)
                throw Empty();
            return s[top--];
        }
};

#endif