#include"types.h"
#ifndef_USER_H
#definf_USER_H


int user1_pts;
int user2_pts;
int user3_pts;
int user4_pts;




/*********************************************/
/*************** Prototypes ******************/
/*********************************************/


void Intialize(void); //to initialize points of users
void Inc(u8 Index); //to increment the points of user with min time
u8 Dec(u8 Index); //to decrement the points of user with max time
u8 get_Thewinner(void) //to check who is the winner and return its index

#endif