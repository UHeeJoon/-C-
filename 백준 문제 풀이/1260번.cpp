/*
#include <iostream>
#include <queue>
using namespace std;

#define MAX 1001
int N, M, V; //정점개수, 간선개수, 시작정점
int map[MAX][MAX]; //인접 행렬 그래프
bool visited[MAX]; //정점 방문 여부
queue<int> q;

void reset() {
    for (int i = 1; i <= N; i++) {
        visited[i] = 0;
    }
}

void DFS(int v) {
    visited[v] = true;
    cout << v << " ";

    for (int i = 1; i <= N; i++) {
        if (map[v][i] == 1 && visited[i] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
            DFS(i);
        }
    }
}

void BFS(int v) {
    q.push(v);
    visited[v] = true;
    cout << v << " ";

    while (!q.empty()) {
        v = q.front();
        q.pop();

        for (int w = 1; w <= N; w++) {
            if (map[v][w] == 1 && visited[w] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
                q.push(w);
                visited[w] = true;
                cout << w << " ";
            }
        }
    }
}

int main() {
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    reset();
    DFS(V);
    cout << '\n';
    reset();
    BFS(V);
    return 0;
}
*/

#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

vector<int> e[1001];
bool check[1001];

void dfs(int v) {
	check[v] = true;
	cout << v << " ";
	for (int i = 0; i < e[v].size(); i++) {
		int next = e[v][i];
        if (!check[next]) {
            dfs(next);
        }
	}
}

void bfs(int v) {
	queue<int> q;
	q.push(v);
	check[v] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		for (int i = 0; i < e[cur].size(); i++) {
			int next = e[cur][i];
			if (!check[next]) {
				check[next] = true;
				q.push(next);
			}
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M, V, from, to;
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		cin >> from >> to;
		e[from].push_back(to);
		e[to].push_back(from);
	}

	for (int i = 1; i <= N; i++)
		sort(e[i].begin(), e[i].end());
	dfs(V);
	cout << '\n';
	memset(check, false, sizeof(check));
	bfs(V);

	return 0;
}

/*
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
const int MAX = 1000 + 1;
int N, M, V;
int adjacent[MAX][MAX];
bool visited[MAX];
queue<int> q;
void DFS(int idx) {
    cout << idx << " ";
    for (int i = 1; i <= N; i++)
        if (adjacent[idx][i] && !visited[i]) {
            visited[i] = 1;
            //인접한 노드에 대해서 또 다시 DFS
            DFS(i);
        }
}
void BFS(int idx) {
    q.push(idx);
    visited[idx] = 1;
    while (!q.empty()) {
        idx = q.front();
        q.pop();
        cout << idx << " ";
        //BFS는 해당 노드에 인접한 노드들을 모두 추가한 뒤 BFS 진행
        for (int i = 1; i <= N; i++)
            if (adjacent[idx][i] && !visited[i]) {
                visited[i] = 1;
                q.push(i);
            }
    }
}
int main(void) {
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++) {
        int from, to;
        cin >> from >> to;
        adjacent[from][to] = 1;
        adjacent[to][from] = 1;
    }
    visited[V] = 1; //V에서 시작하므로
    DFS(V);
    cout << endl;
    memset(visited, false, sizeof(visited));
    BFS(V);
    cout << endl;
    return 0;
}
*/