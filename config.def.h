/* user and group to drop privileges to */
static const char *user  = "elt0khy";
static const char *group = "eltokhy";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#111111",     /* after initialization */
	[INPUT] =  "#444444",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* default message */
static const char * message = "Tokhy's Hub";

/* text color */
static const char * text_color = "#24D1AC";

/* text size (must be a valid size) */
static const char * font_name = "14x10";
