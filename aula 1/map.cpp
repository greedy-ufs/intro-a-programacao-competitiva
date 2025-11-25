#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> idade;

    idade["Ana"] = 20;      // insere
    idade["Bruno"] = 25;
    idade["Carlos"] = 30;

    idade.erase("Bruno");   // remove por chave

    cout << "Idade de Ana: " << idade["Ana"] << endl;

    cout << "Todos:\n";
    for (auto& p : idade) {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << "Existe Carlos? " << (idade.count("Carlos") ? "sim" : "nao") << endl;

    return 0;
}

/*

outras funcoes

operator[] (inserir/acessar valor)
insert({chave, valor})
erase(chave)
count(chave)
find(chave)
size(), empty()
*/