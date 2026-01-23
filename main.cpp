#include <iostream>
#include <iomanip>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int main(int argc,char *argv[]){
  int n = argc - 1; // ignore the command itself i guess 
  /*int n;
  printf("How many number do u need > ");
  scanf("%d", &n);*/
  int* pa = new int[n];

  /*printf("Input this array : ");
  for (int i = 0; i < n; i++) {
    scanf("%d", pa+i);
  }*/
  for (int i = 1; i < n+1; i++) {
    //printf("%d = %s\n", i, argv[i]);
    *(pa+i-1) = atoi(argv[i]);
  }

  printf("Your array : ");
  for (int i = 0; i < n; i++) {
    printf("%d ", pa[i]);
  }
  printf("\n");

  printf("Your array reversed : ");
  for (int i = 0; i < n; i++) {
    printf("%d ", pa[n-i-1]);
  }
  printf("\n");

  delete[] pa;
  return 0;
}
