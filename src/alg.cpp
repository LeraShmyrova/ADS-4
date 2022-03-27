// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int i = 0;
  int j = 0;
  int kol = 0;
  for (int i = 0; i < len; i++) {
  for (int j = i + 1; j < len; j++) {
  if (arr[i] + arr[j] == value) {
  kol = kol + 1;
  }
  }
  }
  return kol;
}
int countPairs2(int *arr, int len, int value) {
  while (arr[len - 1] > value) {
  len = len - 1;
  }
  int i = 0;
  int j = 0;
  int kol = 0;
  for (int i = 0; i < len; i++) {
  for (int j = i + 1; j < len; j++) {
  if (arr[i] + arr[j] == value) {
  kol = kol + 1;
  }
  }
  }
  return kol;
}
int countPairs3(int *arr, int len, int value) {
  int kol = 0;
  for (int i = 0; i < len; i++) {
  int a = i + 1;
  int b = len - 1;
  while (a < b) {
  int c = (a + b) / 2;
  if (arr[c] + arr[i] < value) {
  a = c + 1;
  } else {
  b = c;
  }
  }
  while (arr[a] + arr[i] == value) {
  kol += 1;
  a += 1;
  }
  }
  return kol;
}
