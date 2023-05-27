// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(int x,int y){
            a=x;
            b=y;
        }
        Complex(){

        }
        Complex operator+ (Complex t){
            Complex c;
            c.a=a+t.a;
            c.b=b+t.b;
            return c;
        }
         Complex operator- (Complex t){
            Complex c;
            c.a=a-t.a;
            c.b=b-t.b;
            return c;
        }
         Complex operator* (Complex t){
            Complex c;
            c.a=a*t.a;
            c.b=b*t.b;
            return c;
        }
         bool operator== (Complex t){
            Complex c;
            if(a==t.a && b==t.b ){
                return true;
            }
            else{
                return false;
            }
        }
        void display(){
            cout<<" Complex value is = "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    Complex c1(4,6),c2(2,3),c3;
    c3=c1+c2;
    c3.display();
    c3=c1-c2;
    c3.display();
    c3=c1*c2;
    c3.display();
    cout<<" Compaier c1==c2 "<<(c1==c2)<<endl;
    return 0;
}