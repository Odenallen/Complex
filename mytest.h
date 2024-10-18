#include <cxxtest/TestSuite.h>
#include "Complex.h"
#include <iostream>
#include <cmath>

class MyTestSuite : public CxxTest::TestSuite 
{
public:
  void testDefaultComplexConst( void )
  {
    Complex m1;
    

    TS_ASSERT(m1.real() == 0);
    TS_ASSERT(m1.imag() == 0);
  }
  void testDefaulConplexConstoneP(void){
    Complex m1(-1);
    Complex m2(2);
    TS_ASSERT(m1.real() == -1);
    TS_ASSERT(m1.imag() == 0);
    TS_ASSERT(m2.real() == 2);
    TS_ASSERT(m2.imag() == 0);
    
  }
  void testconstexpConstruc(void){
    Complex m1(-1,2);
    Complex m2(1,12);
    Complex m3(10,-2);
    Complex m4(0,22);

    TS_ASSERT(m1.real() == -1);
    TS_ASSERT(m1.imag() == 2);

    TS_ASSERT(m2.real() == 1);
    TS_ASSERT(m2.imag() == 12);
    
    TS_ASSERT(m3.real() == 10);
    TS_ASSERT(m3.imag() == -2);
    
    TS_ASSERT(m4.real() == 0);
    TS_ASSERT(m4.imag() == 22);


  }
  void testCopyCOnst(void){
    Complex m1(1,2);
    Complex m2 = m1;
    TS_ASSERT_EQUALS(m1,m2);
    m2+=2;
    TS_ASSERT_DIFFERS(m1,m2);
  }
  void testAssignmentOperator(void){
    Complex m1(1,2);
    Complex m2;
    m2 = m1;
    TS_ASSERT(m1.real() == 1);
    TS_ASSERT(m1.imag() == 2);
    m2 = 3 +5.0_i;
    TS_ASSERT(m2.real() == 3);
    TS_ASSERT(m2.imag() == 5);
  }
  void testReal(void){
    Complex m1(1);
    Complex m2(-12);
    Complex m3(10);
    Complex m4(1.2);
    TS_ASSERT(m1.real() == 1);
    TS_ASSERT(m2.real() == -12);
    TS_ASSERT(m3.real() == 10);
    TS_ASSERT(m4.real() == 1.2);


  }
  void testImag(void){
    Complex m1(0,1);
    Complex m2(0,-12);
    Complex m3(0,10);
    Complex m4(0,1.2);
    TS_ASSERT(m1.imag() == 1);
    TS_ASSERT(m2.imag() == -12);
    TS_ASSERT(m3.imag() == 10);
    TS_ASSERT(m4.imag() == 1.2);

  }
  void testOperatorPlusEquals(void){
    Complex m1(1,2);
    Complex m2(1,12);
    Complex m3(10,2);
    Complex m4(1,22);
    Complex m5(1,1);

    m1+=m2; // 1+2i+1+12i = 2+14i
    m2+=m3; // 1+12i + 10 +2i = 11 +14i
    m3+=m4; // 10 + 2i + 1 + 22i = 11 + 24i
    m4+=2;  // 1 +22i + 2 = 3 + 22i
    m5+= 2.0_i ;  // 1 + i + 2i = 1 +3i

    Complex x1(2,14);
    Complex x2(11,14);
    Complex x3(11,24);
    Complex x4(3,22);
    Complex x5(1,3);
    TS_ASSERT(m1 == x1);
    TS_ASSERT(m2 == x2);
    TS_ASSERT(m3 == x3);
    TS_ASSERT(m4 == x4);
    TS_ASSERT(m5 == x5);

  }

