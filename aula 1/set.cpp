#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10);   // ignorado (duplicado)

    cout << "Elementos: ";
    for (int x : s) cout << x << " ";   // já vem ordenado

    cout << "\nExiste 5? " << (s.count(5) ? "sim" : "nao") << endl;

    s.erase(10);   // remove valor

    cout << "Menor elemento: " << *s.begin() << endl;

    return 0;
}

/*

outras funcoes

insert(x)
erase(x)
count(x) (0 ou 1)
find(x)
begin(), end()
size(), empty()
*/