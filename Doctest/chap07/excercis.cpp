#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Rectangle{
    Point upr;
    Point upl;
    Point lowr;
    Point lowl;
};

int lower_right(Rectangle r) {
    cout << "( " << r.lowr.x << " , " << r.lowr.y << " )" << endl;
    return 0;
}




TEST_CASE("distance_from_origin(p) returns p's distance from (0,0) ") {
    Rectangle r = {{3, 4}, {7,8}, {3,1}, {7,4}};
    CHECK(lower_right(r) == "(r.lowr.x , r.lowr.y)");
}
