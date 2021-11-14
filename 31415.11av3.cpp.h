/*
 *     11aT3/3g9:ozazL:vanhavaasa:::
 */
//#include "a1827c.11aTk.c.h"
//#include<sys/types.h>
//#include<sys/stat.h>
#include<sys/time.h>
//#include<sys/wait.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<unistd.h>
//#include<errno.h>
#include<string.h>
//#include<fcntl.h>
//#include<ctype.h>
#include<time.h>
//#include<signal.h>
//#include<pthread.h>
//#include<limits.h>
//#include<stdbool.h>
#include<math.h>
//#include<ncurses.h>
#include <iostream>
/* ---------------------------------------------- */
using namespace std;
typedef long L;
typedef double d;
typedef int b;
typedef char g;
typedef struct oL {
    b bo;
    struct oL* uoL;
}oL;
typedef struct oMb{
    b bo;
    struct oMb* uoMbL;
    struct oMb* uoMbr; 
}oMb;
typedef struct oLL{
    b  bo;  /* key */
    b  bd;  /* data */
    struct oLL* uoLLa; /* prev */
    struct oLL* uoLLz; /* next */
}oLL;
typedef struct oT{
    struct oT* uoTL;
    b bo;
    g go;
    struct oT* uoTr;
}oT;
/* ---------------------------------------------- */
g  ego[] 	= "0123456789abcdefghijkLmnopqrstuvwxyz";
b  eboa[108]	= { 0 };
/* ---------------------------------------------- */
//void mvwpeb(WINDOW* ura, b br, b bc, b ebga[]); /*print char array*/
/* ---------------------------------------------- */
b cLegeg(g egLa[], g egLe[], g* umSa); /* lexical comparison */
b rugug(g* ugm, g* ugsa, g eguguga[]); /* delete substring */
b iugug(g* ugma, g* ugsa); /* index of substring */
void Nugeg(g* ugmLa, g* ugiM, g eug[], b biSa); /* insert str */
b Leg(g egLa[]);	/* length chararray */
b puugeg(g* ugLa, g* ugLe, g* ugSa, g eguL[]); /* sub ug */
void kaugeg(g* ugTaLa, g* ugTaLe, g* ugSaa, g egTaLu[]); /* sum ugeg */
//void _mvwpebg(WINDOW* ura, b br, b bc, b ebga[]); /* print ebga */
void regL(g egLa[]);		/* reverse char array */
void kaug(g* ugTaLa, g* ugTaLe, g* ugSaa, b ebgTaLu[]); /* sum ug */
b sL(g* ugLa);			/* strlen */
void mugeg(g* ugLa, g egLa[]); /* map tre to eg[] */
void mugebg(g* ugLa, b ebLa[]);	/* map ug to ebg */
b gLeb(b egbaLa[]);		/* array length */
void rebgL(b ebga[]);		/* reverse int array */
b igug(g gaL, g* ugLa);        /* index of g in ug */
b ppa(b bx, b bN);		/* fast power */
void ppaM(b baa, b ebuL[]);	/* fermat's factoring */
b mcd(d daa);			/* double ceiling */
b mpd(d daa);			/* double floor */
d  Tuad(d a6na, d a6ne, b a6La, d k); /* d nth root */
b pnr(b bna, b br);		/* permutations */
b cnr(b bna, b br);		/* combinations */
b mc(b bN, b bd);		/* ceiling */
b mP(b bN, b bd);		/* floor */
b bNc(b baaL, b bN);		/* base N convert */
bool isp(b baaL);		/* is prime */
void iSe(b ebLaa[], b bN); 	/* insertion sort */
void rxSee(b ebLaa[], b bN);	/* radix sort */
void rxSe(b ebLaa[], b bN);	/* radis sort */
void cTS(b ebLaa[], b bN, b bxP); /* count sort */
b amX(b ebLaa[], b bN);		/* get max */
void qSa(b ebLaa[], b bL, b br); /* quicksort */
void pS(b ebLaa[], b bN);    /* parallel sort */
void bSe(b ebSa[], b bN);    /* bubble sort */
void bSa(b ebSa[], b bN);    /* bubble sort */
void sS(b ebsa[], b LLebsa); /* seletion sort */
b paP(b bpaPo); 		/* factorial */
b pP(b bpPa, b bpPe); 		/* factorial slice) */
void iM(b* ubiMa, b* ubiMe);  	/* swap in place */
void iML(L* uLiMa, L* uLime);  /* Long swap in place */
b iL(b biLa, b biLe); 		/* greatest common divisor */
b iLb(b iLba, b iLbe);   	/* gcd */
/* ---------------------------------------------- */
b cLegeg(g egLa[], g egLe[], g* umSa){
    b bLegLa    = Leg(egLa);
    b bLegLe    = Leg(egLe);
    b bugL      = (bLegLa < bLegLe) ? bLegLa : bLegLe;
    b bia       = 0;
    b bixLa     = igug(egLa[bia], umSa);
    b bixLe     = igug(egLe[bia], umSa);
    b bus;
    if(bixLa < bixLe){
        return(-1);
    }  else if(bixLa > bixLe) {
        return(1);
    } else {
        while(bixLa == bixLe){
            bia++;
            if(bia == bugL){
                return(bixLa - bixLe);
            }
            bixLa       = igug(egLa[bia], umSa);
            bixLe       = igug(egLe[bia], umSa);
        }
    }
    return(bixLa - bixLe);
}/* cLegeg */
b rugug(g* ugm, g* ugsa, g eguguga[]){
    b biguga = iugug(ugm, ugsa);
    if(biguga == -1){
        mugeg(ugm, eguguga);
        return(-1);
    } else {
        mugeg(ugm, eguguga);
        b bLugsa        = sL(ugsa);
        b biugm = biguga;
        b bLugm = sL(ugm);
        while((biugm + bLugsa) < bLugm){
            eguguga[biugm] = eguguga[biugm + bLugsa];
            biugm++;
        }
        eguguga[biugm]  = '\0';
    }
    return(biguga);
} /* rugug */
b iugug(g* ugma, g* ugsa){
    b bia       = 0;
    b biaa      = 0;
    b bie       = 0;
    b bima      = sL(ugma);
    b bisa      = sL(ugsa);
    b busa      = -1;
    while(bia < bima){
        if(ugma[bia] == ugsa[0] ){
            bie = 1;
            biaa = bia + 1;
            while(ugsa[bie] == ugma[biaa]){
                bie++;
                biaa++;
                if(bie == bisa){
                    return(bia);
                }
		if(biaa == bima){
		    return(-1);
		}	
            }
        }
        bia++;
    }
    return(busa);
} /* iugug */
void Nugeg(g* ugmLa, g* ugiM, g eug[], b biSa){ /* insert string */
    g* ugo      = ugmLa;
    g* ugi      = ugiM;;
    /*g  eug[sL(ugmSa) + sL(ugi)];*/
    b  bins     = biSa;
    b  bia      = 0;
    while(bia < bins){
        eug[bia]        = ugo[bia];
        bia++;
    }
    b bieM      = 0;
    while(bieM < sL(ugi)){
        eug[bia] = ugi[bieM];
        bieM++;
        bia++;
    }
    b biuM      = bins;
    while(biuM < sL(ugo)){
        eug[bia]        = ugo[biuM];
        biuM++;
        bia++;
    }
    eug[bia]    = '\0';
} /* Nugeg */
b Leg(g egLa[]){
    b bia = 0;
    while(egLa[bia] != '\0'){
        bia++;
    }
    return(bia);
} /* Leg */
b puugeg(g* ugLa, g* ugLe, g* ugSa, g eguL[]){
    b boias;
    if(sL(ugLa) >= sL(ugLe)){
        boias = ka(sL(ugLa), 1);
    } else {
	    //return(puugeg(ugLe, ugLa, ugSa, eguL));
	boias = ka(sL(ugLe), 1);
    }
    g egLa[boias];
    g egLe[boias];
    mugeg(ugLa, egLa);
    mugeg(ugLe, egLe);
    regL(egLa);
    regL(egLe);
    g ga	= ugSa[0];
    g gz	= ugSa[pu(sL(ugSa), 1)];
    if(sL(ugLa) < sL(ugLe)){
	b bLugLa = sL(ugLa);
	b bLugLe = sL(ugLe);
	b boaz	= pu(bLugLe, bLugLa);
	b bia	= 0;
	b biz = sL(ugLa) ;
	while(bia < boaz){
	    egLa[biz]	= ga;
	    egLa[biz + 1] = '\0';
	    biz++;
	    bia++;}
    }
	if(sL(ugLe) < sL(ugLa)){
	b bLugLa = sL(ugLa);
	b bLugLe = sL(ugLe);
	b boaz	= pu(bLugLa, bLugLe);
	b bia	= 0;
	b biz = sL(ugLe) ;
	while(bia < boaz){
	    egLe[biz]	= ga;
	    egLe[biz + 1] = '\0';
	    biz++;
	    bia++;
	}
	}
	/* ---------------------- */
	b biasa	= 0;
	b bgLa;
	b bgLe;
	b bLugSa = sL(ugSa);
	while(biasa < pu(boias, 1)){
            bgLa = igug(egLa[biasa], ugSa);
	    bgLe = igug(egLe[biasa], ugSa);
	    if(bgLa < bgLe){
		    if(egLa[biasa + 1] == '\0'){
			return(puugeg(ugLe, ugLa, ugSa, eguL));
		    		    }
		bgLa	= ka(bgLa, bLugSa);
		b biesa = 0;
		while(egLa[biasa + biesa] == ga){
			egLa[biasa + biesa] = gz;
			if(egLa[biasa + biesa + 1] == '\0'){
				return(puugeg(ugLe, ugLa, ugSa, eguL));
			}
			biesa++;
		}
		egLa[biasa + biesa + 0]	= ugSa[igug(egLa[biasa + biesa + 0], ugSa) - 1];

	    } /* if */
	    eguL[biasa] = ugSa[pu(bgLa, bgLe)];
	    biasa++;
	}
	eguL[biasa]	= '\0';
	regL(eguL);
    return(0);
} /* puugeg */
void kaugeg(g* ugTaLa, g* ugTaLe, g* ugSaa, g egTaLu[]){
    b bio = 0;
    b bLa = sL(ugTaLa);
    b bLe = sL(ugTaLe);
    if(bLa > bLe){
	bio = sL(ugTaLa) + 2;
    } else {
	bio = sL(ugTaLe) + 2;
    }
    //-----------
    b ebgTaLa[bio];
    b ebgTaLe[bio];
    mugebg(ugTaLa, ebgTaLa);
    mugebg(ugTaLe, ebgTaLe);
    rebgL(ebgTaLa);
    rebgL(ebgTaLe);
    b bug;
    if(strlen(ugTaLa) > strlen(ugTaLe)){
	bug = strlen(ugTaLe);
	for(b bia = 0; bia < (strlen(ugTaLa) - strlen(ugTaLe)); bia++){
	    ebgTaLe[bug] = ugSaa[0];
	    bug++;
	}
	ebgTaLe[bug] = '\0';
    } else if(strlen(ugTaLe) > strlen(ugTaLa)){
	bug = strlen(ugTaLe);
	for(b bia = 0; (bia < (strlen(ugTaLe) - strlen(ugTaLe)));bia++){
	    ebgTaLa[bug] = ugSaa[0];
	    bug++;
	}
	ebgTaLa[bug] = '\0';
    }
    //-------------------
    b boeL 		= gLeb(ebgTaLa);
    ebgTaLa[boeL]	 = ugSaa[0];
    ebgTaLa[boeL + 1] 	= '\0';
    boeL 		= gLeb(ebgTaLe);
    ebgTaLe[boeL]	= ugSaa[0];
    ebgTaLe[boeL + 1]   = '\0';

    b biz = 0;
    b boe = gLeb(ebgTaLa);
    b bgoa = ugSaa[0];
    b bua;
    b bcf = 0;
    while(biz < boe){
	bua = ka(igug(ebgTaLa[biz], ugSaa), igug(ebgTaLe[biz], ugSaa));
	bua = Ta((bua + bcf), strlen(ugSaa));
	egTaLu[biz] = ugSaa[bua];
	if(ka((ka(igug(ebgTaLa[biz], ugSaa), igug(ebgTaLe[biz], ugSaa))), bcf) >= strlen(ugSaa)){
	    bcf = 1;
	} else {
	    bcf = 0;
	}

	biz++;
    }
    egTaLu[biz] = '\0';
    regL(egTaLu);
}//kaugeg

