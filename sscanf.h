#ifndef _SSCANF_H_
#define _SSCANF_H_

#include <ctype.h>
// #include <linux/kernel.h>
#include <limits.h>
// #include <os.h> // seems used to include <linux/types.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sscanf(const char *buf, const char *fmt, ...);

#endif