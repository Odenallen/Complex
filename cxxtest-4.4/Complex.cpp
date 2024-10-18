
#include "Complex.h"


// Constructorer 
Complex::Complex():rValue(0),iValue(0){}


 
Complex::Complex(double real):rValue(real),iValue(0){}



//constexpr Complex::Complex(double real, double imaginary):rValue(real),iValue(imaginary){}
// Copy constructor
 
Complex::Complex(const Complex &rhs):rValue(rhs.rValue),iValue(rhs.iValue){}

//Assignment operator
Complex &  Complex::operator=(const Complex & other){
this->rValue=other.rValue;
this->iValue = other.iValue;
return *this;
}

// GETTERS!!
long double Complex::real()const{return this->rValue;} 

long double Complex::imag()const{return this->iValue;}


// Operators!!        
void Complex::operator+=(const Complex &other){
    *this = *this + other;
}
void Complex::operator-=(const Complex &other){
    *this = *this - other;
}

void Complex::operator*=(const Complex &other){
    *this = *this * other;
}
void Complex::operator/=(const Complex &other){
    *this = *this / other;

}


// constexpr Complex operator""_i(long double im){
//     return Complex(0,im);
// }
Complex operator+(const Complex &first,const Complex &second){
    return Complex(first.real()+second.real(),first.imag()+second.imag());
}
Complex operator+(const Complex & complex){// Unary operator
    return Complex(complex.real(),complex.imag());
}
Complex operator-(const Complex &first,const Complex &second){
    return Complex(first.real()-second.real(),first.imag()-second.imag());
}
Complex operator-(const Complex & complex){// Unary operator
    return Complex(-complex.real(),-complex.imag());
}
Complex operator*(const Complex & first, const Complex & second){
    double real = first.real()*second.real() - first.imag()*second.imag();
    double imag = first.real()*second.imag() + first.imag()*second.real();
    return Complex(real,imag);
}
Complex operator/(const Complex & first, const Complex & second){
    double a = first.real();
    double b = first.imag();
    double c = second.real();
    double d = second.imag();
    double real = (a*c +b*d)/(pow(c,2)+pow(d,2.0));
    double imag = (b*c - a*d)/(pow(c,2)+pow(d,2.0));
    return Complex(real,imag);
}
std::ostream &operator<<(std::ostream &out, const Complex &arg){
    out <<"("<<arg.real() <<',' << arg.imag() <<')';
    return out;
}

std::istream &operator>>(std::istream &is, Complex &m){
    std::string str;
    is >> str;
    std::string newStr ;
    double real =0;
    double imag = 0;
    char comma = ',';
    //Checks if there is a comma
    if (str.find(comma) != std::string::npos ){
        for (char c: str){
            if(c ==comma){
                real = stod(newStr);
                newStr=' ';
            }
            else{
                newStr = newStr + c;
            }

        }
        imag =stod(newStr);
    }
    else{real = stod(str);}// If there is no comma, this is implemented
    m = Complex(real,imag);
    return is;

}

long double abs(Complex &a){
    long double temp = pow(pow(a.real(), 2.0) + pow(a.imag(),2.0),0.5);
    return temp;
}

// Operator<    --  returns true if the magnitude of the left complex number is lesser than the right complex number, and false otherwise
int operator<(Complex &a,Complex &b){
    if(abs(a)<abs(b)){
        return 1;
    }
    return 0;
}
// Real  -- returns the real component
long double real(Complex & a){return a.real();}

// imag -- returns the imaginary component
long double imag(Complex & a){return a.imag();}

// Operator==    -- compares two complex numbers or a complex and a scalar
long double operator==(Complex & first, Complex & other ){
    if(first.real() == other.real() && first.imag() == other.imag()){
        return 1; 
    }
    return 0;
}

// Operator!=     -- compares two complex numbers or a complex and a scalar
long double operator!=(Complex & first, Complex & other ){
    if(first.real() != other.real() || first.imag() != other.imag()){
        return 1;
    }
    return 0;
}



























