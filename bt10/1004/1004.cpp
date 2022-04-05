#include<iostream>

using namespace std;

struct Point{
    double x;
    double y;
    Point(double _x, double _y){
        x=_x;
        y=_y;
    }
    Point(){}
    void printf(){
        cout << x << y;
    }
};

int main(){
    Point a;
    cout << &a << endl << &a.x << endl << &a.y;
    //dia chi cua bien Point trung dia chi voi truong x va khac truong y
}
