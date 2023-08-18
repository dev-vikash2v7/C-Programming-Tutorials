#include <stdio.h>
#include <sys/types.h>

int main()
{
printf("process id  => %d\n" ,getpid() ); //returns the process id of the calling process.

    return 0;
}

/* 
* schedular => the scheduling of different processses on mjltiple processor is done by  a prog called 'schedular'
                which is a vital comp of the linux os

*PID => the kernal (core) of os assigns each process running in memory a unique id to distinguish it from other running processs . this id is often known as process id(pid)

1 .every time we run prog a process is created.hence kernel assign  a new id to the process each time.




*/