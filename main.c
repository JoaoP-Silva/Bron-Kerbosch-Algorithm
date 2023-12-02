#include "nucesGraph.h"

void genGraph(char *argv[], struct nGraph* GG)
{
	FILE* fptr;
	fptr = fopen(argv[1], "r");
	
	int numVertex, numEdges;

	fscanf(fptr, "%d", &numVertex);
	fscanf(fptr, "%d", &numEdges);

	for(int count = 0; count < numVertex; count++)
	{
		addVertex(GG, count + 1);
	}

	for(int i = 0; i < numEdges; i++)
	{
		int nodeA, nodeB;
		fscanf(fptr, "%d", &nodeA);
		fscanf(fptr, "%d", &nodeB);

		addEdge(GG, nodeA, nodeB, 0);

	}
}

int main(int argc, char *argv[])
{
	int i;
	


	//Make Graph A
	/*struct nGraph G;	
	nGraphInit(&G, 'A');
	printf("%s\n", "Graph A");

	addVertex(&G, 1);
	addVertex(&G, 2);
	addVertex(&G, 3);
	addVertex(&G, 4);

	addEdge(&G, 1, 2, 0);
	addEdge(&G, 2, 3, 0);
	addEdge(&G, 3, 4, 0);
	addEdge(&G, 4, 1, 0);
	addEdge(&G, 1, 3, 0);

	//listVertices(&G);
	//listEdges(&G);
	printf("%s\n", "");
	printf("%s\n","*****************************");
	printf("%s\n", "");


	//Make Graph B
	struct nGraph G2;
	printf("%s\n", "Graph B");

	nGraphInit(&G2, 'B');
	addVertex(&G2, 1);
	addVertex(&G2, 2);
	addVertex(&G2, 3);
	addVertex(&G2, 6);
	addVertex(&G2, 7);
	addVertex(&G2, 8);


	addEdge(&G2, 2, 1, 0);
	addEdge(&G2, 2, 3, 0);
	addEdge(&G2, 7, 6, 0);
	addEdge(&G2, 7, 8, 0);

	//listVertices(&G2);
	//listEdges(&G2);
	printf("%s\n", "");
	printf("%s\n","*****************************");
	printf("%s\n", "");

	*/




	/********************************************************

	
		Below Here is the Additional Assignment Code



	*********************************************************/

	//Finding Union (G1 U G2)
	/*printf("%s\n", "Graph C union");
	struct nGraph G3=unionGrpah(&G,&G2);
	listVertices(&G3);
	listEdges(&G3);
	printf("%s\n", "");
	printf("%s\n","*****************************");
	printf("%s\n", "");

	//Finding Intersection (G1 ∩ G2)
	printf("%s\n", "Graph D intersection");
	struct nGraph G7=intersectGrpah(&G,&G2);
	listVertices(&G7);
	listEdges(&G7);
	printf("%s\n", "");
	printf("%s\n","*****************************");
	printf("%s\n", "");
	
	//Finding RingSum (G1.V U G2.V)	{(G1.E-G2.E) U (G2.E-G1.E)}
	printf("%s\n", "Graph E RingSum");
	struct nGraph G8=ringSum(&G,&G2);
	listVertices(&G8);
	listEdges(&G8);
	printf("%s\n", "");
	printf("%s\n","*****************************");
	printf("%s\n", "");

	//Finding Neighbours of A Graph on given vertex
	printf("%s\n", "Graph F Neighbours");
	struct nGraph G14=neighbours(&G,2);
	listVertices(&G14);
	//listEdges(&G14);
	printf("%s\n", "");
	printf("%s\n","*****************************");
	printf("%s\n", "");
	*/









	/********************************************************

	
		Below Here is the Bron-Kerbosch Algorithm Code



	*********************************************************/

	//Make Graph GG
	struct nGraph GG;
	nGraphInit(&GG,'G');
	genGraph(argv, &GG);
	
	listVertices(&GG);
	listEdges(&GG);

	printf("%s\n", "");
	printf("%s\n","*****************************");
	printf("%s\n", "");
	
	struct nGraph G21=FindingCliques(GG);

	return 0;
} 
