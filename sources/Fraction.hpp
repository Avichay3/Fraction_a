
#include <iostream>

namespace ariel{
    class Fraction{
        private:
            int mone;
            int mechane;
        public:
            Fraction(int numerator, int denominator); //constructor
            Fraction(float num);    //another constructor for take a float and convert to fraction

            /*getters and setters for the members*/
            const int getMone(){return this->mone;}
            const int getMechane(){return this->mechane;}
            void setMone(int numerator){};
            void setMechane(int denominator){};

       // friend float FractionToFloat(const Fraction& a);

            Fraction operator+(const Fraction& other) const;
            Fraction operator-(const Fraction& other) const;
            Fraction operator/(const Fraction& other) const;
            Fraction operator*(const Fraction& other) const;
            bool operator>(const Fraction& other) const;
            bool operator<(const Fraction& other) const;
            bool operator>=(const Fraction& other) const;
            bool operator<=(const Fraction& other) const;
            Fraction& operator++();
            Fraction& operator--();
            const Fraction operator++(int increment);
            const Fraction operator--(int decrement);

            friend bool operator==(const Fraction& frac1, const Fraction& frac2);
            friend Fraction operator+(float frac1, const Fraction& frac2);
            friend Fraction operator-(float frac1, const Fraction& frac2);
            friend Fraction operator*(float frac1, const Fraction& frac2);
            friend Fraction operator/(float frac1, const Fraction& frac2);
            friend Fraction operator+(const Fraction& frac2, float frac1);
            friend Fraction operator-(const Fraction& frac2, float frac1);
            friend Fraction operator*(const Fraction& frac2, float frac1);
            friend Fraction operator/(const Fraction& frac2, float frac1);
            friend bool operator>(float frac1, const Fraction& frac2);
            friend bool operator<(float frac1, const Fraction& frac2);
            friend bool operator>=(float frac1, const Fraction& frac2);
            friend bool operator<=(float frac1, const Fraction& frac2);
            friend bool operator>(const Fraction& frac2, float frac1);
            friend bool operator<(const Fraction& frac2, float frac1);
            friend bool operator>=(const Fraction& frac2, float frac1);
            friend bool operator<=(const Fraction& frac2, float frac1);

    }
}