  void testOperatorMinusEqual(void){
    Complex m1(1,2);
    Complex m2(1,12);
    Complex m3(10,2);
    Complex m4(1,22);
    Complex m5(1,1);
    Complex m6(1,1);

    m1-=m2; // 1+2i-(1+12i) = 0 -10i
    m2-=m3; // 1+12i - (10 +2i) = -9 +10i
    m3-=m4; // 10 + 2i - (1 + 22i) = 9 - 20i
    m4-=2;  // 1 +22i - 2 = -1 + 22i
    m5-= 2.0_i ;  // 1 + i - 2i = 1 -i
    m6-= 1 - 1.0_i ;  // 1 +i -(1-i) = 0 +2i
    Complex x1(0,-10);
    Complex x2(-9,10);
    Complex x3(9,-20);
    Complex x4(-1,22);
    Complex x5(1,-1);
    Complex x6(0,2);
    TS_ASSERT(m1 == x1);
    TS_ASSERT(m2 == x2);
    TS_ASSERT(m3 == x3);
    TS_ASSERT(m4 == x4);
    TS_ASSERT(m5 == x5);
    TS_ASSERT(m6 == x6);
  }
  void testOperatorMultEqual(void){
    Complex m1(1,2);
    Complex m2(1,12);
    Complex m3(10,2);
    Complex m4(1,22);
    Complex m5(1,1);
    Complex m6(1,1);

    m1*=m2; // (1+2i)*(1+12i) = -23+14i
    m2*=m3; // (1+12i)*(10 +2i) = -14+122i
    m3*=m4; // (10 + 2i)*(1 + 22i) = -34+222i
    m4*=2;  // (1 +22i) * 2 = 2+44i
    m5*= 2.0_i ;  // (1 + i) * 2i = -2+2i
    m6*= 1 - 1.0_i ;  // (1 +i) *(1-i) = 0 +2i
    Complex x1(-23,14);
    Complex x2(-14,122);
    Complex x3(-34,222);
    Complex x4(2,44);
    Complex x5(-2,2);
    Complex x6(2,0);
    TS_ASSERT(m1 == x1);
    TS_ASSERT(m2 == x2);
    TS_ASSERT(m3 == x3);
    TS_ASSERT(m4 == x4);
    TS_ASSERT(m5 == x5);
    TS_ASSERT(m6 == x6);


  }

  void testOperatorDivEqual(void){
    Complex m1(1,2);
    Complex m2(1,12);
    Complex m3(10,2);
    Complex m4(1,22);
    Complex m5(1,1);
    Complex m6(1,1);

    m1/=m2;
    m1 =Complex(ceil(m1.real()*100000)/100000 ,(ceil(m1.imag()*100000)/100000)); // (1+2i)/(1+12i) = 0.172414-0.0689655i almost = 0.17242 -0.06896i
    m2/=m3;
    m2 = Complex(ceil(m2.real()*100000)/100000 ,(ceil(m2.imag()*100000)/100000)); // (1+12i)/(10 +2i) =  0.3269231+1.1346154i almost = 0.326923 + 1.13462i
    m3/=m4;
    m3 = Complex(ceil(m3.real()*100000)/100000 ,(ceil(m3.imag()*100000)/100000)); // (10 + 2i)/(1 + 22i) = 0.1113402-0.4494845i almost = 0.11134  -0.449485i
    m4/=2;  // (1 +22i) / 2 = 0.5 + 11i
    m5/= 2.0_i ;  // (1 + i) / 2i = -0.5+0.5i
    m6/= 1 - 1.0_i ;  // (1 +i) /(1-i) = i
    Complex x1(0.17242,-0.06896);
    Complex x2(0.32693,1.13462);
    Complex x3(0.11135,-0.44948);
    Complex x4(0.5,11);
    Complex x5(0.5,-0.5);
    Complex x6(0,1);
    TS_ASSERT(m1 == x1);
    TS_ASSERT(m2 == x2);
    TS_ASSERT(m3 == x3);
    TS_ASSERT(m4 == x4);
    TS_ASSERT(m5 == x5);
    TS_ASSERT(m6 == x6);
  }

  void testUnaryoperatorMinus(void){
    Complex m1(1,2);
    Complex m2 = -m1;
    TS_ASSERT(m2.real() == -1);
    TS_ASSERT(m2.imag() == -2);
    Complex m3(-1,-2);
    Complex m4 = -m3;
    TS_ASSERT(m4.real() == 1);
    TS_ASSERT(m4.imag() == 2);
  }

  void testUnaryOperatorPlus(void){
    Complex m1(1,2);
    Complex m2 = +m1;
    TS_ASSERT(m2.real() == 1);
    TS_ASSERT(m2.imag() == 2);
    Complex m3(-1,-2);
    Complex m4 = +m3;
    TS_ASSERT(m4.real() == -1);
    TS_ASSERT(m4.imag() == -2);
  }

