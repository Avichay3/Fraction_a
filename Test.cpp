#include "doctest.h"
#include <iostream>
#include "sources/Fraction.hpp"
#include <algorithm>
using namespace std;
using namespace ariel;

TEST_CASE ("Test the + (add) operator"){
    Fraction a (2,3);
    Fraction b (1,3);
    Fraction c (1,2);
    Fraction d (1,4);
    CHECK_NOTHROW(a+b == Fraction(1,1));
    CHECK_NOTHROW(c+d == Fraction(3,4));
}

TEST_CASE ("Test the - (substruct) operator"){
    Fraction a(1,3);
    Fraction b(2,3);
    Fraction c(-1,3);
    CHECK_NOTHROW(a-b == c);
    CHECK_NOTHROW(c+b == a);
}

TEST_CASE ("Test the * (multiply) operator"){
    Fraction a(1, 3);
    Fraction b(2, 6);
    CHECK(f1*f2 == Fraction(1, 9));
}


TEST_CASE ("Test the / (devision) operator"){
    Fraction a(1, 2);
    Fraction b(2, 4);
    Fraction c(0, 1);
    CHECK(((a/b == b/a) && (a/b == Fraction(1, 1))));
    CHECK_THROWS(f2/f1);
}


TEST_CASE ("Test devision by zero"){
     CHECK_THROWS(Fraction(1, 0));
     CHECK_NOTHROW(Fraction(1, -1));
     CHECK_THROWS(Fraction(-2, 0));
     CHECK_NOTHROW(Fraction(-10, -10));
}


TEST_CASE ("Test comparison operators (<, >, ==, >=, <=)"){
    
}

TEST_CASE ("Test if the constructor throw exeption when the denominator is zero"){
    
}

TEST_CASE("Test increment and decrement operators with fractions"){
   
}

TEST_CASE("Test I/O (input/output) operators with fractions"){
   
}

TEST_CASE("Mix and check"){ //mix operators on some fractions and check the result
    
}




