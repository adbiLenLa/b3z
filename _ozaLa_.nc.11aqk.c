/*
 *	11aqa/3dg:johndavidjones:vnhavasa:::
 *	-lncursesw -lao -ldl -lm
 */
#define _XOPEN_SOURCE_EXTENDED 1
#include "omijopik.11aou.c.h"
#include <ncursesw/curses.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>
#include<string.h>
#include<ao/ao.h>
#include<math.h>
#define FNAME "TaLam"
/* -------------------------------------------------------- */
#define AA 1
typedef WINDOW* bb;
typedef int o;
typedef char t;
typedef t* ut;
typedef chtype n;
typedef wchar_t x;
typedef x* ux;
typedef struct {
    bb bbaL;
    o ox;
    o oL;
    o om;
    o oaL;
    o oam;
    o ot;
    x xaL;
}p;
    o oeL, oem;
    o eo[6];
/* ------------------------------------------------------- */
    o oLuotaL;
    o* uotaL;
    ut utaL	=  "abgdeuzctikLmnsopxqrST";
    ux uxaL   = L"אבגדהוזחטיכלמנסעפצקרשת";
    ux uxaaL;
    cchar_t ckTaL;
    /* ----------- */
    ao_device* gdevice;
    ao_sample_format gformat;
    int gdefault_driver;
    char* gbuffer;
    int gbuf_size;
    int gsample;
    float gfreq = 444.0;
    int gi;
    /* ----------- */
/* ------------------------------------------------------- */
void La(bb bba, x xa);
int qe(x xa, ux uxa);
int qa(ux uxa);
void bo(bb bbaL, t tu);
void sT(bb bbaL);
void Sma(bb bbaL, o oL, o om);
n aL(bb bbaL);
void TLq(p* upaL);
void dot(p* upeL);
/* -------------------------------------------------------- */

