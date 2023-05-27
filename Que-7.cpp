// Define a C++ class fraction
// class fraction
// {
//  long numerator;
//  long denominator;
//  Public:
//  fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>
#include<iostream>
using namespace std;

class fraction{
    long nume,deno;
    public:
        fraction(long n=0,long d=0){
            nume=n;
            deno=d;
        }
        friend istream&  operator>>(istream &in,fraction &f){
            cout<<"\n Enter the Numerator : ";
            in>>f.nume;
            cout<<"\n Enter the Denomenator : ";
            in>>f.deno;
        }
        friend ostream& operator<<(ostream &out,fraction &f){
            cout<<f.nume<<"/"<<f.deno<<endl;
        }

        fraction operator++(){
            ++nume;
            ++deno;
            return(*this);
        }
        fraction operator++(int s){
            fraction temp=*this;
            nume++;
            deno++;
            return temp;

        }
};
int main(){
    fraction f1,f2;
    cout<<"\n\n Enter 1st fraction value :\n";
    cin>>f1;

    cout<<"\n f1++  : ";
    f1++;
    cout<<f1;
    cout<<"\n ++f1 : ";
    ++f1;
    cout<<f1;

    cout<<"\n\n Enter 2st fraction value :\n";
    cin>>f2;
    cout<<"\nf2=++f1  ";
    f2=++f1;
    cout<<"\nf1 : "<<f1;
    cout<<"\nf2 : "<<f2;
    cout<<"\nf2=f1++  ";
    f2=f1++;
    cout<<"\nf1 : "<<f1;
    cout<<"\nf2 : "<<f2;
    return 0;


}