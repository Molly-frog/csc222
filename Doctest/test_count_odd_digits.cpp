#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int count_odd_digits(int n){
    int count = 0;

    if (n == 0) {
        return count;
    }

    for (int i = 1; i <= n; i += 2){
        ++count;
    }

    return count;
}

TEST_CASE("count_odd_digits(int n) returns number of odd decimal digits in n") {
    //CHECK(count_odd_digits(73) == 2);
    //CHECK(count_odd_digits(723) == 2);
    //CHECK(count_odd_digits(888) == 0);
    CHECK(count_odd_digits(1) == 1);
    //CHECK(count_odd_digits(103002) == 2);
    //CHECK(count_odd_digits(0xFF) == 1);
    //CHECK(count_odd_digits(0123) == 2);
}
