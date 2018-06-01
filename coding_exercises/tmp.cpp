#include <bits/stdc++.h>

#define int long long

using namespace std;

vector<pair<int,int>> adj[1000];

int32_t main()
{
	int N, M;
	cin >> N >> M;

	// cria lista de adjacências
	for(int i=0; i < M; i++) {
		int U, V, P;
		cin >> U >> V >> P;

		adj[U-1].push_back(make_pair(V-1, P));
		adj[V-1].push_back(make_pair(U-1, P));
	}

	int S;
	cin >> S;

	// cria vetor de visitados e vetor de distâncias, inicializa todas as posições
	int menor_distancia[N];
	bool vis[N];
	for(int i=0; i < N; i++) {
		menor_distancia[i] = LLONG_MAX/2;
		vis[i] = false;
	}
	menor_distancia[S-1] = 0;

	// lista de prioridades
	priority_queue<pair<int,int>> fila; //primeiro elemento do par é o ping, segundo é a ilha
	fila.push(make_pair(0, S-1));

	// dijkstra shortest path
	for(int i=0; i < N; i++) {
		// pega o cara com maior prioridade (menor distância até o momento)
		while(vis[fila.top().second])
			fila.pop();
		int pos = fila.top().second;
		fila.pop();

		// atualiza distâncias para os vizinhos desse cara
		vis[pos] = true;
		for(auto p : adj[pos]) {
			int j = p.first, peso = p.second;
			if(!vis[j] && menor_distancia[pos]+peso < menor_distancia[j]) {
				// se mudou, joga na fila de prioridades
				menor_distancia[j] = menor_distancia[pos]+peso;
				fila.push(make_pair(-1*menor_distancia[j], j));
			}
		}
	}

	// calcula resultado da questão
	int maior = 0, menor = LLONG_MAX;
	for(int i=0; i < N; i++)
		if(i != S-1) {
			maior = max(maior, menor_distancia[i]);
			menor = min(menor, menor_distancia[i]);
		}

	cout << maior-menor << endl;
}
