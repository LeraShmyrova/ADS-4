// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int i = 0;  
  int j = 0;
  kol = 0;
  for (int i = 0; i < len; i++) {
  for (int j = 0; j < len; j++) {
  if (arr[i] + arr[j] == value) {
  kol = kol + 1;
  }
  }
  }
  if (kol > 0){
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
  kol = 0;
  for (int i = 0; i < len; i++) {
  for (int j = 0; j < len; j++) {
  if (arr[i] + arr[j] == value) {
  kol = kol + 1;
  }
  }
  }
  if (kol > 0){
  return kol;
  } else {
  return 0;
  }
}
int countPairs3(int *arr, int len, int value) {
  return 0;
}
