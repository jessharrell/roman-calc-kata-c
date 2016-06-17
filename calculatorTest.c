#include <check.h>
#include "calculator.h"

START_TEST(addNumerals_returnsII_givenIandI)
{
    Calculator calculator;
    initCalculator(&calculator);

    char addend1[2] = {'I', '\0'};
    char addend2[2] = {'I', '\0'};

    char* actual = (calculator.add)(addend1, addend2);
    
    ck_assert_str_eq(actual, "II");
}
END_TEST

int main(void)
{
    return 0;
}