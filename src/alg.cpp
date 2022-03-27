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
int dopk3(int *arr, int len, int value, int lev) {
  int kol = 0, d = len - 1;
  while (lev < d) {
  int sr = lev + (d - lev) / 2;
  if (arr[sr] == value && sr != lev) {
  kol = kol + 1;
  int a = sr, b = sr;
  while (arr[++a] == value) {
  kol = kol + 1;
  }
  while (arr[--b] == value && b > lev) {
  kol = kol + 1;
  }
  return kol;
  } else if (arr[sr] > value) {
  d = sr;
  } else {
  lev = sr + 1;
  }
  }
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  int kol = 0;
  for (int i =0; i < len; i++) {
  kol = kol + dopk3(arr, len, value - arr[i], i);
  }
  return kol;
}