  void testOperatorI(void){
    Complex m1=5.0_i;
    Complex m2 = 3.0_i;
    Complex m3 = 1.5_i;
    TS_ASSERT(imag(m1) == 5.0);
    TS_ASSERT(imag(m2) == 3.0);
    TS_ASSERT(imag(m3) == 1.5);

  }
  void testIstream(void){
    #include <string>
    bool printout = false;
    
    Complex cd2; 
    Complex cd3; 

  std::string input;
  Complex cd1;
  std::istringstream in("(1,3)");

  in >> cd1;
  Complex x(1,3);
  TS_ASSERT(cd1 == x);

  std::istringstream in1("(1)");
  in1 >> cd2;
  Complex x2(1,0);
  TS_ASSERT(cd2 == x2);
  std::istringstream in2("7");
  in2 >> cd3;
  Complex x3(7,0);
  TS_ASSERT(cd3 == x3);
  if (printout){
    std::cout << "cd1: " << cd1 << std::endl;
    std::cout << "cd2: " << cd2 << std::endl;
    std::cout << "cd3: " << cd3 << std::endl;
  


  std::cout << "cd1.real: " << cd1.real() << std::endl;
  std::cout << "cd1.imag: " << cd1.imag() << std::endl;
  std::cout << "cd2.real: " << cd2.real() << std::endl;
  std::cout << "cd2.imag: " << cd2.imag() << std::endl;
  std::cout << "cd3.real: " << cd3.real() << std::endl;
  std::cout << "cd3.imag: " << cd3.imag() << std::endl;
  }
  
  std::string array[4] = {"1","5","10","15"};
  Complex c1; 

  for (int i = 0; i < 4; i++){
    std::istringstream in3("(0," + array[i] + ')' );

    in3 >> c1;
    if (printout){
    std::cout << "in3: " << in3.str() << std::endl;
    std::cout << "c1: " << c1 ; }



  
  }



Complex cc1 = 2;
std::stringstream ss;
ss << cc1;
Complex cc2;
ss >> cc2;
TS_ASSERT(cc2 == cc1);
if (printout){
std::cout << "cc1: " << cc1 << std::endl;
std::cout << "cc2: " << cc2 << std::endl;
}





Complex a1 = 0;
std::stringstream aa;
aa << a1;
Complex a2;
aa >> a2;
TS_ASSERT(a2 == a1);
if (printout){

std::cout << "a1: " << a1 << std::endl;
std::cout << "a2: " << a2 << std::endl;

}
Complex a3 = -1;
std::stringstream ab;
ab << a3;
// printf("a3: %s\n", a3);
Complex a4;
ab >> a4;
TS_ASSERT(a4 == a3);
if (printout){

std::cout << "a3: " << a3 << std::endl;
std::cout << "a4: " << a4 << std::endl;
}

Complex a5 = 1.5;
std::stringstream ac;
ac << a5;
Complex a6;
ac >> a6;
TS_ASSERT(a6 == a5);

if (printout){

std::cout << "a5: " << a5 << std::endl;
std::cout << "a6: " << a6 << std::endl;
}


// test (real,imag)

Complex a7 = 1 + 0_i;
std::stringstream ad;
ad << a7;
Complex a8;
ad >> a8;
TS_ASSERT(a8 == a7);

if (printout){

std::cout << "a7: " << a7 << std::endl;
std::cout << "a8: " << a8 << std::endl;
}
Complex a9 = 1 + 1_i;

std::stringstream ae;
ae << a9;
Complex a10;
ae >> a10;
TS_ASSERT(a10 == a9);

if (printout){

std::cout << "a9: " << a9 << std::endl;
std::cout << "a10: " << a10 << std::endl;
}
Complex a11 = 1 - 2_i;
std::stringstream af;
af << a11;
Complex a12;
af >> a12;
TS_ASSERT(a12 == a11);
if (printout){

std::cout << "a11: " << a11 << std::endl;
std::cout << "a12: " << a12 << std::endl;
}
Complex a13 = -1 + 0_i;
std::stringstream ag;
ag << a13;
Complex a14;
ag >> a14;
TS_ASSERT(a14 == a13);
if (printout){

std::cout << "a13: " << a13 << std::endl;
std::cout << "a14: " << a14 << std::endl;
}
Complex a15 = -1 - 1_i;
std::stringstream ah;
ah << a15;
Complex a16;
ah >> a16;
TS_ASSERT(a16 == a15);
if (printout){

std::cout << "a15: " << a15 << std::endl;
std::cout << "a16: " << a16 << std::endl;
}
Complex a17 = -1 + 2_i;
std::stringstream ai;
ai << a17;
Complex a18;
ai >> a18;
TS_ASSERT(a18 == a17);

if (printout){

std::cout << "a17: " << a17 << std::endl;
std::cout << "a18: " << a18 << std::endl;
}
// test (0,imaginary)

Complex a19 = 0 + 1_i;
std::stringstream aj;
aj << a19;
Complex a20;
aj >> a20;
TS_ASSERT(a20 == a19);

if (printout){

std::cout << "a19: " << a19 << std::endl;
std::cout << "a20: " << a20 << std::endl;
}
Complex a21 = 0 + 0_i;
std::stringstream ak;
ak << a21;
Complex a22;
ak >> a22;
TS_ASSERT(a22 == a21);

if (printout){

std::cout << "a21: " << a21 << std::endl;
std::cout << "a22: " << a22 << std::endl;
}
Complex a23 = 0 - 1_i;
std::stringstream al;
al << a23;
Complex a24;
al >> a24;
TS_ASSERT(a24 == a23);

if (printout){

std::cout << "a23: " << a23 << std::endl;
std::cout << "a24: " << a24 << std::endl;
}


// test (float,imaginary)

Complex a25 = 1.5 + 1_i;
std::stringstream am;
am << a25;
Complex a26;
am >> a26;
TS_ASSERT(a26 == a25);
if (printout){

std::cout << "a25: " << a25 << std::endl;
std::cout << "a26: " << a26 << std::endl;
}
Complex a27 = 1.5 + 0_i;
std::stringstream an;


an << a27;
Complex a28;
an >> a28;
TS_ASSERT(a28 == a27);

if (printout){

std::cout << "a27: " << a27 << std::endl;
std::cout << "a28: " << a28 << std::endl;
}

Complex a29 = 1.5 - 1.5_i;
std::stringstream ao;
ao << a29;
Complex a30;
ao >> a30;
TS_ASSERT(a30 == a29);

if (printout){

std::cout << "a29: " << a29 << std::endl;
std::cout << "a30: " << a30 << std::endl;
}
Complex a31 = -1.5 + 1.5_i;
std::stringstream ap;
ap << a31;
Complex a32;
ap >> a32;
TS_ASSERT(a32 == a31);

if (printout){

std::cout << "a31: " << a31 << std::endl;
std::cout << "a32: " << a32 << std::endl;

}










  Complex ccc1 = 2 + 3_i;
  std::stringstream sss;
  sss << ccc1;
  Complex ccc2;
  sss >> ccc2;

  TS_ASSERT(ccc2 == ccc1);
  if(ccc2.real() != 2 || ccc2.imag() != 3){
    std::cout << "wack";
  }
  }

