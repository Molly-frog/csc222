#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

// TEST_CASE("Testing render_num_vector") {
//     vector<int> nums = {1, 3, 7};
//     string numstr = render_num_vector(nums);
//     string expected = "1 3 7";
//     CHECK(numstr == expected);

//     vector<int> test2 = {1, 3, 5, 7, 9, 11};
//     string test2str = render_num_vector(test2);
//     string expected2 = "1 3 5 7 9 11";
//     CHECK(test2str == expected2);
// }

// TEST_CASE("Testing num_vector_product") {
//     vector<int> nums = {2, 3, 7};
//     CHECK(42 == num_vector_product(nums));

//     vector<int> test2 = {56, 7, 1};
//     CHECK(392 == num_vector_product(test2));

//     vector<int> test3 = {4, 4, 4};
//     CHECK(64 == num_vector_product(test3));
// }

TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    string evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(evens == expected);
}

