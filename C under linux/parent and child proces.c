#include <stdio.h>
// #include <sys/types.h>
#include <unistd.h> //for prototype  of fork()

int main()
{
    int pid;

    puts("before forking");
    pid = fork();
    // printf("process id  => %d\n", getpid());
    puts("after  forking");

    pid == 0 ? puts("in child process") : puts("in parent process");

    return 0;
}

/*
fork() => the parent-child relationship btw the two process . the way to achive this is done by fork()


*/