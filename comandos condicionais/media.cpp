#include<iomanip>
#include <iostream>
#include<math.h>
using namespace std;

int
main ()
{
  setlocale (LC_ALL, "pt_BR.UTF-8");
  float number1, number2, number3;
  cout << "informe por gentileza o primeiro numero";
  cin >> number1;
  cout << "informe por gentileza o segundo numero";
  cin >> number2;
  cout << "informe por gentileza o terceiro numero";
  cin >> number3;
  number1 = (number1 + number2 + number3) / 3;
  if ((number1 > 5) and (number1 <= 10))
    {
      cout << "aprovado";
    }
  else if ((number1 < 5) & (number1 < 0))
    {
      cout << "reprovado";
    }
  else if ((number1 < 0) or (number1 > 0))
    cout << "valores invalidos";

  return 0;
}
