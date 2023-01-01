#include <iostream>
using namespace std;
// RR scheduling
// AD-1224
void findWaitingTime(int processes[], int n, int bt[], int wt[], int quantum)
{
    int rem_bt[n];
    for (int i = 0; i < n; i++)
        rem_bt[i] = bt[i];

    int t = 0; // Current time

    while (1)
    {
        bool done = true;

        for (int i = 0; i < n; i++)
        {
            if (rem_bt[i] > 0)
            {
                done = false; // Its a pending process

                if (rem_bt[i] > quantum)
                {
                    t += quantum;

                    rem_bt[i] -= quantum;
                }

                else
                {
                    t = t + rem_bt[i];

                    wt[i] = t - bt[i];

                    rem_bt[i] = 0;
                }
            }
        }

        if (done == true)
            break;
    }
}
void findTurnAroundTime(int processes[], int n,
                        int bt[], int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

void findavgTime(int processes[], int n, int bt[],
                 int quantum)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    findWaitingTime(processes, n, bt, wt, quantum);

    findTurnAroundTime(processes, n, bt, wt, tat);

    // cout << "Process\t "<< " Burst Time "<< "  Waiting Time "<< " \tTurn Around Time\n";
    cout << "-----------------------------------------------------\n";
    cout << "Process | Burst Time | Waiting Time | TurnAround Time\n";
    cout << "-----------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << i + 1 << "\t\t" << bt[i] << "\t "
             << wt[i] << "\t\t " << tat[i] << endl;
    }
    cout << "-----------------------------------------------------\n";

    cout << "Average waiting time = " << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
    cout << endl
         << endl;
}

int main()
{
    int n;

    cout << "\nEnter Number of Processes : ";
    cin >> n;

    int processes[n];
    for (int i = 0; i < n; i++)
    {
        processes[i] = i;
    }

    int burst_time[n];
    cout << "\n Enter the Burst Time for each Process :";
    for (int i = 0; i < n; i++)
    {
        cin >> burst_time[i];
    }

    int quantum;
    cout << "\n Enter the Quantum Time :";
    cin >> quantum;

    findavgTime(processes, n, burst_time, quantum);
    return 0;
}

/*   OUTPUT



Enter Number of Processes : 4

 Enter the Burst Time for each Process : 6 11 4 5

 Enter the Quantum Time :5
-----------------------------------------------------
Process | Burst Time | Waiting Time | TurnAround Time
-----------------------------------------------------
 1              6        14              20
 2              11       15              26
 3              4        10              14
 4              5        14              19
-----------------------------------------------------
Average waiting time = 13.25
Average turn around time = 19.75
*/