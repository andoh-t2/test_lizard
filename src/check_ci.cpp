
// Copyright (c) 2025 T2 Inc. All rights reserved.

int Ignore(int n) {
  if (n == 0) {
    return 10;
  }
  return n;
}

int Check(int n) {
  if (n == 0) {
    ++n;
  }
  if (n == 0) {
    ++n;
  }
  if (n < 0) {
    n *= -1;
  }

  int m = 0;
  for (int i = 0; i < n; ++i) {
    m + i;
  }

  if (m < 5) {
    m += m;
  }

  if (m < 5) {
    m += m;
  }

  if (n < 5) {
    n += 1;
  }

  if (100 < n) {
    n += 1;
  }

  return (10 < n) ? (n) : m;
}
