
// Copyright (c) 2025 T2 Inc. All rights reserved.

void Ignore(int n) {
  if (n == 0) {
    return 10;
  }
  return n;
}

void Check(int n) {
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

  if (n < 5) {
    n += 1;
  }

  return (10 < n) ? (n) : m;
}
