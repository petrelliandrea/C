#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <errno.h>
#include <string.h>

int main() {
  int m_id;

  //key_t key=1234;
  //key_t key=0x000004d2;
  //key_t key=IPC_PRIVATE;

  key_t key=ftok("/home/luke/OperatingSystem/lab_Unix/L9/ipcs_lesson_code", 'x');
  if (key==-1) {
  //if (m_id=msgget(key, IPC_CREAT)<0) {
    fprintf(stderr, "%s: %d. Error in ftok #%03d: %s\n", __FILE__, __LINE__, errno, strerror(errno));
    exit(EXIT_FAILURE);
  }

  //if (m_id=msgget(key, IPC_CREAT | IPC_EXCL)<0) {
  if (m_id=msgget(key, IPC_CREAT)<0) {
    printf("%d\n\n",msgget(key, IPC_CREAT));
    fprintf(stderr, "%s: %d. Error in msgget #%03d: %s\n", __FILE__, __LINE__, errno, strerror(errno));
    exit(EXIT_FAILURE);
  }

  printf("Created message queue identifier: %d\n",m_id);

  exit(EXIT_SUCCESS);
}