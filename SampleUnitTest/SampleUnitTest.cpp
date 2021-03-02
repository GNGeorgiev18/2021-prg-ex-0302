#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SampleUnitTest
{
	TEST_CLASS(SampleUnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// 15 => true
			// 39 => false
			// 10 => false
			// 20 => true
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(1, 2);
			// 15 => true
			// 39 => false
			// 10 => false
			// 20 => true
		}
	};
}
