#include <stdio.h>
int check(int x1, int x2, int c, int d){
	int ne[2]; ne[0] = x1; ne[1] = x2;
	if(ne[0] == c){
		if(ne[0] == d + ne[1]) return 1;
	}
	if(ne[0] == d){
		if(ne[0] == c + ne[1]) return 1;
	}
	if(ne[1] == c){
		if(ne[1] == d + ne[0]) return 1;
	}
	if(ne[1] == d){
		if(ne[1] == c + ne[0]) return 1;
	}
	return 0;
}
int main(){
	int a[2], b[2], c[2];
	scanf("%d %d", &a[0], &a[1]);
	scanf("%d %d", &b[0], &b[1]);
	scanf("%d %d", &c[0], &c[1]);
	// a b
	if(a[0] == b[0]){
		int h = check(a[0], a[1] + b[1], c[0], c[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	if(a[0] == b[1]){
		int h = check(a[0], a[1]+b[0], c[0], c[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	if(a[1] == b[0]){
		int h = check(a[1], a[0] + b[1], c[0], c[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	if(a[1] == b[1]){
		int h = check(a[1], a[0] + b[0], c[0], c[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	// a c
	if(a[0] == c[0]){
		int h = check(a[0], a[1] + c[1], b[0], b[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	if(a[0] == c[1]){
		int h = check(a[0], a[1]+c[0], b[0], b[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	if(a[1] == c[0]){
		int h = check(a[1], a[0] + c[1], b[0], b[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	if(a[1] == c[1]){
		int h = check(a[1], a[0] + c[0], b[0], b[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	// b c
	if(b[0] == c[0]){
		int h = check(b[0], b[1] + c[1], a[0], a[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	if(b[0] == c[1]){
		int h = check(b[0], b[1]+c[0], a[0],a[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	if(b[1] == c[0]){
		int h = check(b[1], b[0] + c[1], a[0], a[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	if(b[1] == c[1]){
		int h = check(b[1],b[0] + c[0], a[0], a[1]);
		if(h){
			printf("YES"); return 0;
		}
	}
	printf("NO");



}
