#include "quadcopter.h"

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
void setFR(uint8_t fr)
{
    printf("setFr");
}

/* front left
 */
void setFL(uint8_t fl)
{
    printf("setFl");
}

/* back right
 */
void setBR(uint8_t br)
{
    printf("setBr"); 
} 

/* back left
 */
void setBL(uint8_t bl)
{
    printf("setBl"); 
}

/* run quadcopter
 */
void run(quad qd)
{
    printf("Attention: run quadcopter!");
}

int main()
{
    quad qd = {0, 0, 0, 0, 0, 0};
    run(qd);
    while (1)
    {
        /* adjust height */
        qd.height = getHeight();
        if(qd.height != HEIGHT)
        {
                qd.height = qd.height < HEIGHT ? (qd.height + 1) : (qd.height - 1);
        }
        /* adjust pitch */
        qd.pitch = getPitch();
        if(qd.pitch != 0)
        {
            qd.pitch = qd.pitch < 0 ? (qd.pitch + 1) : (qd.pitch - 1);
        }
        /* adjust roll */
        qd.roll = getRoll();
        if(qd.roll != 0)
        {
            qd.roll = qd.roll < 0 ? (qd.roll + 1) : (qd.roll - 1);
        }
        if(qd.fr != MOTOR)
        {
             qd.fr = qd.fr < MOTOR ? (qd.fr + 1) : (qd.fr - 1);
             setFr(qd.fr);
        }
        if(qd.fl != MOTOR)
        {
             qd.fl = qd.fl < MOTOR ? (qd.fl + 1) : (qd.fl - 1);
             setFl(qd.fl);
        }
        if(qd.br != MOTOR)
        {
             qd.br = qd.br < MOTOR ? (qd.br + 1) : (qd.br - 1);
             setBr(qd.br);
        }
        if(qd.fr != MOTOR)
        {
             qd.bl = qd.bl < MOTOR ? (qd.bl + 1) : (qd.bl - 1);
             setBl(qd.bl);
        }
        run(qd);
   }

   return 0;
}
