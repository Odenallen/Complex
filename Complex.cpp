
#include "Complex.h"
#include <algorithm>

// Constructorer 
Complex::Complex():rValue(0),iValue(0){}


 
Complex::Complex(double real):rValue(real),iValue(0){}




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
    out <<"("<<arg.real() <<',' << arg.imag() <<")";
    return out;
}

std::istream &operator>>(std::istream &is, Complex &m){
    
    char d;
    double real = 0;
    std::string realStr = "";
    std::string imagStr = "";
    double imag = 0;
    bool negReal = false;
    bool negImag = false;
    is >> d;

    // first check parenthesis
    if ( d == '('){
        is >> d;

        while (true){
        try{ 
            if (d == '-'|| d == '.'){
                realStr += d;
                is >> d;
                negReal = true;
            }
            real = stod(std::string(1,d));
            negReal = false;
            realStr += d;
            is >> d;

        }
        catch(const std::exception& e){
            if (realStr.empty() || negReal == true){
                throw std::invalid_argument("Invalid argument - Real must be number not empty string or real number");
                }
            else if (d != ',' && d != ')'){
                throw std::invalid_argument("Invalid argument - Invalid real part ");
                }

            
                real = stod(realStr);
                break;
        } } 
        
        if (d == ','){
            is >> d;
            int count = 0;
            while (count < 7){
                try{ 
                    if (d == '-'|| d == '.'){
                        imagStr += d;
                        is >> d;
                        negImag = true;
                    }
                    
                    
                    imag = stod(std::string(1,d));
                    negImag = false;
                    imagStr += d;
                    is >> d;
                    count++;

                }
                catch(const std::exception& e){
                    if (imagStr.empty() || d != ')' || negImag == true){
                        throw std::invalid_argument("Invalid argument - must be real integer");
                        }
                        imag = stod(imagStr);
                        break;
                } } 
       
        if (count == 7){
            throw std::invalid_argument("Invalid argument - missing )");}
            
        
        }
        if (d == ')'){
            // check that there is no more characters
            is >> d;
            if (d != ')'){
                throw std::invalid_argument("Invalid argument - input can only be (real,imaginary) or (real)");
            }
            
            m = Complex(real,imag);
        }
        else{
            throw std::invalid_argument("Invalid argument - must be comma");}
        }


    
    else{
        is.putback(d);
        std::string value;
        is >> value;
        d = value[0];
        value.erase(0,1);
        bool empty = false;
        bool sign = false;
        while (empty== false){
            // set first element in value to d
            
        
            try{ 
                if (d == '-'|| d == '.'){
                if (sign){throw std::invalid_argument("Invalid argument - not real number");}
                if (d=='.'){sign = true;}
                

                realStr += d;
                d = value[0];
                value.erase(0,1);
                negReal = true;
                }

                real = stod(std::string(1,d));
                negReal = false;
                realStr += d;
                d = value[0];
                if (value.empty()){
                    empty = true;}

                value.erase(0,1);

            }
        catch(const std::exception& e){
            if (realStr.empty() || negReal != false){
                throw std::invalid_argument("Invalid argument - Real must be number not empty string or real number");
                }
            else if (negReal == false){
                throw std::invalid_argument("Invalid argument - Real must be number not empty string or real number");


            }
            
                real = stod(realStr);
                break;
        } }

        real = stod(realStr);


       m = Complex(real,imag);




        
    }

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

