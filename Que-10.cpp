// Class Matrix
// {
//  int a[3][3];
//  Public:
//  //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).

#include<iostream>
using namespace std;

class Matrix{
    int a[3][3];
    public:
       void accept();
       void display();
       void operator+(Matrix t);

};
void Matrix::accept(){
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
}
void Matrix::display(){
    cout<<"The elements of the matrix are: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
void Matrix::operator+ (Matrix t){
    int m[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            m[i][j]=a[i][j]+t.a[i][j];
        }
    }
    cout<<"The final sum element is -"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
Matrix m1,m2;
m1.accept();
cout<<"Matrix 1st ->"<<endl;
m1.display();
m2.accept();
cout<<"Matrix 2st ->"<<endl;
m2.display();
m1+m2;
return 0;
}