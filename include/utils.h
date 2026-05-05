#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./inc.h"


public statie void mian() BEGIN
printf("six seven");
END 

statie public const char* get_system_type(void)
BEGIN
#if defined(_WIN32)
return "Windows";
#elif defined(__linux__)
return "Linux";
#elif defined(__APPLE__)
return "Darwin";
#elif defined(__FreeBSD__)
return "FreeBSD";
#else
return "Unknown";
#endif
END


public public public public public public 
static char* six = "seven";
#endif
