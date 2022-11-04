/* 
Algoritmo adiciona , remove e verifica a existência de chave de associação.
*/

#include <iostream>
#include <map>/* Responsável pela associação de objetos do tipo chave e elemento */
using namespace std;

int n=0;
/* Cria a estrutura da lista */
struct Materias{
string codigo;
string disciplina;
};

//Função menu
void menu(){
    cout << "O que você deseja fazer? \n (1) Inserir chave \n (2) Remover chave \n (3) Verificar chave \n (4) Sair \n" << endl;
    cin >>n;
}


int main(){
int chave;
char disciplina[20], codigo[5];

menu();// chama a função menu

/* Cria o Mapa com Lista */
map<int, Materias> MapaLista;
Materias mat;


while (n!=4){

if (n==1){
//Insere a chave informada pelo usuário
cout << "Adicionar nova disciplina"<< endl;
cout << "Informe a chave para armazenar: "<< endl;
cin >> chave;

/* Verifica se a chave não existe */
if(MapaLista.find(chave) == MapaLista.end()){

/* Informa os dados para a associação caso a chave não exista*/
cout << "Informe o codigo da disciplina: ";
cin >> codigo;
cout <<"Informe o nome da disciplina: ";
cin >> disciplina;

/* Insere no mapa */
mat.codigo = codigo;
mat.disciplina = disciplina;
MapaLista[chave] = mat;

/* Imprime na tela os dados da disciplina inserido */
cout << "\nDisciplina Inserida com sucesso" << endl;
cout << "\nCodigo: " + MapaLista[chave].codigo + "\n Disciplina: " + MapaLista[chave].disciplina + "\n" << endl;
} else {
cout << "Chave ja existente!\n" << endl;
}
menu();
}

if (n==2){
//Remove a chave
cout << "Informe a chave para remocao: ";
cin >> chave;

/* Verifica se a chave existe */
if(MapaLista.find(chave) == MapaLista.end()){
cout << "Chave nao existente!\n" << endl;
} else {
/*Remove a associação da chave informada pelo usuário */
MapaLista.erase(MapaLista.find(chave));
}
menu();
}

if (n==3){
//Verifica se a chave informada pelo usuário existe
cout << "Informe a chave da disciplina: ";
cin >> chave; 
/* Se achou a chave pesquisada, escreve Encontrou, caso contrário Não Encontrou */
if(MapaLista.find(chave) == MapaLista.end())
cout << "Nao Encontrado!\n" << endl;
else
cout << "Encontrado!\n" << endl;
menu();
}
}

return 0;
}





