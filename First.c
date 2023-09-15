#include <stdio.h>

int sum_with_condition(FILE *f) {
  
  double chet = 0, curr = 0., nechet = 0.;
  int n = 0;
  
  if (fscanf(f, "%lf", &curr) != 1){
    printf("File is empty");
    return 0.;
  }
  
  while (fscanf(f, "%lf", &curr) == 1){
    if (curr % 2 == 0) chet += 1;

    if (curr % 2 == 1) nechet += 1;
        
  }
  //printf("\nchet = %lf, nechet = %lf\n", chet, nechet);
  if (chet > nechet) n = 0;
  else n = 1;

  return n;
  
}

int main(void){
    FILE *f = fopen("input_data.txt", "r");
  if (f == NULL){
    printf("File error");
    return -1;
  }
  else if (sum_with_condition(f) == 1){
    printf("Answer: Нечётные");

    return 0;
  }

  else if (sum_with_condition(f) == 0){
    printf("Answer: Чётные");

    return 0;
  }
}

