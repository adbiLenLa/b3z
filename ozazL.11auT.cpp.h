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
#include<chrono>
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
typedef string s;
//------------------------------------
const int* font=(int*)GLUT_BITMAP_TIMES_ROMAN_24;
const int* font1=(int*)GLUT_BITMAP_HELVETICA_18;

void rbs(float x, float y, void *font,const char *string);
void rbs3(float x, float y, float z, void *font,const char *string);
b esoegi(string soa, g* egi);
//------------------------------------
struct z{

};
struct zo : z{

};
//----------------------------------
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
class co{
    public:
	p ep[3];
	co(){}
	co(p pa, p pe, p pu){
	    ep[0] = pa;
	    ep[1] = pe;
	    ep[2] = pu;
	}
	void operator+=(const co& cora){
	    ep[0] = ep[0] + cora.ep[0];
	    ep[1] = ep[1] + cora.ep[1];
	    ep[2] = ep[2] + cora.ep[2];
	}
	void operator-=(const co& cora){
	    ep[0] = ep[0] - cora.ep[0];
	    ep[1] = ep[1] - cora.ep[1];
	    ep[2] = ep[2] - cora.ep[2];
	}
};
class Lp{
    public:
	co eco[3];

};
//---------------------------------
g egSag[23] = "abgdeuzctikLmnsopxqrST";
p pxs = 1.0;
p pis = 1.0;
p pzs = 1.0;
b bpaL = 1;
p pok = 0.0;
const b bLegSa = 23;
const b bLego = 109;
class a{
    protected:
    g egSa[bLegSa];
    struct so{
	b boLn;
	b boLd;
    }soL;
    g ego[bLego];
    p p2pi = (2.0 * 3.14159265);
    p pn2pi = (-2.0 * 3.14159265);
    p pdpia = kufa(p2pi ,1296.0);
    p pia = 0.0;
    p pii, pxa;
    public:
    g eegLa[4][8];
    a(){
	 b bia = 0;
	 while(bia < (bLegSa - 1)){
	     egSa[bia] = egSag[bia];
	     bia++;
	 }
	 egSa[bia] = '\0';
    }
    void xego(void){
	b bL = 0;
        b bi = 0;
	while(ego[bi] != '\0'){ bi++;}
	bL = bi;
	bi = 0;
	//pok = 0.0;
	while(bi < bL){
	    if(ego[bi] == 'a'){
		pia = pn2pi;
		while(pia < pok){
		    pii = sin(pia); 
		    pxa = cos(pia + pok);
		    glBegin(GL_POINTS);
			glVertex3f(pia, pxa, 0.0); 
			glVertex3f(pxa, pii, 0.0);
		    glEnd();
		    pia += pdpia;
		    //if(bpaL == 1) {glRotatef(kufa(p2pi, 22), pxs, pis, pzs);}
		}
		pia = pok;
		while(pia < p2pi){
		    pii = sin(pia); 
		    pxa = cos(pia + pok);
		    glBegin(GL_POINTS);
			glVertex3f(pia, pxa, 0.0); 
			glVertex3f(pxa, pii, 0.0);
		    glEnd();
		    pia += pdpia;
		    //if(bpaL == 1) {glRotatef(kufa(p2pi, 22), pxs, pis, pzs);}
		}
		pok += (pdpia * 5.0);
		if(pok > p2pi){pok = 0.0;}	
	    }//a
	    if(ego[bi] == 'n'){
		glBegin(GL_LINES);
		    glVertex3f(pn2pi, 0.0, 0.0);
		    glVertex3f(p2pi, 0.0, 0.0);
		    glVertex3f(0.0, pn2pi, 0.0);
		    glVertex3f(0.0, p2pi, 0.0);
		glEnd();
		pia = pn2pi;
		while(pia < p2pi){
		    p pM = Tip(2.17828, pia);
		    p puL = kufa(1.0, pia);
		    p pgo = (cos(2.0 * pia) + 2.0 * cos(pia));
		    p ppx = kufa((Tip(pia, 2) - 4.0), (pia - 2.0)); 
		    p pxcsx = pafa(pia, cos(pia));
		    p pmc = kufa((1.0 - cos(pia)), pia);
		    p pX = kufa(pow(pia, 2), (1.0 - pow(pia, 2)));
		    p pc = (5.0 * cos(kufa(3.14159, pia)));
		    glBegin(GL_POINTS);
		        //glVertex3f(pia, puL, 0.0);
			//glVertex3f(pia, pM, 0.0);
			//glVertex3f(pia, pgo, 0.0);
			//glVertex3f(pia, ppx, 0.0);
			glVertex3f(pia, pc, 0.0);
			glVertex3f(pia, pX, 0.0);
			//glVertex3f(pia, pxcsx, 0.0);
			//glVertex3f(pia, pmc, 0.0);
		//	glVertex3f(pia, kufa((pia + 2.0), (pia + 1.0)), 0.0);
		    glEnd();		    
		    pia += pdpia;
		}
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(pn2pi, p2pi, pn2pi, p2pi, pn2pi, p2pi);
	    }//n
	    if(ego[bi] == 'i'){
		Lp Lpa;
		Lpa.eco[0].ep[0] = 0.217;
		co coL;


	    }//i
	    bi++;
	}//while	
    }//xego
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
        class e{

    };
    class u{

    };
    class i{

    };
    class o{
	protected:
	    b ba;
	    g egz[bLegSa];
	public:
	    o(b bsa){
		ba = bsa;
	    }
	    o(){}
	    void iba(b baaL);
	    b oba(void){ return(ba); }
    };


};//a
void a::o::iba(b baaL){
    ba = baaL;
}
//--------------------------------
//--------------------------------
b bo = 718;
const b bLegSma = 93;
class adM{
    friend class ncS;
    protected:
        g egSM[bLegSma];
	b bo;
	p po;
	string so;
	b biiM = 93;
	b bN   = 22;
	g egS[23] = "abgdeuzctikLmnsopxqrST";
	b ebTa[93];
	b ebku[93];
	b bTd = 86400000;
	b biaTaa;
	g egku[94];
	enum xbo { RED, YELLOW, BLUE };
    public://_x
	b eb[5];
	g* eug[13];
	vector<string> _rso;
	g eeg[4][108];
	//---------------
	adM (const g* ugSM, b boL){
	    b bia = 0;
	    while(bia < strlen(ugSM) && (bia < 92)){
		egSM[bia] = ugSM[bia];
		bia++;
	    }

	    this->egSM[bia] = '\0';
	    bo = boL;
	    //rbs3(3.14, 3.14, 0.0, (void *)font, ugSM);
	    so = "boLieueaLestn";
	}
	b kuku(void){
	    struct timeval time_now{};
    	    gettimeofday(&time_now, nullptr);
    	    b bTN = (time_now.tv_sec * 1000) + time_now.tv_usec;
    	    b biaTaa = _a77(ebTa, ebku, biiM, 22, bTN, 86400000);
    	    biaTaa = _a77(ebTa, ebku, biiM, 22, ebTa[7], ebTa[8]);
    	    ebku[0] = Ta(ebku[0], 22);
	    return(biaTaa);
	}//kuku
	void iSM(g ega[]){
	    b bia = 0;
	    b bie = 0;
	    
	    while(bia < strlen(ega) && (bia < 92)){
		egSM[bia] = ega[bia];
		bia++;
	    }
	    egSM[bia] = '\0';
	}
	char* oSM(void){ return(egSM); }
	void iso( string soL ){
	    so = soL;
	}
	string oso(void){
	    return(so);
	}	
	b ogbo(void){
	    return(::bo);
	}
	void seba(void){ //sort eb
	    b bu = sizeof(eb)/sizeof(b);
	    b bm  = eb[0];
	    b bim = 0;
	    b bi =  0;
	    b bia = 0;
	    while(bi < bu - 1){
		bia = bi;
		bm  = eb[bi];
		bim = bi;
	    while(bia < (bu - 0)){
		if(eb[bia] < bm){
		    bm = eb[bia];
		    bim = bia;
		}
		bia++;
	    }
	    sP(eb[bi], eb[bim]);
	    bi++;
	    }

	}//seba
	void sP(b& rba, b& rbe){
	    b bT = rba;
	    rba  = rbe;
	    rbe  = bT;
	}

};//adM
//--------------------------------
class cue;
class ncS{
    protected:
	static const string soSMaL;
	static const b boLieue = 718;
	
