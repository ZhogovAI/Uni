#include "dashboard.h"

double * read_from_file(FILE *f, int *len){
    double *arr;
    int capacity = 2;
    double current = 0;
    *len = 0;

    if(fscanf(f, "%lf", &current) != 1){
        printf("File is empty");
        return 0;
    }

    *len = 1;
    arr = (double *)malloc(capacity*sizeof(double));
    arr[0] = current;

    while (fscanf(f, "%lf", &current) == 1){
        ++(*len);
        if (*len > capacity){
            capacity *= 2;
            arr = (double *)realloc(arr, capacity*sizeof(double));
        }
        arr[*len - 1] = current;
    }
    current = 0;
    if (*len == 0) printf("0");

    return arr;

}