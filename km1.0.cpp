#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float Km, P, milhas, M, metros;
Km:
    0.00;
P:
    0.00;
    int escolha;
    do
    {
        cout << "ingresse a medida em metros na qual deseja converter\n";
        cin >> metros;
        cout << "escolha"
             << "\n";
        cout << "1 para ver em Km"
             << "\n";
        cout << "2 para ver em pés"
             << "\n";
        cin >> escolha;
        switch (escolha)
        {
        case 0:
            cout << "coversão finalizada";
            break;
        case 1:
            cout << "a medida em Km e " << (Km = M / 1000);
            break;
        case 2:
            cout << "para ver em pés " << (P = M * 3.28);
            break;
        default:
            cout << "opção invalida";
            break;
        }
    } while (escolha != 0);

    return 0;
}