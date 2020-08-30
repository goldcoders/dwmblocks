//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",	"volume",	0,	10},
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"memory",	10,	14},
    //{"",	"music",	0,	11},
	//{"",	"pacpackages",	0,	8},
	//{"",	"news",		0,	6},
	{"", "disk /",	0,	5},
	{"", "disk /home",	0,	2},
	//{"",	"cpu",		10,	18},
	//{"",	"weather",	18000,	5},
	//{"",	"mailbox",	180,	12},
	{"",	"clock",	60,	1},
    //{"",	"nettraf",	1,	16},
	{"",	"internet",	5,	4},
	{"",	"battery",	5,	3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " \0 ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
