#include <iostream>
#include <cstdlib>
using namespace std;

int arg_count;
char arg_var[arg_count];
void *runner(void *param)
{
   char arr[arg_count-1]=((char*)param);
   int iArr[arg_count-1];
   for (int a=1;a<arg_count;a++){
        iArr[a]=atoi(arr[a]);
   }
    pthread_exit(0);
}
int main(int argc, char * argv[]){
    int arr[argc];
    for(int a=1; a<argc;a++){
        arr[a]=atoi(argv[a]);
    }
    arg_count=argc;
    pthread_t tid;
    pthread_attr_t attr;
    int sz=sizeof(arr)/sizeof(arr[0]);
    if (sz!=(argc-1))
    {
        cerr << "\nError" << argv[0] << endl;
        exit(1);
    }
     pthread_attr_init(&attr);
    pthread_create(&tid, &attr, runner, *argv);
    pthread_join(tid, NULL);
}