    public:
	vector<string> rso;
	vector<b> rbo;
	vector<p> rpo;
	g eg[1296];

	ncS(){
	}
	void icuebo(cue& cuer, b boS);
	void icuegSM(cue& cuer, string so);
	void isocue(cue& cuer);
	void irso(string sos){
	    rso.push_back(sos);
	}//irso
	string orso(b bi){
	    return(rso[bi]);
	}//orso
	void xso(void){
	    rso.pop_back();
	}//xso
	void irbo(b bo){
	    rbo.push_back(bo);
	}//irbo
	b orbo(b bi){
	    return(rbo[bi]);
	}//orbo
	void xrbo(void){
	    rbo.pop_back();
	}//xrbo
	void irpo(p po){
	    rpo.push_back(po);
	}//irpo
	p orpo(b bi){
	    return(rpo[bi]);
	}//orpo
	void xrpo(void){
	    rpo.pop_back();
	}//xrpo
	void ieg(string soo){
	    b bia = 0;
	    while(bia < soo.length() && bia < 1295){
	        eg[bia] = soo[bia];
		bia++;
	    }
	    eg[bia] = '\0';
	}//ieg
};//ncS
const string ncS::soSMaL = "abgdeuzctikLmnsopxqrST";
//-------------------
class square;
class rectangle {
    public:
        void convert( square a);
};
class square{
    friend class rectangle;
    private:
        b bo;

};
void rectangle::convert (square a){
    a.bo = 718;
}
//-------------------
class cue{
    friend class ncS;
    protected:
	g egSM[93];
	b bo;
    public:
	string socue;
	vector<adM> radM;
	cue(){}
	void iadM(adM adMa){
	    radM.push_back(adMa);
	}
        void iegug(g eg[], const g* ug){
	    b bia = 0;
	    b bz  = strlen(ug);
	    while(bia < bz){
		eg[bia] = ug[bia];
		bia++;
	    }
	    eg[bia] = '\0';
	}
        adM& operator[](b bi){
	    return(radM[bi]);
	}
        	

};//cue
void ncS::icuebo(cue& cuer, b boS){
    cuer.bo = boS;
}
void ncS::icuegSM(cue& cuer, string so){
    b bia = 0;
    while(bia < so.length() && bia < 92){
	cuer.egSM[bia] = so[bia];
	bia++;
    }
    cuer.egSM[bia] = '\0';
}//icuegSM
void ncS::isocue(cue& cuer){
    b bia = 0;
    cuer.socue = cuer.egSM;
}//isocue
//---------------------------------
class kmr :public ncS{
    private:
	s soSM;
    public:
	kmr* ucmrL;
	kmr* ucmrr;
	vector<co> rco;
	p eep[1296][3];
	b beep = 0;
	//-------------------
	kmr(){soSM = "ozazL";}
	kmr(s si){ soSM = si; }
	void zeep(void){
	    b bia = 0;
	    b bie = 0;
	    while(bia < 1296){
		bie = 0;
		while(bie < 3){
		    eep[bia][bie] = 0.0;
		    bie++;
		}
		bia++;
	    }
	}//zeep
	void iep(p px, p pi, p pz){
	    eep[beep][0] = px;
	    eep[beep][1] = pi;
	    eep[beep][2] = pz;
	    beep++;
	    if(beep >= 1296){ beep = 1295; }
	}//iep
	void iepi(b bip, b bx, b bi, b bz){
	    if(bip < 1296){
		eep[bip][0] = bx;
		eep[bip][1] = bi;
		eep[bip][2] = bz;
	    }
	}//iepi
	void ibeep(b bi){
	    if(bi < 1296){
		beep = bi;
	    }
	}//ibeep
	void deep(void){
	    b bi = 0;
	    glPolygonMode(GL_FRONT, GL_LINE);
	    glPolygonMode(GL_BACK, GL_LINE);
	    glPointSize(5.0);
	    glBegin(GL_POINTS);
		while(bi < beep){
		    glVertex3fv(eep[bi]);
		    bi++;
		}
	    glEnd();
	    glPointSize(1.0);
	}//deep
};//kmr

//---------------------------------
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
