#include "Graph.h"
#include <stdlib.h>
#include "list.h"

void dfs(Graph g, Vertex u, int* visited) {
	visited[u] = 1;
	for (Vertex v = 0; v < GraphNumVertices(g); v++) {
		if (GraphIsAdjacent(g, u, v) && visited[v] == 0) {
			dfs(g, v, visited);
		}
	}
}

List reachable(Graph g, Vertex src) {

	int nV = GraphNumVertices(g);
	int * visited = calloc(nV, sizeof(int));
	dfs(g, src, visited);
	List l = newList();
	for (int i = 0; i < nV; i++) {
		if (visited[i] == 1) listAppend(l, i);
	}
	return l;
}

int main(void) {
	Graph g = GraphRead();
	printf("Reachable nodes: \n");
	List l = reachable(g, 9);
	printListSet(l);
	GraphFree(g);
	freeList(l);
	return 0;
}