#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3(D)/Time.h"
#include "../Lab_3.3(D)/Time.cpp"
#include "../Lab_3.3(D)/Triad.h"
#include "../Lab_3.3(D)/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time a(1, 2, 3);
			++a;
			Assert::AreEqual(a.getF(), 2);
		}
	};
}
