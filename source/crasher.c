#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <switch.h>

/*

Felix - my deaf friend who have atmosphere with emunand reported me that if he put his switch to sleep and he pulled out his sd card while his switch is in sleep mode.   
It resulted in atmosphere crash screen and only need to press volume.  he discovered this!   he told me that that crash make it much easy for him to reboot his switch.   


as He was telling me and I went and attempt to reproduce this crash bug on my banned switch with atmosphere running over sysnand. 
I put it in sleep mode and pull out sd card... it result in normal sd error screen that force me to turn off my switch and put it in RCM mode.  

I remembered now,  his switch is running emunand so I grabbed my another switch with emunand. I tested it and I did crashed the emunand and I was able to reboot it
back to atmosphere.     

This give me a idea to crash atmosphere before you pull out sd card, so you can reboot back to cfw


This is stupid!   I think it is best to be running ftpd server for file transfers.  

also it will wear out the sd reader module in the switch.  I seen several switches with sd read module connector with missing pins.   




ELY M.    



*/





int main(int argc, char **argv)
{

    consoleInit(NULL);

    while(appletMainLoop())
    {

	abort();
	consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;

	
	
}
