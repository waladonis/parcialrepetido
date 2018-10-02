#include <stdio.h>
int main(){
		
		int i, j, x,y, aux;
		int mat1 [2][3];
		int mat2 [2][3];
		
		printf("\nLLENADO DE MATRIZ 1 \n");
			for(i=0; i<2; i++){
			for(j=0; j<3; j++){
			printf("Ingrese el valor %d,%d para la matriz: ", i, j);
			scanf("%d", & mat1[i][j]);	
		}
	}
					//burbuja mat1
				for(i=0; i<2; i++){
				for(j=0; j<3; j++){
				for(x=0; i<2; i++){
				for(y=0; j<3; j++){
				if(mat1[i][j] > mat1[x][y]){
				aux=mat1[i][j];
				mat1[i][j]=mat1[x][y];
				mat1[x][y]=aux;
				
							}
						}
					}
				}
			}	
			
			
			printf("\nLLENADO DE MATRIZ  2 \n");
			for(i=0; i<2; i++){
			for(j=0; j<3; j++){
			printf("Ingrese el valor %d,%d para la matriz: ", i, j);
			scanf("%d", & mat2[i][j]);	
		}
	}
				
				//burbuja mat2
			
				for(i=0; i<2; i++){
				for(j=0; j<3; j++){
				for(x=0; i<2; i++){
				for(y=0; j<3; j++){
				if(mat2[i][j] > mat2[x][y]){
				aux=mat2[i][j];
				mat2[i][j]=mat2[x][y];
				mat2[x][y]=aux;
				
							}
						}
					}
				}
			}	
			
			
			
			
			
			printf("\n Matrices ordenadas  \n");
			
			for(i=1; i>=0; i--){
			for(j=2; j>=0; j--){
				if(mat1[i][j] < mat2[i][j]){
					printf("%d\t", mat1[i][j]);
					}else
					printf("%d\t", mat2[i][j]);		
				
				
			}
		}
			printf("\n");
	
}
