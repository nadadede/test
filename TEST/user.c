#include "user.h"
#include "types.h"
#include "stdio.h"


/*********************************************/
/****************** Macros *******************/
/*********************************************/

#define points 5

extern user1_pts;
extern user2_pts;
extern user3_pts;
extern user4_pts;


//giving each user intial points=5
void Intialize(void)
{
	

		
		user1_pts =points;
		
		user2_pts =points;
		
		user3_pts =points;
		
		user4_pts =points;
		
	return;
}
//incrementing the user with the miniumum time in answering
void Inc(u8 Index)
{
 switch(index)
 {
	 case 1:
	 user1_pts++;
	 break;
	 case 2:
	 user2_pts++;
	 break;
	 case 3:
	 user3_pts++;
	 break;
	 case 4:
	 user4_pts++;
	 break;
	 
 }
  return ;
}

//decremnting the users who answerd late and checking if any has reached to 0
u8 Dec(u8 Index)
{
	u8 s=0;
	switc(index)
 {
	 case 1:
	 user1_pts--;
	 if(user1_pts==0)
		 s=s+1;
	 break;
	 case 2:
	 user2_pts--;
	  if(user2_pts==0)
		  s=s+2;
	 break;
	 case 3:
	 user3_pts--;
	  if(user3_pts==0)
		  s=s+3;
	 break;
	 case 4:
	 user4_pts--;
	  if(user4_pts==0)
		  s=s+4;
	 break;
	 
 }

return s; 
}

//calculating the winner in the game
u8 get_Thewinner(void)
{
	u8 max;
if(user1_pts>user2_pts&&user1_pts>user3_pts&&user1_pts>user4_pts)
	max=1;
	else if(user2_pts>user1_pts&&user2_pts>user3_pts&&user2_pts>user4_pts)
		max=2;
	else if(user3_pts>user1_pts&&user3_pts>user2_pts&&user3_pts>user4_pts)
		max=3;
	else
		max=4;
	return max;
}

	
	
		
	
		
		
	
	
	
	
}



