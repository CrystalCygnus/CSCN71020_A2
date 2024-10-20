#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(RectOperationTests)
	{
	public:
		
		TEST_METHOD(testPerimeter)
		{
			int Result = 0;
			Result = getPerimeter(2, 2);
			Assert::AreEqual(8, Result);
		}

		TEST_METHOD(testArea)
		{
			int Result = 0;
			Result = getArea(2, 2);
			Assert::AreEqual(4, Result);
		}

		TEST_METHOD(testSetLength1)
		{
			int Result = 0;
			setLength(2, &Result);
			Assert::AreEqual(2, Result);
		}

		TEST_METHOD(testSetLength2)
		{
			int Result = 0;
			setLength(-6, &Result);
			Assert::AreEqual(0, Result);	// Should skip over the if statement and return the init value of 0

		}

		TEST_METHOD(testSetLength3)
		{
			int Result = 0;
			setLength(100, &Result);
			Assert::AreEqual(0, Result);	// Should skip over the if statement and return the init value of 0

		}

		TEST_METHOD(testSetWidth1)
		{
			int Result = 0;
			setLength(2, &Result);
			Assert::AreEqual(2, Result);
		}

		TEST_METHOD(testSetWidth2)
		{
			int Result = 0;
			setLength(-6, &Result);
			Assert::AreEqual(0, Result);	// Should skip over the if statement and return the init value of 0

		}

		TEST_METHOD(testSetWidth3)
		{
			int Result = 0;
			setLength(100, &Result);
			Assert::AreEqual(0, Result);	// Should skip over the if statement and return the init value of 0

		}

	};
}
