#include<stdio.h>
#include <iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;

int
main ()
{
  setlocale (LC_ALL, "pt_BR.UTF-8");
  int V =7, C1 = 0, C2 = 0, C3 = 0, C4 = 0, VN = 0, VB = 0;
  cout << "inicio da votação ";
  while (V != 0)
    {
      cout << "escholha" << "\n";
      cout << "1 para o candidato Jair bolsonaro " << "\n";
      cout << "2 para o candidato Lula Ladrao " << "\n";
      cout << "3 para o candidato Luiz Felipe d'Avilla " << "\n";
      cout << "4 para o candidata Simone Tebet " << "\n";
      cin >> V;
      switch (V)
	{
	case 0:
	  cout << "votaçao encerrada";
	  break;
	case 1:
	  C1 = C1 + 1;
	  cout << "votante 1- registrado com sucesso!";
	  break;
	case 2:
	  C2 = C2 + 1;
	  cout << "votante 2- registrado com sucesso!";
	  break;
	case 3:
	  C3 = C3 + 1;
	  cout << "votante 3- registrado com sucesso!";
	  break;
	case 4:
	  C4 = C4 + 1;
	  cout << "votante 4- registrado com sucesso!";
	  break;
	case 5:
	  VN = VN + 1;
	  cout << "votante 5- voto nulo com sucesso!";
	  break;
	case 6:
	  VB = VB + 1;
	  cout << "votante 6- voto em branco  com sucesso!";
	  break;
	default:
	  cout << "opçao invalida";
	  break;
	}

    }

  cout <<
    "o resultado: \n Jair bolsonaro \t %i\n luiz Felipe d'Avilla \t %i\n Simone Tebet \t %i\n Lula Ladrao\t %i\n votos brancos \t %i\n votos nulos \t %i\n";



  return 0;
}
