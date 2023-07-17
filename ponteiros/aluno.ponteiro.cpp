#include <iostream>
using namespace std;

struct aluno
 {
 	int matricula;
 	float nota;
 };

int main()
{
	aluno viegas;
	aluno* pont;
	pont=&viegas;
	cout<<"insira sua matricula: ";
	cin>>pont->matricula;
	cout<<"agora, insira a sua nota no semestre: ";
	cin>>pont->nota;
	 while(pont->nota<0)
	  {
	  	cout<<"nota invalida, insira uma valida: ";
	  	cin>>pont->nota;
	  }
	cout<<endl<<"sua matricula e "<<viegas.matricula<<" e sua nota e "<<viegas.nota; 

return 0;
}

