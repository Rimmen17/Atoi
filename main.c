#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char *double_test = "23.23";
    char *float_test = "1254856321";
    char *int_test = "45";

    int int_result = atoi(int_test);
    double double_result = atof(double_test);
    long int float_result = atol(float_test);

    printf("double: %f\n", double_result);
    printf("int: %d\n",int_result);
    printf("float: %ld\n",float_result);
    return 0;
}
