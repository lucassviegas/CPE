#include<iomanip>
#include <iostream>
#include<math.h>
using namespace std;

int
main ()
{
  setlocale (LC_ALL, "pt_BR.UTF-8");
  float C;
  float F;
  float calculo;
  cout<<"informe a temperatura em graus C";
  cin>>C;
  F=(9*C+160)/5;
  cout<<"a tempertaura em F ";
  cin>>F;
  
  return 0;
}
