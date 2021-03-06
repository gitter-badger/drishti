/*! -*-c++-*-
  @file   test-drishti.cpp
  @author David Hirvonen
  @brief  Google test for public drishti API.

  \copyright Copyright 2014-2016 Elucideye, Inc. All rights reserved.
  \license{This project is released under the 3 Clause BSD License.}

*/

#include "drishti/testlib/drishti_test_utils.h"

#include <gtest/gtest.h>

extern const char* modelFilename;
extern const char* imageFilename;
extern const char* truthFilename;
const char* outputDirectory;

int gauze_main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    assert(argc == 4);
    drishti::testlib::hasFiles(argv, { 1, 2, 3 });

    modelFilename = argv[1];
    imageFilename = argv[2];
    truthFilename = argv[3];
    outputDirectory = argv[4];

    return RUN_ALL_TESTS();
}
