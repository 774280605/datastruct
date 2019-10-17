#include "pch.h"
#include "CppUnitTest.h"
#include "../DataStruct/MyList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TEST_LIST)
		{
			MyList list;
			list.add(4);
			list.add(5);
			list.add(6);
			list.add(7);
			Assert::AreEqual(4, list.size());
			list.printList();
			
			list.forwardData(6);
			list.printList();
			list.swap(5, 6);
			list.printList();

		}



	};
}
