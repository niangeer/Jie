#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
  //O_TRUNC: 先清空再写入
  int fd = open("log.txt",O_WRONLY | O_CREAT | O_APPEND, 0644);
  if(fd < 0)
  {
    perror("open error");  //perror:会输出错误原因
    return 1;
  }

  const char* str = "hello world\n";  
  write(fd, str, strlen(str));  //不打印'\0'，'\0'是C/C++标准，不是系统标准

  close(fd);
  return 0;
}
