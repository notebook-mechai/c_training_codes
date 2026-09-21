int main()
{
	printf("Two-Dimensional Arrays\n");

//	int mat[3][4] = {{1,5,2,5}, {7,9,6,8}, {4,3,6,2}};
//	int mat[2][3] = {{1, 4, 2}, {3, 6, 8}};
	int mat[3][2] = {{0, 1}, {2, 3}, {4, 5}};
	int row = sizeof(mat) / sizeof(mat[0]);
	int column = sizeof(mat[0]) / sizeof(int);
//	printf("%d\n", row);
//	printf("%d\n", column);

	int i,j;
	for(i = 0; i < row ; i++ )
	{
		for(j=0; j< column; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}


//	int mat_3d[2][3][4] =
//		{ 
//		   { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} },
//		   { {12,13,14,15}, {16,17,18,19}, {20,21,22,23} }
//		};	
//	int x,y,z;
//	for(x = 0; x < 2 ; x++ )
//	{
//		for(y=0; y< 3; y++)
//		{
//			for(z=0; z< 4; z++)
//			{
//				printf("mat_3d[%d][%d][%d] = %d \n", x, y, z, mat_3d[x][y][z]);
//			}
//		}
//		printf("\n");
//	}
	
 
}
