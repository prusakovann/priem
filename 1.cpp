#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[128];
	float b;
	while(scanf("%s" , str))
	{
	 
	    if (!strcmp(str, "\"temperature\":"))
	    {
		scanf("%f" , &b);
	       if (b>= 20.0)
	       {system ("sudo mosquitto_pub -h \"10.96.4.11\" -t \"devices/lora/mx3\" -m \"vse poluchilos!\" -q 1");}
	    }   
	}     
}
