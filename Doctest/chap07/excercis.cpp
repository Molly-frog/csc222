#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;
};

struct Rectangle{
    Point upright;
    Point upleft;
    Point lowright;
    Point lowleft;
};

int distance_from_points(Point p1, Point p2) {
    return sqrt(pow((p2.x - p1.x), 2) * pow((p2.y - p1.y), 2));
}

int area_rectangle(int length, int width){
    return length * width;
}


int main(){
    Rectangle r = {{2,0}, {6,0}, {2,2}, {6,2}};
    int length = distance_from_points(r.lowleft.x, r.lowright.x);
    int width = distance_from_points(r.upright.y, r.lowright.y);
    int area = area_rectangle(length, width);
}

