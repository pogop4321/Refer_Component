#include <stdio.h>
#include "plus.h"
#include "nvs.h"

void app_main(void)
{
    int result = add(3, 5);
    printf("result = %d\n", result);
}