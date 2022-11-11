#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1.1/lab_6.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int r[10] = { 42,28,41,5,23,34,45,53,18,15 };
			int t = Sum(r, 10);
			Assert::AreEqual(t, 304);
		}
	};
}
