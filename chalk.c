#include "chalk.h"

static chalk_t Chalk;

/****************************************************/
/* Implementation                                   */
/****************************************************/
void initChalk() {
    Chalk.blue = printBlue;
}

static void printBlue(const char* text) {
    printf(FgBlue);
    printf(text);
    printf(Reset);
}