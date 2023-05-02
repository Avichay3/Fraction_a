#include "doctest.h"
#include "sources/Fraction.hpp"
#include <sstream>
#include <algorithm>
using namespace ariel;

/*test the operators*/
TEST_CASE("Testing the + (addition) operator"){
    Fraction a(3, 5);
    Fraction b(1, 5);
    Fraction c(1,5);
    CHECK(a+b == Fraction(4, 5));
    CHECK((b+0.2 == 0.2+b));
    CHECK(a+b+c == Fraction(1,1));
}

TEST_CASE("Test the - (subtraction) operator"){
    Fraction a(1, 2);
    Fraction b(1, 3);
    Fraction c(1, 4);
    CHECK(a-b == Fraction(1, 6));
    CHECK(b-a == Fraction(-1, 6));
    CHECK(((a-0.5 == c-0.25) && (a-0.5 == Fraction(0, 1))));
}

TEST_CASE("Test the * (multiplication) operator"){
    Fraction a(1, 2);
    Fraction b(1, 2);
    CHECK(a*b == Fraction(1, 4));
}

TEST_CASE("Testing the / (division) operator"){
    Fraction a(1, 3);
    Fraction b(2, 6);
    Fraction c(3, 9);
    Fraction d(4, 12);
    CHECK(a/b == b/a);
    CHECK(a/d == b/c);
}


TEST_CASE("Check Fractions that not good"){
    CHECK_NOTHROW(Fraction(0, 1));
    CHECK_THROWS(Fraction(0, 0));
    CHECK_THROWS(Fraction(1, 0));
}

TEST_CASE("Test the comparison operators (>, <, >=, <=, ==)"){
    Fraction a(-8, 4);
    Fraction b(3, 2);
    Fraction c(3, 4);
    Fraction d(8, 10);
    Fraction e(20,5);
    CHECK(b >= 1);
    CHECK(b * c * d >= -3);
    CHECK(a < d);
    CHECK(a <= b);
}

TEST_CASE("Test input/output operators"){
    Fraction a(4, 3);
    Fraction b(0, 2);
    Fraction c(3, 8);

    std::ostringstream output1;
    std::ostringstream output2;
    std::ostringstream output3;
    /*write fractions to the stream*/
    output1 << a;
    output2 << b;
    output3 << c;
    // check that the output is as we have expected
    CHECK(output1.str() == "4/3");
    CHECK(output2.str() == "0");
    CHECK(output3.str() == "3/8");
}

TEST_CASE("Test if fraction divide by zero and if yes throw an error"){
    CHECK_THROWS(Fraction(1,0));
    CHECK_THROWS(Fraction(0,1));
}

TEST_CASE("Test if Fraction constructor reduces the fraction"){
    Fraction a(2,4);
    Fraction b(8,4);
    Fraction c(1,2);
    Fraction d(2,1);
    CHECK(a == c);
    CHECK(b == d);
}