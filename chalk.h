#ifndef _chalk_h_
#define _chalk_h_

#define Chalk_Reset       "\x1b[0m"
#define Chalk_Bright      "\x1b[1m"
#define Chalk_Dim         "\x1b[2m"
#define Chalk_Underscore  "\x1b[4m"
#define Chalk_Blink       "\x1b[5m"
#define Chalk_Reverse     "\x1b[7m"
#define Chalk_Hidden      "\x1b[8m"

#define Chalk_FgBlack     "\x1b[30m"
#define Chalk_FgRed       "\x1b[31m"
#define Chalk_FgGreen     "\x1b[32m"
#define Chalk_FgYellow    "\x1b[33m"
#define Chalk_FgBlue      "\x1b[34m"
#define Chalk_FgMagenta   "\x1b[35m"
#define Chalk_FgCyan      "\x1b[36m"
#define Chalk_FgWhite     "\x1b[37m"

#define Chalk_BgBlack     "\x1b[40m"
#define Chalk_BgRed       "\x1b[41m"
#define Chalk_BgGreen     "\x1b[42m"
#define Chalk_BgYellow    "\x1b[43m"
#define Chalk_BgBlue      "\x1b[44m"
#define Chalk_BgMagenta   "\x1b[45m"
#define Chalk_BgCyan      "\x1b[46m"
#define Chalk_BgWhite     "\x1b[47m"

#include <stdio.h>
#include <stdint.h>

typedef void (*fnColor)(const char* text);
typedef void (*fnFromRgb)(const char* text, uint8_t reg, uint8_t green, uint8_t blue);

/*****************************************************/
/* Defined colors options.                           */
/*****************************************************/
typedef struct {
    fnColor bold;
    fnColor underline;
    fnColor print;
} TrueColor;

/*****************************************************/
/* RGB colors options.                               */
/*****************************************************/
typedef struct {
    fnFromRgb bold;
    fnFromRgb underline;
    fnFromRgb print;
} RgbColor;

/*****************************************************/
/* Main color handler                                */
/*****************************************************/
typedef struct {
    TrueColor black;
    TrueColor bgBlack;
    TrueColor red;
    TrueColor bgRed;
    TrueColor green;
    TrueColor bgGreen;
    TrueColor yellow;
    TrueColor bgYellow;
    TrueColor blue;    
    TrueColor bgBlue;
    TrueColor magenta;
    TrueColor bgMagenta;
    TrueColor cyan;
    TrueColor bgCyan;
    TrueColor white;
    TrueColor bgWhite;

    RgbColor rgb;
    RgbColor bgRgb;
} chalk_t;

static chalk_t Chalk; // Singleton instance.

/****************************************************/
/* Public API                                       */
/****************************************************/
void initChalk();

void printText(const char* colorType, const char* text);

// Black
void printBlack(const char* text);
void printBlackBold(const char* text);
void printBlackUnderline(const char* text);

// Black background
void printBgBlack(const char* text);
void printBgBlackBold(const char* text);
void printBgBlackUnderline(const char* text);

// Red
void printRed(const char* text);
void printRedBold(const char* text);
void printRedUnderline(const char* text);

// Red background
void printBgRed(const char* text);
void printBgRedBold(const char* text);
void printBgRedUnderline(const char* text);

// Green
void printGreen(const char* text);
void printGreenBold(const char* text);
void printGreenUnderline(const char* text);

// Green background
void printBgGreen(const char* text);
void printBgGreenBold(const char* text);
void printBgGreenUnderline(const char* text);

// Yellow
void printYellow(const char* text);
void printYellowBold(const char* text);
void printYellowUnderline(const char* text);

// Yellow background
void printBgYellow(const char* text);
void printBgYellowBold(const char* text);
void printBgYellowUnderline(const char* text);

// Blue
void printBlue(const char* text);
void printBlueBold(const char* text);
void printBlueUnderline(const char* text);

// Blue background
void printBgBlue(const char* text);
void printBgBlueBold(const char* text);
void printBgBlueUnderline(const char* text);

// Magenta
void printMagenta(const char* text);
void printMagentaBold(const char* text);
void printMagentaUnderline(const char* text);

// Magenta background
void printBgMagenta(const char* text);
void printBgMagentaBold(const char* text);
void printBgMagentaUnderline(const char* text);

// Cyan
void printCyan(const char* text);
void printCyanBold(const char* text);
void printCyanUnderline(const char* text);

// Cyan background
void printBgCyan(const char* text);
void printBgCyanBold(const char* text);
void printBgCyanUnderline(const char* text);

// White
void printWhite(const char* text);
void printWhiteBold(const char* text);
void printWhiteUnderline(const char* text);

// White background
void printBgWhite(const char* text);
void printBgWhiteBold(const char* text);
void printBgWhiteUnderline(const char* text);

