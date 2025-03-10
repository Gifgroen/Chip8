#include "base.h"
#include "helper.h"
#include "types.h"

#include <stdio.h>

int main(int Argc, char **Argv)
{
    printf("= compiler =\n");
    printf("CL = %d\n", COMPILER_CL);
    printf("CLANG = %d\n", COMPILER_CLANG);
    printf("GCC = %d\n", COMPILER_GCC);

    printf("\n= OS =\n");
    printf("OS_WINDOWS %d\n", OS_WINDOWS);
    printf("OS_MAC %d\n", OS_MAC);
    printf("OS_LINUX %d\n", OS_LINUX);

    printf("\n= ARCH =\n");
    printf("ARCH_ARM = %d\n", ARCH_ARM);
    printf("ARCH_ARM64 = %d\n", ARCH_ARM64);
    printf("ARCH_x86 = %d\n", ARCH_x86);
    printf("ARCH_x64 = %d\n", ARCH_x64);

    printf("\nHello Chip-8!\n");

    s8 items[3] = {1, 2, 0};
    printf("items has %lu items\n", ArrayCount(items));

    return 0;
}
