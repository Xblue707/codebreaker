#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

class Graph {
 public:
	int verts;
	vector<vi> adjList;

	Graph(int verts) {
		this->verts = verts;
		for (int i = 0; i < this->verts; ++i) {
			this->adjList.push_back(vi());
		}
	}

	void addEdge(int u, int v) {
		if (u < 0 || u >= this->verts || v < 0 || v >= this->verts) {
			return;
		}
		this->adjList.at(u).push_back(v);
		this->adjList.at(v).push_back(u);
	}

	void dfs(bool visited[], int start) {
		if (start < 0 || start >= this->verts) return;
		visited[start] = true;

		int i = 0;
		while (i < this->adjList.at(start).size()) {
			if (!(visited[this->adjList.at(start).at(i)])) {
				this->dfs(visited, this->adjList.at(start).at(i));
			}
			i++;
		}
	}

	void count() {
		bool visited[this->verts];
		int result = 0;
		for (int i = 0; i < this->verts; ++i) {
			visited[i] = false;
		}
		for (int i = 0; i < this->verts; ++i) {
			if (!visited[i]) {
				result++;
				this->dfs(visited, i);
			}
		}
		cout << result;
	}
};

int main() {
	int n, e;
	cin >> n >> e;
	int a, b;
	Graph *graph = new Graph(n);
	for (int i = 0; i < e; ++i) {
		cin >> a >> b;
		graph->addEdge(a, b);
	}
	graph->count();
}
