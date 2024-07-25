#include <stdio.h>

int main(void) {
  float area_rectangle;
  float b = 5;
  float h = 4;
  area_rectangle = b * h;
  float area_triangle;
  area_triangle = (1/2.0) * b * h;
  float area_total;
  printf("Rectangle=%f\n",area_rectangle);
  printf("Traingle=%f\n",area_triangle);
  return 0;
}