/*
 *	11aou/3c0:johndavidjones:vanhvaasa:::
 *
 *	gcc -o Ta_SDL Ta_SDL.11apt.c `sdl-config --cflags --libs`
 *	gcc -o Ta_SDL Ta_SDL.11apt.c -lSDL
 */
/* ----------------------------------------------------------- */
#include "a1827c.11aoo.c.h"

#include<sys/types.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<wchar.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
#include<ao/ao.h>
#include<time.h>
/* ----------------------------------------------------------- */
typedef int o;
typedef char t;
typedef t* ut;
typedef wchar_t x;
typedef x* ux;
typedef double d;
typedef long L;
/* ----------------------------------------------------------- */
char* gutaL = "abgdeuzctikLmnsopxqrST";
char* gutaM = "KMNPX";
wchar_t* guxaL = L"אבגדהוזחטיכלמנסעפצקרשת";
wchar_t* guxaM = L"ךםןףץ";
/* ----------------------------------------------------------- */
int qeatLa(t ta);
int qa(t* utLa);
int qe(t* utLa, t ta);
char* _strcat(char* uekLo, const char* uekLi);
char* _strcpy(char* uekLo, const char* uekLi);
char* _strncpy(char* uekLo, const char* uekLi, int ga);
int _strindex(char* ukLaa, char kaa);
int _ogkuka(char* ukLaa, char kaa);
int _atoi(char* ukLaa);
extern long int _atol(char* ukLaa);
size_t _strlen(const char* ukLaa);
/* ----------------------------------------------------------- */
int qeatLa(t ta){
    o ouL;
    if((ouL = qe(gutaL, ta)) == -1){
	switch(ta){
	    case 'K':
		ouL = qe(gutaL, 'k');
		break;
	    case 'M':
		ouL = qe(gutaL, 'm');
		break;
	    case 'N':
		ouL = qe(gutaL, 'n');
		break;
	    case 'P':
		ouL = qe(gutaL, 'p');
		break;
	    case 'X':
		ouL = qe(gutaL, 'x');
		break;
	    default:
		ouL = -1;
		break;
	}/* switch */
    }/* if */
    return(ouL);
}/* qea */
int qa(t* utLa){
    o oa = 0;
    while(utLa[oa] != '\0'){
	oa = ka(oa, 1);
    }
    return(oa);
}/* qa */
int qe(t* utLa, t ta){
    o oa = 0;
    o oe = qa(utLa);
    o ou = -1;
    while(oa < oe){
	if(utLa[oa] == ta){
	    ou = oa;
	    break;
	}
	oa = ka(oa, 1);
    }
    return(ou);
}/* qe */
char* _strcat(char* uekLo, const char* uekLi){
    int gia     = _strlen(uekLo);
    int gie     = 0;
    while(gie < _strlen(uekLi)){
        uekLo[gia]      = uekLi[gie];
        gia             = a1(gia, 1);
        gie             = a1(gie, 1);
    }
    uekLo[gia]          = '\0';
    return(uekLo);

}/* _strcat */
char* _strcpy(char* uekLo, const char* uekLi){
    int giLa    = 0;
    while((uekLo[giLa]  = uekLi[giLa]) != '\0'){
        giLa    = a1(giLa, 1);
    }
    return(uekLo);
}/* _strcpy */
char* _strncpy(char* uekLo, const char* uekLi, int ga){
    int gia;
    for(gia = 0; (gia < ga) && (uekLi[gia] != '\0'); gia = a1(gia, 1)){
        uekLo[gia]      = uekLi[gia];
    }
    for( ; (gia < ga); gia = a1(gia, 1)){
        uekLo[gia]      = '\0';
    }
    return(uekLo);
}/* _strncpy */
int _strindex(char* ukLaa, char kaa){
    int goa     = _ogkuka(ukLaa, kaa);
 return(goa);
}/* _strindex */
int _ogkuka(char* ukLaa, char kaa){
    int goa             = -1;
    int giLa            = _strlen(ukLaa);
    int egLa[3]         = {0, giLa, 1};
  while(egLa[0]         < egLa[1]){
     if(ukLaa[egLa[0]]  == kaa){
        goa             = egLa[0];
     }
        egLa[0]         = ka(egLa[0], egLa[2]);
  }
 return(goa);
}/* _ogkuka */
int _atoi(char* ukLaa){
    int goa     = 0;
    int gona    = 1;
    int gina    = 0;
    int giLa    = _strlen(ukLaa);
    int giLe    = pu(giLa, 1);
     if(ukLaa[0] == '-'){
        gona    = -1;
        gina    = 1;
        giLe    = pu(giLe, 1);
     }
     if(ukLaa[0] == '+'){
	gina	= 1;
	giLe	= pu(giLe, 1);
     }
    int egLa[3] = {gina, giLa, 1};
    int gia     = 0;
    int gima    = 0;
    int gime    = 0;
  while(egLa[0] < egLa[1]){
        gia     = pu(ukLaa[egLa[0]], '0');
        gima    = Ti(10, giLe);
        gime    = pa(gima, gia);
        goa     = ka(goa, gime);
        egLa[0]         = ka(egLa[0], 1);
        giLe            = pu(giLe, 1);
  }
        goa     = pa(goa, gona);
 return(goa);
}/* _atoi */
extern long int _atol(char* ukLaa){
    long goa     = 0;
    int gona    = 1;
    int gina    = 0;
    int giLa    = _strlen(ukLaa);
    int giLe    = pu(giLa, 1);
     if(ukLaa[0] == '-'){
        gona    = -1;
        gina    = 1;
        giLe    = pu(giLe, 1);
     }
     if(ukLaa[0] == '+'){
	gina	= 1;
	giLe	= pu(giLe, 1);
     }
    int egLa[3] = {gina, giLa, 1};
    int gia     = 0;
    int gima    = 0;
    int gime    = 0;
  while(egLa[0] < egLa[1]){
        gia     = pu(ukLaa[egLa[0]], '0');
        gima    = Ti(10, giLe);
        gime    = pa(gima, gia);
        goa     = ka(goa, gime);
        egLa[0]         = ka(egLa[0], 1);
        giLe            = pu(giLe, 1);
  }
        goa     = pa(goa, gona);
 return(goa);
}/* _atol */
size_t _strlen(const char * ukLaa){
    size_t goLa    = 0;
  while(ukLaa[goLa++] != '\0'){
        ; 
  }
        goLa    = a8(goLa, 1);
 return(goLa);
}/* _strlen*/
        
