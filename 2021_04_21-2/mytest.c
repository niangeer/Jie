#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

//下面使用close(1)与dup2(fd,1)的区别：
int main()
{
  close(1); //进程结束前，1号与fd都已关闭，进程结束后刷新缓存区时找不到地方输出，所以未打印在文件

  //O_TRUNC: 先清空再写入
  int fd = open("log.txt",O_WRONLY | O_CREAT | O_APPEND, 0644);
  if(fd < 0)
  {
    perror("open error");  //perror:会输出错误原因
    return 1;
  }

 // dup2(fd, 1);//1号被fd覆盖，进程结束前只关闭了fd,但是1号文件描述符还在，所以会打印至文件
  const char* str = "hello world: write\n";  
  const char* str1 = "hello world: printf\n";
  const char* str2 = "hello world: fprintf\n";
  write(1, str, strlen(str));  //不打印'\0'，'\0'是C/C++标准，不是系统标准
  printf("%s",str1);
  fprintf(stdout,"%s",str2);

  close(fd);
  return 0;
}
