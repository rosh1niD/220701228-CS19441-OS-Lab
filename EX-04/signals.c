#include<unistd.h>
#include<stdlib.h>
#include <signal.h>
#include <stdio.h>
void my_handler(int sig);
int main()
{
struct sigaction my_action;
my_action.sa_handler = my_handler;
my_action.sa_flags = SA_RESTART;
sigaction(SIGINT,&my_action,NULL);
printf("catching SIGINT\n");
sleep(3);
printf("No SIGINT within 3 seconds\n");

my_action.sa_handler = SIG_IGN;
my_action.sa_flags = SA_RESTART;
sigaction(SIGINT,&my_action,NULL);
printf("ignoring  SIGINT\n");
sleep(3);
printf("Sleep is over\n");

my_action.sa_handler = SIG_DFL;
my_action.sa_flags = SA_RESTART;
sigaction(SIGINT,&my_action,NULL);
printf("catching SIGINT\n");
sleep(3);
printf("No SIGINT within 3 seconds\n");
}
void my_handler (int sig)
{
printf("\t I got SIGINT,number%d\n",sig);
exit(0);
}


