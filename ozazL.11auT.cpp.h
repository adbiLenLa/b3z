//
//	11auv/3i1:ozazL:vanhavaasa:::
//
//#include "a1827c.11aTk.c.h"
#include "nmgmLogtL.11avc.cpp.h"
#include "31415.11av3.cpp.h"
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<string>
#include<fstream>
#include<sstream>
#include<cmath>
#include<iomanip>
#include<ctime>
#include<map>
//------------------STL
#include<algorithm>
//#include<array>
//#include<chrono>
//#include<complex>
//#include<fstream>
//#include<future>
//#include<memory>
//#include<random>
//#include<regex>
//#include<set>
//#include<sstream>
//#include<thread>
//#include<unordered_map>
//#include<utility>
#include<vector>
#include<list>
//---------------------
#include<GL/gl.h>	//openGL
#include<GL/glut.h>
#include<GL/glu.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//--------------------
using namespace std;
typedef int b;
typedef char g;
typedef float p;
//------------------------------------
const int* font=(int*)GLUT_BITMAP_TIMES_ROMAN_24;
const int* font1=(int*)GLUT_BITMAP_HELVETICA_18;

void rbs(float x, float y, void *font,const char *string);
void rbs3(float x, float y, float z, void *font,const char *string);
b esoegi(string soa, g* egi);
p Tipa(p piL, b bxp);
//------------------------------------
//----------------------------------
p Tipa(p piL, b bxp){
    p pu = 1.0;
    b bia = 0;
    while(bia < bxp){
        pu = pu * piL; 
        bia++;
    }   
    return(pu);
}//Tipa
b esoegi(std::string soa, g* egi){ //special egi[3]
    b bopa = -1;
    b bLego = soa.length();
    b bie = 0;
    g egTa[23];
    //sprintf(egTa, "%d", bLego);
    //rbs3(0.7, 0.0, 0.0, (void *)font, egTa);

    b bia = 0;
    while(bia < (bLego - 2)){
	if((egi[0] == soa[bia]) && (egi[1] == soa[bia + 1])){
	    bopa = 1;
	}
	bia++; 
    }
    return(bopa);
}//egiego
//---------------------------------
const b bLnm = 108;
g egSaa[23]  = "abgdeuzctikLmnsopxqrST";  
class nm{
    protected:
        g egoa[bLnm];
	g egoe[bLnm];
	g eguL[bLnm + 1];
    public:
	nm(){}
	void iegoa(g* ugLa){
	    b bia = 0;
	    while(*ugLa){
		egoa[bia] = *ugLa;
		bia++;
		ugLa++;
	    }
	    egoa[bia] = '\0';
	}
	void iegoe(g* ugLe){
	    b bia = 0;
	    while(*ugLe){
		egoe[bia] = *ugLe;
		bia++;
		ugLe++;
	    }
	    egoe[bia] = '\0';
	}
	g* oegoa(void){
	    return(egoa);
	}
	g* oegoe(void){
	    return(egoe);
	}
	void puu(void){
	    puugeg(egoa, egoe, egSaa, eguL);
	}
	void kau(void){
	    kaugeg(egoa, egoe, egSaa, eguL);
	}
	g* oeguL(void){
	    return(eguL);
	}


};
class LTi{
    protected:
        p ep[3];
    public:
	LTi(){}
	LTi(p px, p pi, p pz){
	    ep[0] = px;
	    ep[1] = pi;
	    ep[2] = pz;
	}
	p& operator[] (b bia){
	    if(bia >= 3){
		bia = Ta(bia, 3);
	    }
	    return(ep[bia]);
	}
};//LTi
//---------------------------------
class eLTi{
    protected:
        LTi eLTii[3];
    public:
	eLTi(){}
	eLTi(LTi LTia, LTi LTie, LTi LTiu){
	    eLTii[0] = LTia;
	    eLTii[1] = LTie;
	    eLTii[2] = LTiu;
	}
	void deLTi(void){
	    glBegin(GL_TRIANGLES);
		glVertex3f(eLTii[0][0], eLTii[0][1], eLTii[0][2]);
		glVertex3f(eLTii[1][0], eLTii[1][1], eLTii[1][2]);
		glVertex3f(eLTii[2][0], eLTii[2][1], eLTii[2][2]);
	    glEnd();
	}

};//eLTi

