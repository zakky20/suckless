static const char *user  = "nobody";
static const char *group = "nogroup";

static const int blurRadius = 50;
static const int pixelSize = 50;

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#1a1b26",   /* during input */
	[FAILED] = "#f7768e",   /* wrong password */
};

static const int failonclear = 1;

static const int xbell = 0;
