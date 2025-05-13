#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"

#include "Asanov_MathTask.h"

void testValidSidePositive()
{
    ASSERT(isValidSide(5));
}

void testValidSideZero()
{
    ASSERT(!isValidSide(0));
}

void testValidSideNegative()
{
    ASSERT(!isValidSide(-10));
}

void testCalcRectangleArea()
{
    ASSERT_EQUAL(20, calcRectangleArea(4, 5));
    ASSERT_EQUAL(0, calcRectangleArea(0, 10));
    ASSERT_EQUAL(6, calcRectangleArea(2, 3));
}

bool runAllTests(int argc, char const *argv[])
{
    cute::suite s;
    s.push_back(CUTE(testValidSidePositive));
    s.push_back(CUTE(testValidSideZero));
    s.push_back(CUTE(testValidSideNegative));
    s.push_back(CUTE(testCalcRectangleArea));

    cute::xml_file_opener xmlfile(argc, argv);
    cute::xml_listener<cute::ide_listener<>> listener(xmlfile.out);
    return cute::makeRunner(listener)(s, "Все тесты");
}

int main(int argc, char const *argv[])
{
    return runAllTests(argc, argv) ? 0 : 1;
}
