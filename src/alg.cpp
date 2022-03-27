// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int i = 0;
  int j = 0;
  int kol = 0;
  for (int i = 0; i < len; i++) {
  for (int j = 0; j < len; j++) {
  if (arr[i] + arr[j] == value) {
  kol = kol + 1;
  }
  }
  }
  if (kol > 0) {
  return kol;
  } else {
  return 0;
  }
}
int countPairs2(int *arr, int len, int value) {
  while (arr[len - 1] > value) {
  len = len - 1;
  }
  int i = 0;
  int j = 0;
  int kol = 0;
  for (int i = 0; i < len; i++) {
  for (int j = 0; j < len; j++) {
  if (arr[i] + arr[j] == value) {
  kol = kol + 1;
  }
  }
  }
  if (kol > 0) {
  return kol;
  } else {
  return 0;
  }
}
int dopk3(int *arr, int len, int value, int lev) {
  int kol = 0;
  while (lev < len - 1) {
  int sr = lev + (len - 1 - lev) / 2;
  if (arr[sr] == value && sr != lev) {
  kol = kol + 1;
  int a = sr, b == sr;
  while (arr[++a] == value) {
  kol = kol + 1;
  }
  while (arr[--b] == value && b > lev) {
  kol = kol + 1;
  }
  return kol;
  } else if (arr[sr] > value) {
  len -1 = sr;
  } else {
  lev = sr + 1;
  }
  }
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  int kol = 0;
  for (int i =0; i < len; i++) {
  kol = dopk3(arr, len, value - arr[i], i);
  }
  return kol;
}
