/*Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).*/
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the vlaue of point on axis"<<endl;
    cin>>x>>y;
    if(x==0 && y==0) cout<<"POint lies on the origin";
    else if(x!=0 && y==0) cout<<"Point lies on x axis";
    else if(x==0 && y!=0) cout<<"Point lies on y axis";
  
  
}