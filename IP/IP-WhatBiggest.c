#include <stdio.h>

int WhatBiggest(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}

int WhatBiggest3(int a, int b, int c) {
  return WhatBiggest(WhatBiggest(a, b), c);
}

int WhatBiggest4(int a, int b, int c, int d) {
  return WhatBiggest(WhatBiggest(a, b), WhatBiggest(c, d));
}

int WhatsBiggest5(int a, int b, int c, int d, int e) {
  return WhatBiggest(WhatBiggest(WhatBiggest(a, b), WhatBiggest(c, d)), e);
}

int WhatsBiggest6(int a, int b, int c, int d, int e, int f) {
  return WhatBiggest(WhatBiggest(WhatBiggest(a, b), WhatBiggest(c, d)), WhatBiggest(e, f));
}

int main(void) {
  int a, b, r;
  scanf("%d %d", &a, &b);

  r = WhatBiggest(a, b);
  printf("Maior: %d", r);
  return 0;
}