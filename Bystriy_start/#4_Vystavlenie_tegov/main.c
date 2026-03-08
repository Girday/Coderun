#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int t1 = 1, t2 = 1;
    for (int i = 0; i < n; ++i) {
        int temp = t2;
        t2 = t2 + t1;
        t1 = temp;
    }

    printf("%d\n", t2 - 1);

	return 0;
}
