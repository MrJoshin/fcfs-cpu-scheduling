#include <stdio.h>

int main() {
    int n, i;
    char pid[20][10];
    int at[20], bt[20];
    int wt[20], tat[20];
    int ct[20];
    float avg_wt = 0, avg_tat = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s %d %d", pid[i], &at[i], &bt[i]);
    }

    for(i = 0; i < n; i++) {
        if(i == 0)
            ct[i] = at[i] + bt[i];
        else {
            if(ct[i-1] < at[i])
                ct[i] = at[i] + bt[i];
            else
                ct[i] = ct[i-1] + bt[i];
        }

        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    printf("Waiting Time:\n");
    for(i = 0; i < n; i++)
        printf("%s %d\n", pid[i], wt[i]);

    printf("Turnaround Time:\n");
    for(i = 0; i < n; i++)
        printf("%s %d\n", pid[i], tat[i]);

    printf("Average Waiting Time: %.2f\n", avg_wt/n);
    printf("Average Turnaround Time: %.2f\n", avg_tat/n);

    return 0;
}
