#define ZF_LOG_LEVEL ZF_LOG_INFO
#define ZF_LOG_TAG "MAIN"
#include "zf_log.h"

#define CATCH_CONFIG_MAIN
//#include "catch.hpp"

#include <catch2/catch.hpp>

//int main(int argc, char *argv[])
unsigned int Factorial( unsigned int number )
{
	zf_log_set_tag_prefix("hello");

	//ZF_LOGI("You will see the number of arguments: %i", argc);
	//ZF_LOGD("You will NOT see the first argument: %s", *argv);

	zf_log_set_output_level(ZF_LOG_WARN);
	ZF_LOGW("You will see this WARNING message");
	ZF_LOGI("You will NOT see this INFO message");

	const char data[] =
			"Lorem ipsum dolor sit amet, consectetur adipiscing elit. "
			"Aliquam pharetra orci id velit porttitor tempus.";
	ZF_LOGW_MEM(data, sizeof(data), "Lorem ipsum at %p:", (const void *) data);

	return number;
}

TEST_CASE( "Factorials are computed", "[classic]" ) {
    int x = Factorial(1);
    ZF_LOGI("Factorial(1) resulted in %i", x);
    REQUIRE( x == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}