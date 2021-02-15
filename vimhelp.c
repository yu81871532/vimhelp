#include <stdio.h>
#include <string.h>
int main(int argv, char **argc)
{
	static const char *data[] = {
		"A/a/i/o   :  enter insered mode",
		"ce  :  del letters from cursor to blank space",
		"c$  :  del letters from cursor to line tail",
		"dd  :  del one line and this line's content well move to reg",
		"p  :  paste reg's content to cursor position or next line of cursor",
		"\"2p  :  paste No2_reg's content ",		
		"\"2y  :  copy content to No2_reg",		
		"\"+y  :  copy content to system's clipboard",		
		"2dd/d1  : 2dd=d1,3dd=d2  del 2 lines in normal mode",
		"d$  :  del from cursor to line tail",
		"d0  :  del from cursor to line start",
	       	"dw/de/db  :  delete one word! d3w/d3b:del 3 words",
	       	"u/ctrl+r  :  undo in normal mode",
	       	"u/U  :  u:undo the last command! U:recover all line!",
	       	"ctrl+f/ctrl+b  :  back or forward,pageup/page up pagedown/page down ", 
		"$  :  move cursor to line tail", 
		"0  :  move cursor to line start", 
		"G  :  move cursor to article tail!",
		"gg  :  move cursor to article start!",
		"ctrl+G/ctrl+g  :  display the number of cursor line",
		"30G  :  goto the NO.30 line in article.",
		"yy  :  copy one line",
		"2yy  :  copy 2 lines,include cursor line!",
		"yw  :  copy one word",
		"x  :  del one letter",
		"3x  :  del 3 letters",
		"r  :  change letter and cursor is not move to next letter",
		"R  :  change letter and cursor move to next letter",
		"o  :  insert one line under the cursor line",
		"O  :  insert one line over the cursor line",
		"ra/rb/rc  :  change the cursor letter to a/b/c",	
		"w  :  move cursor to next word",
		"e  :  move cursor to next word's tail",
		"b  :  move cursor to previous word",
		"/abc  :   find \"abc\" in article,use \"n\" or \"N\" find next!",
		"?abc  :   find \"abc\" in article,use \"N\" or \"n\" find next!",
		"%  :  find the pair of \"()\" or \"[]\" or \"{}\".",
		":!ls  :  use\":!\"ahead,run the outside shell command.<command>",
		":w abc  :  save as abc.<command>",
		":'<,'>w abc  :  the content selected save to a new file named abc.<command> ",
		":r abc  :  read file abc and insert to the cursor position.<command>",
		":r !ls  :  read the outside command's output (command \"ls\") and insert to the cursor position.<command>",
	       	NULL};
       	char* ch;
	if(argv == 1)
	{	
		printf("please insert arg! use : for all text!");
		return 0;
	}	
	if(argv == 2)
	{	
		for (int i = 0; data[i]; ++i)
		{
			if((ch=strstr(data[i],argc[1]))!=NULL){
				printf("%s\n", data[i]);
				//printf("hello world!\n");
			}
		}
	}

	if(argv == 3)
	{
		for (int i = 0; data[i]; ++i)
		{
			if((ch=strstr(data[i],argc[1]))!=NULL)
			{
				if((ch=strstr(data[i],argc[2]))!=NULL)
				{
					printf("%s\n", data[i]);
				}
			}
		}
	}
	if(argv == 4)
	{
		for (int i = 0; data[i]; ++i)
		{
			if((ch=strstr(data[i],argc[1]))!=NULL)
			{
				if((ch=strstr(data[i],argc[2]))!=NULL)
				{
					if((ch=strstr(data[i],argc[3]))!=NULL)
					{
						printf("%s\n", data[i]);
					}
					
				}
			}
		}
	}
    return 0;

}
