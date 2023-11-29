#include "dashboard.h"

double * change_local_mins_to_min(double * arr, int len){
    double mini = 0;
    int min_left = 0;
    double curr = 0;
    double prev = 0;
    int flag = 1;
    int *arr1;
    int schet = 0;
    int skolko = 0;
    int navremya = 0;

    arr1 = (int *)malloc(len*sizeof(int));

    mini = arr[0];
    for (int i = 0; i < len; i++){
        if (arr[i] < mini) mini = arr[i];
    }

    min_left = 0;

    for (int i = 0; i < len; i++){
        if (i == 0){
            curr = arr[i];
            prev = curr;
        }
        else{
            curr = arr[i];
            prev = arr[i - 1];
        }

        if (fabs(curr - prev) < 1.e-10) continue;

        if (curr < prev){
            min_left = i;
            flag = 1;
        }

        if (curr > prev){
            if (flag == 1){
                arr1[schet] = min_left;
                arr1[schet + 1] = i - 1;
                skolko += 1;

                schet += 2;
            }
            flag = 0;
        }
    }

    if (flag == 1){
        arr1[schet] = min_left;
        arr1[schet + 1] = len - 1;
        skolko += 1;
    }

    skolko = skolko / 2;

    for(int y = 0; y < skolko; y++){
        //printf("\nplus one\n");
        int u1 = arr1[4*y];
        int w1 = arr1[4*y + 1];
        int e1 = arr1[4*y + 2];
        int q1 = arr1[4*y + 3];
        int q = 0;
        int e = 0;

        int raz1 = w1 - u1 + 1;
        int raz2 = q1 - e1 + 1;
        int sdvig = raz2 - raz1 ;
        printf("\n%d = len1\n", raz1);
        printf("\n%d = len2\n", raz2);

        w1 += (sdvig + 1);
        e1 += (sdvig - 1);

        printf("\n%d = levo\n", w1);
        printf("\n%d = pravo\n", e1);


        for (int u = 0; q1 > u1; u++, q++){
            q1 = q1 - q;
            u1 = u1 + u;
            navremya = arr[u1];
            arr[u1] = arr[q1];
            arr[q1] = navremya;
            navremya = 0;
        }

        //если между минимумами 1 точка
        if(w1 == e1){
            navremya = arr[u1];
            arr[u1] = arr[q1];
            arr[q1] = navremya;
            navremya = 0;
        }


        //чтобы второй раз не крутить массив добавлено это условие
        if(w1 != e1){
            for(int w = 0; e1 > w1; e++, w++){
                e1 = e1 - e;
                w1 = w1 + w;
                navremya = arr[w1];
                arr[w1] = arr[e1];
                arr[e1] = navremya;
                navremya = 0;
            }


        }

//что-то лишнее:)
//        navremya = arr[w1];
//        arr[w1] = arr[e1];
//        arr[e1] = navremya;
//        navremya = 0;
    }

    printf("\ncolichestvo = %d\n", skolko);

    for(int k = 0; k < schet + 2; k++){
        printf("\n%d-ый элемент = %d\n", k, arr1[k]);
    }

    free(arr1);

    return arr;

}