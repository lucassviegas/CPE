#include<iomanip>
#include <iostream>
#include<math.h>
using namespace std;

int
main ()
{
  setlocale (LC_ALL, "pt_BR.UTF-8");
  char u[3];
  int i, n, soma = 0;
  for (i = 0; i < 3; i++)
    {
      cout << "digite a letra" << ' ' << "da palavra";
      cin >> u[i];

    }
  if (u[0] == u[2])
     {
         cout<<"a palavra e um palidromo";
         
         
    }
    else {
        cout<<"a palavra não e um palidromo";
  }


  return 0;
}
