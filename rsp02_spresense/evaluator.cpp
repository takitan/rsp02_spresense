// cameraコマンド
#include <string.h>
#include <Arduino.h>

static int set_command( int argc, char** argv)
{
  // ToDo : ここにコマンドの実装を書く
  return 0;
}

static int execute_command( int argc, char** argv)
{
  // ToDo : ここにコマンドの実装を書く
  return 0;
}

int evaluator_command( int argc, char** argv)
{
  // コマンド2以下がなかったら不正コマンド
  if( argc<2) return -1;

  if( strcmp(argv[1],"set")==0)
  {
    return set_command( argc-1,&argv[1]);
  }

  if( strcmp(argv[1],"execute")==0)
  {
    return execute_command( argc-1,&argv[1]);
  }

  return 0;
}