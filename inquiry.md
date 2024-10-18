# Inquiry

Write your answers below and include the questions. Do copy relevant code to your answers so that both questions and answers are in context 
Put questions and answers in a file inquiry.md and do put relevant code examples if needed for clarity.




## Answers


# Inquiry 
What did you learn from this assignment?
## Answer
In this laboratory I learned what should be returned by a member method and non-member function.
--------------
# Inquiry 
What was the hardest part (or parts) in this assignment?
## Answer
The hardest part was understanding how the conspexr function/methods work and where they should be declaired. I struggled to implement it in the correct declaration file, my assumption was that is should be declaired in the cpp file but after hours of struggling with error messages and googling I understood that it should be in the header file. 
--------------

# Inquiry
Which of your class methods or non-member functions returns a copy?
## Answer
These methods/non-member functions all return a copy:
Operator+,Operator+(Unary), Operator-, Operator-(Unary),Operator*,operator/


# Inquiry 
Which of your class methods or non-member functions returns a reference?
## Answer
These methods/non-member functions all return a reference:
assigment operator,operator<< and operator>>

# Inquiry 
How many tests do you need at minimum to test the abs function?
## Answer
I wrote 5 tests:
1. Testing 1+2i (make sure a complex number works).
2. Testing 2 (Make sure it works with only real part).
3. Testing 2i (Make sure it works with imaginary part).
4. Testing 1-2i (Make sure it work with negative imag.)
5. Testing -1-2i (Make sure it works with all negativ values).
# Inquiry 
Describe and motivate how your implementation of operator= works
## Answer
My operator= takes a const Complex refrence and returns a refrence to the object, it copies the values of the const parametre and returns *this. 
---------------
# Inquiry 
What constructors/functions are called when writing the statement Complex k = 3 + 5_i;
## Answer
constexpr Operator""_i, constexpr constructior(real,imaginary),constructor(real),operator+,getters real(),imag(),constexpr constructor(real,imaginary)--------------SHoule I a const or is it explicit?
# Inquiry 
Describe and motivate how your implementation of operator+= -= /= *= = works with regard to return value
## Answer
operator+=,-=,*=,/= are all operators that dont have a return type, this makes the operators so they are not chainable. They all take in a const refrence to other and then calls the specified non-member operator (+= calls +, -= calls -...etc), the return value of these non-member operators are then stored in *this, thus changing the "original" value.

My assignment operator returns a class reference and takes a const declaired Class refrence as parameter, it then changes the values of what is pointed at by this and returns the new *this class pointer.
--------------

# Inquiry 
What is the rule of three in C++. Look it up in a C++ book or on the web.
## Answer
The rule of three in c++ says that if you need to user define one of the three (Copy constructor, copy assignment operator, destructor), you should probaly implement all of them.
--------------
# Inquiry 
With regard to the rule of three, do you need to explicitly define and implement the copy-constructor in this assignment?
## Answer
I implemented the copy const but there seem to be no need in my code.
--------------
# Inquiry 
The literal i has an underscore before it. Why is that? Look it up in the c++11 draft section 17.6.4.3.5 and explain. Has there been any changes regarding this matter in the new c++17 draft
## Answer

Literal suffix identifiers that dont use underscore are allocated for future strandardization work. There has been no change is this in the new c++17 draft.
--------------


