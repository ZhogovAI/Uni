#ifndef SUM_FUNC
#define SUM_FUNC

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void print_arr(double * arr, int len);

double * read_from_file(FILE *f, int *len);

double * change_local_mins_to_min(double * arr, int len);

#endif