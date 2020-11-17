//==========================================================================
//Author: James Anthony Ortiz
//File: glibc_version.c
//Description: Small program to determine the version of glibc (if installed)
//Compile: gcc glibc_version.c -o glibc_version
//===========================================================================


#include <stdio.h>
#include <stdlib.h>
#include <gnu/libc-version.h>

int
main(int argc, char *argv[])
{
	//Check the GNU C library version:
	printf("glibc version: %s\n", gnu_get_libc_version());
	return 0;
}
