#include "reg52.h"
#include "timer.h"

#define uchar unsigned char
#define uint  unsigned int

sbit beep  = P3^5;	//������
sbit led   = P3^7;
sbit relay = P3^6;	//�̵���

void  beep1()	 
{		  
    unsigned int i,j;
	for(i=0;i<600;i++)
	{
      for(j=80;j>0;j--);	  
      beep=~beep;
	}
}

void LED_BLINK_1()
{
   led = 0;	
   Delay_ms(500);
   led = 1;		
}

void LED_BLINK_2()
{
   led = 0;
   Delay_ms(250);
   led = 1;
   Delay_ms(250);
   led = 0;
   Delay_ms(250);
   led = 1;
}  

void relay_OFF()  //�ؼ̵���
{
  relay=1;
}

void relay_ON()  //���̵���
{
  relay=0;
}
