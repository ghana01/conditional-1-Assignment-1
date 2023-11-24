/*If the marks of A, B and C are input through the keyboard, write a program to determine the student
scoring the least marks.*/
#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter the marks of A, B and C"<<endl;
    cin>>A>>B>>C;
    if(A<B && B<C) cout<<"A is scoring least marks";
    else if(B<A && A<C) cout<<"B is scoring least marks";
    else  cout<<"C is scoring least marks";
  
}