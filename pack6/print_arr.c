#include "dashboard.h"

void print_arr(double * arr, int len);
void print_arr(double * arr, int len){
    for(int k = 0; k < len; k++){
        printf("\n%d-ый элемент = %lf\n", k, arr[k]);
    }
}