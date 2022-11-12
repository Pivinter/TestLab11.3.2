#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab11.3.2/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1132
{
	TEST_CLASS(UnitTest1132)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
