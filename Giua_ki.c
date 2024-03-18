#include <stdio.h>
void solve(){
	int n, m; scanf("%d %d", &n, &m);
	int N; scanf("%d", &N);
	int a[n][m];
	int max[10000] = {-1};
	int v = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
			if(max[v-1] < a[i][j]) {
				max[v] = a[i][j];
				v++;
			}
		}
	}
	printf("%d ",max[v-N+1]);
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		solve();
		printf("\n");
	}
	return 0;
}
