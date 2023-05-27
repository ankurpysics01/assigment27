//3. Write a C++ program to add two complex numbers using operator overloaded by a friend
// function
#include<iostream>
using namespace std;

class Complex{
    int x,y;
    public:
    Complex(int a,int b){
        x=a;
        y=b;
    }
    Complex(){

    }
    friend Complex operator + (Complex c1,Complex c2);

    void display(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }
  
};

Complex operator+(Complex c1, Complex c2){
    Complex c;
    c.x=c1.x+c2.x;
    c.y=c1.y+c2.y;
    return c;
};
int main(){
    Complex c1(1,2),c2(3,4),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}