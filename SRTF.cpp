#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout<<"Name: Unzila Ashraf"<<endl;
    cout<<"Roll No: 2503215300215"<<endl;
    cout<<"Section: CSE-AIML-C"<<endl;
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    int at[20], bt[20], rt[20], wt[20], tat[20];

    // Input Arrival Time and Burst Time
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Arrival Time of P" << i + 1 << ": ";
        cin >> at[i];

        cout << "Enter Burst Time of P" << i + 1 << ": "<<endl;
        cin >> bt[i];

        rt[i] = bt[i]; // Remaining Time
    }

    int completed = 0, time = 0;

    while (completed < n)
    {
        int shortest = -1;
        int minTime = INT_MAX;

        // Find process with shortest remaining time
        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time && rt[i] > 0 && rt[i] < minTime)
            {
                minTime = rt[i];
                shortest = i;
            }
        }

        if (shortest == -1)
        {
            time++;
            continue;
        }

        // Execute process for 1 unit
        rt[shortest]--;
        time++;

        // If process completes
        if (rt[shortest] == 0)
        {
            completed++;

            tat[shortest] = time - at[shortest];
            wt[shortest] = tat[shortest] - bt[shortest];

            if (wt[shortest] < 0)
                wt[shortest] = 0;
        }
    }

    float avgWT = 0, avgTAT = 0;

    cout << "\nProcess\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << "\t"
             << at[i] << "\t\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;

        avgWT += wt[i];
        avgTAT += tat[i];
    }

    cout << "\nAverage Waiting Time = " << avgWT / n;
    cout << "\nAverage Turnaround Time = " << avgTAT / n << endl;

    return 0;
}