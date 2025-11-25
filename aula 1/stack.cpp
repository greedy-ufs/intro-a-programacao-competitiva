#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);   // adiciona no topo
    s.push(20);
    s.push(30);

    cout << "Topo: " << s.top() << endl;   // último inserido
    cout << "Tamanho: " << s.size() << endl;

    s.pop();     // remove o topo

    cout << "Novo topo: " << s.top() << endl;

    return 0;
}

/*

outras funcoes

push(x)
pop()
top()
size()
empty()
*/