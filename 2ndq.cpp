//2.Given the radius of the circle, predict whether numerically the area of this circle is larger than the
//circumference or not.
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the value of radius:";
    cin>>r;
    float pi =3.14;
    int area = pi*r*r;
    int circumfrence = 2*pi*r;
    if(area>circumfrence) cout<<"area is grater than circumfrence";
    else cout<<"circumfrenceis grater than area";
}