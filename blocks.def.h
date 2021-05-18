//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",            "network",                                                      1,      0},
	{"Cpu: ",       "top -bn 1 | sed '3q;d' | awk {'print $2i\"%\"'}",          	5,      0},
	{"Mem:",        "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",    	5,	0},
	{"",            "battery",                                                 	60,     0},
	{"Brightness:", "echo $(xbacklight -get)%",                                 	0,      6},
	{"Volume:",     "pamixer --get-volume-human",                              	0,      10},
	{"",            "date '+%d.%m.%Y. %H:%M'",			         	60,     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
