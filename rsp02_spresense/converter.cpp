// cameraコマンド
#include <string.h>
#include <Arduino.h>

static int makethumbnail_command( int argc, char** argv)
{
  // ToDo : ここにコマンドの実装を書く
  return 0;
}

static int resize_command( int argc, char** argv)
{
  // ToDo : ここにコマンドの実装を書く
  return 0;
}

static int reformat_command( int argc, char** argv)
{
  // ToDo : ここにコマンドの実装を書く
  return 0;
}

int converter_command( int argc, char** argv)
{
  // コマンド2以下がなかったら不正コマンド
  if( argc<2) return -1;

  if( strcmp(argv[1],"makethumbnail")==0)
  {
    return makethumbnail_command( argc-1,&argv[1]);
  }

  if( strcmp(argv[1],"resize")==0)
  {
    return resize_command( argc-1,&argv[1]);
  }

  if( strcmp(argv[1],"reformat")==0)
  {
    return reformat_command( argc-1,&argv[1]);
  }

  return 0;
}