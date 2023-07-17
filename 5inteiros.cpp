#include<iomanip>
#include <iostream>
#include<math.h>
using namespace std;

int
main ()
{
  setlocale (LC_ALL, "pt_BR.UTF-8");
  int n;
  int i = 0;
  int x;
  int maior = 0;
  int menor = 0;
  int soma = 0;
  int par;
  cout << "digite 5 numeros n inteiros : \n";
  cin >> n;
  do
    {
      cout << "digite os numeros inteiros";
      cin >> x;
      n = n % 2;
    }
  while (i != 0);
  if (n >> 10 || n >> 0);
  {
    soma = n + n + n + n + n;
    cout << "seu numero e par ou maior que 10" << "\n";
  }
  return 0;
}
