#pragma once 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define UNDERFOLW -3

typedef int Status;

typedef struct
{
	char* str;
	int length;
}HString;

Status InitHString(HString* str);
Status DestroyHString(HString* str);
Status 