int main(int argc, char* argv[]){
    /* ------------------------- */
  /* setlocale(LC_ALL, "");*/
   /* setlocale(LC_ALL, "C-UTF-8");*/
    setlocale(LC_CTYPE, "en_US.UTF-8");
   /* setlocale(LC_ALL, "en_US.UTF-8");*/
   /* setlocale(LC_ALL, "de_DE.UTF.8");*/
  /* setlocale(LC_ALL, "he_IL");*/
    /* ------------------------- */
    struct timespec oTsLa;
    struct timespec oTsLe;
    clockid_t clk_id;
    clk_id = CLOCK_REALTIME;
    int goLaa;
    int goLae;
    WINDOW* uomTa;
    MEVENT meventLa;
    /* ------------------------- */	
    int gaiTr	= 100;
    if(argc >= 3){
        gaiTr = _atoi(argv[2]);
    } 
    int* ugTaLa;
    int* ugkuLa;
    int* ugkaaL;
    wchar_t* uKaaL;
    int  giTr	= 100;
    int  gabn	= 22;
    int  gaxn	= 177276;
    int  gaxd	= 23175;
    int  goLa;
    int  gia, gay, gax;
    int  gik, giLa;
    char* boL	= "abgdeuzctikLmnsopxqrST";
    t*    boM	= "KMNPX";
    wchar_t* bboL   = L"אבגדהוזחטיכלמנסעפצקרשת";
    wchar_t* bboM   = L"ךםןףץ";
    char* ukLoa	= FNAME;
    if(argc >= 2){
        ukLoa = argv[1];
    }
    FILE* upoLa;
    wchar_t eKa[1];
    char egkoLa[1];
   upoLa = fopen(ukLoa, "w");
    /* --------------------------- */
    goLaa = clock_gettime(clk_id, &oTsLa);
    napms(125);
    goLae = clock_gettime(clk_id, &oTsLe);
    gaxn	= oTsLa.tv_nsec;
    gaxn	= a7b(gaxn, 1000);
    gaxd	= oTsLe.tv_nsec;
    gaxd 	= a7b(gaxd, 1000);
    if(argc == 5){
	gaxn	= _atoi(argv[3]);
	gaxd	= _atoi(argv[4]);
    }
    printf("%ld:%ld\n", oTsLa.tv_nsec, oTsLe.tv_nsec);
    printf("%d:%d\n", gaxn, gaxd);
    /* --------------------------- */
    ao_initialize();
    gdefault_driver = ao_default_driver_id();
    memset(&gformat, 0, sizeof(gformat));
    gformat.bits = 16;
    gformat.channels = 2;
    gformat.rate = 44100;
    gformat.byte_format = AO_FMT_LITTLE;

    gdevice= ao_open_live(gdefault_driver, &gformat, NULL);
    gbuf_size 	= gformat.bits/8 * gformat.channels * gformat.rate;
    gbuffer = calloc(gbuf_size, sizeof(char));
    for(int oa=0;oa < gformat.rate;oa++){
	gsample = (int)(0.75 * 32768.0 *
                        sin(2 * M_PI * gfreq * ((float) oa/gformat.rate)));
	gbuffer[4*oa] = gbuffer[4*oa+2] = gsample & 0xff;
	gbuffer[4*oa+1] = gbuffer[4*oa+3] = (gsample >> 8) & 0xff;
    }
    ao_play(gdevice, gbuffer, gbuf_size);
    /* --------------------------- */


    initscr();
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_WHITE);
    init_pair(2, COLOR_GREEN, COLOR_YELLOW);
    bkgd(COLOR_PAIR(1));

    sT(stdscr);
    refresh();

    /*giTr	= a2b(LINES, COLS);*/
    giTr	= gaiTr;
 
    oLuotaL	= gaiTr;
    uotaL	= (int*)malloc(a2b(giTr, sizeof(int)));
    ugTaLa	= (int*)malloc(a2b(giTr, sizeof(int)));
    ugkuLa	= (int*)malloc(a2b(giTr, sizeof(int)));
    ugkaaL	= (int*)malloc(a2b(giTr, sizeof(int)));
    uKaaL	= (wchar_t*)malloc(a2b(giTr, sizeof(wchar_t)));
    uxaaL	= (wchar_t*)malloc(a2b(giTr, sizeof(wchar_t)));

    goLa  	= _a77(ugTaLa, ugkuLa, giTr, gabn, gaxn, gaxd);

    ugkuLa[0]	= a0b(ugkuLa[0], gabn);

    cchar_t ckT;
    ckT.attr	= 1;
    ckT.chars[1]	= L'\0';

    for(gia=0;gia<giTr;gia++){
	/*printw("%c", boL[ugkuLa[gia]]);*/
	ckT.chars[0]	= bboL[ugkuLa[gia]];
	add_wch(&ckT);
	eKa[0]	= bboL[ugkuLa[gia]];
	uKaaL[gia]	= eKa[0];
	uxaaL[gia]	= eKa[0];
	/*fwrite(ewc, sizeof(wchar_t), 1, upoLa);*/
	egkoLa[0]	= boL[ugkuLa[gia]];
	ugkaaL[gia]	= egkoLa[0];
	uotaL[gia]	= egkoLa[0];
	fwrite(egkoLa, sizeof(char), 1, upoLa);
    }
    fclose(upoLa);
    wrefresh(stdscr);
    /* ---------------------------------------------- */
