#include <stdio.h>
#include <string.h>
int n;
void main()
{
    int b[20], b1[20], i, j, ch, blocks[20][20], sz[20];
    char F[20][20], S[20];
    printf("\n Enter no. of Files ::");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter file %d name ::", i + 1);
        scanf("%s", F[0]);
        printf("\n Enter file%d size(in kb)::", i + 1);
        scanf("%d", &sz[i]);
        printf("\n Enter blocksize of File%d(in bytes)::", i + 1);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        b1[i] = (sz[i] * 1024) / b[i];
        printf("\n\nEnter blocks for file%d", i + 1);
        for (j = 0; j < b1[i]; j++)
        {
            printf("\n Enter the %dblock ::", j + 1);
            scanf("%d", &blocks[i][j]);
        }
    }
    do
    {
        printf("\nEnter the Filename ::");
        scanf("%s", &S[0]);
        for (i = 0; i < n; i++)
        {
            if (strcmp(S, F[i]) == 0)
            {
                printf("\nFname\tFsize\tBsize\tNblocks\tBlocks\n");
                printf("\n\\n");
                printf("\n%s\t%d\t%d\t%d\t", F[i], sz[i], b[i], b1[i]);
                for (j = 0; j < b1[i]; j++)
                    printf("%d->", blocks[i][j]);
            }
        }
        printf("\n\n");
        printf("\nDo U want to continue ::(1:0)");
        scanf("%d", &ch);
        if (ch != 1)
            break;
    } while (1);
}
