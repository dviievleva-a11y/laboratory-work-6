#include <iostream>
using namespace std;

/* ---------- ВВЕДЕННЯ МАСИВУ ---------- */
void inputArray(int a[], int &N)
{
    do
    {
        cout << "Введіть розмір масиву (2..50): ";
        cin >> N;
    } while (N < 2 || N > 50);

    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];
    }
}

/* ---------- ВИВЕДЕННЯ МАСИВУ ---------- */
void printArray(const int a[], int N)
{
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
}

/* ---------- Array24 ---------- */
void processArray24(const int a[], int N)
{
    int d = a[1] - a[0];

    for (int i = 1; i < N - 1; i++)
    {
        if (a[i + 1] - a[i] != d)
        {
            cout << "0" << endl;
            return;
        }
    }

    cout << "Різниця прогресії: " << d << endl;
}

/* ---------- Array84 ---------- */
void processArray84(int a[], int N)
{
    int first = a[0];

    for (int i = 0; i < N - 1; i++)
        a[i] = a[i + 1];

    a[N - 1] = first;
}

/* ---------- ЗАВДАННЯ 1 ---------- */
void task1()
{
    cout << "\n--- Завдання 1 (Array24) ---\n";

    int a[50], N;
    inputArray(a, N);

    cout << "Початковий масив: ";
    printArray(a, N);

    processArray24(a, N);
}

/* ---------- ЗАВДАННЯ 2 ---------- */
void task2()
{
    cout << "\n--- Завдання 2 (Array84) ---\n";

    int a[50], N;
    inputArray(a, N);

    cout << "Початковий масив: ";
    printArray(a, N);

    processArray84(a, N);

    cout << "Масив після зсуву: ";
    printArray(a, N);
}

/* ---------- ГОЛОВНЕ МЕНЮ ---------- */
int main()
{
    int choice;

    do
    {
        cout << "\n===== МЕНЮ =====\n";
        cout << "1 - Array24\n";
        cout << "2 - Array84\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice)
        {
            case 1: task1(); break;
            case 2: task2(); break;
            case 0: cout << "Завершення програми.\n"; break;
            default: cout << "Невірний вибір!\n";
        }

    } while (choice != 0);

    return 0;
}