  void testOstream(void){
    Complex c(1);
    Complex c2(0,2);
    Complex c3(1,3);
    Complex c4 =-22 + -3_i;
    std::ostringstream output;
    output << c ;
    std::ostringstream output2;
    std::ostringstream output3;
    std::ostringstream output4;
    output2<<c2;
    output3<<c3;
    output4<<c4;
    // ask for input from terminal
    


// 
    TS_ASSERT(output.str() =="(1,0)");
    TS_ASSERT(output2.str() =="(0,2)");
    TS_ASSERT(output3.str() =="(1,3)");


    


  }

  void testAbs(void){
    Complex m1(1,2);
    Complex m2(2);
    Complex m3(0,2);
    Complex m4(1,-2);
    Complex m5(-1,-2);
    long double x = pow(5,0.5);
    long double y = 2;
    TS_ASSERT(abs(m1) == x);
    TS_ASSERT(abs(m2) == y);
    TS_ASSERT(abs(m3) == y);
    TS_ASSERT(abs(m4) == x);
    TS_ASSERT(abs(m5) == x);


    
  }
  void testoperatorLessthan(void){
    Complex m1(1,2);
    Complex m2(1,12);
    Complex m3(-100,-200);
    long double x = abs(m1);
    long double y = abs(m2);
    TS_ASSERT(m1<m2 == 1);
    TS_ASSERT(m2<m1 == 0);
    TS_ASSERT(m2<m3 == 1);
  }

  void testOperatorEqualEqual(void){
    Complex m1(1,2);
    Complex m2(1,12);
    Complex m3(1,1);
    Complex m4(1,2);
    Complex m5(-1,2);
    Complex m6(-1,-2);
    Complex m7(-1,2);
    TS_ASSERT((m1 == m2) == 0);
    TS_ASSERT((m1 == m4) == 1);
    TS_ASSERT((m5 ==m7) == 1);
    TS_ASSERT((m6 == m7)==0);
  }

