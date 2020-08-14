#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 5
int main()
{
	int **A = (int **)malloc(M * sizeof(int *));
	if (A == NULL)
	{
		printf(stderr, "Out of memory");
		exit(0);
	}
	for (int r = 0; r < M; r++)
	{
		A[r] = (int *)malloc(N * sizeof(int));
		if (A[r] == NULL)
		{
			printf(stderr, "Out of memory");
			exit(0);
		}
	}
	for (int r = 0; r < M; r++)
		for (int c = 0; c < N; c++)
			A[r][c] = rand() % 100;
	for (int r = 0; r < M; r++)
	{
		for (int c = 0; c < N; c++)
			printf("%d ", A[r][c]);

		printf("\n");
	}
	for (int r = 0; r < M; r++)
		free(A[r]);
	free(A);
	return 0;
}
