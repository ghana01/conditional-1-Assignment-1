/*Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three points fall on one straight line.*/
#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the 1st point on line"<<endl;
    cin>>x1>>y1;
     cout<<"Enter the 2nd point on line"<<endl;
    cin>>x2>>y2;
     cout<<"Enter the 3rd point on line"<<endl;
    cin>>x3>>y3;
    if ((y3 - y2) * (x2 - x1) == (y2 - y1) * (x3 - x2)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
        

}