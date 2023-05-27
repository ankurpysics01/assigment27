// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
#include<iostream>
using namespace std;


class Time {
    private: 
    int h,m,s;

    public:
        Time (int hours,int mintus,int second){
            h=hours;
            m=mintus;
            s=second;
        }
        Time(){

        }
        
        bool operator== (Time t){
            if (h==t.h && m==t.m && s==t.s){
                return true;
            }
            else{
                return false;
            }
        }
        friend ostream & operator<<(ostream & os ,Time t);
        friend ostream & operator>>(ostream & os ,Time t);
            

};
ostream & operator<<(ostream & os ,Time t){
    os<<"Hour : "<<t.h<<endl<<"Minutes : "<<t.m<<endl<<"seconds : "<<t.s<<endl;
    return os;
}
ostream & operator>>(ostream & os ,Time t){
    os<<"\nEnter hour : ";
    cin>>t.h;
    os<<"\nEnter minutes : ";
    cin>>t.m;
    os<<"\nEnter seconds : ";
    cin>>t.s;
    return os;
}
int main(){
    int h,m,s,h1,m1,s1;
    Time t1(h,m,s),t2(h1,m1,s1);
    cout<<"Enter the first time "<<endl;
    cout<<"----------------------"<<endl;
    cout>>t1;
    cout<<"First Time "<<endl;
    cout<<t1;
    cout<<"Enter the second time "<<endl;
    cout<<"----------------------"<<endl;
    cout>>t2;
    cout<<"Second time "<<endl;
    cout<<t2;
    if(t1==t2){
        cout<<"Time are same "<<endl;
    }
    else{
        cout<<"Time are not same "<<endl;
    }
}