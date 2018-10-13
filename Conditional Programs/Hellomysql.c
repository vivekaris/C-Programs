//C program for mysql connectivity using c
// install on ubuntu and debian 
// $sudo apt-get install libmysqlclient-dev


#include <my_global.h>
#include <mysql.h>

int main(int argc, char **argv)
{
  printf("MySQL client version: %s\n", mysql_get_client_info());

  exit(0);
}