void regL(g egLa[]){ /* reverse char array */
    b bias      = 0;
    b bies      = 0;
    while(egLa[bies] != '\0'){
       bies++;
    }
    b bius      = pu(bies, 1);
    g gaaL;
    while(bias < ku(bies, 2)){
        gaaL = egLa[bias];
        egLa[bias]      = egLa[bius];
        egLa[bius]      = gaaL;
	bias++;
	bius--;
    }
}/* regL */
void kaug(g* ugTaLa, g* ugTaLe, g* ugSaa, b ebgTaLu[]){
    b bio       = 0;
    b bLa       = sL(ugTaLa);
    b bLe       = sL(ugTaLe);
    if(bLa > bLe){
        bio     = sL(ugTaLa) + 2;
    } else {
        bio     = sL(ugTaLe) + 2;
    }
    /*bio = boa;*/
    /* --------------- */
    /*g* ugTaLa = ugLa;
            g* ugTaLe   = ugLe;*/
            b  ebgTaLa[bio];
            b  ebgTaLe[bio];
            mugebg(ugTaLa, ebgTaLa);
            mugebg(ugTaLe, ebgTaLe);
            rebgL(ebgTaLa);
            rebgL(ebgTaLe);
            b bug;
            if(strlen(ugTaLa) > strlen(ugTaLe)){
                bug = strlen(ugTaLe);
                for(b bia = 0; bia < strlen(ugTaLa) - strlen(ugTaLe);bia++){
                    ebgTaLe[bug]        = ugSaa[0];
                    bug++;
                }
                ebgTaLe[bug]    = '\0';
            } else if(strlen(ugTaLe) > strlen(ugTaLa)){
                bug = strlen(ugTaLe);
                for(b bia = 0; bia < strlen(ugTaLe) - strlen(ugTaLa);bia++){
                    ebgTaLa[bug]        = ugSaa[0];
                    bug++;
                }
                ebgTaLa[bug]    = '\0';
            }
            b boeL      = gLeb(ebgTaLa);
	    ebgTaLa[boeL] = ugSaa[0];
            ebgTaLa[boeL + 1]   = '\0';
            boeL        = gLeb(ebgTaLe);
            ebgTaLe[boeL] = ugSaa[0];
            ebgTaLe[boeL + 1] = '\0';

            b biz       = 0;
            b boe       = gLeb(ebgTaLa);
            b bgoa      = ugSaa[0];
            while(biz < boe){
                ebgTaLu[biz]    = Ta(ka(igug(ebgTaLa[biz], ugSaa), igug(ebgTaLe[biz], ugSaa)), strlen(ugSaa));
                ebgTaLu[biz]    = ugSaa[Ta(ka(ebgTaLu[biz], igug(bgoa, ugSaa)), strlen(ugSaa))];
                bgoa    = ugSaa[ku(ka(igug(ebgTaLa[biz], ugSaa), igug(ebgTaLe[biz], ugSaa)), strlen(ugSaa))];
                biz++;
            }
            /*if(ebgTaLu[biz - 1] == ugSaa[0]){
                ebgTaLu[biz - 1] = '\0';
            }*/
            ebgTaLu[biz]        = '\0';
            rebgL(ebgTaLu);

}/* kaug */
b sL(g* ugLa){ /* string length */
    b bia = 0;
    while(*ugLa){
        bia     = bia + 1;
        ugLa++;
    }
    return(bia);
} /* sLa */
void mugeg(g* ugLa, g egLa[]){        /* map ug to eg */
    b bia       = 0;
    while(*ugLa){
        egLa[bia]      = *ugLa++;
        bia             = ka(bia, 1);
    }
    egLa[bia]  = '\0';
}/* mugeg */
void mugebg(g* ugLa, b ebgaL[]){        /* map ug to ebg */
    b bia       = 0;
    while(*ugLa){
        ebgaL[bia]      = *ugLa++;
        bia             = ka(bia, 1);
    }
    ebgaL[bia]  = '\0';
}/* mugebg */
b gLeb(b ebgaLa[]){ /* array length */
    b bia = 0;
    while(ebgaLa[bia] != '\0'){
        bia++;
    }
    return(bia);
} /* gLeb */
void rebgL(b ebga[]){ /* reverse array */
     b Lebga     = gLeb(ebga);
     b bias      = 0;
     b biis      = pu(Lebga, 1);
     while(bias < ku(Lebga, 2)){
         iM(&ebga[bias], &ebga[biis]);
         bias++;
         biis--;
     }
} /* regLa */
b igug(g gaL, g* ugLa){ /* index of g in ug */
    b bua       = -1;
    b bLug      = strlen(ugLa);
    b bia       = 0;
    while(bia < bLug){
        if(ugLa[bia] == gaL){
            bua = bia;
            break;
        }
        bia++;
    }
    return(bua);
}/* igug */
b ppa(b bx, b bN){ /* fast power */
    if(bN == 0){ return(1); }
    b bi        = 1;
    while(bN > 1){
        if(Ta(bN, 2) == 0){
            bx  = pa(bx, bx);
            bN  = ku(bN, 2);
        } else {
            bi  = pa(bx, bi);
            bx  = pa(bx, bx);
            bN  = ku(pu(bN, 1), 2);
        }
    }
    return(pa(bx, bi));
} /* ppa */
void ppaM(b baa, b ebuL[]){ /* fermat's method */
    /* baa must be odd */
    b boa       = mcd(sqrt(baa));
    b bia       = 0;
    b bx        = boa + bia;
    b bL;
    d dia;
    b bmP;
    while(true){
        bx      = boa + bia;
        bL      = (bx * bx) - baa;
        dia     = sqrt(bL);
        bmP     = mpd(dia);
        if( (dia - (double)bmP) == 0.0){
            break;
        }
        bia++;
    }
    b bua       = (int)dia;
    ebuL[0]     = bx + bua;
    ebuL[1]     = bx - bua;
} /* ppaM */
b mpd(d daa){ /* float floor */
    b buas;
    buas        = (int) daa;
    return(buas);
} /* mpd */
b mcd(d daa){ /* float ceiling */
    b buas;
    buas        = (int)daa;
    if((daa - (double) buas) == 0.0){
        return(buas);
    } else {
        return(buas + 1);
    }
} /* mcd */
d Tuad(d a6na, d a6ne, b a6La, d k){
    d fy        = 1.0;
    d x         = a6na;
    d y         = a6ne;
    b n         = a6La;
    fy  = kuda((pow(y, (n - 1)) + kuda(x, y)), (2.0 * pow(y, (n - 1))));
    d y1        = y * (1 + kuda((fy - 1.0),k));
    return(y1);
} /* Tuad */
b pnr(b bna, b br){ /* permutations */
    b buas;
    b baaL      = paP(bna);
    b baeL      = paP(pu(bna, br));
    buas        = ku(baaL, baeL);
    return(buas);
} /* prn */
b cnr(b bna, b br){ /* combinations */
    b buas;
    b ebaaL[3];
    ebaaL[0]    = paP(bna);
    ebaaL[1]    = paP(br);
    ebaaL[2]    = paP(pu(bna, br));

    buas        = ku(ebaaL[0], pa(ebaaL[1], ebaaL[2]));
    return(buas);
} /* cnr */
b mc(b bN, b bd){
    b bu;
    if(bd == 0){
	return(0);
    }
    if(Ta(bN, bd) == 0){
        bu      = ku(bN, bd);
    } else {
        bu      = ka(ku(bN, bd) ,1);
    }
    return(bu);
} /* mc */ 
b mP(b bN, b bd){ /* floor */
    b bu;

    bu  = ku(bN, bd);

    return(bu);
} /* mp */
b bNc(b baaL, b bN){ /* base N convert */
    b beL       = baaL;
    b bia       = 0;
    b boLa, bora;
    if(bN > 36){ bN = 36; }
    while(beL >= 1){
        boLa    = ku(beL, bN);
        bora    = pu(beL, pa(boLa, bN));
        beL     = boLa;
        eboa[bia]       = bora;
        bia++;
    }
    return(bia);
}/* bNc */
bool isp(b baaL){ /* is prime */
    b bia = 2;
    double doa;
    doa    = ceil(sqrt(baaL));
    b boa       = (int) doa;
    b baaM;
    if(baaL == 2){
        return(true);
    }
    while(bia <= boa){
        baaM = pa(ku(baaL, bia), bia);
        if(baaM == baaL){
            return(false);
        }
        bia     = ka(bia, 1);
    }
    return(true);
} /* isp */
void iSe(b ebLaa[], b bN){ /* insertion sort */
    b bia, bie;
    for(bia = 0; bia < bN - 1; bia++){
        bie = ka(bia, 1);
        while((ebLaa[bie] < ebLaa[bie - 1]) && bie >= 1){
            iM(&ebLaa[bie], &ebLaa[bie - 1]);
            bie         = pu(bie, 1);
        }
    }
} /* iSe */  
void rxSee(b ebLaa[], b bN){ /* radix sort */
    b eebLa[10][10], ebK[10];
    b bia, bie, biu;
    b br, bnP = 0, bdur = 1;
    b bmX, bnps;

    bmX = amX(ebLaa, bN);

    while(bmX > 0){
        bnP++;
        bmX /= 10;
    }
    for(bnps = 0; bnps < bnP; bnps++){
        for(bia = 0; bia < 10;bia++){
            ebK[bia]    = 0;
        }
        for(bia = 0; bia < bN; bia++){
            br = Ta(ku(ebLaa[bia], bdur) , 10);
            eebLa[br][ebK[br]] = ebLaa[bia];
            ebK[br]++;
        }
        bia = 0;
        for(biu = 0; biu < 10; biu++){
            for(bie = 0; bie < ebK[biu]; bie++){
                ebLaa[bia]      = eebLa[biu][bie];
                bia++;
            }
        }
        bdur *= 10;
        }
} /* rxSee */
void rxSe(b ebLaa[], b bN){ /* radix sort */
    b bmX       = amX(ebLaa, bN);

    b bxP;
    for(bxP = 1; bmX / bxP > 0;bxP *= 10){
        cTS(ebLaa, bN, bxP);
    }
} /* rxSe */
void cTS(b ebLaa[], b bN, b bxP){ /* count sort */
    b ebLua[bN]; /* output */
    b bia;
    b ebbK[10] = { 0 }; /* count */

    for(bia = 0; bia < bN; bia++){
        ebbK[Ta(ku(ebLaa[bia], bxP), 10)]++;
    }
    for(bia = 1; bia < 10; bia++){
        ebbK[bia] += ebbK[bia - 1];
    }
    for(bia = bN - 1; bia >= 0;bia--){
        ebLua[pu(ebbK[Ta(ku(ebLaa[bia], bxP), 10)], 1)] = ebLaa[bia];
        ebbK[(ebLaa[bia] / bxP) % 10]--;
    }
    for(bia = 0; bia < bN; bia++){
        ebLaa[bia]      = ebLua[bia];
    }
}/* cTS */
b amX(b ebLaa[], b bN){
    b bmX       = ebLaa[0];
    b bia;
    for(bia = 1; bia < bN; bia++){
        if(ebLaa[bia] > bmX){
            bmX         = ebLaa[bia];
        }
    }
    return(bmX);
} /* amX */
void qSa(b ebLaa[], b bL, b br){ /* quicksort */
    b bu, bia, bie, bTa;
    if(br > bL){
        bu      = ebLaa[br];
        bia     = bL - 1;
        bie     = br;
        for(;;){
            while(ebLaa[++bia] < bu) ;
            while(ebLaa[--bie] > bu) ;
            if(bie < bia) break;
            iM(&ebLaa[bia], &ebLaa[bie]);
        }
        iM(&ebLaa[bia], &ebLaa[br]);
        qSa(ebLaa, bL, bie);
        qSa(ebLaa, bia + 1, br);
    }
}/* qSa */
void pS(b ebLaa[], b bN){ /* parallel sort */
    b bia, bie, biu;
    b bm, bx;
    b bim, bix;
    if(bN == 2){
	if(ebLaa[0] > ebLaa[1]){ iM(&ebLaa[0], &ebLaa[1]); }
    } else {
    for(bia = 0; bia <= ku(bN, 2); bia = ka(bia, 1)){
        for(bie = bN - 1; bie >= ku(bN, 2); bie = pu(bie, 1)){
            bim = bia;
            bix = bie;
            bm  = ebLaa[bia];
            bx  = ebLaa[bie];
            for(biu = bia; biu <= bie; biu = ka(biu, 1)){
                if(ebLaa[biu] < bm){bim = biu; bm = ebLaa[biu];}
                if(ebLaa[biu] > bx){bix = biu; bx = ebLaa[biu];}
            }
            iM(&ebLaa[bia], &ebLaa[bim]);
            iM(&ebLaa[bie], &ebLaa[bix]);
        }
    }
    }
}/* pS */
void bSe(b ebsLa[], b bN){
    b bia, bie, bTa;
    for(bia = bN - 1; bia >= 0; bia--){
        for(bie = 1; bie <= bia; bie++){
            if(ebsLa[bie - 1] > ebsLa[bie]){
                iM(&ebsLa[bie], &ebsLa[bie - 1]);
            }
        }
    }
}/* bSe */
void bSa(b ebsLa[], b bN){ /* bubble sort */
    b bia, bie;
    b bTa;
    bool boL;
    for(bia = 0;  bia < bN; bia++){
        boL     = false;
        for(bie = 0; bie < bN - 1 - bia; bie++){
            if(ebsLa[bie] > ebsLa[bie + 1]){
                iM(&ebsLa[bie], &ebsLa[bie + 1]);
                boL     = true;
            }
        }/* for bie */
        if(!boL){
            break;
        }
    }/* for bia */
}/* bSa */
void sS(b ebsa[], b LLebsa){ /* selection sort */
    b bias, bies;
    b bm, bTa;
    for(bias = 0; bias < LLebsa; bias++){
	bm	= bias;
	for(bies = ka(bias, 1); bies < LLebsa; bies = ka(bies, 1)){
	    if(ebsa[bies] < ebsa[bm]){
		bm 	= bies;
	    }
	}
	bTa		= ebsa[bm];
	ebsa[bm]	= ebsa[bias];
	ebsa[bias]	= bTa;
    }
}/* sS */
b paP(b bpaPo){
    /* factorial */
    b boLa	= 1;
    b biLa	= bpaPo;
    while(biLa > 0){
	boLa	= pa(boLa, biLa);
	biLa	= pu(biLa, 1);
    }
    return(boLa);
}/* paP */
b pP(b bpPa, b bpPe){
	/* factorial slice */
    b boLa	= 1;
    b bipP	= bpPa;
    while(bipP <= bpPe){
	boLa	= pa(boLa, bipP);
	bipP	= ka(bipP, 1);
    }
    return(boLa);
}/* pP */
void iM(b* ubiMa, b* ubiMe){
	/* swaps arguments in place */
    b iMbaa	= *ubiMa;
      *ubiMa	= *ubiMe;
       *ubiMe	= iMbaa;
}/* iM */
void iML(L* uLiMa, L* uLiMe){  /* Long swap in place */
    L LTa 	= *uLiMa;
    *uLiMa 	= *uLiMe;
    *uLiMe	= LTa;
} /* iML */
b iL(b biLa, b biLe){
    /* iLbaa is the greatest common divisor */
    b iLbaa;
    while(1){
	iLbaa	= Ta(biLa, biLe);
	if(iLbaa == 0){
	    return(biLe);
	}
	biLa	= biLe;
	biLe	= iLbaa;
    }
}/* iL */
b iLb(b iLba, b iLbe){
	/* another greatest common divisor */
    b baa;
    b biLa, biLe;
    biLa        = iLba;
    biLe        = iLbe;
    if(biLa < biLe){
        iM(&biLa, &biLe);
    }
    while(biLa > 0)
        {if(biLa < biLe){
            iM(&biLa, &biLe);
        }
        biLa    = pu(biLa, biLe);
    }
    return(biLe);
}/* iLb */

