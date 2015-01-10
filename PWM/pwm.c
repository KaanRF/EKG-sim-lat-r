#include <16f877.h>

#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOPUT,NOWRT,NODEBUG,NOCPD,NOLVP

#use delay (clock=4000000)

#use fast_io(c)
#use fast_io(b)




void main()
{
set_tris_b(0x00);


output_b(0x00);

while(1)
{
output_high(pin_b0);
output_low(pin_b1);
delay_ms(500);
output_low(pin_b0);
output_high(pin_b1);
delay_ms(500);


}
}




