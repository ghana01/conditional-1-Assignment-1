/*Given the length and breadth of a rectangle, write a program to find whether numerically the area of
the rectangle is greater than its perimeter.*/
#include<iostream>
using namespace std;
int main(){
  int l,b;
  cout<<"Enter the length and breadth"<<endl;
  cin>>l>>b;
  int area=l*b;
  int perimeter =2*(l+b);
  if(area>perimeter) cout<<"area is greater than perimeter";
  else cout<<"perimeter is greater than area";
}