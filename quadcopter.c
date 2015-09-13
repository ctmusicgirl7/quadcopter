#include <quadcopter.h>

/* get the orientation: 0 -> flat, (-)127 -> max tilt
 */
/* leaning forwards / backwards: positive -> forwards
 */
int8_t getPitch()
{
    printf("getPitch"); 
}

/* leaning right / left: positive -> right
 */
int8_t getRoll()
{
    printf("getRoll"); 
} 

/* get the height: 0 -> on the ground, 255 -> 255 inches high
 */
uint8_t getHeight()
{
    printf("getHeight"); 
}

/* set the motor strength: 0 -> off, 255 -> max thrust
 */
/* front right
 */
void setFR(uint8_t)
{
    printf("setFr"); 
}

/* front left
 */
void setFL(uint8_t)
{
    printf("setFl"); 
} 

/* back right
 */
void setBR(uint8_t)
{
    printf("setBr"); 
} 

/* back left
 */
void setBL(uint8_t)
{
    printf("setBl"); 
}

/* run quadcopter
 */
void run(struct quadcopter quad)
{
    printf("Attention: run quadcopter!");
}

int main()
{
    quad = {0};
	run(quad);
    while (1)
	{
	    /* adjust height */
        quad.height = getHeight();
		if(quad.height != HEIGHT)
		{
		    quad.height = quad.height < HEIGHT ? (quad.height + 1) : (quad.height - 1);
		}
	    /* adjust pitch */
        quad.pitch = getPitch();
		if(quad.pitch != 0)
		{
		    quad.pitch = quad.pitch < 0 ? (quad.pitch + 1) : (quad.pitch - 1);
		}
	    /* adjust roll */
        quad.roll = getRoll();
		if(quad.roll != 0)
		{
		    quad.roll = quad.roll < 0 ? (quad.roll + 1) : (quad.roll - 1);
		}
		if(quad.fr != MOTOR)
		{
		    quad.fr = quad.fr < MOTOR ? (quad.fr + 1) : (quad.fr - 1);
			setFr(quad.fr);
		} 
		if(quad.fl != MOTOR)
		{
		    quad.fl = quad.fl < MOTOR ? (quad.fl + 1) : (quad.fl - 1);
			setFl(quad.fl);
		} 
		if(quad.br != MOTOR)
		{
		    quad.br = quad.br < MOTOR ? (quad.br + 1) : (quad.br - 1);
			setBr(quad.br);
		} 
		if(quad.fr != MOTOR)
		{
		    quad.bl = quad.bl < MOTOR ? (quad.bl + 1) : (quad.bl - 1);
			setBl(quad.bl);
		} 
		run(quad);
	}

   return 0;
}
