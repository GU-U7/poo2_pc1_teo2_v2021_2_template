//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

static void test_1() {
    join_vectors_t jv1({1, 5, 3, 8, 2}, {4, 9, 7, 6, 10, 1});

    // imprimiendo los datos
    std::copy(jv1(), jv1()+jv1.size(), std::ostream_iterator<int>(std::cout," "));
    std::cout << std::endl;

    !jv1;
    std::copy(jv1(), jv1()+jv1.size(), std::ostream_iterator<int>(std::cout," "));
    std::cout << std::endl;
}

static void test_2() {
    int n1 = 0, n2 = 0;
    std::cin >> n1;
    std::cin >> n2;
    std::vector<int> v1(n1);
    std::vector<int> v2(n2);
    std::copy_n(std::istream_iterator<int>(cin), n1, begin(v1));
    std::copy_n(std::istream_iterator<int>(cin), n2, begin(v2));
    join_vectors_t jv1(v1, v2);

    // imprimiendo los datos
    std::copy(jv1(), jv1()+jv1.size(), std::ostream_iterator<int>(std::cout," "));
    std::cout << std::endl;

    auto jv2 = jv1;
    !jv2;
    std::copy(jv2(), jv2()+jv2.size(), std::ostream_iterator<int>(std::cout," "));
    std::cout << std::endl;

    std::copy(jv1(), jv1()+jv1.size(), std::ostream_iterator<int>(std::cout," "));
    std::cout << std::endl;
}

TEST_CASE("Question #1_1") {
    execute_test("test_1_1.in", test_1);
}

TEST_CASE("Question #1_2") {
    execute_test("test_1_2.in", test_2);
}