//---------------------------------
g egSag[23] = "abgdeuzctikLmnsopxqrST";
const b bLegSa = 23;
const b bLego = 109;
class a{
    protected:
    g egSa[bLegSa];
    struct so{
	b boLn;
	b boLd;
    }soL;
    public:
    g ego[bLego];
    a(){
	 b bia = 0;
	 while(bia < (bLegSa - 1)){
	     egSa[bia] = egSag[bia];
	     bia++;
	 }
	 egSa[bia] = '\0';
    }
    void iego(g egi[]){
	b bia = 0;
	while(egi[bia] != '\0'){
	    ego[bia] = egi[bia];
	    bia++;
	}
	ego[bia] = '\0';
    }
    void iboLn(b ba){
	soL.boLn = ba;
    }
    void iboLd(b ba){
	soL.boLd = ba;
    }
    class o{
	protected:
	    b ba;
	public:
	    o(b bsa){
		ba = bsa;
	    }
    };
    class e{

    };
    class u{

    };
    class i{

    };

};
//--------------------------------
const b bmx	= 109;
const b bLgSa   = 23;
g egSa[bLgSa] = "abgdeuzctikLmnsopxqrST";
class o{
    protected:
	g eg[bmx];
	g egS[bLgSa];
	b bo;
    public:
	o(){
	    strcpy(egS, egSa);
	}
	o(g* ugsa, b baaL):  bo(baaL){
	    b bia = 0;
	    while((bia < (bmx - 1)) && *ugsa){
		eg[bia] = ugsa[bia];
		ugsa++;
		bia++;
	    }
	    eg[bia] = '\0';
	    strcpy(egS, egSa);
	}
	g* oeg(void){
	    return(eg);
	}
	void ieg(g* ugsa){
	    b bia = 0;
	    while((bia < (bmx - 0))&& (ugsa[bia] != '\0')){
		eg[bia] = ugsa[bia];
		bia++;
	    }
	    eg[bia] = '\0';
	}
	b obo(void){
	    return(bo);
	}
	void ibo(b baaL){
	    bo = baaL;
	}
	g* oegS(void){
	    return(egS);
	}
	void iegS(g* ugsa){
	    b bia = 0;
	    while((bia < (bLgSa - 1)) && *ugsa){
		egS[bia] = ugsa[bia];
		bia++;
		ugsa++;
	    }
	    egS[bia] = '\0';
	}
};//o
const b bLegSN = 5;
g egSN[bLegSN + 1] = "KMNPX";
class oz : public o {
    protected:
	g eeg[12][10];
	g egSaN[bLegSN];
    public:
	oz(b baaL){
	    b bia = 0;
	    while(bia < (bLegSN - 1)){
		egSaN[bia] = egSN[bia];
		bia++;
	    }
	    egSaN[bia] = '\0';
	    bo = baaL;
	}
	void ibo(b baaL){
	    o::ibo(baaL);
	}
	void ieeg(){
	    b bieg = 0;
	    b bieeg = 0;
	    g egiL[10] = "";
	    b bi;
	    while(bieeg < 12){
		    //---------------------
		    for(bi = 0; bi < 9;bi++){
			egiL[bi] = eg[bieg++];
		    }
		    egiL[bi] = '\0';
		    //--------------------
		    bi = 0;
		    while(bi < 10){
	                eeg[bieeg][bi] = egiL[bi];
			bi++;
		    }
		    bieeg++;
	    }   
	}//ieeg
	g* oeegi(b bias){
	    return(eeg[bias]);
	}
};//oz
//---------------------------------
class opp{
    private:
        p* up;
        b bsz = 108;
    public:
        opp(void){
            up = new p[bsz];
        }
        opp(b biaL){
            bsz = biaL;
            up = new p[bsz];
        }
        ~opp(void){
            delete [] up;
        }
        p& operator [] (b baaL){
            if(baaL < bsz){
                return(up[baaL]);
            } else {
                baaL = Ta(baaL, bsz);
                return(up[baaL]);
            }
        }
        p& ac(b biaL){
            if(biaL < bsz){
                return(up[biaL]);
            } else {
                biaL = Ta(biaL, bsz);
                return(up[biaL]);
            }
        }
};//opp

