#include "pch.h"
#include "CppUnitTest.h"
#include "../MPT_3lab/class.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTestFun1)
	{
	public:
		
		TEST_METHOD(TestMethodFun1Zero)
		{
			Assert::AreEqual(0, lab3::fun1(0));
		}
		TEST_METHOD(TestMethodFun1Negative)
		{
			Assert::AreEqual(-43, lab3::fun1(-334));
		}
		TEST_METHOD(TestMethodFun1Positive)
		{
			Assert::AreEqual(531, lab3::fun1(12345));
		}
	};
	TEST_CLASS(UnitTestFun2)
	{
	public:

		TEST_METHOD(TestMethodFun2MaxExists)
		{
			Assert::AreEqual(4, lab3::fun2(62543));
		}
		TEST_METHOD(TestMethodFun2MaxNotExists)
		{
			Assert::AreEqual(0, lab3::fun2(1111111));
		}
		TEST_METHOD(TestMethodFun2Zero)
		{
			Assert::AreEqual(2, lab3::fun2(10));
		}
		TEST_METHOD(TestMethodFun2Negative)
		{
			Assert::AreEqual(2, lab3::fun2(-10));
		}
	};
	TEST_CLASS(UnitTestFun3)
	{
	public:

		TEST_METHOD(TestMethodFun3Positive)
		{
			Assert::AreEqual(561234, lab3::fun3(123456, 2));
		}
		TEST_METHOD(TestMethodFun3Negative)
		{
			Assert::AreEqual(-561234, lab3::fun3(-123456, 2));
		}
		TEST_METHOD(TestMethodFun3ZeroOrOneSymbol)
		{
			Assert::AreEqual(0, lab3::fun3(0, 2));
			Assert::AreEqual(4, lab3::fun3(4, 2));
			Assert::AreEqual(-4, lab3::fun3(-4, 2));
		}
		TEST_METHOD(TestMethodFun3ShiftIsZero)
		{
			Assert::AreEqual(0, lab3::fun3(0, 0));
			Assert::AreEqual(-1, lab3::fun3(-1, 0));
			Assert::AreEqual(1234, lab3::fun3(1234, 0));
			Assert::AreEqual(-1234, lab3::fun3(-1234, 0));
		}
	};
	TEST_CLASS(UnitTestFun4)
	{
	public:

		TEST_METHOD(TestMethodFun4OneElementArray)
		{
			double** array = new double*;
			array[0] = new double;
			array[0][0] = 2.25525;

			Assert::AreEqual(0.0, lab3::fun4(array, 0, 0));
		}
		TEST_METHOD(TestMethodFun4PositiveSum)
		{
			double** array = new double*[4];
			for (int i = 0; i < 4; ++i) {
				array[i] = new double[4];
			}
			array[0][0] = 2.23;
			array[0][1] = 3.22;
			array[0][2] = 0.56;
			array[0][3] = 1.02;
			array[1][0] = 1.37;
			array[1][1] = 4.06;
			array[1][2] = 4.16;
			array[1][3] = 5.09;
			array[2][0] = 6.88;
			array[2][1] = 6.99;
			array[2][2] = 1.69;
			array[2][3] = 2.41;
			array[3][0] = 1.44;
			array[3][1] = 4.43;
			array[3][2] = 3.12;
			array[3][3] = 4.81;

			Assert::AreEqual(13.73, lab3::fun4(array, 4, 4));
		}
		TEST_METHOD(TestMethodFun4NegativeSum)
		{
			double** array = new double* [4];
			for (int i = 0; i < 4; ++i) {
				array[i] = new double[4];
			}
			array[0][0] = 2.23;
			array[0][1] = 3.22;
			array[0][2] = -0.56;
			array[0][3] = 1.02;
			array[1][0] = 1.37;
			array[1][1] = 4.06;
			array[1][2] = 4.16;
			array[1][3] = 5.09;
			array[2][0] = -6.88;
			array[2][1] = 6.99;
			array[2][2] = 1.69;
			array[2][3] = 2.41;
			array[3][0] = 1.44;
			array[3][1] = 4.43;
			array[3][2] = 3.12;
			array[3][3] = 4.81;

			Assert::AreEqual(-1.15, lab3::fun4(array, 4, 4), 0.0001);
		}
	};
}
