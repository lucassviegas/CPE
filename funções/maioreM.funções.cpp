#include <iostream>
using namespace std;

void f0 (int x);
void f1 (int vet[],int x);
void f2(int vet[],int x);

int main()
{
int a;
cout<<"insira um numero inteiro maior que 1: ";
cin>>a;
while(a<1)
{
cout<<"erro, digite um numero maior que 1: "<<endl;
cin>>a;
}
f0(a);
return 0;
}

void f0 (int x)
{
int vet[x];
int maior, menor;
int vetmaio[2];
for (int i=0;i<x;i++)
{
cout<<"insira o "<<i+1<<" valor do vetor:"<<endl;
cin>> vet[i];
}
cout<<endl<<"os valores do vetor sao [";
for (int i=0;i<x;i++)
{
cout<<vet[i]<<" ";
}
cout<<"]"<<endl;
cout<<"O maior numero desse conjunto e o menor numero desse conjunto e, respectivamente [";
f1 (vet,x);


}
void f1 (int vet[],int x)
{

int maior;
int menor;
for (int i=0;i<x;i++)
{
	if(i==0)
	{
		maior=vet[i];
		menor=vet[i];
	}
if (vet[i]<menor)
  menor=vet[i];
if (vet[i]>maior)
  maior=vet[i];


}
cout<<maior<<","<<menor;
f2 (vet,x);
}
void f2(int vet[],int x)
{
	cout<<"]";
	cout<<endl<<"e os vetores ordenados fica por: [ ";
	int j,i,qualq;
	for (i=0;i<x;i++)
	{
		for (j=i;j<x;j++)
		{
			if(vet[j]>vet[i])
			{
				qualq=vet[i];
				vet[i]=vet[j];
				vet[j]=qualq;
			}
		}
	}
	for (i=0;i<x;i++)
	  cout<<vet[i]<<" ";
	cout<<"]"<<endl;
}

