#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while (t--)
	{
	    int a,b,c,x;
	    scanf("%d %d %d %d",&a, &b, &c, &x);
	    
	    if ((a+b)>=x) printf("YES\n");
	    else if ((b+c)>=x) printf("YES\n");
	    else if ((a+c)>=x) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

