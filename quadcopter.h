#ifndef __QUADCOPTER_H__
#define __QUADCOPTER_H__

#include <stdint.h>

/* get the orientation: 0 -> flat, (-)127 -> max tilt
 */
/* leaning forwards / backwards: positive -> forwards
 */
int8_t getPitch(); 
/* leaning right / left: positive -> right
 */
 int8_t getRoll(); 

/* get the height: 0 -> on the ground, 255 -> 255 inches high
 */
 uint8_t getHeight();

/* set the motor strength: 0 -> off, 255 -> max thrust
 */
/* front right
 */
void setFR(uint8_t); 
/* front left
 */
void setFL(uint8_t); 
/* back right
 */
void setBR(uint8_t); 
/* back left
 */
void setBL(uint8_t); 

#endif
