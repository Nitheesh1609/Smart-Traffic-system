#include<reg51.h>
sbit wy11=P1^0;
sbit wy12=P1^1;
sbit wy21=P1^2;
sbit wy22=P1^3;
sbit wy31=P1^4;
sbit wy32=P1^5;
sbit wy41=P1^6;
sbit wy42=P1^7;
sbit red1=P2^0;
sbit green1=P2^1;
sbit red2=P2^2;
sbit green2=P2^3;
sbit red3=P2^4;
sbit green3=P2^5;
sbit red4=P2^6;
sbit green4=P2^7;
void delay1()
{
	int i;
	for(i=0;i<=10000;i++);
}
void delay()
{
	int i;
	for(i=0;i<=5000;i++);
}

void way1()
{
	if((wy11==0)&&(wy12==0))
	{
		red1=0;
		green1=1;
		delay1();
	  green1=0;
		red1=1;
	}
	 else if(wy11==0)
	{
		red1=0;
		green1=1;
		delay();
		green1=0;
		red1=1;
	}	
	
}
void way2()
{
	if((wy21==0)&&(wy22==0))
	{
		red2=0;
		green2=1;
		delay1();
	  green2=0;
		red2=1;
	}
	else if(wy21==0)
	{
		red2=0;
		green2=1;
		delay();
		green2=0;
		red2=1;
	}		
}
void way3()
{
	if((wy31==0)&&(wy32==0))
	{
		red3=0;
		green3=1;
		delay1();
	  green3=0;
		red3=1;
	}
	else if(wy31==0)
	{
		red3=0;
		green3=1;
		delay();
		green3=0;
		red3=1;
	}		
}
void way4()
{
	if((wy41==0)&&(wy42==0))
	{
		red4=0;
		green4=1;
		delay1();
	  green4=0;
		red4=1;
	}
	else if(wy41==0)
	{
		red4=0;
		green4=1;
		delay();
		green4=0;
		red4=1;
	}		
}
void main()
{
	P1=0xFF;
	P2=0x55;
	
	while(1)
	{
		way1();
		way2();
		way3();
		way4();
	}

}

