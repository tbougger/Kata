#include "gtest/gtest.h"
#include "Kata.h"
GTEST_API_ int main( int argc, char **argv )
{
	testing::InitGoogleTest( &argc, argv );
	return RUN_ALL_TESTS();
}

TEST( sampleTestCase, sampleTest )
{
   Kata kata;
   EXPECT_EQ( 0, kata.doSomething() );
}
