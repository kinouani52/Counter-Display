/*    MSP430    |    Display    */
/*     P1.4     |      SSN      */
/*     P1.7     |      SDI       */
/*     P1.5     |      SCK      */
/*Authors: Victor and Serge.....*/

#include <msp430.h> 

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    Aff_Init();
    char count[] = {'0','0','0','0'};

    while(1){
        Aff_4carac(count);
        __delay_cycles(500);
        if(count[3] == '9'){
            count[3] = '0';

            if(count[2] == '9')
                count[2] = '0';
            else
                count[2]++;

        } else
            count[3]++;
    }
}

