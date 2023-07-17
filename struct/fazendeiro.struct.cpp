#include <iostream>
#include <string>
//observações abaixo...
using namespace std;

struct data
{
    int dia;
    int mes;
    int ano;
};
struct colheita
{
    string especie;
    float kg;
    data nasc;
};
int main()
{
    int tamanho;
    cout<<"qual o tamanho do seu pomar? ";
    cin>>tamanho;
    colheita pomar[tamanho];
    cout<<"insira os dados solicitados para o registro:"<<endl<<endl;
    for (int i=0;i<tamanho;i++)
    {
      cout<<"informacoes do pomar : "<<i+1<<":"<<endl;
      cout<<"qual a data que você plantou uma arvore frutifera neste pomar?";
      cout<<endl<<"mes: ";
      cin>>pomar[i].nasc.mes;
      while (0>=pomar[i].nasc.mes)
      {
        cout<<"mes invalido, insira um valido: ";
        cin>>pomar[i].nasc.mes;
                    while (12<pomar[i].nasc.mes)
      {
        cout<<"mes invalido, insira um valido: ";    //ainda sigo com esse problema de condição dupla com while
        cin>>pomar[i].nasc.mes;       //tentei fazer while (0>=pomar[i].nasc.mes>=12) mas nao funcionou...
      }                               //por isso fiz essa gambiarra nada convencional
      }
            while (12<pomar[i].nasc.mes)
      {
        cout<<"mes invalido, insira um valido: ";
        cin>>pomar[i].nasc.mes;
              while (0>=pomar[i].nasc.mes)
      {
        cout<<"mes invalido, insira um valido: ";
        cin>>pomar[i].nasc.mes;
      }
      }
      cout<<"dia: ";  //a partir daqui eu só fiz um looping de acordo com cada dia de cada mês, pode...
      cin>>pomar[i].nasc.dia; //pular para a linha 204.
      while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
      if (pomar[i].nasc.mes==1)
      {
        while(pomar[i].nasc.dia>31)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }
            if (pomar[i].nasc.mes==2)
      {
        while(pomar[i].nasc.dia>29)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==3)
      {
        while(pomar[i].nasc.dia>31)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==4)
      {
        while(pomar[i].nasc.dia>30)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==5)
      {
        while(pomar[i].nasc.dia>31)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==6)
      {
        while(pomar[i].nasc.dia>30)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==7)
      {
        while(pomar[i].nasc.dia>31)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==8)
      {
        while(pomar[i].nasc.dia>30)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==9)
      {
        while(pomar[i].nasc.dia>30)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==10)
      {
        while(pomar[i].nasc.dia>31)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==11)
      {
        while(pomar[i].nasc.dia>30)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }      if (pomar[i].nasc.mes==12)
      {
        while(pomar[i].nasc.dia>31)
        {
            cout<<"dia invalido para o mes, insira um dia valido de acordo com o calendario: ";
            cin>>pomar[i].nasc.dia;
                  while(pomar[i].nasc.dia<=0)
      {
        cout<<"dia invalido, insira um dia real: ";
        cin>>pomar[i].nasc.dia;
      }
        }
      }
      cout<<"ano: ";
      cin>>pomar[i].nasc.ano;
      while (pomar[i].nasc.ano<0)
      {
        cout<<"ano invalido. insira um numero inteiro positivo: ";
        cin>>pomar[i].nasc.ano;
      }
      cout<<"qual a especie das arvores plantadas no pomar? ";
      getline(cin,pomar[i].especie);    //usei essa gambiarra de 2 getlines de novo pois
            getline(cin,pomar[i].especie); //colocando 1 só getline, o campo é pulado e a especie fica vazia.
      cout<<"por final, qual a quantidade (em kg) da sua ultima colheita? ";
      cin>>pomar[i].kg;
      while (pomar[i].kg<0)
      {
        cout<<"massa invalida, insira uma massa valida: ";
        cin>>pomar[i].kg;
      }
      cout<<endl;
    }
          cout<<endl<<"registro finalizado."<<endl<<endl;
    for (int i=0;i<tamanho;i++)
    {
        cout<<"registro do pomar "<<i+1<<": "<<endl;
        cout<<"especie das arvores: "<<pomar[i].especie<<endl;
        cout<<"plantadas na data "<<pomar[i].nasc.dia<<"/"<<pomar[i].nasc.mes<<"/"<<pomar[i].nasc.ano<<endl;
        cout<<"com "<<pomar[i].kg<<"kg colhidos na ultima colheita.";
        cout<<endl<<endl;
    }
    return 0;
}
