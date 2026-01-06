#include <stdio.h>

int main()
{

  float radius;
  printf("Enter radius : ");
  scanf("%f", &radius);
  float area = radius * radius;
  printf("%f", area);

  return 0;
}