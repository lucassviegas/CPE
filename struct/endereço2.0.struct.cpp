#include <iostream>
#include <string>
using namespace std;
//observações no código abaixo...

struct identificacao
{
    string nome;
    int idade;
    char sexo;
};
struct bairro
{
    string nomebairro;
    int casa;
};
struct endereco
{
    string cidade;
    bairro mora;
   
};
struct pessoa
{
    identificacao pes;
    endereco cep;
};
int main()
{
    pessoa fred;  //era pra ser pessoa user, mas como fiz o codigo todo a partir da variavel fred, não vai mudar nada mesmo
    cout<<"insira seus dados como pessoa:"<<endl;
    cout<<"identificacao: "<<endl<<endl<<"nome: ";  
    getline(cin,fred.pes.nome); 
    cout<<"idade: "; 
    cin>>fred.pes.idade;
    while (0>=fred.pes.idade)    //o código não consegue rodar a condição (150<=fred.pes.idade<=0) por algum motivo que desconheço
    {                            //mas segue uma gambiarra...
        cout<<"idade invalida, insira uma possivel: ";
        cin>>fred.pes.idade;
            while (150<=fred.pes.idade)
    {
        cout<<"idade invalida, insira uma possivel: ";
        cin>>fred.pes.idade;
    }
    }
    while (150<=fred.pes.idade)      //tive que fazer esse duplo looping que tem muita linha pois...
    {                    //a condição while (150<=fred.pes.idade<=0) não funcionou por motivos desconhecidos
        cout<<"idade invalida, insira uma possivel: ";  //não sei mesmo o porquê de não funcionar a condição acima
        cin>>fred.pes.idade;
            while (0>=fred.pes.idade)   
    {
        cout<<"idade invalida, insira uma possivel: ";  
        cin>>fred.pes.idade;
    }
    }
    cout<<"sexo (m/f): ";
    cin>>fred.pes.sexo;
    while((fred.pes.sexo!='m')&&(fred.pes.sexo!='f'))
    {
        cout<<endl<<"o sexo apresentado nao coincide com as informadas, tente novamente: ";
        cin>>fred.pes.sexo;
    }
    cout<<endl<<"insira a sua cidade: ";
    getline(cin,fred.cep.cidade);     //se eu usar getline aqui, a cidade é pulada e vai pro bairro,
    getline(cin,fred.cep.cidade);    //deixando o campo cidade vazio
    cout<<"nome do bairro: ";         //mas se eu usar 2 getlines da msm variavel eu consigo burlar isso
    getline(cin,fred.cep.mora.nomebairro);  //sim, até eu não entendi o porquê.
    cout<<"numero da casa: ";
    cin>>fred.cep.mora.casa;
    while(fred.cep.mora.casa<0)
    {
        cout<<"insira um numero de casa valido: ";
        cin>>fred.cep.mora.casa;
    }
    cout<<endl<<"registro finalizado."<<endl<<endl;
    cout<<"nome: "<<fred.pes.nome<<endl<<"idade: "<<fred.pes.idade<<endl<<"sexo: "<<fred.pes.sexo<<endl;
    cout<<"cidade: "<<fred.cep.cidade<<endl<<"nome do bairro: "<<fred.cep.mora.nomebairro<<endl<<"casa "<<fred.cep.mora.casa<<endl;
 
    return 0;
}

