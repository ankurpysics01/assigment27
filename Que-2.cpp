//2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;

class op{
    int n;
    public:
    op(int x){
        n=x;
    }
    op(){

    }
    void operator++(void)//pre increment 
    {
        n=++n;
    }
    void operator--(void)//pre decrement 
    {
        n=--n;
    }
    void display(){
        // cout<<"the incrrimental value is "<<a<<endl;
       cout<<"the dcrimental value is "<<n<<endl;

    }
};
int main(){
    op o1(4),c2;
    ++o1;
    o1.display();
    --o1;
    o1.display();
    return 0;
}