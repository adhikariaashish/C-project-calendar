#include <stdio.h>

int main()
{
    int y, m, c, c1, c2, c3, t, r, num = 1;
    printf("Enter the year: ");
    scanf("%d", &y);
    printf("Enter month (1-12): ");
    scanf("%d", &m);

    if (y >= 1400 && y <= 1499 || y >= 1800 && y <= 1899 || y >= 2200 && y <= 2299)

        c = 2;

    else if (y >= 1500 && y <= 1599 || y >= 1900 && y <= 1999 || y >= 2300 && y <= 2399)

        c = 0;

    else if (y >= 1700 && y <= 1799 || y >= 2100 && y <= 2199)

        c = 4;

    else if (y >= 2000 && y <= 2099 || y >= 1600 && y <= 1699)

        c = 6;

    else

        printf("INVALID YEAR!!!\n");

    if (m == 1 || m == 10)

        c1 = 0;

    else if (m == 2 || m == 3 || m == 11)

        c1 = 3;
    else if (m == 4 || m == 7)

        c1 = 6;
    else if (m == 5)

        c1 = 1;

    else if (m == 6)

        c1 = 4;

    else if (m == 8)

        c1 = 2;

    else if (m == 9 || m == 12)

        c1 = 5;

    c2 = y % 100;
    c3 = c2 / 4;
    t = c + c1 + c2 + c3 + 1;
    r = t % 7;

    if (y % 4 == 0 && y % 100 != 0 || (y % 400 == 0))
    {
        if (m == 1 || m == 2)

            r = (r + 6) % 7;
    }

    int days;
    switch (m)
    {
    case 1:
        days = 31;
        break;
    case 2:
        if (y % 4 == 0 && y % 100 != 0 || (y % 400 == 0))
            days = 29;

        else
            days = 28;
        break;
    case 3:
        days = 31;
        break;
    case 4:
        days = 30;
        break;
    case 5:
        days = 31;
        break;
    case 6:
        days = 30;
        break;
    case 7:
        days = 31;
        break;
    case 8:
        days = 31;
        break;
    case 9:
        days = 30;
        break;
    case 10:
        days = 31;
        break;
    case 11:

        days = 30;
        break;
    case 12:
        days = 31;
        break;
    default:
        printf("INVALID MONTH!!!\n");
        return 1;
    }

    if (y >= 1400 && y <= 2399 && m >= 1 && m <= 12)
    {
        if (m == 1)

            printf("\n\t -------January %d-------\n\n", y);

        else if (m == 2)

            printf("\n\t -------February %d-------\n\n", y);

        else if (m == 3)
            printf("\n\t -------March %d-------\n\n", y);

        else if (m == 4)

            printf("\n\t -------April %d-------\n\n", y);

        else if (m == 5)

            printf("\n\t -------May %d-------\n\n", y);

        else if (m == 6)

            printf("\n\t -------June %d-------\n\n", y);

        else if (m == 7)

            printf("\n\t -------July %d-------\n\n", y);
        else if (m == 8)

            printf("\n\t -------August %d-------\n\n", y);

        else if (m == 9)

            printf("\n\t -------September %d-------\n\n", y);

        else if (m == 10)

            printf("\n\t -------October %d-------\n\n", y);

        else if (m == 11)

            printf("\n\t -------November %d-------\n\n", y);

        else if (m == 12)

            printf("\n\t -------December %d-------\n\n", y);

        printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
        for (int i = 0; i < r; i++)
        {
            printf("\t");
        }
        for (int i = 0; i < days; i++)
        {
            printf("%2d\t", num);
            num++;
            if ((r + i + 1) % 7 == 0)

                printf("\n");
        }
        printf("\n");
    }
    return 0;
}