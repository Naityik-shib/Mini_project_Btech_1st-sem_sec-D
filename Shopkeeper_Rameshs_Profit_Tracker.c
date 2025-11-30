#include <stdio.h>

int main()
{
    int a;
    printf("enter number of days: ");
    scanf("%d", &a);

    int b[a];
    int x = 0, y = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i] > 0)
        {
            x += b[i];
        }
        else
        {
            y += b[i];
        }
    }
    if (y < 0)
    {
        y = y * -1;
    }

    int z = x - y;
    if (z < 0)
    {
        z = z * -1;
    }

    printf("Total Profit: %d\n", x);
    printf("Total Loss: %d\n", y);
    printf("Net Balance: %d\n", z);

    return 0;
}