#define BB 1
    /* ---------------------------- */
    bb bbu = newwin(21, 11, 6, 50);
    Sma(bbu, 0, 0);
    wprintw(bbu,"%d", 718);
    sT(bbu);
    /* ---------------------------- */
    bb bba = newwin(6, 6, 10, 10);
    o oL, om, oaL, oam ;
    getmaxyx(bba, oL, om);
    wmove(bba, 0, 0);
    refresh();
    wbkgd(bba, COLOR_PAIR(2));
    sT(bba);
    for(int ox=0;ox < a2b(oL, om);ox++){
        bo(bba, ugkaaL[ox]);
    }
    sT(bba);
    bb bbe = newwin(20, 10, 10, 24);
    Sma(bba, 0, 0);
    n nio = aL(bba);
    sT(bba);
    Sma(bbe, 0, 0);
    bo(bbe, nio);
    sT(bbe);
    Sma(stdscr, 0, 0);
    x xa = L' ';
    ckT.chars[0]	= xa;
    Sma(bbe, 0, 1);
    wadd_wch(bbe, &ckT);
    sT(bbe);
    wprintw(bbe, "%lc", uKaaL[2]);
    sT(bbe);
    getmaxyx(bbe, oL,  om);
    oaL = 0;
    oam = 0;

    Sma(bbe, oaL, oam);
    ckT.chars[0] = uKaaL[3];
    wadd_wch(bbe, &ckT);
    sT(bbe);
   
    curs_set(0);
    /* ------------------------------------- */
    p pu;
    p* upu = &pu;
    upu->bbaL = bbu;
    getmaxyx(upu->bbaL, upu->oL, upu->om);
    upu->oaL	= 0;
    upu->oam	= a8(upu->om, 1);
    upu->ot	= 'x';
    upu->ox	= 0;
    upu->xaL	= uKaaL[0];
    Sma(bbu, 0, 0);
    wprintw(upu->bbaL, "%d", 719);
    sT(upu->bbaL);
    /* ------------------------------------- */
    p paaL;
    p* upaaL = &paaL;
    upaaL->bbaL = stdscr;
    upaaL->oaL	= 4;
    upaaL->oam  = 10;
    getmaxyx(stdscr, upaaL->oL, upaaL->om);
    upaaL->ox	= 0;

    /* ------------------------------------- */

    x xe = uKaaL[0];

    o ooz = 0;
    oaL = 0;
    oam = a8(om, 1);
    while(1){
	/* -------------- */
	TLq(upu);
	dot(upaaL);
	/* -------------- */    
	napms(1);
	Sma(bbe, oaL, oam);
	/*ckT.chars[0]	= xa;
	wadd_wch(bbe, &ckT);*/
	sT(bbe);
	oam	= a8(oam, 1);
	if(oam == -1){
	    oam = a8(om, 1);
	    oaL = a1(oaL, 1);
	    if(oaL == oL){
		oaL	= 0;
	    }
	}
	Sma(bbe, oaL, oam);
	ckT.chars[0]	= uKaaL[ooz];
	ooz++;
	if(ooz == gaiTr){
	    ooz = 0;
	}
	wadd_wch(bbe, &ckT);
	sT(bbe);
	wmove(bba, 0, 0);
	waddch(bba, 'b');
	sT(bba);
    }/* while */
    /* ---------------------------------------------- */
    wmove(stdscr, 0, 0);
   /* const wchar_t* WCS = L"שדג";
    addwstr(WCS);
    cchar_t ckT;	
    int giama;
	ckT.attr = 1;
	ckT.chars[0] = WCS[0];
	ckT.chars[1] = L'\0';
	add_wch(&ckT);*/
	/* -------------------------- */
    wrefresh(stdscr);
    keypad(stdscr, TRUE);
    mousemask(ALL_MOUSE_EVENTS, NULL);
    noecho();
    gay		= 0;
    gax		= 0;
    gik 	= '\0';
    giLa	= gik;
    while(1){
    	gik	= getch();
	if( gik == KEY_MOUSE){
	    getmouse(&meventLa);
	    gay	= meventLa.y;
	    gax = meventLa.x;
	    wmove(stdscr, gay, gax);
	    refresh();
	    continue;
	} else 
	if(gik == 'X'){
	    break;
	} else 
	if(gik == 'D'){
	    /*mvprintw(gay, gax, "%c", eegLa[gay][gax]);*/
	    refresh();
	    /*scr_dump(ukLoa);*/
	    refresh();
	    break;
	} else
	if(gik == '\n'){
	    if(gay == (LINES - 1)){
		gay	= 0;
	    } else {
	        gay	= a1(gay, 1);
	    }
	    move(gay, gax);
	    refresh();
	    continue;
	} else if(gik == KEY_RIGHT){
	    if(gax == (COLS - 1)){
		gax	= 0;
	    } else {
		gax	= a1(gax, 1);
	    }
	    move(gay, gax);
	    refresh();
	    continue;
	} else if(gik == KEY_LEFT){
	    if(gax == 0){
		gax = a8(COLS, 1);
	    } else {
		gax	= a8(gax, 1);
	    }
	    move(gay, gax);
	    refresh();
	    continue;
	} else if(gik == KEY_DOWN){
	    if(gay == (LINES - 1)){
 		gay	= 0;
	    } else {
		gay 	= a1(gay, 1);
	    }
	    move(gay, gax);
	    refresh();
	    continue;
	} else if(gik == KEY_UP){
	    if(gay == 0){
		gay	= a8(LINES, 1);
	    } else {
		gay	= a8(gay, 1);
	    }
	    move(gay, gax);
	    refresh();
	    continue;
	} else {
 	    /*eegLa[gay][gax] = gik;
	    mvprintw(gay, gax, "%c", eegLa[gay][gax]);
	    refresh();
	    if(gax == (COLS - 1)){
	 	gax = 0;
	    } else {
 	        gax = a1(gax, 1);
	    }
	    move(gay, gax);
	    refresh();*/
	    continue;
	}

    }/* while */

    /* ----------------------------------------------- */
   /* fclose(upoLa);*/
    free(ugTaLa);
    free(ugkuLa); 
    free(ugkaaL);
    free(uKaaL);
    free(uotaL);
    free(uxaaL);
    /* ---------------- */
    ao_close(gdevice);
    ao_shutdown();
    /* ---------------- */

    endwin();
    return(0);
}
/* -------------------------------------------------------- */
#define TT 1
void La(bb bba, x xa){
    ckTaL.chars[0]	= xa;
    wadd_wch(bba, &ckTaL);
}/* La */
int qe(x xa, ux uxa){
    o oa = 0;
    o oe = qa(uxa);
    o ou = -1;
    while(oa < oe){
	if(uxa[oa] == xa){
	    ou	= oa;
	    break;
	}
	oa = ka(oa, 1);
    }
    return(oa);
}
int qa(ux uxa){
    o oa	= 0;
    while(uxa[oa]	!= L'\0'){
	oa = ka(oa, 1);
    }
    return(oa);
}/* qa */
void bo(bb bbaL, t tu){
    waddch(bbaL, tu);
}/*  bo */
void sT(bb bbaL){
    wrefresh(bbaL);
}/* sT */
void Sma(bb bbaL, o oL, o om){
    wmove(bbaL, oL, om);
}/* Sma */
n aL(bb bbaL){
    n na = winch(bbaL);
    return(na);
}/* aL */
void TLq(p* upaL){
    Sma(upaL->bbaL, upaL->oaL, upaL->oam);
    upaL->ot	= uotaL[upaL->ox];
    upaL->ox++;
    if(upaL->ox == oLuotaL){
	upaL->ox	= 0;
    }
    waddch(upaL->bbaL, upaL->ot);
    sT(upaL->bbaL);
    upaL->oam--;
    if(upaL->oam == -1){
	upaL->oam = a8(upaL->om, 1);
	upaL->oaL++;
	if(upaL->oaL == upaL->oL){
	    upaL->oaL = 0;
	}
    }
}/* TLq */
void dot(p* upeL){
/*	
    Sma(upeL->bbaL, upeL->oaL, upeL->oam);
    wprintw(upeL->bbaL, "%d", 718);
    sT(upeL->bbaL);
    ckTaL.attr = 1;
    if(upeL->ox == oLuotaL){
	upeL->ox = 0;
    }
    ckTaL.chars[0]	= uxaaL[Ta(upeL->ox, oLuotaL)];
    wadd_wch(upeL->bbaL, &ckTaL);
    sT(upeL->bbaL);*/
    /*  ---------------- */
    switch(uotaL[upeL->ox]){
	case 'a':
	    upeL->oam--;
	    if(upeL->oam == -1){
		upeL->oam = a8(upeL->om, 1);
	    }
	    break;
	case 'b':
	    break;
	case 'g':
	    break;
	case 'd':
	    break;
	case 'e':
	    break;
	case 'u':
	    break;
	case 'z':
	    break;
	case 'c':
	    break;
	case 't':
	    gfreq = ka(400, pa(20, qe(uxaaL[Ta(ka(upeL->ox, 1), oLuotaL)], uxaL)));
	    gformat.rate = 44000;
    	    for(int oa=0;oa < gformat.rate;oa++){
		gsample = (int)(0.75 * 32768.0 *
                sin(2 * M_PI * gfreq * ((float) oa/gformat.rate)));
		gbuffer[4*oa] = gbuffer[4*oa+2] = gsample & 0xff;
		gbuffer[4*oa+1] = gbuffer[4*oa+3] = (gsample >> 8) & 0xff;
    	    }
	    ao_play(gdevice, gbuffer, ku(gbuf_size, 10));
	    break;
	case 'i':
	    break;
	case 'k':
	    break;
	case 'L':
	    oeL = ka(qe(uxaaL[upeL->ox], uxaL), 15);
	    oem = pu(21, qe(uxaaL[Ta(ka(upeL->ox, 1), oLuotaL)], uxaL));
	    Sma(upeL->bbaL, oeL, oem);
	    La(upeL->bbaL, uxaaL[Ta(ka(upeL->ox, 2), oLuotaL)]);
	    sT(upeL->bbaL);
	    eo[0]	= 0;
	    eo[1]	= 100;
	    while(eo[0] < eo[1]){
		oeL     = qe(uxaaL[Ta(ka(ka(upeL->ox, 0), eo[0]), oLuotaL)], uxaL);
		oem     = qe(uxaaL[Ta(ka(ka(upeL->ox, 1), eo[0]), oLuotaL)], uxaL);
		oeL     = ka(oeL, 8);
		oem	= pu(21, oem) ;
		Sma(upeL->bbaL, oeL, oem);
		La(upeL->bbaL, uxaaL[Ta(ka(ka(upeL->ox, 2), eo[0]), oLuotaL)]);
		sT(upeL->bbaL);
	        eo[0]	= ka(eo[0], 1);
	    }
	    break;
	case 'm':
	    break;
	case 'n':
	    break;
	case 's':
	    init_pair(0, COLOR_BLUE, COLOR_WHITE);
	    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	    init_pair(2, COLOR_RED, COLOR_BLUE);
	    init_pair(3, COLOR_BLUE, COLOR_RED);
	    /*attrset(COLOR_PAIR(a0b(upeL->ox, 2)));*/
	    wbkgd(upeL->bbaL, COLOR_PAIR(a0b(upeL->oam, 4)));
	    wrefresh(upeL->bbaL);
	    /*color_set(a0b(upeL->ox, 2), NULL);*/
	    break;
	case 'o':
	    break;
	case 'p':
	    break;
	case 'x':
	    break;
	case 'q':
#define CC 23
	    Sma(upeL->bbaL, 6, 30);
	    x exa[2];
	    x exe[3];
     	    exa[0]	= uxaaL[Ta(ka(upeL->ox, 1), oLuotaL)];
     	    exa[1]	= uxaaL[Ta(ka(upeL->ox, 2), oLuotaL)];
	    ckTaL.chars[0]	= uxaaL[upeL->ox];
	    wadd_wch(upeL->bbaL, &ckTaL);
	    ckTaL.chars[0]	= exa[0];
	    wadd_wch(upeL->bbaL, &ckTaL);
	    ckTaL.chars[0]	= exa[1];
	    wadd_wch(upeL->bbaL, &ckTaL);
	    /* -------------------------- */
	    exe[0]	= exa[0];
	    exe[1]	= exa[1];
	    exe[2]	= uxaL[Ta(ka(qe(exe[0], uxaL),qe(exe[1], uxaL)), qa(uxaL))];
	    exe[0]	= exe[1];
	    exe[1]	= exe[2];
	    while(1){
		if((exe[0] = exa[0]) && (exe[1] == exa[1])){
		    break;
		}
		ckTaL.chars[0]	= exe[2];
		wadd_wch(upeL->bbaL, &ckTaL);
		sT(upeL->bbaL);
		exe[2]	= uxaL[Ta(ka(qe(exe[0], uxaL),qe(exe[1], uxaL)), qa(uxaL))];
		exe[0]	= exe[1];
		exe[1]  = exe[2];
	    }/* while */
	    La(upeL->bbaL, exa[0]);
	    La(upeL->bbaL, exa[1]);
	    sT(upeL->bbaL);
	    /* -------------------------- */
	    break;
	case 'r':
	    break;
	case 'S':
	    break;
	case 'T':
	    break;
    }/* switch */
    /* ----------------- */
    upeL->ox++;
    if(upeL->ox == oLuotaL){
	upeL->ox = 0;
    }
}/* dot */
