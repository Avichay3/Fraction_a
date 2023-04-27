
#include <iostream>

namespace ariel{
    class Fraction{
        private:
            int mone;
            int mechane;
        public:
            Fraction(int numerator, int denominator); //constructor
            Fraction(float num);    //another constructor for take a float and convert to fraction
    }
}