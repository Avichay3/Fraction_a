#include "Fraction.hpp"
#include <iostream>
using namespace std ; 


// constructor
Fraction::Fraction(int numerator, int denominator) : mone(numerator) , mechane(denominator){ //using initialization list
    if(denominator == 0){
        throw invalid_argument ("fraction can`t be divided by the number 0");
    }
} 

//another constructor that take a float and convert it to fraction
Fraction::Fraction(float num){
    int sign = 0;
    if (num < 0){
        sign = -1;
    }
    else{
        sign = 1;
    }
    num = std::abs(num); //take the absolute value of num
    int val = static_cast<int>(num); // cast the float to int and save it in val
    int denominator = 1; //initial denominator
    while(val != num){  //loops until the fractional part become 0;
        num = num * 10;
        val = static_cast<int>(num);
        denominator = denominator * 10;
    }
    this->mone = sign * val; //sign is applied on the mone of the number
    this->mechane = denominator;

} 

Fraction Fraction::operator+(const Fraction& other) const {
    return 1/2;
}

Fraction Fraction::operator-(const Fraction& other) const {
    return 1/2;

}

Fraction Fraction::operator/(const Fraction& other) const {
    return 1/2;

}

Fraction Fraction::operator*(const Fraction& other) const {
    retrun 1/2;
}

bool Fraction::operator>(const Fraction& other) const {
    return false;
}

bool Fraction::operator<(const Fraction& other) const {
    return false;
}

bool Fraction::operator>=(const Fraction& other) const {
    return false;
}

bool Fraction::operator<=(const Fraction& other) const {
    return false;
}

Fraction& Fraction::operator++() {
    mone += mechane;
    return *this;
}

Fraction& Fraction::operator--() {
    mone -= mechane;
    return *this;
}

Fraction Fraction::operator++(int) {
    return 1/2;
}

Fraction Fraction::operator--(int) {
    return 1/2;
}

bool operator==(const Fraction& frac1, const Fraction& frac2) {
    return false;
}

Fraction operator+(float frac1, const Fraction& frac2) {
    return 1/2;
}

Fraction operator-(float frac1, const Fraction& frac2) {
    return 1/2;
}

Fraction operator*(float frac1, const Fraction& frac2) {
    return 1/2;
}

Fraction operator/(float frac1, const Fraction& frac2) {
    return 1/2;
}

Fraction operator+(const Fraction& frac2, float frac1) {
    return 1/2;
}

Fraction operator-(const Fraction& frac2, float frac1) {
    return 1/2;
}

Fraction operator*(const Fraction& frac2, float frac1) {
     return 1/2;
}

Fraction operator/(const Fraction& frac2, float frac1) {
    return 1/2;
}

bool operator>(float frac1, const Fraction& frac2) {
    return false;
}

bool operator<(float frac1, const Fraction& frac2) {
    return false;
}

bool operator>=(float frac1, const Fraction& frac2) {
    return false;
}

bool operator<=(float frac1, const Fraction& frac2) {
    return false;
}

bool operator>(const Fraction& frac2, float frac1) {
     return false;
}

bool operator<(const Fraction& frac2, float frac1) {
    return false;
}

bool operator>=(const Fraction& frac2, float frac1) {
    return false;
}

bool operator<=(const Fraction& frac2, float frac1) {
    return false;
}