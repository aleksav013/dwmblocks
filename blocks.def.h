//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"network",			1,		0},
	{"",		"cpu_usage",			5,		0},
	{"",		"memory_usage",			5,		0},
	{"",		"battery",			60,		0},
	{"",		"get_brightness",		0,		6},
	{"",		"get_volume",			0,		10},
	{"",		"get_date",			60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
