#include "pch.h"
#include "CppUnitTest.h"
#include "../DataStructures/MyArrayList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestInsertion)
		{
			MyArrayList<int> arrayList;
			arrayList.insert(5, 0);
			int value = arrayList.get(0);
			Assert::AreEqual(5, value);
			
		}
	};
}
