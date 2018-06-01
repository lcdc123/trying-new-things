#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(int argc, char const *argv[])
{
    int qttynodes, qttylinks;

    cin>>qttynodes>>qttylinks;


    vector<pair<int,int>> neighb[qttynodes];

    int node1, node2, cost;

    for (size_t i = 0; i < qttylinks; i++)
    {
        cin>>node1>>node2>>cost;
        neighb[node1 - 1].push_back(make_pair(node2 - 1,cost)); //os dois vizinhos têm que ser marcados, um com o outro, e o custo é o mesmo
        neighb[node2 - 1].push_back(make_pair(node1 - 1, cost));
    }

    int start;
    cin>>start;

    // cria vetor de visitados e vetor de custos, inicializa todas as posições
    int lesser_cost[qttynodes]; fill_n(lesser_cost,qttynodes,LLONG_MAX/2);
    bool visited[qttynodes]; fill_n(visited,qttynodes,false);

    lesser_cost[start] = 0; // o custo de chegar à primeira posição é 0

    // declara lista de prioridades contendo o par, insere o primeiro elemento da fila, o nodo de início
    priority_queue<pair<int,int>> fila;
    fila.push(make_pair(0, start-1));

    /* AQUI TERMINA O GERENCIAMENTO DE MEMÓRIA E A INTRODUÇÃO DE PARÂMETROS E INICIA-SE DIJKSTRA SHORTEST PATH */
    //esse for é executado tantas vezes quanto o número de nodos, mas não na ordem crescente ou decrescente.
    // Ele obedece a ordem da fila de prioridade;
    for (size_t i = 0; i < ; i++)
    {
        // acessa o nodo com maior prioridade QUE AINDA NÃO FOI VISITADO (por isso o while, que elimina qualquer nodo "repetido")
        while(visited[fila.top().second])
            fila.pop();
        int currentnode = fila.top().second;
        fila.pop();
        visited[currentnode] = true;

        for (auto cadapar : neighb[currentnode])
        {
            int node = cadapar.first, cost = cadapar.second;
            if (!visited[node] && )
        }

    }






    return 0;
}
