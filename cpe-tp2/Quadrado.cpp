#include<iomanip>
#include <iostream>
#include<math.h>
using namespace std;

int
main ()
{
  setlocale (LC_ALL, "pt_BR.UTF-8");
  float a;
  float b;
  float lado;
  cout << "informe o lado do quadrado \n";
  cin >> a;
  cout << "informe o outro lado do quadrado \n";
  cin >> b;
  lado = a * b;
  cout << "a area e o perimetro do quadrado e " << lado;
  return 0;
}

