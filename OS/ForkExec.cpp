#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

// Write a program(using fork() and/or exec() commands) where parent and child execute: a)
// same program, same code. b) same program, different code. - c) before terminating, the
// parent waits for the child to finish its task.
void func(pid_t pid, pid_t ppid)
{

    cout << " Process ID : " << pid << "\tParent Process ID " << ppid << endl;
}
int main()
{
    int choice;
    cout << "1: Same Program , Same Code ; 2: same program , different code ; 3: Before terminating parent waits for child to complete :";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        pid_t pid = fork();
        if (pid < 0)
        {
            cout << " Error in fork" << endl;
        }
        if (pid == 0)
        {
            sleep(3);
            cout << "\n Child -> ";
            func(getpid(), getppid());
            return 0;
        }

        sleep(2);
        cout << "\n Parent ->";
        func(getpid(), getppid());
        return 0;

        break;
    }
    case 2:
    {
        int p;
        p = fork();

        if (p < 0)
        {
            cout << "Error, Child process could not be created" << endl;
            return 1;
        }

        else if (p == 0)
        {
            cout << "This is a child process" << endl;
            cout << "It's PID is : ";
            cout << getpid();
            cout << "\n";
            return 0;
        }

        else
        {
            cout << "This is a parent process" << endl;
            cout << "It's PID is : ";
            cout << getpid();
            cout << "\n";
            wait(NULL);
            return 1;
        }

        return 0;
    }
    case 3:
    {
        int p;
        p = fork();

        if (p < 0)
        {
            cout << "Error, Child process could not be created" << endl;
            return 1;
        }

        else if (p == 0)
        {
            cout << "This is a child process" << endl;
            cout << "It's PID is :";
            cout << getpid();
            cout << "\n";
            return 0;
        }

        else
        {
            wait(NULL);
            cout << "This is a parent process" << endl;
            cout << "It's PID is :";
            cout << getpid();
            cout << "\n";
            return 1;
        }

        return 0;
        break;
    }
    }

    return 0;
}

//1.a
// 1: Same Program , Same Code ; 2: same program , different code ; 3: Before terminating parent waits for child to complete :1

//  Parent -> Process ID : 39972   Parent Process ID 37403
// soul@avi-Vostro-3490:~/Desktop/Sem3/OS$ 
//  Child ->  Process ID : 40005   Parent Process ID 1


//1.b
// 1: Same Program , Same Code ; 2: same program , different code ; 3: Before terminating parent waits for child to complete :2
// This is a parent process
// It's PID is : 41183
// This is a child process
// It's PID is : 41201



//1.c
// 1: Same Program , Same Code ; 2: same program , different code ; 3: Before terminating parent waits for child to complete :3
// This is a child process
// It's PID is :41267
// This is a parent process
// It's PID is :41231










//Other Test codes for myself only
// int main(){
//     cout<<"\nFirst line: "<<getpid()<<endl;
//     pid_t pid;
//     pid=fork();
//     if (pid < 0){
//         cerr<<"Error in creating child process . "<<endl;
//         cout<<"\n(ERROR ID)"<<getpid()<<endl;
//     }
//     else if (pid==0)
//     {
//         cout<<"\n(CHILD ID )"<<getpid()<<endl;
//         execlp("/bin/ls","ls",NULL);
//         // cout<<"\n(CHILD ID )"<<getpid()<<endl;
//     }
//     else
//     {

//         // cout<<"\n(PARENT ID )"<<getpid()<<endl;
//         wait(NULL);
//         cout<<"Child Complete";
//         cout<<"\n(PARENT ID )"<<getpid()<<endl;
//     }
//     return 0;

// }

// int main(){

//     pid_t pid;
//     int value=5;
//     pid=fork();
//     if (pid==0){
//         value+=15;
//         cout<<"Value in child : "<<value <<endl;
//         return 0;

//     }
//     else if (pid>0){
//         wait(NULL);
//         cout<<"Value in parent "<<value<<endl;
//     }
// }

// int main()
// {
// /* fork a child process */
// fork();
// cout<<"One ";
// /* fork another child process */
// fork();
// cout<<"Two ";
// /* and fork another */
// fork();
// cout<<"Hello"<<endl;
// return 0;
// }

// int main()
// {
//     cout << "First:" << getpid() << endl;
//     for (int a = 0; a < 2; a++)
//     {
//         cout << "\nfor:" << getpid() << endl;
//         cout<<"box";
//         fork();

//         cout<<"bee";
//     }
//     cout << "\nout:" << getpid() << endl;
//     return 0;
// }