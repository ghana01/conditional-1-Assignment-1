//4.Any year is input through the keyboard. Write a program to determine whether the year is a leap year
//or not.
#include<iostream>
using namespace std;
int main(){
  int year;
  cout<<"enter the year"<<endl;
  cin>>year;
  if(year%4==0) cout<<"yes";
  else cout<<"NO";
}