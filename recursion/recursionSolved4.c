#include <stdio.h>

int fun(int n)
{
  int x = 1, k;
  if (n == 1) return x;
  for (k = 1; k<n; ++k)
    {
      x = x + fun(k) * fun(n-k);
    }
  return (x);
  x = x + fun(k) * fun(n - k); 
}
// x is the return of f5, does its output.
//thus: x = 1+fun(1) * fun(4) + fun(2) * fun(3) + fun(3) * fun(2) + fun(4) * fun(1)
//f(5) = 1+ 2*[fun(1) * fun(4) + fun(2) * fun(3)]
//f(5) = 1 + 2*[fun(4) + fun(2) * fun(3)]
//f(2) = 1 + fun(1) * fun(1) = 1 + 1*1 = 2 
//f(3) = 1 + fun(1) * fun(2)2 
//f(3) = 1 + fun(1) * fun(2)2 
//f(3) = 1 + fun(1) * fun(2)2 
//f(3) = 1 + fun(1) * fun(2)
int main(void)
{
  fun(5);
  return (0);
}
