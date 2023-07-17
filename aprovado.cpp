

#include <iostream>

using namespace std;

int
main ()
{
  float nota1, nota2, nota3;
  cout << "informe por gentileza a primera nota";
  cin >> nota1;
  cout << "informe por gentileza a segunda nota";
  cin >> nota2;
  cout << "informe por gentileza a terceira nota";
  cin >> nota3;
  nota1 = (nota1 + nota2 + nota3) / 3;
  if ((nota1 > 5) and (nota1 <= 10))
    {
      cout << "aprovado";
    }
  else if ((nota1 < 5) & (nota1 < 0))
    {
      cout << "reprovado";
    }
  else if ((nota1 < 0) or (nota1 > 10))
    cout << "valores invalidos";
  return 0;
}
