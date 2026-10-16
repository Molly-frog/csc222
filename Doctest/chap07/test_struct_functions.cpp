#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

int distance_from_origin(Point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}




TEST_CASE("distance_from_origin(p) returns p's distance from (0,0) ") {
    Point p = {3, 4};
    CHECK(distance_from_origin(p) == 5.0);
}
