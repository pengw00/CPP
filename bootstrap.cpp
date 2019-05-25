#include <csstdio>

const int N = 50;

int int main()
{
	/* code */
	int n, m, k[N];
	scanf("%d %d", &n, &m);
	for(int i = 0; i< n; i++){
		scanf("%d", &k[i]);
	}
	bool f = false;
	for(int a = 0; a < n; a++){
		for(b: n){
			for(c: n){
				for(d: n){
					if(k[a]+k[b]+k[c]+k[d]==m) f == true;
				}
			}
		}
	}
	if(f) puts("Yes");
	else puts("N");
	return 0;
}