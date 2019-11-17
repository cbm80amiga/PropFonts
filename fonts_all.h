#ifndef _FONTS_ALL_H
#define _FONTS_ALL_H

#include "c64enh_font.h" 		// C64 8x8 prop font enhanced + PL chars
#include "amstrad_font.h"		// Amstrad 8x8 prop font
//#include "font8x8.h"			// 8x8 font from TV lib

#include "term11x16_font.h" 	// big terminal font + degrees, const W=11 
#include "term9x14_font.h"		// terminal font bold 9x14 maxH=16
#include "term8x14_font.h"		// terminal font 8x14 maxH=16 + PL + rise/fall/ohm/micro
#include "term7x14_font.h"		// terminal font 7x14 maxH=16

#include "small4x7_font.h" 		// small font 4x7 maxW=5 maxH=8, + PL + 2ch
#include "small4x6_font.h"		// small font 4x6 maxW=5 maxH=7, + PL + 2ch
#include "small4x5_font.h"		// small font 4x5 maxW=5 maxH=6, + PL + 2ch
#include "small5x7_font.h" 		// small font 5x7 maxW=5 maxH=8, + PL
#include "small5x7bold_font.h" 	// bold font 5x7 maxW=5 maxH=8, + PL, good for LCD

#include "tiny3x7_font.h" 		// very tiny font 3x7 maxW=5 maxH=8 + PL

#include "proppl5x7_font.h" 	// prop font for LED matrixes + PL, similar to small5x7

// for DMM
#include "digits3x5_font.h"  	// simple digits good for scaling
#include "digits4x7_font.h"  	// simple digits good for scaling
#include "dmmsymbols_font.h"	// DMM symbols 16x13

// good for clock
#include "digi19x15full_font.h" // big Computer font 19x16
#include "digi19x15_font.h"		// big Computer (digits only)
#include "digi21x16_font.h"		// big Computer (digits only) good for clock

// big fonts
#include "chicago_font.h"		// Apple Chicago21x18 font
#include "broadway_font.h"		// Broadway17x15 font
#include "comic_font.h"			// Comic19x23 font

#include "times_dig_16x24_font.h"			// times digits
#include "arbonnie_dig_18x27_font.h"			// arbonnie digits

#endif