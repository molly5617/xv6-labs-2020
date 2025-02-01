#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"

void run(char *program, char **args)
{
    if (fork() == 0)
    {
        exec(program, args);
        exit(0);
    }
    return;
}

int main(int argc, char *argv[])
{
    char buf[2048];
    char *p = buf, *last_p = buf;
    char *argsbuf[128];
    char **args = argsbuf;

    for (int i = 1; i < argc; i++)
    {
        *args = argv[i];
        args++;
    }
    char **pa = args;
}