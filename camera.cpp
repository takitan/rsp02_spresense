// cameraコマンド
#include <string.h>
#include <Arduino.h>

static int takepicture_command( int argc, char** argv)
{
  // ToDo : ここにコマンドの実装を書く
  return 0;
}

static int streaming_command( int argc, char** argv)
{
  // ToDo : ここにコマンドの実装を書く
  return 0;
}

static int set_command( int argc, char** argv)
{
  // ToDo : ここにコマンドの実装を書く
  return 0;
}

int camera_command( int argc, char** argv)
{
  // コマンド2以下がなかったら不正コマンド
  if( argc<2) return -1;

  if( strcmp(argv[1],"takepicture")==0)
  {
    return takepicture_command( argc-1,&argv[1]);
  }
  if( strcmp(argv[1],"streaming")==0)
  {
    return streaming_command( argc-1,&argv[1]);
  }
  if( strcmp(argv[1],"set")==0)
  {
    return set_command( argc-1,&argv[1]);
  }

  return 0;
}