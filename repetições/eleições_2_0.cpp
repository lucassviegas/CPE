#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");

  // Declaração de variáveis
  int V = 0, C1 = 0, C2 = 0, C3 = 0, C4 = 0, VN = 0, VB = 0;

  // Mensagem de boas-vindas
  cout << "Início da votação." << endl;

  // Loop de votação
  while (V != 0) {
    // Exibe as opções de voto
    cout << "Escolha:" << endl;
    cout << "1 - Jair Bolsonaro" << endl;
    cout << "2 - Lula" << endl;
    cout << "3 - Luiz Felipe d'Avilla" << endl;
    cout << "4 - Simone Tebet" << endl;
    cout << "5 - Voto nulo" << endl;
    cout << "6 - Voto em branco" << endl;

    // Lê a opção do votante
    cin >> V;

    // Atualiza os votos
    switch (V) {
      case 1:
        C1++;
        cout << "Votante 1 - registrado com sucesso!" << endl;
        break;
      case 2:
        C2++;
        cout << "Votante 2 - registrado com sucesso!" << endl;
        break;
      case 3:
        C3++;
        cout << "Votante 3 - registrado com sucesso!" << endl;
        break;
      case 4:
        C4++;
        cout << "Votante 4 - registrado com sucesso!" << endl;
        break;
      case 5:
        VN++;
        cout << "Votante 5 - voto nulo com sucesso!" << endl;
        break;
      case 6:
        VB++;
        cout << "Votante 6 - voto em branco com sucesso!" << endl;
        break;
      default:
        cout << "Opção inválida." << endl;
        break;
    }
  }

  // Exibe o resultado da votação
  cout << "Resultado:" << endl;
  cout << "Jair Bolsonaro: " << C1 << endl;
  cout << "Lula: " << C2 << endl;
  cout << "Luiz Felipe d'Avilla: " << C3 << endl;
  cout << "Simone Tebet: " << C4 << endl;
  cout << "Votos nulos: " << VN << endl;
  cout << "Votos em branco: " << VB << endl;

  return 0;
}
