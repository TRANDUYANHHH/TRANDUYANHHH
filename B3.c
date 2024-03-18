#include <stdio.h>
int main(){
	int n, m; scanf("%d %d", &n, &m);
	int a[n+1][m+1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	if(n > m){
		int k = (n - m)*2-1;

		for(int i = 1; i <= n; i++){
			if(i % 2  && i <= k){
				
			}
			else{
				for(int j = 1; j <= m; j++){
					printf("%d ", a[i][j]);
				}
				printf("\n");
			}
		}

	}
	else{
		int k = (m-n)*2;
		printf("%d\n", k);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(j % 2 == 0 && j <= k){
					
				}
				else {
					printf("%d ", a[i][j]);
				}

			}
			printf("\n");
		}
	}
	return 0;
}
