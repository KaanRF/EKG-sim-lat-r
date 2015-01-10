
/*30.03.2013 Kaan KANDEMÝR
Elektronik ve Haberleþme Müh.-3.Sýnýf
EKG simülatör programý-PIC16F877a
kaankandemir.wordpress.com */

#include <16f877a.h>
#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOCPD 
#use delay(clock=4000000)   
int a; 

void main ()
{
setup_psp(PSP_DISABLED);
setup_timer_1(T1_DISABLED);
setup_timer_2(T2_DISABLED,0,1);
setup_adc(ADC_OFF);
setup_adc_ports(NO_ANALOGS);
setup_ccp1(CCP_OFF);
setup_ccp2(CCP_OFF);

  set_tris_b(0x00);
   output_b(0x00);      
   while(1)
      {  output_b(50);
         delay_ms(120);
         for(a=50; a<=60; a++)  
         {  output_b(a); 
            delay_us(1500);
         }
         for(a=61; a<=70; a++)   // t bölgesi
         {  output_b(a); 
            delay_ms(2);
         }
         for(a=71; a<=80; a++)   // 
         {  output_b(a); 
            delay_us(3000);
         }
         for(a=81; a<=90; a++)   
         {  output_b(a); 
            delay_us(4700);
         }
         for(a=90; a>=80; a--)   
         {  output_b(a); 
            delay_ms(4);
         }
         for(a=79; a>=70; a--)   
         {  output_b(a); 
            delay_us(2500);
         }
         for(a=69; a>=60; a--)   
         {  output_b(a); 
            delay_us(1700);
         }
         for(a=59; a>=50; a--)   
         {  output_b(a); 
            delay_us(1500);
         }
         output_b(50);
         delay_ms(50);
         for(a=50; a<=60; a++)   //u bölgesi
         {  output_b(a); 
            delay_ms(1);
         }
         for(a=60; a<=70; a++)   //u bölgesi
         {  output_b(a); 
            delay_us(1500);
         }
         for(a=70; a>=60; a--)   // u bölgesi
         {  output_b(a); 
            delay_us(1500);
         }       
         for(a=60; a>=50; a--)   // u bölgesi
         {  output_b(a); 
            delay_us(1000);
         }
         output_b(50);
         delay_ms(250);
        for(a=50; a<=60; a++)   //p bölgesi
        {  output_b(a); 
           delay_us(400);
        }
        for(a=61; a<=70; a++)   //p bölgesi
        {  output_b(a); 
           delay_us(600);
        }
        for(a=71; a<=75; a++)   //p 
        {  output_b(a); 
           delay_us(1200);
        }
        for(a=76; a<=80; a++)   // p
        {  output_b(a); 
           delay_us(3500);
        }
        for(a=80; a>=76; a--)   // p düþme
        {  output_b(a);
           delay_us(2500);
        }
        for(a=75; a>=70; a--)   // p
        {  output_b(a); 
           delay_us(1000);
        }
        for(a=69; a>=60; a--)   // p
        {  output_b(a); 
           delay_us(600);
        }
        for(a=59; a>=50; a--)   //p
        {  output_b(a); 
           delay_us(400);
        }
        output_b(50);
        delay_ms(120);
       for(a=50; a>=20; a--) // Q
       {  output_b(a);      
          delay_us(200);      
       }
       for(a=20; a<=50; a++)  //Q
       {  output_b(a);      
          delay_us(200);      
       }
       for(a=50; a<=250; a++) //r
       {  output_b(a);      
          delay_us(200);      
       }
       for(a=250; a>=1; a--)  //r
       {  output_b(a); 
          delay_us(200); 
       }
       for(a=1; a<=50; a++) //s
       {  output_b(a);      
          delay_us(200);      
       }
     }
}





