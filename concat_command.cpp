// echoコマンド
#include <Arduino.h>

int concat_command( int argc, char** argv)
{
    for( int i=1; i<argc; i++)
    {
      printf( "%s", argv[i]);
    }
    printf( "\r\n");
    return 0;
}