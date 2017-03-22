#define _POSIX_SOURCE
#define _POSIX_c_SOURCE 199309L
#include<stdio.h>
#include<iostream>
#include<unistd.h>
  using namespace std;
  int main()
  {
    int value;
    if((value=sysconf(_SC_CLK_TCK))==-1)
      perror("sysconf");
    else
      cout<<"No of clock ticks are:"<<value<<endl;
    if((value==sysconf(_SC_CHILD_MAX))==-1)
      perror("sysconf");
    else
      cout<<"Max no of child process are:"<<value<<endl;
    if((value=sysconf(_SC_OPEN_MAX))==-1)
      perror("sysconf");
    else
      cout<<"Max no of open files are:"<<value<<endl;
    if((value=pathconf("/",_PC_PATH_MAX))==-1)
      perror("pathconf");
    else
      cout<<"Path length is:"<<(value+1)<<endl;
    if((value=pathconf("/",_PC_NAME_MAX))==-1)
      perror("pathconf");
    else
      cout<<"Max no of characters in filename is:"<<(value+1)<<endl;
      return 0;
}

