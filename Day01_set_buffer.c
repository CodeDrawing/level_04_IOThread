#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{

    char buff[1024];

    memset( buff, '\0', sizeof( buff ));
    setvbuf(stdout, NULL, _IOFBF, 1024);
    printf( "启用全缓11冲");
    fflush( stdout );
    while(1);
//    setvbuf(stdout, NULL, _IOFBF, 1024);
//
//    fprintf(stdout, "这里是 runoob.com\n");
//    fprintf(stdout, "该输出将保存到 buff\n");
//    fflush( stdout );
//
//
//
//    fprintf(stdout, "这将在编程时出现\n");
//    fprintf(stdout, "最后休眠五秒钟\n");
//
//    sleep(5);

    return(0);
}
