#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 5
int main()
{
	int **A = (int **)malloc(M * sizeof(int *));
	if (A == NULL)
	{
		printf(stderr, "out of memory\n");
		exit(0);
	}
	*A = (int *)malloc(sizeof(int) * M * N);
	for (int r = 0; r < M; r++)
		A[r] = (*A + N*r);
	for (int r = 0; r < M; r++)
		for (int c = 0; c < N; c++)
			A[r][c] = rand() % 100;
	for (int r = 0; r < M; r++)
	{
		for (int c = 0; c < N; c++)
			printf("%d ", A[r][c]);

		printf("\n");
	}
	free(*A);
	free(A);

	return 0;
}
