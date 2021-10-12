//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
#include <deque>
#include <list>
#include <vector>
#include <forward_list>
#include <iterator>

using namespace std;

static void test_1() {
    forward_list<int> fl = {1, 2, -3, 1, 5, -3, -2, 5};
    auto result = get_zero_sum_ranges<deque>(fl);
    vector<string> v1;
    for (const auto& row: result) {
        stringstream ss;
        copy(begin(row), end(row), ostream_iterator<int>(ss, " "));
        v1.insert(lower_bound(begin(v1), end(v1), ss.str()), ss.str());
    }
    copy(begin(v1), end(v1), ostream_iterator<string>(cout, "\n"));
}

static void test_2() {
    list<int> lst {istream_iterator<int>(cin), istream_iterator<int>()};
    auto result = get_zero_sum_ranges(lst);
    vector<string> v1;
    for (const auto& row: result) {
        stringstream ss;
        copy(begin(row), end(row), ostream_iterator<int>(ss, " "));
        v1.insert(lower_bound(begin(v1), end(v1), ss.str()), ss.str());
    }
    copy(begin(v1), end(v1), ostream_iterator<string>(cout, "\n"));
}

TEST_CASE("Question #2_1") {
    execute_test("test_2_1.in", test_1);
}

TEST_CASE("Question #2_2") {
    execute_test("test_2_2.in", test_2);
}