//---------------------------------
int bazz = 108;
class obp{
    protected:
        b ba = 32776;
        b bz = 42967;
        b bN = 22;
        b bi = bazz;
        b biaTa;
        b* ubku;
        b* ubTa;
        g egoL[23] = "abgdeuzctikLmnsopxqrST";
        string so = "";
    public:
        obp(){
            ubku = new int[bi];
            ubTa = new int[bi];
            biaTa =_a77(ubTa, ubku, bi, bN, ba, bz);
            ubku[0] = Ta(ubku[0], bN);
            iso();
        }
        obp(b bas, b bzs){
            ubku = new int[bi];
            ubTa = new int[bi];
            ba   = bas;
            bz   = bzs;
            biaTa =_a77(ubTa, ubku, bi, bN, ba, bz);
            ubku[0] = Ta(ubku[0], bN);
            iso();
        }
        obp(b bis, b bas, b bzs){
            bi = bis;
            ubku = new int[bi];
            ubTa = new int[bi];
            ba   = bas;
            bz   = bzs;
            biaTa =_a77(ubTa, ubku, bi, bN, ba, bz);
            ubku[0] = Ta(ubku[0], bN);
            iso();
        }
        ~obp(void){
            delete []ubku;
            delete []ubTa;
        }
        string oso(void){
            return(so);
        }
        void iso(){
            b bia = 0;
            so = "";
            while(bia < bi){
                so += egoL[ubku[bia]];
                bia++;
            }
        }
        void iba(b baaL){
            ba = baaL;
        }
        b oba(void){
            return(ba);
        }
        void ibz(b baaL){
            bz = baaL;
        }
        b obz(void){
            return(bz);
        }
        void _kuu(void){
            biaTa =_a77(ubTa, ubku, bi, bN, ba, bz);
            ubku[0] = Ta(ubku[0], bN);
            iso();
        }
	b* oubku(void){
            return(ubku);
        }
        b* oubTa(void){
            return(ubTa);
        }
        b obiaTa(void){
            return(biaTa);
        }
        void ibi(b baaL){
            bi = baaL;
        }
        void ibN(b baaL){
            bN = baaL;
        }
};//obp
//----------------------------------------------
class obpa : public obp 
{
    protected:
        g* ugod;
    public:
        obpa(){
            ugod = new g[bN + 1]; 
            strcpy(ugod, egoL);
            biaTa =_a77(ubTa, ubku, bi, bN, ba, bz);
            ubku[0] = Ta(ubku[0], bN);
            _iso();
        }
        obpa(b biaL, const g* ugoda){
            ugod = new g[biaL + 1]; 
            strcpy(ugod, ugoda);
            bN = biaL;
            biaTa =_a77(ubTa, ubku, bi, bN, ba, bz);
            ubku[0] = Ta(ubku[0], bN);
            _iso();
        }
        ~obpa(void){ delete ugod; }
        void ibi(b biaL){
            bi = biaL;
        }
        g* ougod(void){
            return(ugod);
        }
        void _iso(void){
            b bia = 0;
            so = ""; 
            while(bia < bi){
                so += ugod[ubku[bia]];
                bia++;
            }
        }
};//obpa
//-----------------------------------------------------
const b baz = 108;
class ob{
    private:
	b ba = 32776;
	b bz = 42967;
	b bN = 22;
	b bi = baz; 
	b biaTa;
        b ebku[baz];
	b ebTa[baz];
	g egoL[23] = "abgdeuzctikLmnsopxqrST";
	string so = "";
    public:
	ob(){
	    biaTa =_a77(ebTa, ebku, bi, bN, ba, bz); 
	    ebku[0]	= Ta(ebku[0], bN);
	    iso();
	}
	ob(b bas, b bzs){
	    ba = bas;
	    bz = bzs;
	    biaTa = _a77(ebTa, ebku, bi, bN, ba, bz);
	    ebku[0] 	= Ta(ebku[0], bN); 
	    iso();
	}
	ob(b bis, b bas, b bzs){
	    bi = bis;
	    ba = bas;
	    bz = bzs;
	    biaTa = _a77(ebTa, ebku, bi, bN, ba, bz);
	    ebku[0] 	= Ta(ebku[0], bN); 
	    iso();
	}

	void SM(void){
	    b bia = 0;
	    while(bia < baz){
		cout << egoL[ebku[bia]];
		bia++;
	    }
	}
	string oso(){
	    return(so);
	}
   	    
	void iso(){
	    b bia = 0;
	    so = "";
	    while(bia < bi){
		so += egoL[ebku[bia]];
		bia++;
	    }
	}
	void iba(b baaL);
	b oba(void);
	void ibz(b baaL);
	b obz(void);
	void _kuu(void);
	b* oebku(void);
	b* oebTa(void);
	b obiaTa(void);
	void ibi(b baaL);
	void ibN(b baaL);
};
//---------------------------------------
void ob::ibN(b baaL){
    bN = baaL;
}
void ob::ibi(b baaL){
    bi = baaL;
}
b ob::oba(void){
    return(ba);
}
b ob::obz(void){
    return(bz);
}
b ob::obiaTa(void){
    return(biaTa);
}
b* ob::oebTa(void){
    return(ebTa);
}
b* ob::oebku(void){
    return(ebku);
}
void ob::iba(b  baaL){
    ba = baaL;
}
void ob::ibz(b baaL){
    bz = baaL;
}
void ob::_kuu(void){
    biaTa = _a77(ebTa, ebku, bi, bN, ba, bz);
    ebku[0]     = Ta(ebku[0], bN);
    iso();
}
//-----------------------------------------------------
void rbs(float x, float y, void *font,const char *string){
    //rbs(-0.9,0.9,(void *)font,"she is right beside you");
    const char *c;
    glRasterPos2f(x, y);
    for (c=string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}
void rbs3(float x, float y, float z, void *font,const char *string){
    //rbs(-0.9,0.9,(void *)font,"she is right beside you");
    const char *c;
    glRasterPos3f(x, y, z);
    for (c=string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}

//-------------------------------------------------------------
