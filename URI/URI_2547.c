#include <stdio.h>

int main(void) {
  int N, min, max;

  while(scanf("%d %d %d", &N, &min, &max) != EOF) {
      int arr[N], count = 0;
      for (int i = 0; i < N; i++) {
          scanf("%d", &arr[i]);
      }

      for (int i = 0; i < N; i++) {
          if (arr[i] < min || arr[i] > max) {
              count++;
          }
      }

      printf("%d\n", N - count);
  }
  return 0;
}