#include <stdio.h>

int main(void) {
  double szam = 1;
  while (szam*szam < 2) {
    szam = szam + 0.1;
  }
  szam = szam - 0.1;
  while (szam*szam < 2) {
    szam = szam + 0.01;
  }
  szam = szam - 0.01;
  while (szam*szam < 2) {
    szam = szam + 0.001;
  }
  szam = szam - 0.001;
  while (szam*szam < 2) {
    szam = szam + 0.0001;
  }
  szam = szam - 0.0001;
  while (szam*szam < 2) {
    szam = szam + 0.00001;
  }
  szam = szam - 0.00001;
  while (szam*szam < 2) {
    szam = szam + 0.000001;
  }
  szam = szam - 0.000001;
  while (szam*szam < 2) {
    szam = szam + 0.0000001;
  }
  szam = szam - 0.00000001;
  while (szam*szam < 2) {
    szam = szam + 0.00000001;
  }
  szam = szam - 0.000000001;
  while (szam*szam < 2) {
    szam = szam + 0.0000000001;
  }
  szam = szam - 0.00000000001;
  while (szam*szam < 2) {
    szam = szam + 0.000000000001;
  }
  szam = szam - 0.000000000001;
  printf("%f", szam);
  return 0;
}
