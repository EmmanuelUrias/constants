#include <stdio.h>

int main()
{

    // constant = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159;

    // pi = 420.96;
    //  ^ to prevent variable values from changing declare pi as a constant and the proper naming convention is to make a constant all caps

    // PI = 420.69;
    // ^ throws err because constant cannot be altered

    printf("%f", PI);

    return 0;
}