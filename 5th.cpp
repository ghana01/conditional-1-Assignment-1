/*Write a program to input sides of a triangle and check whethe equilateralr a triangle is e, scalene or
isosceles triangle.*/
#include<iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"Enter the side of triangle"<<endl;
   cin>>a>>b>>c;
   if((a+b>c)&&(a+c>b)&&(b+c>a)){
    if((a==b) && (b==c)) cout<<"This triangle is equilatera";
    else if(a == b || b == c || c == a) cout<<"This triangle is  scalen";
    else cout<<"This traingle is isoscales";
   }
}