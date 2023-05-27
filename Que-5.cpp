// 5-Consider following class Numbers
// class Numbers
// {
//  int x,y,z;
//  public:
//  // methods
// };
// Overload the operator unary minus (-) to negate the numbers
#include<iostream>
using namespace std;

class Number{
    int x,y,z;

    public:
    void accept(){
      cout<<"Enter the first : ";
      cin>>x;
      cout<<"\nEnter the second : ";
      cin>>y;
      cout<<"\nEnter the thirld : ";
      cin>>z;
     }

     void operator -()
     {
        x=-x;
        y=-y;
        x=-z;
     }
     void display(){
        cout<<"\tx = "<<x<<"\ty = "<<y<<"\tz = "<<z<<endl;
     }
};
int main(){
    Number n;
    n.accept();
    -n;
    n.display();
    return 0;
}