#ifndef _pixie_palettes_h
#define _pixie_palettes_h

#include "Arduino.h"

const uint8_t RED_SOLID[] = {
	0,		255,	0,		0,
	255,	255,	0,		0,
};

const uint8_t YELLOW_SOLID[] = {
	0,		255,	255,	0,
	255,	255,	255,	0,
};

const uint8_t GREEN_SOLID[] = {
	0,		0,		255,	0,
	255,	0,		255,	0,
};

const uint8_t CYAN_SOLID[] = {
	0,		0,		255,	255,
	255,	0,		255,	255,
};

const uint8_t BLUE_SOLID[] = {
	0,		255,	0,		0,
	255,	255,	0,		0,
};

const uint8_t PURPLE_SOLID[] = {
	0,		127,	0,		255,
	255,	127,	0,		255,
};

const uint8_t MAGENTA_SOLID[] = {
	0,		255,	0,		255,
	255,	255,	0,		255,
};

const uint8_t RAINBOW[] = {
	0,		255,	0,		0,
	17,		213,	42,		0,
	34,		171,	85,		0,
	51,		171,	127,	0,
	68,		171,	171,	0,
	85,		86,		213,	0,
	102,	0,		255,	0,
	119,	0,		213,	42,
	136,	0,		171,	85,
	153,	0,		86,		170,
	170,	0,		0,		255,
	187,	42,		0,		213,
	204,	85,		0,		171,
	221,	127,	0,		129,
	238,	171,	0,		85,
	255,	213,	0,		43
};

const uint8_t GRADIENT_RED_BLACK[] = {
	0,		255,	0,		0,
	255,	0,		0,		0,
};

const uint8_t GRADIENT_BLACK_RED_BLACK[] = {
	0,		0,		0,		0,
	127,	255,	0,		0,
	255,	0,		0,		0,
};

const uint8_t GRADIENT_GREEN_BLACK[] = {
	0,		0,		255,	0,
	255,	0,		0,		0,
};

const uint8_t GRADIENT_BLACK_GREEN_BLACK[] = {
	0,		0,		0,		0,
	127,	0,		255,	0,
	255,	0,		0,		0,
};

const uint8_t GRADIENT_BLUE_BLACK[] = {
	0,		0,		0,		255,
	255,	0,		0,		0,
};

const uint8_t GRADIENT_BLACK_BLUE_BLACK[] = {
	0,		0,		0,		0,
	127,	0,		0,		255,
	255,	0,		0,		0,
};

/*
0xFF0000,
0xD52A00,
0xAB5500,
0xAB7F00,
0xABAB00,
0x56D500,
0x00FF00,
0x00D52A,
0x00AB55,
0x0056AA,
0x0000FF,
0x2A00D5,
0x5500AB,
0x7F0081,
0xAB0055,
0xD5002B
*/

/*
const uint8_t GRADIENT_PURPLE[] = {
	0,		32,		0,		64,
	255,	127,	0,		255,
};

const uint8_t GRADIENT_BLACK_PURPLE_BLACK[] = {
	0,		0,		0,		0,
	127,	127,	0,		255,
	255,	0,		0,		0,
};
*/

#endif