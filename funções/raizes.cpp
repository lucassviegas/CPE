#include <iostream>
#include <cmath>
using namespace std;

float delta (float a,float b,float c)
{
	float voltadelta=sqrt(b*b-4*a*c);
	return voltadelta;
}
void raizes(float a,float b,float c)
{
	float raiz1=-b+delta(a,b,c);
	raiz1=raiz1/2*a;
	float raiz2=-b-delta(a,b,c);
	raiz2=raiz2/2*a; 
	cout<<endl<<"as raizes da equacao sao: "<<raiz1<<" e "<<raiz2;
}
int main()
{
 float a,b,c;
 cout<<"insira os coeficientes da equacao: "<<endl<<"coeficiente a: ";
 cin>>a;
 cout<<"coeficiente b: ";
 cin>>b;
 cout<<"coeficiente c: ";
 cin>>c;
 raizes(a,b,c);
 return 0;
 
}
