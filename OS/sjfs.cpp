#include <iostream>
#include <string>
using namespace std;

int sum(int arr[], int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        s += arr[i];
    }
    return s;
}

int main()
{
    int pCount = 0;
 cout<<"\nEnter Number of Processes : ";
    cin >> pCount;

    double avgWaitingTime = 0.0;
    double avgTurnAroundTime = 0.0;
    string P_ID[pCount];
    int BuzzTime[pCount];
    int waitingTime[pCount];
    int turnaroundTime[pCount];

    for (int i = 0; i < pCount; i++)
    {
        cout << "\nNow, Enter the Process number " << i + 1 << " : ";
        cin >> P_ID[i];

        cout << "Enter Buzz Time of " << P_ID[i] << " : ";
        cin >> BuzzTime[i];
        cout << endl;
    }


    // Sorting
    for (int i = 0; i < pCount; i++)
    {
        for (int j = 0; j < pCount - 1; j++)
        {
            if (BuzzTime[j] > BuzzTime[j + 1])
            {
                swap(BuzzTime[j], BuzzTime[j + 1]);
                swap(P_ID[j], P_ID[j + 1]);
            }
        }
    }

    // waiting time
    for (int i = 0; i < pCount; i++)
    {
        if (i == 0)
        {
            waitingTime[i] = 0;
        }
        else
        {
            waitingTime[i] = waitingTime[i-1] + BuzzTime[i - 1];
        }
    }

    // turn around time
    for (int i = 0; i < pCount; i++)
    {
        turnaroundTime[i] = waitingTime[i] + BuzzTime[i];
    }

    // again sorting to print table in sorted P_ID
    for (int i = 0; i < pCount; i++)
    {
        for (int j = 0; j < pCount - 1; j++)
        {
            if (P_ID[j] > P_ID[j + 1])
            {
                swap(P_ID[j], P_ID[j + 1]);
                swap(BuzzTime[j], BuzzTime[j + 1]);
                swap(waitingTime[j], waitingTime[j + 1]);
                swap(turnaroundTime[j], turnaroundTime[j + 1]);
            }
        }
    }


    // printing in form of table
    cout <<" ---------------------------------------------------------------------------------" << endl;
    cout << " | P_ID\t|\tBuzz Time\t|\tWaiting Time\t|\tTurn around Time|" << endl;
    cout <<" ---------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < pCount; i++)
    {
        cout << " | "  << P_ID[i]             << "\t|";
        cout << "  \t" << BuzzTime[i]        << "\t\t|";
        cout << "  \t" << waitingTime[i]     << "\t\t|";
        cout << "  \t" << turnaroundTime[i]  << "\t\t|";
        cout << endl;
    }
    cout <<" ---------------------------------------------------------------------------------" << endl;

    // printing avg wating and turn around time
    cout << "Avg Waiting time     : " << (float)sum(waitingTime, pCount) / (float)pCount << endl;
    cout << "Avg Turn Around time : " << (float)sum(turnaroundTime, pCount) / (float)pCount << endl;
    cout << endl;


    return 0;
}

/*

Enter Number of Processes : 4

Now, Enter the Process number 1 : 101
Enter Buzz Time of 101 : 12


Now, Enter the Process number 2 : 102
Enter Buzz Time of 102 : 4


Now, Enter the Process number 3 : 104
Enter Buzz Time of 104 : 20


Now, Enter the Process number 4 : 100
Enter Buzz Time of 100 : 17

 ---------------------------------------------------------------------------------
 | P_ID |       Buzz Time       |       Waiting Time    |       Turn around Time|
 ---------------------------------------------------------------------------------
 | 100  |       17              |       16              |       33              |
 | 101  |       12              |       4               |       16              |
 | 102  |       4               |       0               |       4               |
 | 104  |       20              |       33              |       53              |
 ---------------------------------------------------------------------------------
Avg Waiting time     : 13.25
Avg Turn Around time : 26.5

*/