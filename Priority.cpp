#include <iostream>
using namespace std;

int main()
{
    cout<<"Name: Unzila Ashraf"<<endl;
    cout<<"Roll No: 2503215300215"<<endl;
    cout<<"Section: CSE-AIML-C"<<endl;
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    int p[20], bt[20], pr[20], wt[20], tat[20];

    // Input
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
        cout << "Enter Burst Time of P" << p[i] << ": ";
        cin >> bt[i];

        cout << "Enter Priority of P" << p[i] << ": ";
        cin >> pr[i];
    }

    // Sort according to priority
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (pr[i] > pr[j])
            {
                swap(pr[i], pr[j]);
                swap(bt[i], bt[j]);
                swap(p[i], p[j]);
            }
        }
    }

    // Calculate Waiting Time
    wt[0] = 0;
    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    // Calculate Turnaround Time
    for (int i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
    }

    float avgWT = 0, avgTAT = 0;

    cout << "\nProcess\tPriority\tBurst Time\tWaiting Time\tTurnaround Time\n";

    for (int i = 0; i < n; i++)
    {
        cout << "P" << p[i] << "\t"
             << pr[i] << "\t\t"
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