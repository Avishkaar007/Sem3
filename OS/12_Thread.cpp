#include <iostream>
#include <cstdlib>
// #include <pthread.h> add pthread at compile time by -pthread
using namespace std;
int sum;
int fact = 1;

void Sum(void *param)
{
    int n = atoi((char *)param);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum is : " << sum << endl;
}

void Fact(void *param)
{
    int n = atoi((char *)param);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial is : " << fact << endl;
}

void *runner(void *param)
{
    cout << "Enter 1 for sum ,2 for fact : ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        Sum(param);
        break;

    case 2:
        Fact(param);
        break;
    default:
        break;
    }
    pthread_exit(0);
}

int main(int argc, char *argv[])
{
    pthread_t tid;
    pthread_attr_t attr;

    if (argc != 2)
    {
        cerr << "\nError" << argv[0] << endl;
        exit(1);
    }
    else if (atoi(argv[1]) < 0)
    {
        cout << "Error : Please enter the value greater than 1 : " << endl;
    }

    pthread_attr_init(&attr);
    pthread_create(&tid, &attr, runner, argv[1]);
    pthread_join(tid, NULL);

    cout << "Program Finised Successfully ;)" << endl;
    return 0;
}

// OUTPUT

// soul@avi-Vostro-3490:~/Desktop/Sem3/OS$ g++ Thread.cpp -o Thread -pthread
// soul@avi-Vostro-3490:~/Desktop/Sem3/OS$ ./Thread 10
// Enter 1 for sum ,2 for fact : 1
// Sum is : 55
// Program Finised Successfully ;)
// soul@avi-Vostro-3490:~/Desktop/Sem3/OS$ ./Thread 10
// Enter 1 for sum ,2 for fact : 2
// Factorial is : 3628800
// Program Finised Successfully ;)
