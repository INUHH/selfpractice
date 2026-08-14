#include <iostream>
using namespace std;

int main()
{
    cout<<"Name: Unzila Ashraf"<<endl;
    cout<<"Roll No: 2503215300215"<<endl;
    cout<<"Section: CSE-AIML-C"<<endl;
    int n, tq;

    cout << "Enter number of processes: ";
    cin >> n;

    int bt[20], rt[20], wt[20], tat[20];

    cout << "Enter Burst Time of each process:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": ";
        cin >> bt[i];
        rt[i] = bt[i];   // Remaining Time
        wt[i] = 0;
    }

    cout << "Enter Time Quantum: ";
    cin >> tq;

    int time = 0, completed = 0;

    while (completed < n)
    {
        bool done = true;

        for (int i = 0; i < n; i++)
        {
            if (rt[i] > 0)
            {
                done = false;

                if (rt[i] > tq)
                {
                    time += tq;
                    rt[i] -= tq;
                }
                else
                {
                    time += rt[i];
                    wt[i] = time - bt[i];
                    rt[i] = 0;
                    completed++;
                }
            }
        }

        if (done)
            break;
    }

    float avgWT = 0, avgTAT = 0;

    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";

    for (int i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];

        cout << "P" << i + 1 << "\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;

        avgWT += wt[i];
        avgTAT += tat[i];
    }

    cout << "\nAverage Waiting Time = " << avgWT / n;
    cout << "\nAverage Turnaround Time = " << avgTAT / n;

    return 0;
}