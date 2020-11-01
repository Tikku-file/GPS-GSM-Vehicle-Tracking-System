#ifndef VARIABLES
#define VARIABLES 1

#ifndef VARS
#define __EXT extern
#else
#define __EXT
#endif

#define FALSE 0
#define TRUE 1
#define ENTER 0x0D
#define DATA_SEND 0x1A
__EXT UINT8* commands[]={"AT\r","0","0","0","0"};
__EXT UINT8 PARK_MODE = 0;
__EXT UINT8 response[30];
__EXT UINT8 OK_FLAG=FALSE;
__EXT UINT8 x=0;

#endif