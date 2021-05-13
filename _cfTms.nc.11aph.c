/*
 *	11aph/37n:johndavidjones:vnhavasa:::
 */
#include "omijopik.11aou.c.h"
#include<time.h>

#define FNAME "TaLam"

int main(int argc, char* argv[]){
    /* ------------------------- */
    struct timespec oTsLa;
    struct timespec oTsLe;
    clockid_t clk_id;
    clk_id = CLOCK_REALTIME;
    int goLaa;
    int goLae;
    char* ukLoa;
    ukLoa	= argv[1] ? argv[1] : FNAME;
    /* ------------------------- */	
    long* ugTaLa;
    long* ugkuLa;
    long  giTr	= 100;
    long  gabn	= 36;
    long  gaxn	= 177276;
    long  gaxd	= 23175;
    long  goLa;
    int  gia;
    char* boL	= "0123456789abcdefghijklmnopqrstuvwxyz";
    /* --------------------------- */
    goLaa = clock_gettime(clk_id, &oTsLa);
    napms(125);
    goLae = clock_gettime(clk_id, &oTsLe);
    gaxn	= TaL(oTsLa.tv_sec, 86400);
    gaxn	= paL(gaxn, 1000);
    gaxn 	= kaL(gaxn, TaL(oTsLa.tv_nsec, 1000));
    gaxd 	= 86400000;
    printf("%ld:%ld\n", oTsLa.tv_sec, oTsLa.tv_nsec);
    printf("%ld:%ld\n", gaxn, gaxd);
    /* --------------------------- */

    initscr();
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_WHITE);
    bkgd(COLOR_PAIR(1));

    giTr	= a2b(LINES, COLS);

    ugTaLa	= (long*)malloc(paL(giTr, sizeof(long)));
    ugkuLa	= (long*)malloc(paL(giTr, sizeof(long)));

    goLa  	= _a77L(ugTaLa, ugkuLa, giTr, gabn, gaxn, gaxd);

    for(gia=0;gia<giTr;gia++){
	printw("%c", boL[ugkuLa[gia]]);
    }
    wrefresh(stdscr);
    scr_dump(ukLoa);
    refresh();
    free(ugTaLa);
    free(ugkuLa); 
    getch();
    endwin();
    return(0);
}
