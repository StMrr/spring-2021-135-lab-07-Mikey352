#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("removeLeadingSpace")
{
    CHECK(removeLeadingSpace("       int pi = 3;  ") == "int pi = 3;  ");
    CHECK(removeLeadingSpace("   while(int pi = 3") == "while(int pi = 3");
}

TEST_CASE("Testing countChar")
{
    CHECK(countChar("double main(){{{}}}", '{') == 3);
    CHECK(countChar("}while(int i }}", '}') == 3);
}