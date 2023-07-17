#include <iostream>
using namespace std;

void distancia(float x1,float x2,float y1,float y2);
int main()
{
	float x2,y2,x1,y1;
	cout<<"insira as coordenadas do primeiro ponto: "<<endl;
	cin>>x1>>y1;
	cout<<"insira as coordenadas do segundo ponto: "<<endl;
	cin>>x2>>y2;
	cout<<"as coordenadas do primeiro ponto e ["<<x1<<","<<y1<<"]"<<endl<<"as coordenadas do segundo ponto e ["<<x2<<","<<y2<<"]"<<endl;
	cout<<"e a distancia entre estes pontos e de: [";
	distancia(x1,x2,y1,y2);
	cout<<"]"<<endl;
}

void distancia(float x1,float x2,float y1,float y2)
{
	if (x1>x2)
	 x1=x1-x2;
	else
	 x1=x2-x1;
	if (y1>y2)
	 y1=y1-y2;
	else
	 y1=y2-y1;
	cout<<x1<<","<<y1;
}


