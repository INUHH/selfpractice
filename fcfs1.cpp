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

    int bt[20], wt[20], tat[20];

    cout << "Enter Burst Time of each process:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": "<<endl;
        cin >> bt[i];
    }

    // Waiting Time
    wt[0] = 0;
    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    // Turnaround Time
    for (int i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
    }

    float avgWT = 0, avgTAT = 0;

    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";

    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << "\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;

        avgWT += wt[i];
        avgTAT += tat[i];
    }

    avgWT /= n;
    avgTAT /= n;

    cout << "\nAverage Waiting Time = " << avgWT;
    cout << "\nAverage Turnaround Time = " << avgTAT << endl;

    return 0;
}