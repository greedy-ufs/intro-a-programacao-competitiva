#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1; // declarar vetor vazio
    vector<int> v2(10); // declarar vetor com 10 posicoes 
    vector<int> v = {1, 2, 3}; // declarar

    v.push_back(4); // adiciona

    cin >> v[0]; // ler um inteiro e coloca na posicao 0
    cout << v[2]; // acesso por índice

    cout << "Tamanho: " << v.size() << endl;

    for (int x : v) 
        cout << x << " ";

    return 0;
}

/*

outras funcoes

push_back()
operator[]
size(), empty()
begin(), end()
*/