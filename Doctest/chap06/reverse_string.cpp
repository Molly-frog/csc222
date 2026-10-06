#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

Add the following test case for the function reverse_string(string) that takes a string, s, as an argument, and returns a new string which has the charaters from s in reverse order.


string reverse_string(string s){
    return s;
}

TEST_CASE("reverse_string(s) returns s backwards") {
    CHECK(reverse_string("happy") == "yppah");
    //CHECK(reverse_string("GHC!") == "!CHG");
   // CHECK(reverse_string("The end.") == ".dne ehT");
}
