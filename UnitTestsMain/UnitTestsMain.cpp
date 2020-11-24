#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_CA1_PARTB/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestsMain
{
	TEST_CLASS(UnitTestsMain)
	{
	public:

		//code to test Q2
		TEST_METHOD(IsReverseMultiplePass)
		{
			list<int> listA = { 1, 2, 3 };
			list<int> listB = { 6, 4, 2 };

			//add code to invoke is_reverse_multiple()...
			auto beginItA = begin(listA);
			auto endItA = end(listA);
			auto endItB = rbegin(listB);

			bool isReverseMultiple = is_reverse_multiple(beginItA, endItA, endItB);

			Assert::AreEqual(true, isReverseMultiple);
		}

		TEST_METHOD(IsReverseMultipleFail)
		{
			list<int> listA = { 1, 2, 3 };
			list<int> listB = { 7, 4, 2 };

			//add code to invoke is_reverse_multiple()...
			auto beginItA = begin(listA);
			auto endItA = end(listA);
			auto endItB = rbegin(listB);

			bool isReverseMultiple = is_reverse_multiple(beginItA, endItA, endItB);

			Assert::AreEqual(false, isReverseMultiple);
		}
	};
}