#include<stdio.h>
#include<conio.h>

typedef unsigned short int u16;
typedef unsigned char u8;
typedef signed short int s16;
typedef signed char s8;
typedef unsigned long int u32;
typedef signed long int s32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef float f32;
typedef double f64;
#define PA0 bitaccess.A0
#define PA1 bitaccess.A1
#define PA2 bitaccess.A2
#define PA3 bitaccess.A3
#define PA4 bitaccess.A4
#define PA5 bitaccess.A5
#define PA6 bitaccess.A6
#define PA7 bitaccess.A7



typedef union
{
	struct
	{
		u8 A0:1;
		u8 A1:1;
		u8 A2:1;
		u8 A3:1;
		u8 A4:1;
		u8 A5:1;
		u8 A6:1;
		u8 A7:1;
		
	}bitaccess;
	u8 byteaccess;
}Reg;
	

void main()
{
Reg PORTA;
PORTA.PA0=0;
PORTA.PA1=1;
PORTA.PA2=0;
PORTA.PA3=0;
PORTA.PA4=1;
PORTA.PA5=1;
PORTA.PA6=0;
PORTA.PA7=0;
printf("%d\n",PORTA.PA0);
printf("%x\n",PORTA.PA1);
printf("%x\n",PORTA.PA2);
printf("%x\n",PORTA.PA3);
printf("%x\n",PORTA.PA4);
printf("%x\n",PORTA.PA5);
printf("%x\n",PORTA.PA6);
printf("%x\n",PORTA.PA7);

#define PORTA PORTA.byteaccess
PORTA=0x20;
printf("%x\n",PORTA);
	
	getch();
}