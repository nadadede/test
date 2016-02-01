#include<stdio.h>
#include<conio.h>
#pragma pack(4)
typedef unsigned char u8;
typedef long int u32;
typedef struct
{
u8 x;
u8 z;
u32 y;
}mystruct;
void main(void)
{
	mystruct a;
printf("%d",sizeof(a));
getch();
}