// RGB
void printRGB(const char* text, uint8_t red, uint8_t green, uint8_t blue);
void printRGBBold(const char* text, uint8_t red, uint8_t green, uint8_t blue);
void printRGBUnderline(const char* text, uint8_t red, uint8_t green, uint8_t blue);

// RGB background
void printBgRGB(const char* text, uint8_t red, uint8_t green, uint8_t blue);
void printBgRGBBold(const char* text, uint8_t red, uint8_t green, uint8_t blue);
void printBgRGBUnderline(const char* text, uint8_t red, uint8_t green, uint8_t blue);

/****************************************************/
/* Implementation                                   */
/****************************************************/
void initChalk() {
    // Black
    Chalk.black.print     = printBlack;
    Chalk.black.bold      = printBlackBold;
    Chalk.black.underline = printBlackUnderline;
    
    // BgBlack
    Chalk.bgBlack.print     = printBgBlack;
    Chalk.bgBlack.bold      = printBgBlackBold;
    Chalk.bgBlack.underline = printBgBlackUnderline;

    // Red
    Chalk.red.print         = printRed;
    Chalk.red.bold          = printRedBold;
    Chalk.red.underline     = printRedUnderline;

    // BgRed
    Chalk.bgRed.print       = printBgRed;
    Chalk.bgRed.bold        = printBgRedBold;
    Chalk.bgRed.underline   = printBgRedUnderline;
    
    // Green
    Chalk.green.print       = printGreen;
    Chalk.green.bold        = printGreenBold;
    Chalk.green.underline   = printGreenUnderline;

    // BgGreen
    Chalk.bgGreen.print     = printBgGreen;
    Chalk.bgGreen.bold      = printBgGreenBold;
    Chalk.bgGreen.underline = printBgGreenUnderline;

    // Yellow
    Chalk.yellow.print      = printYellow;
    Chalk.yellow.bold       = printYellowBold;
    Chalk.yellow.underline  = printYellowUnderline;

    // BgYellow
    Chalk.bgYellow.print        = printBgYellow;
    Chalk.bgYellow.bold         = printBgYellowBold;
    Chalk.bgYellow.underline    = printBgYellowUnderline;

    // Blue
    Chalk.blue.print     = printBlue;
    Chalk.blue.bold      = printBlueBold;
    Chalk.blue.underline = printBlueUnderline;

    // BgBlue
    Chalk.bgBlue.print     = printBgBlue;
    Chalk.bgBlue.bold      = printBgBlueBold;
    Chalk.bgBlue.underline = printBgBlueUnderline;

    // Magenta
    Chalk.magenta.print     = printMagenta;
    Chalk.magenta.bold      = printMagentaBold;
    Chalk.magenta.underline = printMagentaUnderline;

    // BgMagenta
    Chalk.bgMagenta.print       = printBgMagenta;
    Chalk.bgMagenta.bold        = printBgMagentaBold;
    Chalk.bgMagenta.underline   = printBgMagentaUnderline;

    // Cyan
    Chalk.cyan.print        = printCyan;
    Chalk.cyan.bold         = printCyanBold;
    Chalk.cyan.underline    = printCyanUnderline;

    // BgCyan
    Chalk.bgCyan.print      = printBgCyan;
    Chalk.bgCyan.bold       = printBgCyanBold;
    Chalk.bgCyan.underline  = printBgCyanUnderline;

    // White
    Chalk.white.print       = printWhite;
    Chalk.white.bold        = printWhiteBold;
    Chalk.white.underline   = printWhiteUnderline;

    // BgWhite
    Chalk.bgWhite.print     = printBgWhite;
    Chalk.bgWhite.bold      = printBgWhiteBold;
    Chalk.bgWhite.underline = printBgWhiteUnderline;

    // Rgb
    Chalk.rgb.print      = printRGB;
    Chalk.rgb.bold       = printRGBBold;
    Chalk.rgb.underline  = printRGBUnderline;

    // Rgb background
    Chalk.bgRgb.print      = printBgRGB;
    Chalk.bgRgb.bold       = printBgRGBBold;
    Chalk.bgRgb.underline  = printBgRGBUnderline;

}

void printText(const char* colorType, const char* text) {
    printf(colorType);
    printf(text);
    printf(Chalk_Reset);
}

// Black
void printBlack(const char* text) {
    printText(Chalk_FgBlack, text);
}

void printBlackBold(const char* text) {
    printf(Chalk_Bright);
    printBlack(text);
}

void printBlackUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBlack(text);
}

// Black background
void printBgBlack(const char* text) {
    printText(Chalk_BgBlack, text);
}

void printBgBlackBold(const char* text) {
    printf(Chalk_Bright);
    printBgBlack(text);
}

void printBgBlackUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBgBlack(text);
}

// Red
void printRed(const char* text) {
    printText(Chalk_FgRed, text);
}

void printRedBold(const char* text) {
    printf(Chalk_Bright);
    printRed(text);
}

void printRedUnderline(const char* text) {
    printf(Chalk_Underscore);
    printRed(text);
}

