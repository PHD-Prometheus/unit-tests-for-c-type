#include "pch.h"
#include "CppUnitTest.h"
#include "../UnitTests.Demo/UnitTests.Demo.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(Check_ThatFirstValueIsMaximum)
		{
			// Arrange
			int inputArray[] = { 1, 12, 8, 4, 0, 12 };

			// Action
			BubbleSort(inputArray, 6);

			// Assert
			Assert::AreEqual(inputArray[0], 12);
		}
	};

}