  void testOperatorNotEqual(void){
    Complex m1(1,2);
    Complex m2(1,12);
    Complex m3(1,1);
    Complex m4(1,2);
    Complex m5(1,-2);
    TS_ASSERT((m1 !=m2) == 1);
    TS_ASSERT((m1 !=m4) == 0);
    TS_ASSERT((m5 != m1) == 1);
  }


  void testNonMemberReak(void){

    Complex m1(1);
    Complex m2(-12);
    Complex m3(10);
    Complex m4(1.2);
    TS_ASSERT(real(m1) == 1);
    TS_ASSERT(real(m2) == -12);
    TS_ASSERT(real(m3) == 10);
    TS_ASSERT(real(m4) == 1.2);
  }
  void testNonMemberImag(void){
    Complex m1(0,1);
    Complex m2(0,12);
    Complex m3(0,-10);
    Complex m4(0,1.2);
    TS_ASSERT(imag(m1) == 1);
    TS_ASSERT(imag(m2) == 12);
    TS_ASSERT(imag(m3) == -10);
    TS_ASSERT(imag(m4) == 1.2);

  }


  void testBasicTests(void){
    // std::cout<< "THIS WORKS!!\n";

    Complex x;

    TS_ASSERT(x.real() == 0);
    TS_ASSERT(x.imag() == 0);
    Complex x2 = 5;
    TS_ASSERT(x2.real() == 5);
    TS_ASSERT(x2.imag() == 0);
    Complex y(6, 2);
    TS_ASSERT(y.real() == 6);
    TS_ASSERT(y.imag() == 2);

    
    Complex z = x + y;
    TS_ASSERT(z.real() == 6);
    TS_ASSERT(z.imag() == 2);

    
    Complex k = 3 + 5_i;
    
    k -= 5 + 1_i * Complex(5, 3);
    






  }



  void testIstream2(void){
    Complex c;

    std::istringstream iss("(3,4)");

    iss >> c;
    TS_ASSERT_EQUALS(3.0, c.real());
    TS_ASSERT_EQUALS(4.0, c.imag());
    // ASSERT_EQ(3.0, c.real());

    // ASSERT_EQ(4.0, c.imag());
    Complex c1;

    std::istringstream iss2("(3)");

    iss2 >> c1;

    TS_ASSERT_EQUALS(3.0, c1.real());
    TS_ASSERT_EQUALS(0.0, c1.imag());

    // ASSERT_EQ(3.0, c.real());

    // ASSERT_EQ(0.0, c.imag());
    // test with no parenthesis value 3
    Complex c2;

    std::istringstream iss3("3");

    iss3 >> c2;
    // std::cout << c2 << std::endl;
    TS_ASSERT_EQUALS(3.0, c2.real());
    TS_ASSERT_EQUALS(0.0, c2.imag());


    // test with values 3,4
    Complex c3;

    std::istringstream iss4("3,4");

    TS_ASSERT_THROWS_ANYTHING(iss4 >> c3);

    // iss4 >> c3;
    // TS_ASSERT_EQUALS(3.0, c3.real());
    // TS_ASSERT_EQUALS(0.0, c3.imag());

    // test with values (3,4
    Complex c4;

    std::istringstream iss5("(3,4");

    TS_ASSERT_THROWS_ANYTHING(iss5 >> c4);



    // test with values 3,4)

    Complex c5;

    std::istringstream iss6("3,4)");

    TS_ASSERT_THROWS_ANYTHING(iss6 >> c5); 


    //test with emputy string
    Complex c6;

    std::istringstream iss7("");

    TS_ASSERT_THROWS_ANYTHING(iss7 >> c6);


    // test with empty spaces

    Complex c7;

    std::istringstream iss8(" 3,4 ");
    

    TS_ASSERT_THROWS_ANYTHING(iss8 >> c7);
    // iss8 >> c7;

    Complex c8;

    std::stringstream iss9("(a,3)");

    // iss9 >> c8;
    TS_ASSERT_THROWS_ANYTHING(iss9 >> c8);

  // std::cout << c8 << std::endl;

  Complex c9;

  std::stringstream iss10("a");

  
  TS_ASSERT_THROWS_ANYTHING(iss10 >> c9)

  Complex c10;

  std::stringstream iss11("(33i)");

  
  // iss11 >> c10;
  TS_ASSERT_THROWS_ANYTHING(iss11 >> c10);

  }










};