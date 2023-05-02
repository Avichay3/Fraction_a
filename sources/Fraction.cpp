#include "Fraction.hpp"
#include <algorithm>
#include <cmath>
using namespace ariel;
using namespace std;
#define MAX_NUM 1000000

Fraction::Fraction(int numerator, int denominator) : mone(numerator), mechane(denominator){ //main constructor
    if(denominator == 0){
        throw invalid_argument("Fraction can't be divided by zero");
    }
}

Fraction::Fraction(float num){
     // Convert the float to a fraction
    int sign = (num < 0) ? -1 : 1;
    int whole = floor(num);
    num -= whole;
    int val = round(num * MAX_NUM);
    int den = MAX_NUM;

    // Add the whole part if there is one
    if (whole != 0) {
        val += whole * den;
    }

    // Set the numerator and denominator
    this->mone = sign * val;
    this->mechane = den;
}

// binary operators
Fraction Fraction::operator+ (Fraction& other) const{
    return Fraction(0,1);
}

Fraction Fraction::operator- (Fraction& other) const{
        return Fraction(0,1);

}

Fraction Fraction::operator* (Fraction& other) const{
        return Fraction(0,1);

}

Fraction Fraction::operator/ (Fraction& other) const{
        return Fraction(0,1);

}

// comparison operators
bool Fraction::operator> (Fraction& other) const{
    return false;
}

bool Fraction::operator< (Fraction& other) const{
    return false;
}

bool Fraction::operator>= (Fraction& other) const{
    return false;
}

bool Fraction::operator<= (Fraction& other) const{
    return false;
}

// increment and decrement operators
Fraction& Fraction::operator++(){
    mone += mechane;
    return *this;
}

const Fraction Fraction::operator++(int dummy_flag_for_postfix_increment){
    return *this;
}

Fraction& Fraction::operator--(){
    mone -= mechane;
    return *this;
}

const Fraction Fraction::operator--(int dummy_flag_for_postfix_decrement){
    return *this;
}

// friend global comparison operators
bool ariel::operator> (float f1, const Fraction& f2){
    return false;
}

bool ariel::operator< (float f1, const Fraction& f2){
    return false;
}

bool ariel::operator>= (float f1, const Fraction& f2){
    return false;
}

bool ariel::operator<= (float f1, const Fraction& f2){
    return false;
}

bool ariel::operator> (const Fraction& f2, float f1){
    return false;
}

bool ariel::operator< (const Fraction& f2, float f1){
    return false;
}

bool ariel::operator>= (const Fraction& f2, float f1){
     return false;

}

bool ariel::operator<= (const Fraction& f2, float f1){
    return false;

}

// friend global binary operators
bool ariel::operator== (const Fraction& f1, const Fraction& f2){
    return false;
}

Fraction ariel::operator+ (float f1, const Fraction& f2){
    return Fraction(0,1);
}

Fraction ariel::operator- (float f1, const Fraction& f2){
    return Fraction(0,1);
}

Fraction ariel::operator* (float f1, const Fraction& f2){
    return Fraction(0,1);
}
Fraction ariel::operator/ (float f1, const Fraction& f2){
    return Fraction(0,1);
}

Fraction ariel::operator+ (const Fraction& f2, float f1){
    return Fraction(0,1);
}

Fraction ariel::operator- (const Fraction& f2, float f1){
    return Fraction(0,1);
}

Fraction ariel::operator* (const Fraction& f2, float f1){
    return Fraction(0,1);
}

Fraction ariel::operator/ (const Fraction& f2, float f1){
    return Fraction(0,1);
}

// friend global IO operators
std::ostream& ariel::operator<< (std::ostream& output, const Fraction& f){
    // Output the fraction to the output stream in the format "numerator/denominator"
    output << f.getMone() << "/" << f.getMechane();
    return output;
}

std::istream& ariel::operator>> (std::istream& input, const Fraction& f){
    // Read the fraction from the input stream in the format "numerator/denominator"
    return input;
}

int Fraction::getMone() const{
    return this->mone;
}

int Fraction::getMechane() const{
    return this->mechane;
}

float ariel::FractionToFloat(const Fraction& a){
    float numerator_a = (float)a.getMone();
    float denominator_a = (float)a.getMechane();
    float fraction_float = numerator_a/denominator_a;
    return round(fraction_float*1000)/1000;
}