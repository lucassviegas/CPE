#include <iostream>
using namespace std;


struct polar
{
	int modulo;
	float angulo;
};

void imprima(polar* x);
int main()
 {
   polar a;
   imprima(&a);
  cout<<"o modulo da equacao e: "<<a.modulo<<" e o angulo e igual a "<<a.angulo;

return 0;
 }
void imprima(polar* x)
{
	cout<<"o modulo equivale a: ";
	cin>>x->modulo;
	cout<<"agora insira o angulo da equacao: ";
	cin>>x->angulo;
}

