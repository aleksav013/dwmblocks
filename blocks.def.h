//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"network",							1,	0},
	{"\uf2db ",	"cpu_usage",							5,	0},
	{"\uf85a ",	"memory_usage",							5,	0},
	{"\uf241  ",	"battery",							60,	0},
	{"\uf5df ",	"get_brightness",						0,	6},
	{"\uf028 ",	"get_volume",							0,	10},
	{"",		"get_date",							60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
