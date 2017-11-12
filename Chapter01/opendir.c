#include "aupe.h"
#include <dirent.h>

int main(int argc, char const *argv[])
{
    DIR     *dp;
    struct dirent   *dirp;

    if (argc != 2)
    {
        err_quit("usage: Is direnctory_name");/* code */
    }

    if (dp = opendir(argv[1]) == NULL)
    {
        err_sys("can't open %s", argv[1]);/* code */
    }

    while (dirp = readdir(dp) != NULL)
    {
        printf("%s\n", dirp->d_name);/* code */
    }

    closedir(dp);

    return 0;
}
