#include <stdio.h>
#include <string.h>
int main()
{
    int tst, n, i, j, k, l, amnt=0, dnate, dgt;
    char str[20];
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%d", &n);
        getchar();
        printf("Case %d:\n", i);
        for(j=1,amnt=0; j<=n; j++)
        {
            gets(str);
            if(str[0]=='r')
            {
                printf("%d\n", amnt);

            }
            else
            {
                for(k=7, dnate=0; str[k]; k++)
                {
                    dgt = str[k]-48;
                    dnate = dnate*10 + dgt;
                }
                amnt += dnate;
            }
        }
    }
    return 0;
}
