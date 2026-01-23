#include <iostream>
#include <iomanip>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int get_dynamic_array_from_input_yay(int* &arr) {
  // returns: array size, also point arr to the result array
  int n;
  printf("How many number do u need > ");
  scanf("%d", &n);
  arr = new int[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", arr+i);
  }
  return n;
}

int get_array_from_args(int argc, char* argv[], int* &arr) {
  int n = argc - 1;
  arr = new int[n];
  for (int i = 1; i < n+1; i++) {
    arr[i-1] = atoi(argv[i]);
  }
  return n;
}

int main(int argc,char* argv[]){
  int* pa;

  int n = get_array_from_args(argc, argv, pa);
  //int n = get_dynamic_array_from_input_yay(pa); // can uncomment this to take input from stdin instead :D

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
