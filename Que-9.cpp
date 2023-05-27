// Consider the following class mystring

// Class mystring
// {
//  char str [100];
//  Public:
//  // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to
// Lowercase and vice versa)
#include<iostream>
#include<string.h>
// #include<string>
using namespace std;

class mystring{
    char str[500];//if you need to add the multiple line string than using the (string str;)
    public:
        void operator!();
        void accept_string(){
            cout<<"Enter the string: ";
            // getline(cin,str);//this paragraph use
            cin>>str;
        }
};
void mystring::operator!(){
    int i;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    cout<<"Reverse the case of each alphabet is = "<<str<<endl;
}

int main(){
    mystring s;
    s.accept_string();
    !s;
    return 0;
}