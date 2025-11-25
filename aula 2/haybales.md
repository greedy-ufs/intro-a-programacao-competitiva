# [Problema: Haybales (Fardos de Feno)](https://usaco.org/index.php?page=viewproblem2&cpid=666&lang=en)

O Fazendeiro João acabou de organizar seus $N$ fardos de feno $(1 \leq N \leq 10^6)$ em vários
pontos ao longo de uma estrada unidimensional que atravessa sua fazenda.
Para garantir que eles estejam devidamente espaçados, ele precisa
responder a $Q$ consultas $(1 \leq Q \leq 10^6)$, cada uma pedindo o número de fardos de feno
dentro de um determinado intervalo da estrada.

## Entrada

A primeira linha contém dois inteiros $N$ e $Q$

A segunda linha contém $N$ inteiros distintos, cada um no intervalo entre $1 \leq Q \leq 10^6$ indicando que existe um fardo de feno em cada uma dessas posições.

Cada uma das próximas Q linhas contém dois inteiros $A$ e $B$, $0 \leq A \leq B \leq 10^9$, representando uma consulta que pede a quantidade de fardos de feno
localizados no intervalo \[A, B\], incluso.

## Saida

Devem ser impressas Q linhas, onde cada linha contém um número inteiro
representando a quantidade de fardos de feno dentro do intervalo
especificado pela respectiva consulta.

## Exemplo

### Entrada
```
4 6
3 2 7 5
2 3
2 4
2 5
2 7
4 6
8 10
```


### Saída
```
2
2
3
4
1
0
```