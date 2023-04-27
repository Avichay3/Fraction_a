#include "Fraction.hpp"
#include <iostream>
using namespace std ; 


// constructor
Fraction::Fraction(int numerator, int denominator) : mone(numerator) , mechane(denominator){ //using initialization list
    if(denominator == 0){
        throw invalid_argument ("fraction can`t be divided by the number 0");
    }
} 

//anothe constructor that take a float and convert it to fraction
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