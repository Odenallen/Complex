#ifndef Complex_h
#define Complex_h

#include<iostream>
#include <cmath>
#include <string>


class Complex{

    long double  rValue;
    long double  iValue;
    

public:
    friend Complex operator+(const Complex &first,const Complex &second);
    friend Complex operator+(const Complex & complex);
    friend Complex operator-(const Complex &first,const Complex &second);
    friend Complex operator-(const Complex & complex);
    friend constexpr Complex operator""_i(long double im);
    friend constexpr Complex operator""_i(unsigned long long im);

    friend Complex operator*(const Complex & first, const Complex & second);
    friend Complex operator/(const Complex & first, const Complex & second);
    friend std::ostream &operator<<(std::ostream &out, const Complex &arg);
    friend std::istream &operator>>(std::istream &is, Complex &m);
    friend long double abs(Complex &a);
    friend int operator<(Complex &a,Complex &b);
    friend long double real(Complex & a);
    friend long double imag(Complex & a);
    friend long double operator==(Complex & first, Complex & other );
    friend long double operator!=(Complex & first, Complex & other );

    // Constructorer 
    Complex();


    Complex(double real);

    constexpr Complex(double real, double imaginary):rValue(real),iValue(imaginary){};
    // constexpr Complex(double real, double imaginary);

    // Copy constructor
    Complex(const Complex &rhs);

    //Assignment operator
    Complex & operator=(const Complex &other);

        // GETTERS!!
    long double real()const;

    long double imag()const;

    // Operators!!        
    void operator+=(const Complex &other);
    void operator-=(const Complex &other);

    void operator*=(const Complex &other);
    void operator/=(const Complex &other);


};



constexpr Complex operator""_i(long double im){
    double zero = 0;
    return Complex(zero,im);
}
constexpr Complex operator""_i(unsigned long long im){
    double zero = 0;
    return Complex(zero,im);
}
Complex operator+(const Complex &first,const Complex &second);
Complex operator+(const Complex & complex);
Complex operator-(const Complex &first,const Complex &second);
Complex operator-(const Complex & complex);
Complex operator*(const Complex & first, const Complex & second);
Complex operator/(const Complex & first, const Complex & second);
std::ostream &operator<<(std::ostream &out, const Complex &arg);

std::istream &operator>>(std::istream &is, Complex &m);

long double abs(Complex &a);

// Operator<    --  returns true if the magnitude of the left complex number is lesser than the right complex number, and false otherwise
int operator<(Complex &a,Complex &b);
// Real  -- returns the real component
long double real(Complex & a);

// imag -- returns the imaginary component
long double imag(Complex & a);

// Operator==    -- compares two complex numbers or a complex and a scalar
long double operator==(Complex & first, Complex & other );

// Operator!=     -- compares two complex numbers or a complex and a scalar
long double operator!=(Complex & first, Complex & other );


















#endif