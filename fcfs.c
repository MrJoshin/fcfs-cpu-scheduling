#include <stdio.h>

int main()
{
    int n, i;
    int at[20], bt[20], wt[20], tat[20], ct[20];
    char pid[20][5];
    float avg_wt = 0, avg_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter PID ArrivalTime BurstTime\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s %d %d", pid[i], &at[i], &bt[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(i == 0)
            ct[i] = at[i] + bt[i];
        else
        {
            if(ct[i-1] < at[i])
                ct[i] = at[i] + bt[i];
            else
                ct[i] = ct[i-1] + bt[i];
        }

        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }

    printf("\nWaiting Time:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s %d\n", pid[i], wt[i]);
        avg_wt += wt[i];
    }

    printf("\nTurnaround Time:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s %d\n", pid[i], tat[i]);
        avg_tat += tat[i];
    }

    printf("\nAverage Waiting Time: %.2f", avg_wt/n);
    printf("\nAverage Turnaround Time: %.2f\n", avg_tat/n);

    return 0;
}
