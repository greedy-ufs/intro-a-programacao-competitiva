#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);   // insere no final
    q.push(20);
    q.push(30);

    cout << "Frente: " << q.front() << endl;  // primeiro elemento
    cout << "Tamanho: " << q.size() << endl;

    q.pop();     // remove o da frente

    cout << "Nova frente: " << q.front() << endl;

    return 0;
}

/*

outras funcoes

push(x)
pop()
front()
back()
size()
empty()
*/