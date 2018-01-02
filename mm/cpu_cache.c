#include <stdio.h>

#include "rusage.h"

static char buffer[100*1024*1024];

int main(void)
{
    printf("start: ");
    print_rusage();


}