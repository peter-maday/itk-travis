#include "gtest/gtest.h"
#include "test_args.h"


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    my_argc = argc;
    my_argv = argv;
    int ret = RUN_ALL_TESTS();
    return ret;
}
