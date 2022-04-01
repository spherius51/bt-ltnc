#include<iostream>

using namespace std;

struct Point{
    double x;
    double y;
    Point(double _x, double _y){
        x=_x;
        y=_y;
    }

    void printf(){
        cout << x << y;
    }
};

int main(){
    Point a(1,2);
    a.printf();
}