// Red background
void printBgRed(const char* text) {
    printText(Chalk_BgRed, text);
}

void printBgRedBold(const char* text) {
    printf(Chalk_Bright);
    printBgRed(text);
}

void printBgRedUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBgRed(text);
}

// Green
void printGreen(const char* text) {
    printText(Chalk_FgGreen, text);
}

void printGreenBold(const char* text) {
    printf(Chalk_Bright);
    printGreen(text);
}

void printGreenUnderline(const char* text) {
    printf(Chalk_Underscore);
    printGreen(text);
}

// Green background
void printBgGreen(const char* text) {
    printText(Chalk_BgGreen, text);
}

void printBgGreenBold(const char* text) {
    printf(Chalk_Bright);
    printBgGreen(text);
}

void printBgGreenUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBgGreen(text);
}

// Yellow
void printYellow(const char* text) {
    printText(Chalk_FgYellow, text);
}

void printYellowBold(const char* text) {
    printf(Chalk_Bright);
    printYellow(text);    
}

void printYellowUnderline(const char* text) {
    printf(Chalk_Underscore);
    printYellow(text); 
}

// Yellow background
void printBgYellow(const char* text) {
    printText(Chalk_BgYellow, text);
}

void printBgYellowBold(const char* text) {
    printf(Chalk_Bright);
    printBgYellow(text);
}

void printBgYellowUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBgYellow(text);
}

// Blue
void printBlue(const char* text) {
    printText(Chalk_FgBlue, text);
}

void printBlueBold(const char* text) {
    printf(Chalk_Bright);
    printBlue(text);
}

void printBlueUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBlue(text);
}

// Blue background
void printBgBlue(const char* text) {
    printText(Chalk_BgBlue, text);
}

void printBgBlueBold(const char* text) {
    printf(Chalk_Bright);
    printBgBlue(text);
}

void printBgBlueUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBgBlue(text);
}

// Magenta
void printMagenta(const char* text) {
    printText(Chalk_FgMagenta, text);
}

void printMagentaBold(const char* text) {
    printf(Chalk_Bright);
    printMagenta(text);
}

void printMagentaUnderline(const char* text) {
    printf(Chalk_Underscore);
    printMagenta(text);
}

// Magenta background
void printBgMagenta(const char* text) {
    printText(Chalk_BgMagenta, text);
}

void printBgMagentaBold(const char* text) {
    printf(Chalk_Bright);
    printBgMagenta(text);
}

void printBgMagentaUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBgMagenta(text);
}

// Cyan
void printCyan(const char* text) {
    printText(Chalk_FgCyan, text);
}

void printCyanBold(const char* text) {
    printf(Chalk_Bright);
    printCyan(text);
}

void printCyanUnderline(const char* text) {
    printf(Chalk_Underscore);
    printCyan(text);
}

// Cyan background
void printBgCyan(const char* text) {
    printText(Chalk_BgCyan, text);
}

void printBgCyanBold(const char* text) {
    printf(Chalk_Bright);
    printBgCyan(text);
}

void printBgCyanUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBgCyan(text);
}

// White
void printWhite(const char* text) {
    printText(Chalk_FgWhite, text);
}

void printWhiteBold(const char* text) {
    printf(Chalk_Bright);
    printWhite(text);
}

void printWhiteUnderline(const char* text) {
    printf(Chalk_Underscore);
    printWhite(text);
}

// White background
void printBgWhite(const char* text) {
    printText(Chalk_BgWhite, text);
}

void printBgWhiteBold(const char* text) {
    printf(Chalk_Bright);
    printBgWhite(text);
}

void printBgWhiteUnderline(const char* text) {
    printf(Chalk_Underscore);
    printBgWhite(text);
}

// Rgb
void printRGB(const char* text, uint8_t red, uint8_t green, uint8_t blue) {
    char input[20];
    sprintf_s(input, 40, "\x1b[38;2;%i;%i;%im", red, green, blue);
    printText(input, text);
}

void printRGBBold(const char* text, uint8_t red, uint8_t green, uint8_t blue) {
    printf(Chalk_Bright);
    printRGB(text, red, green, blue);
}

void printRGBUnderline(const char* text, uint8_t red, uint8_t green, uint8_t blue) {
    printf(Chalk_Underscore);
    printRGB(text, red, green, blue);
}

// Rgb Background
void printBgRGB(const char* text, uint8_t red, uint8_t green, uint8_t blue) {
    char input[20];
    sprintf_s(input, 40, "\x1b[48;2;%i;%i;%im", red, green, blue);
    printText(input, text);
}

void printBgRGBBold(const char* text, uint8_t red, uint8_t green, uint8_t blue) {
    printf(Chalk_Bright);
    printBgRGB(text, red, green, blue);
}

void printBgRGBUnderline(const char* text, uint8_t red, uint8_t green, uint8_t blue) {
    printf(Chalk_Underscore);
    printBgRGB(text, red, green, blue);
}

#endif