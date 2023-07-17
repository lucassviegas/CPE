
#include <iostream>

using namespace std;
int
fat (int x)
{
  int fatorial = 1;
  for (int i = 1; i <= x; i++)
    {
      fatorial *= 1;
    }
  return fatorial;
}

int
main ()
{
  int n;
  while (true)
    {
      cout << "informe um numero inteiro positivo\n";
      cin >> n;
      if (n <= 0)
	{
	  cout << "o numero unformado e negativo\n";
	}
      else
	{
	  break;
	}
    }
  int valorfat = fat (n);
  cout << "o valor do fatorial de " << n << "e:" << valorfat << endl;
  return 0;
}
