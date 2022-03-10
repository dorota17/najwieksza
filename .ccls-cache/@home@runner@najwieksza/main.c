#include <stdio.h>

int main(void) {
  float a, b, c;
  
  printf("Podaj trzy liczby: ");
  scanf("%f%f%f", &a, &b, &c);

  if(a>b){
    if(a>c){
      printf("Liczba największa to: %f", a);
      } else {
      printf("Liczba największa to: %f", c);
      }
  } else {
    if (b>c){
      printf("Liczba największa to: %f", b);
      } else { 
      printf("Liczba największa to: %f", c);
    }
  }
  return 0;
}