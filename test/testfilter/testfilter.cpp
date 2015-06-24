
#include "testfilter.h"
#include "test_args.h"
#include <iostream>
#include <fstream>


int my_argc;
char** my_argv;

using ::testing::Return;

FilterTest::FilterTest() {};

FilterTest::~FilterTest() {};

void FilterTest::SetUp() {};

void FilterTest::TearDown() {};

TEST_F(FilterTest, ByDefaultTrueIsTrue) {
	char * input = my_argv[1];
	char * output = my_argv[2];

	std::ofstream myfile;
	myfile.open ("log.txt");
	myfile << input << "\n";
	myfile << output << "\n";
	myfile.close();

	double domainSigma = 2.0;
	double rangeSigma = 2.0;
	apply_bilateral_filter( input, output, domainSigma, rangeSigma);
}


