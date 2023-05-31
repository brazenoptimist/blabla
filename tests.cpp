#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "f1.h"
#include "f2.h"

TEST_CASE("testing the add function")
{
    CHECK(f1(0, 1) == 1);
    CHECK(f1(1, 1) == 2);
    CHECK(f1(2, 2) == 4);
    CHECK(f1(3, 3) == 6);
    CHECK(f1(10, 10) == 20);
}

TEST_CASE("testing the multiply function")
{
    CHECK(f2(0, 1) == 0);
    CHECK(f2(1, 1) == 1);
    CHECK(f2(2, 2) == 4);
    CHECK(f2(3, 3) == 9);
    CHECK(f2(10, 10) == 100);
}