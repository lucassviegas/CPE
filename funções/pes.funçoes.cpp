#include <iostream>
using namespace std;

float quilometro(float a);
float pezin(float a);
float milha(float a);
int main()
{
	float km,pes,milhas,m;
	int op;
	cout<<"Digite quantos metros deseja converter: ";
	cin>>m;
	cout<<endl<<"Selecione qual unidade voce pretende converter: \n1 para km\n2 para pes\n3 para milhas\nopcao: ";
	cin>>op;
	cout<<endl;
	km=quilometro(m);
	pes=pezin(m);
	milhas=milha(m);
	
	switch (op)
	{
		case 1: 
		cout<<"o valor convertido para quilometros e: "<<km<<endl;
		break;
		
		case 2:
			cout<<"o valor convertido para pes e: "<<pes<<endl;
			break;
		
		case 3:
		cout<<"o valor convertido para milhas e "<<milhas<<endl;	
		default:
			return 0;
			break;
	}

}


float quilometro(float a)
{
	float valor;
	valor=a/1000;
	return valor;
}
float pezin(float a)
{
	float valor;
	valor=a*3.2808;
	return valor;
}
float milha(float a)
{
	float valor;
	valor=a* 0.00062137;
	return valor;
}
    

