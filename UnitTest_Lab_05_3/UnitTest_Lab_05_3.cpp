#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_3/Lab_05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab053
{
	TEST_CLASS(UnitTestLab053)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(f(3), 0.64268747, 0.0000001);
			Assert::AreEqual(f(0.5), 0.252612317, 0.0000001);
		}
	};
}
