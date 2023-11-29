#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dashboard.h"
//#define N 15

int main(void){
    double *arr;

    int len = 0;

    char filename[50];

    FILE *f;
    printf("Enter filename: ");
    scanf("%s", filename);

    f = fopen(filename, "r");

    if (f == NULL){
        printf("Can't open file\n");
        return -2;
    }

    arr = read_from_file(f, &len);

    printf("len = %d\n", len);

    arr = change_local_mins_to_min(arr, len);

    print_arr(arr, len);

    free(arr);


}