#include "chalk.h"
#include <stdio.h>

int main() {
    initChalk();

    Chalk.black.print("Texto foreground black.\n");
    Chalk.black.bold("Texto foreground black bold.\n");
    Chalk.black.underline("Texto foreground black underscore.\n");

    Chalk.bgBlack.print("Texto background black.\n");
    Chalk.bgBlack.bold("Texto background black bold.\n");
    Chalk.bgBlack.underline("Texto background black underscore.\n");

    Chalk.red.print("Texto foreground red.\n");
    Chalk.red.bold("Texto foreground red bold.\n");
    Chalk.red.underline("Texto foreground red underscore.\n");

    Chalk.bgRed.print("Texto background red.\n");
    Chalk.bgRed.bold("Texto background red bold.\n");
    Chalk.bgRed.underline("Texto background red underscore.\n");

    Chalk.green.print("Texto foreground green.\n");
    Chalk.green.bold("Texto foreground green bold.\n");
    Chalk.green.underline("Texto foreground green underscore.\n");

    Chalk.bgGreen.print("Texto background green.\n");
    Chalk.bgGreen.bold("Texto background green bold.\n");
    Chalk.bgGreen.underline("Texto background green underscore.\n");

    Chalk.yellow.print("Texto foreground yellow.\n");
    Chalk.yellow.bold("Texto foreground yellow bold.\n");
    Chalk.yellow.underline("Texto foreground yellow underscore.\n");

    Chalk.bgYellow.print("Texto background yellow.\n");
    Chalk.bgYellow.bold("Texto background yellow bold.\n");
    Chalk.bgYellow.underline("Texto background yellow underscore.\n");

    Chalk.blue.print("Texto foreground blue.\n");
    Chalk.blue.bold("Texto foreground blue bold.\n");
    Chalk.blue.underline("Texto foreground blue underscore.\n");

    Chalk.bgBlue.print("Texto background blue.\n");
    Chalk.bgBlue.bold("Texto background blue bold.\n");
    Chalk.bgBlue.underline("Texto background blue underscore.\n");

    Chalk.magenta.print("Texto foreground magenta.\n");
    Chalk.magenta.bold("Texto foreground magenta bold.\n");
    Chalk.magenta.underline("Texto foreground magenta underscore.\n");

    Chalk.bgMagenta.print("Texto background magenta.\n");
    Chalk.bgMagenta.bold("Texto background magenta bold.\n");
    Chalk.bgMagenta.underline("Texto background magenta underscore.\n");

    Chalk.cyan.print("Texto foreground cyan.\n");
    Chalk.cyan.bold("Texto foreground cyan bold.\n");
    Chalk.cyan.underline("Texto foreground cyan underscore.\n");

    Chalk.bgCyan.print("Texto background cyan.\n");
    Chalk.bgCyan.bold("Texto background cyan bold.\n");
    Chalk.bgCyan.underline("Texto background cyan underscore.\n");

    Chalk.white.print("Texto foreground cyan.\n");
    Chalk.white.bold("Texto foreground cyan bold.\n");
    Chalk.white.underline("Texto foreground cyan underscore.\n");

    Chalk.bgWhite.print("Texto background cyan.\n");
    Chalk.bgWhite.bold("Texto background cyan bold.\n");
    Chalk.bgWhite.underline("Texto background cyan underscore.\n");

    Chalk.rgb.print("Texto foreground RGB.\n", 0, 255, 0);    
    Chalk.rgb.bold("Texto foreground RGB bold.\n", 198, 120, 221);
    Chalk.rgb.underline("Texto foreground RGB underline.\n", 0, 0, 255);

    Chalk.bgRgb.print("Texto background RGB.\n", 0, 255, 0);    
    Chalk.bgRgb.bold("Texto background RGB bold.\n", 198, 120, 221);
    Chalk.bgRgb.underline("Texto background RGB underline.\n", 0, 0, 255);

    return 0;
} 