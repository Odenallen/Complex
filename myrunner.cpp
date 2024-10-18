/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "mytest.h"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "mytest.h", 6, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testDefaultComplexConst : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDefaultComplexConst() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 9, "testDefaultComplexConst" ) {}
 void runTest() { suite_MyTestSuite.testDefaultComplexConst(); }
} testDescription_suite_MyTestSuite_testDefaultComplexConst;

static class TestDescription_suite_MyTestSuite_testDefaulConplexConstoneP : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDefaulConplexConstoneP() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 17, "testDefaulConplexConstoneP" ) {}
 void runTest() { suite_MyTestSuite.testDefaulConplexConstoneP(); }
} testDescription_suite_MyTestSuite_testDefaulConplexConstoneP;

static class TestDescription_suite_MyTestSuite_testconstexpConstruc : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testconstexpConstruc() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 26, "testconstexpConstruc" ) {}
 void runTest() { suite_MyTestSuite.testconstexpConstruc(); }
} testDescription_suite_MyTestSuite_testconstexpConstruc;

static class TestDescription_suite_MyTestSuite_testCopyCOnst : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testCopyCOnst() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 46, "testCopyCOnst" ) {}
 void runTest() { suite_MyTestSuite.testCopyCOnst(); }
} testDescription_suite_MyTestSuite_testCopyCOnst;

static class TestDescription_suite_MyTestSuite_testAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testAssignmentOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 53, "testAssignmentOperator" ) {}
 void runTest() { suite_MyTestSuite.testAssignmentOperator(); }
} testDescription_suite_MyTestSuite_testAssignmentOperator;

static class TestDescription_suite_MyTestSuite_testReal : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testReal() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 63, "testReal" ) {}
 void runTest() { suite_MyTestSuite.testReal(); }
} testDescription_suite_MyTestSuite_testReal;

static class TestDescription_suite_MyTestSuite_testImag : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testImag() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 75, "testImag" ) {}
 void runTest() { suite_MyTestSuite.testImag(); }
} testDescription_suite_MyTestSuite_testImag;

static class TestDescription_suite_MyTestSuite_testOperatorPlusEquals : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOperatorPlusEquals() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 86, "testOperatorPlusEquals" ) {}
 void runTest() { suite_MyTestSuite.testOperatorPlusEquals(); }
} testDescription_suite_MyTestSuite_testOperatorPlusEquals;

static class TestDescription_suite_MyTestSuite_testOperatorMinusEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOperatorMinusEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 112, "testOperatorMinusEqual" ) {}
 void runTest() { suite_MyTestSuite.testOperatorMinusEqual(); }
} testDescription_suite_MyTestSuite_testOperatorMinusEqual;

static class TestDescription_suite_MyTestSuite_testOperatorMultEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOperatorMultEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 139, "testOperatorMultEqual" ) {}
 void runTest() { suite_MyTestSuite.testOperatorMultEqual(); }
} testDescription_suite_MyTestSuite_testOperatorMultEqual;

static class TestDescription_suite_MyTestSuite_testOperatorDivEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOperatorDivEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 169, "testOperatorDivEqual" ) {}
 void runTest() { suite_MyTestSuite.testOperatorDivEqual(); }
} testDescription_suite_MyTestSuite_testOperatorDivEqual;

static class TestDescription_suite_MyTestSuite_testUnaryoperatorMinus : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testUnaryoperatorMinus() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 200, "testUnaryoperatorMinus" ) {}
 void runTest() { suite_MyTestSuite.testUnaryoperatorMinus(); }
} testDescription_suite_MyTestSuite_testUnaryoperatorMinus;

static class TestDescription_suite_MyTestSuite_testUnaryOperatorPlus : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testUnaryOperatorPlus() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 211, "testUnaryOperatorPlus" ) {}
 void runTest() { suite_MyTestSuite.testUnaryOperatorPlus(); }
} testDescription_suite_MyTestSuite_testUnaryOperatorPlus;

static class TestDescription_suite_MyTestSuite_testOperatorI : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOperatorI() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 222, "testOperatorI" ) {}
 void runTest() { suite_MyTestSuite.testOperatorI(); }
} testDescription_suite_MyTestSuite_testOperatorI;

static class TestDescription_suite_MyTestSuite_testIstream : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testIstream() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 231, "testIstream" ) {}
 void runTest() { suite_MyTestSuite.testIstream(); }
} testDescription_suite_MyTestSuite_testIstream;

static class TestDescription_suite_MyTestSuite_testOstream : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOstream() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 528, "testOstream" ) {}
 void runTest() { suite_MyTestSuite.testOstream(); }
} testDescription_suite_MyTestSuite_testOstream;

static class TestDescription_suite_MyTestSuite_testAbs : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testAbs() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 556, "testAbs" ) {}
 void runTest() { suite_MyTestSuite.testAbs(); }
} testDescription_suite_MyTestSuite_testAbs;

static class TestDescription_suite_MyTestSuite_testoperatorLessthan : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testoperatorLessthan() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 573, "testoperatorLessthan" ) {}
 void runTest() { suite_MyTestSuite.testoperatorLessthan(); }
} testDescription_suite_MyTestSuite_testoperatorLessthan;

static class TestDescription_suite_MyTestSuite_testOperatorEqualEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOperatorEqualEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 584, "testOperatorEqualEqual" ) {}
 void runTest() { suite_MyTestSuite.testOperatorEqualEqual(); }
} testDescription_suite_MyTestSuite_testOperatorEqualEqual;

static class TestDescription_suite_MyTestSuite_testOperatorNotEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOperatorNotEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 598, "testOperatorNotEqual" ) {}
 void runTest() { suite_MyTestSuite.testOperatorNotEqual(); }
} testDescription_suite_MyTestSuite_testOperatorNotEqual;

static class TestDescription_suite_MyTestSuite_testNonMemberReak : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testNonMemberReak() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 610, "testNonMemberReak" ) {}
 void runTest() { suite_MyTestSuite.testNonMemberReak(); }
} testDescription_suite_MyTestSuite_testNonMemberReak;

static class TestDescription_suite_MyTestSuite_testNonMemberImag : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testNonMemberImag() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 621, "testNonMemberImag" ) {}
 void runTest() { suite_MyTestSuite.testNonMemberImag(); }
} testDescription_suite_MyTestSuite_testNonMemberImag;

static class TestDescription_suite_MyTestSuite_testBasicTests : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testBasicTests() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 634, "testBasicTests" ) {}
 void runTest() { suite_MyTestSuite.testBasicTests(); }
} testDescription_suite_MyTestSuite_testBasicTests;

static class TestDescription_suite_MyTestSuite_testIstream2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testIstream2() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 668, "testIstream2" ) {}
 void runTest() { suite_MyTestSuite.testIstream2(); }
} testDescription_suite_MyTestSuite_testIstream2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
