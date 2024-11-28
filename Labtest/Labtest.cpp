#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1.REC/Lab8/1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFindThirdDot)
        {
            char str[] = "a.b.c.d.e";
            Assert::AreEqual(5, find(str, 0, 0));
        }

        TEST_METHOD(TestChangeEveryFourthCharacter)
        {
            char str[] = "abcdefghi";
            char dest[50];
            dest[0] = '\0';
            char expected1[] = "abc.efg.i";
            Assert::AreEqual(expected1, change(dest, str, dest, 0));
        }
    };
}