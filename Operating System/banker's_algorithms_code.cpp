#include <bits/stdc++.h>
using namespace std;
struct bank
{
    int a1, b1, c1; // Allocation
    int a2, b2, c2; // max
    int a3, b3, c3; // Need
    bool state;     // state
};
int main()
{
    struct bank p[11];
    int i, n;
    int a, b, c;
    int d, e, f, g, h, k, n1 = 0;
    int process, flag = 0, count1 = 0;
    int pro[11];
    cout << "enter the no.of processes (maximum=10) \n";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the allocation of process p[" << i << "]  a1 ,b1,c1\n";
        cin >> p[i].a1 >> p[i].b1 >> p[i].c1;
        cout << "Enter the max of process p[" << i << "]  a2,b2,c2\n";
        cin >> p[i].a2 >> p[i].b2 >> p[i].c2;
        cout << "Enter the need of process p[" << i << "] a3,b3,c3\n";
        cin >> p[i].a3 >> p[i].b3 >> p[i].c3;
        p[i].state = false;
    }
    cout << "Enter the available \n";
    cin >> a >> b >> c;
    cout << "Enter the process for the request\n";
    cin >> process;
    cout << "Enter the request\n";
    cin >> d >> e >> f;
    cout << "\n\nBefore operation \n\n";
    cout << " process\t Allocation \t max \t\t need \t available\n";
    for (i = 0; i < n; i++)
    {
        cout << "\t\t" << p[i].a1 << p[i].b1 << p[i].c1;
        cout << "\t\t" << p[i].a2 << p[i].b2 << p[i].c2;
        cout << "\t\t" << p[i].a3 << p[i].b3 << p[i].c3;
        cout << "\t\t" << a << b << c << "\n";
    }
    if (d <= p[process].a3 & e <= p[process].b3 & f <= p[process].c3)
    {
        if (d <= a & e <= b & f <= c)
        {
            a = a - d;
            b = b - e;
            c = c - f;
            p[process].a1 += d;
            p[process].b1 += e;
            p[process].c1 += f;
            p[process].a3 -= d;
            p[process].b3 -= e;
            p[process].c3 -= f;
            cout << "\n\ncompleted\n\n";
            cout << " process\t Allocation \t max \t\t need \t\t available\n";
            for (i = 0; i < n; i++)
            {
                cout << "\t\t" << p[i].a1 << p[i].b1 << p[i].c1;
                cout << "\t\t" << p[i].a2 << p[i].b2 << p[i].c2;
                cout << "\t\t" << p[i].a3 << p[i].b3 << p[i].c3;
                cout << "\t\t" << a << b << c << "\n";
            }
            g = a;
            h = b;
            k = c;
            while (flag <= n)
            {
                for (i = 0; i < n; i++)
                {
                    if (p[i].state == false)
                    {

                        if (p[i].a3 <= g & p[i].b3 <= h & p[i].c3 <= k)
                        {
                            g += p[i].a1;
                            h += p[i].b1;
                            k += p[i].c1;
                            p[i].state = true;
                            flag++;
                            pro[n1] = i;
                            n1++;
                        }
                    }
                }
                count1++;
                if (count1 >= n * 5)
                {
                    break;
                }
            }
            if (n1 != n)
            {
                cout << "System may go to deadlock\n";
            }
            else
            {
                cout << "Safe sequence is: \n";
                cout << "<";
                for (i = 0; i < n; i++)
                {

                    cout << "p[" << pro[i] << "],";
                }
                cout << ">\n";
                cout << "work " << g << h << k << "\n";
            }
        }
        else
        {
            cout << "Sorry\n";
        }
    }
    else
    {
        cout << "Sorry\n";
    }
}