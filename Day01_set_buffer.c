#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{

    char buff[1024];

    memset( buff, '\0', sizeof( buff ));
    setvbuf(stdout, NULL, _IOFBF, 1024);
    printf( "����ȫ��11��");
    fflush( stdout );
    while(1);
//    setvbuf(stdout, NULL, _IOFBF, 1024);
//
//    fprintf(stdout, "������ runoob.com\n");
//    fprintf(stdout, "����������浽 buff\n");
//    fflush( stdout );
//
//
//
//    fprintf(stdout, "�⽫�ڱ��ʱ����\n");
//    fprintf(stdout, "�������������\n");
//
//    sleep(5);

    return(0);
}
