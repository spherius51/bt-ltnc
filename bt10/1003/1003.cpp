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
        cout << x << " " << y;
    }
};
  Point mid_point1(Point p1, Point p2) {
        Point p3(0,0);
        p3.x=(p1.x+p2.x)/2;
        p3.y=(p1.y+p2.y)/2;
        cout << &p1;
        return p3;
}
    Point mid_point(Point &p1, Point &p2) {
        Point p3(0,0);
        p3.x=(p1.x+p2.x)/2;
        p3.y=(p1.y+p2.y)/2;
        cout << &p1 << endl;
        return p3;
    }

int main(){
    Point p1(1,2);
    Point p2(2,3);
    cout << &p1 << endl;
    Point p3=mid_point1(p1, p2);


    return 0;
}
