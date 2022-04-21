#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_3.3(d)/Triad.h"
#include "../oop_laba_3.3(d)/Vector3D_public.h"
#include "../oop_laba_3.3(d)/Triad.cpp"
#include "../oop_laba_3.3(d)/Vector3D_public.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest33d
{
	TEST_CLASS(oopUnitTest33d)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad a(2, 3, 1), b(2, 2, 2);
			Vector3D_public c(a), d(b);
			Assert::AreEqual(c * d, 12);
		}
	};
}
