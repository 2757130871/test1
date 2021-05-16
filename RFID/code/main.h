#ifndef  __main_h__
#define  __main_h__

typedef	unsigned char	BOOLEAN;
typedef	unsigned char	INT8U;
typedef	signed char		INT8S;
typedef	unsigned int	INT16U;
typedef	signed int		INT16S;
typedef	unsigned long  	INT32U;
typedef	signed long    	INT32S;

#define	FOSC	22118400L//11059200L
#define	BAUD	9600

#define	FALSE	0
#define	TRUE	1

#define	WR		0
#define	RD		1

#define nop() _nop_()

#define	BIT(n)	( 1 << n )

/******************
UartCmdLen£ºUartCmd + UartErrCode
UartDataLen£ºUartDataBuf

*******************/
typedef struct __sUartData
{
	INT8U UartCmdLen;  //Ã
	INT8U UartDataLen; //duiyu
	INT16U UartCmd;
	INT8U  UartErrCode;
	INT8U  UartDataBuf[1];
} *psUartData;

#define	LED_NONE	0
#define	LED_LONG	1
#define	LED_200MS	2
#define	LED_80MS	3


#endif
