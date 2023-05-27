// 6. Create a class CString to represent a string.
//  a) Overload the + operator to concatenate two strings.
//  b) == to compare 2 strings.
#include<iostream>
#include<string.h>
using namespace std;

class Cstring{
    char str[20];
    public:
     void stringadd(){
        cout<<"Enter the string : ";
        cin>>str;
     }
     void display(){
        cout<<"\nFinal string is = "<<str<<endl;
     }
     Cstring operator+ (Cstring t){
        Cstring c;
        strcpy(c.str,str);
        strcat(c.str,t.str);
        return c;
     }
     Cstring(){

     }
     bool operator==(Cstring &t){
        bool isequal=true;
        for(int i=0;i<str[i];i++){
            if(str[i]!=t.str[i]){
                isequal=false;
                break;    
            }
            else{
                isequal=true;
                break;
            }
            
        }
        return isequal;
     }
};

int main(){
    Cstring c1,c2;
    c1.stringadd();
    c2.stringadd();
    c1=c1+c2;
    c1.display();
    if(c1==c2){
        cout<<"Both string is equal "<<endl;
    }
    else{
        cout<<"Both string is not equal "<<endl;
    }
    return 0;
}