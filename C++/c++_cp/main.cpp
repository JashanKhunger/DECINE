#include <iostream>

using namespace std;

int main()
{
    char opt;

    int a;
    int b;
    int sum;
    cout << "\n\n                   **********Calculator**********\n\n"<<endl;
    cout << "                     Press (A) for addition"<<endl;
    cout << "                     Press (S) for subtraction"<<endl;
    cout << "                     Press (M) for Multiplication"<<endl;
    cout << "                     Press (D) for division"<<endl;
    cout << "\n\n";
    cout << "       Enter your input: ";
    cin >> opt;
    cout << endl << endl << endl;
    bool run = true;
    if (opt == 'A')
        {
            cout << "Enter 1st digit: ";
            cin >> a;
            cout << "Enter 2nd digit: ";
            cin >> b;
            cout << "The sum is " << a + b << endl;
        }
    else if (opt == 'S')
    {
        cout << "Enter Greater Digit: ";
        cin >> a;
        cout << "Enter Smaller Digit: ";
        cin >> b;
        cout << "The Result is: "<< a - b << endl;
    }
    else if (opt == 'M')
    {
        cout << "Enter First Multiple: ";
        cin >> a;
        cout << "Enter Second Multiple: ";
        cin >> b;
        cout << "The Result: " << a *b << endl;
    }
    else if (opt == 'D')
    {
        cout << "Enter Divisor: ";
        cin >> a;
        cout << "Enter Dividend: ";
        cin >> b;
        cout << "The Quotient is: " << b/a;
    }
    else
    {
        cout << "!Wrong Option";
        cout << endl;
    }














}
  background-image: url(data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIGZpbGw9Im5vbmUiIGhlaWdodD0iMTYiIHdpZHRoPSI3MCI+PHJlY3QgZmlsbD0iI2ZmZiIgaGVpZ2h0PSIxNiIgb3BhY2l0eT0iLjEiIHJ4PSIyIiB3aWR0aD0iNzAiIC8+PHBhdGggZD0iTTIwLjM1IDguODNWMTJoLTEuNDhWMy40N2gzLjI2Yy45NSAwIDEuNzEuMjUgMi4yNy43NC41Ni41Ljg0IDEuMTYuODQgMS45NyAwIC44NC0uMjcgMS40OS0uODIgMS45NS0uNTUuNDctMS4zMi43LTIuMy43aC0xLjc3em0wLTEuMTloMS43OGMuNTMgMCAuOTMtLjEyIDEuMi0uMzcuMjktLjI1LjQyLS42LjQyLTEuMDggMC0uNDYtLjE0LS44Mi0uNDItMS4xYTEuNjIgMS42MiAwIDAwLTEuMTYtLjQzaC0xLjgydjIuOTh6bTkuMzctLjY4YTMuNTIgMy41MiAwIDAwLS41OC0uMDVjLS42NSAwLTEuMDkuMjUtMS4zMS43NVYxMkgyNi40VjUuNjZoMS4zNmwuMDQuN2ExLjYgMS42IDAgMDExLjQzLS44MmMuMiAwIC4zNy4wMy41LjA4djEuMzR6bTMuNTggNS4xNmMtLjkgMC0xLjY0LS4yOS0yLjItLjg1YTMuMSAzLjEgMCAwMS0uODQtMi4yOHYtLjE3YzAtLjYzLjEyLTEuMi4zNy0xLjdhMi43MiAyLjcyIDAgMDEyLjUtMS41OGMuODcgMCAxLjUzLjI4IDIgLjgzLjQ4LjU1LjcxIDEuMzMuNzEgMi4zNHYuNTdIMzEuN2MuMDQuNTIuMjIuOTQuNTIgMS4yNC4zLjMuNy40NiAxLjE2LjQ2LjY1IDAgMS4xOC0uMjYgMS42LS43OWwuNzYuNzNjLS4yNS4zOC0uNi42OC0xLjAyLjg5LS40Mi4yLS45LjMtMS40Mi4zem0tLjE3LTUuNDNjLS40IDAtLjcuMTMtLjk1LjQtLjI0LjI4LS40LjY2LS40NiAxLjE1aDIuNzJ2LS4xYTEuNzIgMS43MiAwIDAwLS4zOS0xLjA5IDEuMTkgMS4xOSAwIDAwLS45Mi0uMzZ6bTUuMTYtMS4wM2wuMDQuNjZhMi4yOCAyLjI4IDAgMDExLjgzLS43OGMuODUgMCAxLjQzLjMzIDEuNzQuOTguNDYtLjY1IDEuMTEtLjk4IDEuOTUtLjk4LjcgMCAxLjIxLjIgMS41NS41OC4zNS4zOS41Mi45Ni41MyAxLjcxVjEyaC0xLjQyVjcuODdjMC0uNC0uMDktLjctLjI3LS44OC0uMTctLjE5LS40Ni0uMjgtLjg3LS4yOC0uMzIgMC0uNTkuMDktLjguMjYtLjIuMTctLjM0LjQtLjQyLjY4VjEyaC0xLjQyVjcuODNjLS4wMi0uNzUtLjQtMS4xMi0xLjE0LTEuMTItLjU3IDAtLjk4LjIzLTEuMjIuN1YxMmgtMS40MlY1LjY2aDEuMzR6TTQ4LjkxIDEyaC0xLjQzVjUuNjZoMS40M1YxMnpNNDcuNCA0LjAxYzAtLjIyLjA2LS40LjItLjU0LjE0LS4xNS4zNC0uMjIuNi0uMjIuMjYgMCAuNDYuMDcuNi4yMi4xNC4xNC4yLjMyLjIuNTQgMCAuMjItLjA2LjQtLjIuNTRzLS4zNC4yMS0uNi4yMWMtLjI2IDAtLjQ2LS4wNy0uNi0uMmEuNzUuNzUgMCAwMS0uMi0uNTV6bTYuOSA3LjM3YTIuMiAyLjIgMCAwMS0xLjc4Ljc0Yy0uNjggMC0xLjItLjItMS41Ni0uNi0uMzUtLjQtLjUzLTEtLjUzLTEuNzVWNS42NmgxLjQzdjQuMDljMCAuOC4zMyAxLjIgMSAxLjIuNjkgMCAxLjE2LS4yNCAxLjQtLjc0VjUuNjZoMS40MlYxMmgtMS4zNGwtLjA0LS42MnptNC4xNy01LjcybC4wNC42NmEyLjI4IDIuMjggMCAwMTEuODMtLjc4Yy44NSAwIDEuNDMuMzMgMS43NC45OC40Ni0uNjUgMS4xMS0uOTggMS45NS0uOTguNyAwIDEuMjEuMiAxLjU1LjU4LjM1LjM5LjUyLjk2LjUzIDEuNzFWMTJINjQuN1Y3Ljg3YzAtLjQtLjA5LS43LS4yNy0uODgtLjE3LS4xOS0uNDYtLjI4LS44Ny0uMjgtLjMyIDAtLjU5LjA5LS44LjI2LS4yLjE3LS4zNC40LS40Mi42OFYxMmgtMS40MlY3LjgzYy0uMDItLjc1LS40LTEuMTItMS4xNC0xLjEyLS41NyAwLS45OC4yMy0xLjIyLjdWMTJoLTEuNDJWNS42NmgxLjM0eiIgZmlsbD0iI2FhYSIgLz48cGF0aCBkPSJNMSAyYTEgMSAwIDAxMS0xaDEzdjE0SDJhMSAxIDAgMDEtMS0xVjJ6IiBmaWxsPSJyZWQiIC8+PHBhdGggZD0iTTYuNTIgOXYzSDQuNzZWMy40N0g4LjFjLjY0IDAgMS4yLjEyIDEuNjkuMzUuNDkuMjMuODYuNTcgMS4xMiAxIC4yNi40My40LjkyLjQgMS40NyAwIC44NC0uMyAxLjUtLjg3IDEuOTgtLjU3LjQ4LTEuMzYuNzItMi4zNy43Mkg2LjUyem0wLTEuNDNoMS41N2MuNDYgMCAuODItLjEgMS4wNi0uMzMuMjUtLjIyLjM3LS41My4zNy0uOTQgMC0uNDEtLjEyLS43NS0uMzctMS0uMjUtLjI3LS41OS0uNC0xLjAyLS40SDYuNTJ2Mi42N3oiIGZpbGw9IiNmZmYiIC8+PC9zdmc+);
  background-size: cover;
}