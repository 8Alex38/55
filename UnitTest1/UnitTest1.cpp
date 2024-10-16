#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5/5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int result1 = f(12345);
			if (result1 != 5) {
				throw "Test failed: f(12345) != 5";
			}

			int result2 = f(100);
			if (result2 != 1) {
				throw "Test failed: f(100) != 1";
			}

			int result3 = f(0);
			if (result3 != 0) {
				throw "Test failed: f(0) != 0";
			}
		}

		TEST_METHOD(TestMethod2)
		{
			int result1 = S(1, 5);
			if (result1 != 15) {
				throw "Test failed: S(1, 5) != 15";
			}

			int result2 = S(10, 15);
			if (result2 != 16) {
				throw "Test failed: S(10, 15) != 21";
			}

			int result3 = S(5, 5);
			if (result3 != 5) {
				throw "Test failed: S(5, 5) != 5";
			}
		}
	};
}
