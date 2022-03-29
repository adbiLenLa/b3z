/*
 *   11az8/3me:ozazL:vanhavaasa:::
 *
 *   g++ -o z1 z1.GL.11az1.cpp -lGL -lGLU -lglut 
 */

#include "ozazL.11auT.cpp.h"
#include<unistd.h>
using namespace std;
//-----------------------------------
void ini(void);
void z1(void);
//----------------------------------
static float cP0[6][4][3] =
{
        {{-3.0, 0.0, 5.0}, {-0.25, 0.0, 5.0}, {0.25, 0.0, 5.0}, {3.0, 0.0, 5.0}},
        {{-3.0, 0.0, 3.0}, {-0.25, 0.0, 3.0}, {0.25, 0.0, 3.0}, {3.0, 0.0, 3.0}},
        {{-3.0, 0.0, 1.0}, {-0.25, 0.0, 1.0}, {0.25, 0.0, 1.0}, {3.0, 0.0, 1.0}},
        {{-3.0, 0.0, -1.0}, {-0.25, 0.0, -1.0}, {0.25, 0.0, -1.0}, {3.0, 0.0, -1.0}},
        {{-3.0, 0.0, -3.0}, {-0.25, 0.0, -3.0}, {0.25, 0.0, -3.0}, {3.0, 0.0, -3.0}},
        {{-3.0, 0.0, -5.0}, {-0.25, 0.0, -5.0}, {0.25, 0.0, -5.0}, {3.0, 0.0, -5.0}},
};

static float cP1[6][4][3] =
{
        {{-3.0, 0.0, 5.0}, {-0.25, 0.0, 5.0}, {0.25, 0.0, 5.0}, {3.0, 0.0, 5.0}},
        {{-3.0, 0.0, 3.0}, {-0.25, 0.0, 3.0}, {0.25, 0.0, 3.0}, {3.0, 0.0, 3.0}},
        {{-3.0, 0.0, 1.0}, {-0.25, 0.0, 1.0}, {0.25, 0.0, 1.0}, {3.0, 0.0, 1.0}},
        {{-3.0, 0.0, -1.0}, {-0.25, 0.0, -1.0}, {0.25, 0.0, -1.0}, {3.0, 0.0, -1.0}},
        {{-3.0, 0.0, -3.0}, {-0.25, 0.0, -3.0}, {0.25, 0.0, -3.0}, {3.0, 0.0, -3.0}},
        {{-3.0, 0.0, -5.0}, {-0.25, 0.0, -5.0}, {0.25, 0.0, -5.0}, {3.0, 0.0, -5.0}},
};

//----------------------------------
void init(void){
glClearColor(0.0, 0.0, 0.0, 0.0);
   /* glMatrixMode(GL_PROJECTION);*/
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    //glOrtho(-111.0, 111.0, -111.0, 111.0, -111.0, 111.0);
    //glScalef(0.75, 0.75, 0.75);
    //glTranslatef(0.2, 0.2, 0.0);
    p _2pi = 2.0 * 3.14159265;
    p _n2pi = -2.0 * 3.14159265;
    //glOrtho(_n2pi, _2pi, _n2pi, _2pi, _n2pi, _2pi);
    //glOrtho(0.0, 318.0, 0.0, 318.0, -1.0, 1.0);
    //glOrtho(0.0, 318.0, 0.0, 318.0, 0.0, 318.0);


    /* ----------------------------- */
    GLfloat mat_shininess[] = { 50.0 };
    GLfloat light_position[] = { 100.0, 100.0, 100.0, 1.0 };
    GLfloat no_mat[] = {0.0, 0.0, 0.0, 1.0 };
    GLfloat mat_ambient[] = { 0.7, 0.7, 0.7, 1.0 };
    //GLfloat mat_ambient_color[] =  { 0.8, 0.8, 0.2, 1.0};
    GLfloat mat_ambient_color[] =  { 1.0, 1.0, 1.0, 1.0};

    GLfloat mat_diffuse[] = { 0.1, 0.5, 0.8, 1.0 };
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat no_shininess[] = { 0.0 };
    GLfloat low_shininess[] = { 5.0 };
    GLfloat high_shininess[] = { 100.0 };
    GLfloat mat_emission[] = { 0.3, 0.2, 0.2, 0.0 };
    GLfloat ambientLight[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat diffuseLight[] = {0.7, 0.7, 0.7, 1.0};
    GLfloat specular[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat gray[] = {0.75, 0.75, 0.75, 1.0 };
    GLfloat specref[] = {1.0, 1.0, 1.0, 1.0};
    /* ------------------------------ */
   /* glClearColor(gdar, gdag, gdab, gdaa);*/
    glClearColor(0.0, 0.0, 0.0, 0.0);
   /* glShadeModel(GL_SMOOTH);*/ /* GL_FLAT */

    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    //glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseMaterial);
    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);

    glMaterialfv(GL_BACK, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_BACK, GL_SHININESS, mat_shininess);
    //glMaterialfv(GL_BACK, GL_DIFFUSE, diffuseMaterial);

glColorMaterial(GL_FRONT, GL_DIFFUSE);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
    //glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
    /*glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0.5);*/


    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    /*glEnable(GL_RESCALE_NORMAL);*/
    glEnable(GL_CULL_FACE);
    glEnable(GL_COLOR_MATERIAL);

    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
        glMaterialfv(GL_FRONT, GL_SPECULAR, specref);
        glMateriali(GL_FRONT, GL_SHININESS, 128);


    glEnable(GL_LIGHT0);
    glFrontFace(GL_CCW);
    glPolygonMode(GL_FRONT, GL_FILL);
    glPolygonMode(GL_BACK, GL_FILL);
    /* ------------------- */
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    /* ------------------- */
    glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);


}//init

//--------------------------------
void init_(void) {
    GLfloat mat_specular[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat mat_shininess[] = {50.0};
    GLfloat light_position[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat white_light[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat lmodel_ambient[] = {0.1, 0.1, 0.1, 1.0};
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_SMOOTH);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
    glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
    //-----------------------
    glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
    //---------------------
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);

    glMatrixMode(GL_MODELVIEW);
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);


}
void ixe(void) {

    glutPostRedisplay();
}
//------------------------------------
b gbsx = 10;
b gbsx0 = 10;
p gprx = 1.0; 
p gpry = 1.0; 
p gprz = 1.0;
b a5g (b bia){
    if(bia < 0){
	return(bia * -1);
    } else { 
	return(bia);
    }
}
p p1 = 0.0;
L LT0 = 0;
L LT1 = 0;
L LdT = 0;
L LT00 = 0;
L LT10 = 0;
L LdT0 = 0;
p pdT = 0.056668;

p p2pi = 2.0 * 3.14159265;
p pn2pi = -2.0 * 3.14159265;
p gpt = p2pi;
p gpcr = 0.0;
p gpcg = 0.0;
p gpcb = 0.0;

//-------------------------------
class os {
    public:
        p pr;
	p px;
	p py;
	p pz;
        //--
	p psL; //slices
	p psT; //stacks
	string ss;
	os(void){}
};//os

os osa;
os ose;
os osu;
os osi;
os oso;
//----------------------------_o
class o5 {
    protected:
    g egs[23] = "abgdeuzctikLmnsopxqrST";
    string ss;
    public:
    void iss(string si) {
	ss = si;
    }
    string oss(void) {
	return ss;
    }

};// o5

class ozb{
    public:
	L eLTa[718] = {0};
        L eLku[718] = {0};
	b bM = 718;
	L LobN = 318;
	L Lon = 32776;
	L Lod = 42967;
	L LiaTa;
	g egku[719] = {'\0'};
	b bnN = 22;
	string so = "abgdeuzctikLmnsopxqrST";
	string ss;
	//-------------------------
	void ro (void) {
	    LiaTa = _a77L(eLTa, eLku, bM, LobN, Lon, Lod);
	    g egTa[718];
            //sprintf(egTa, "%ld", eLku[0]);
            //rbs3(-0.8, -0.3, 0, (void *)font, egTa);

	    eLku[0] = Ta(eLku[0], LobN);
	}
        void cegku(void){
	    b bi =0;
	    //egku[0] = so[eLku[0] % bnN];
	    //bi++;
	    while(bi < (bM - 0)){
		egku[bi] = so[eLku[bi] % bnN];
		bi++;
	    }
	    egku[bi] = '\0';
	    ss = egku;
	}
};
ozb ozba, ozbb, ozbg, ozbd;
//----------------------------11az6
//----------------------------

//qranaeiSounK"
string sii = "qranae";
p gpdt = 0.128371;
class ba {
    public:
    vector<string> zs;
    string so = "abgdeuzctikLmnsopxqrST";
    struct timespec oTsnag;
    struct timespec oTsnad;

    clockid_t clk_id = CLOCK_REALTIME;

    b bsz;
    ba(void){};
    ba(b bo){
	bsz = bo;
	zs.resize(bo);
    }
    void ssz(b bo){
	bsz = bo;
	zs.resize(bo);
    }  
        L eLTa[718] = {0};
        L eLku[718] = {0};
	b bM = 718;
	L LobN = 318;
	L Lon = 32776;
	L Lod = 42967;
	L LiaTa;
	g egku[719] = {'\0'};
	b bnN = 22;
	p epkuu[718] = {0};
	p epku[718] = {0};
	p epbo[718] = {0};

	p pcr = 1.0;
	p pcg = 1.0;
	p pcb = 1.0;
   
	const p p2pi = 2.0 * 3.14159265;
	const p pn2pi = -2.0 * 3.14159265;
	p pdt = 0.05666; 
	p pt  = p2pi; //use gpt
	g egTa[719];

	p pspn = 10.0;
	b bbizs = 0;

	//string sii = "qranae";

	//L LT0 = 0;
	//L LT1 = 0;
	//L LdT;
	p ekP[6][3];
	//TpnekiLauiLiergkoSupTeTmiTqnaeaniraiTiauiLmSriSuaqubnueupTaM
    
    void qra(b bizs){
	bbizs = bizs;
	b bi = 0;
	g go;
	b bd = zs[bizs].length();
	while(bi < bd){
	    go = zs[bizs][bi];
	    if(go == 'q'){
	        clockid_t clk_id = CLOCK_REALTIME;
                struct timespec oTsnaz;
		b bLaa;
                bLaa = clock_gettime(clk_id, &oTsnaz);
                Lon   = TaL(oTsnaz.tv_sec, 86400);
                Lon   = paL(Lon, 1000000000);
                Lon   = kaL(Lon, oTsnaz.tv_nsec);
                Lod   = paL(86400, 1000000000);
	    }//q
	    if(go == 'r'){
	        LiaTa = _a77L(eLTa, eLku, bM, LobN, Lon, Lod);
		eLku[0] = Ta(eLku[0], LobN);
	    }//r
	    if(go == 'a'){
		b be = 0;
		b bez = bM;
	 	while(be < bez){
		    egku[be] = so[Ta(eLku[be], bnN)];
		    be++;
		}	
		egku[be] = '\0';
	    }//a
	    if (go == 'd'){
		// bezier curves
		b bia = 0;
	        b bie = 0;
	        b boo = 11;
	        while(bia < 6){
			bie = 0;
		    while(bie < 3){
			ekP[bia][bie] = epku[boo];
			boo = boo + 1;
			bie++;
		    }
		     bia++;
		}//while
		//-
		glBegin(GL_LINE_STRIP);
		    b bii = 0;
		    while(bii < 6){
		        glVertex3fv(ekP[bii]);
		        bii++;
		    }
		glEnd();
		//-
		glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 6, ekP[0]);
		glEnable(GL_MAP1_VERTEX_3);

		glColor3f(pcg, pcb, pcr);
		glMapGrid1f(100, 0.0, 1.0);
	glEvalMesh1(GL_LINE, 0, 100);

	    }//d
	    if(go == 'n'){
		b bi = 0;
		b bz = 718;
		b bT;
		while(bi < (LiaTa - 3)){
		    bT = (eLTa[bi] - eLTa[bi + 2]);
		    epbo[bi] = kufa((double)bT, abs(bT));
		    epku[bi] = kufa((double)eLku[bi], (LobN - 1));
		    epkuu[bi] = epku[bi];
		    epku[bi] = epku[bi] * epbo[bi];
		    bi++;
		}
	    }//n
	    if(go == 'e'){
	        //glBegin(GL_LINE_LOOP);
	        b be = 11;
	        //while(be < 6){
	            pcr = abs(epku[be]);
	            pcg = abs(epku[be + 1]);
	            pcb = abs(epku[be + 2]);
	            glColor3f(pcr, pcg, pcb);
	            //glVertex3f(epku[be], epku[be + 1], 
			    //epku[be + 2]);
	            //be = be + 1;
	        //}//while
    		//glEnd();
	    }//e
	    if(go == 'i'){
		//pdt = pdT;
		gpt = gpt - gpdt;
		if(gpt < 0){
		b bLag = clock_gettime(clk_id, &oTsnad);
	        LT10 = oTsnad.tv_sec % 86400;;
	        LT10 = (LT10 * 1000000000) + oTsnad.tv_nsec;
	        LdT0 = LT10 - LT00;
	        LdT0 = abs(LdT0);
	        //--
		p pok = kufa((double)LdT0, 1851815851);
		gpdt = gpdt * pok;
	        //-- 
	        b bLad = clock_gettime(clk_id, &oTsnag);
 	        LT00  = oTsnag.tv_sec % 86400;
	        LT00 = (LT00 * 1000000000) + oTsnag.tv_nsec;

		    gpt = p2pi;
		}
            }//i
	    if(go == 'S'){
		glPushMatrix();
		    glTranslatef(cos(gpt), sin(gpt), 0.0);
		    //glTranslatef((cos(gpt) * 1.0), (sin(gpt)* 1.0), (1.0 * (sin(gpt) * cos(gpt))));

		    glutWireSphere(0.05, 23, 23);
		glPopMatrix();
	    }//S
	    if(go == 'o'){
		//glRotatef(pspn, pcr, pcg, pcb);
	    }//o
	    if(go == 'u'){
		pspn = (kufa(epku[11], epku[12]) * epbo[11]);
	    }//u
	    if(go == 'K'){
		//gpcr = pcr;
		//gpcg = pcg;
		//gpcb = pcb;
	    }//K
	    if(go == 'L'){
	       	//sii = "";//"qranaeiSou";
	        b bi = 0;
	        b bz = sii.length();
	        while(bi < bz){
		    if(sii[bi] != 'L'){
		        uaL(sii[bi]);
		    }
		    bi++;
		}
	    }//L
	    if(go == 'M'){
		uaL('e');
		glutWireCube(pcg);
	    }//M
	    if(go == 'm'){
		b bu = 0;
		b bo = 11;
		sii = "qranae";
		uaL('q');
		uaL('r');
		uaL('a');
		uaL('n');
		uaL('a');
		uaL('e');
		while(bu < 6){
		    //if(egku[bo] != 'm'){
			sii[bu] = egku[bo];
		        bu++;
		    //}
		    bo++;
		}//while
    		//rbs3(-0.8, 0.0, 0.0, (void *)font, sii.c_str());

	    }//m
	    if(go == 'T'){
		//if(ozbb.egku[13] != 'T'){uaL(ozbb.egku[13]);}
		//uaL(ozbb.egku[13]);
		//uaL(ozbb.egku[14]);
		//uaL(ozbb.egku[15]);
                //sprintf(egTa, "%ld", eLku[0]);
                //rbs3(-0.8, -0.3, 0, (void *)font, ozbb.egku);

	    }//T
	    bi++;
	}//while
   }//qra
   //--------------------------------
   //-------------------------------- 
   void uaL(g go){
	//g go;
	//b bd = zs[bizs].length();
	    if(go == 'q'){
	        clockid_t clk_id = CLOCK_REALTIME;
                struct timespec oTsnaz;
		b bLaa;
                bLaa = clock_gettime(clk_id, &oTsnaz);
                Lon   = TaL(oTsnaz.tv_sec, 86400);
                Lon   = paL(Lon, 1000000000);
                Lon   = kaL(Lon, oTsnaz.tv_nsec);
                Lod   = paL(86400, 1000000000);
	    }//q
	    if(go == 'r'){
	        LiaTa = _a77L(eLTa, eLku, bM, LobN, Lon, Lod);
		eLku[0] = Ta(eLku[0], LobN);
	    }//r
	    if(go == 'a'){
		b be = 0;
		b bez = bM;
	 	while(be < bez){
		    egku[be] = so[Ta(eLku[be], bnN)];
		    be++;
		}	
		egku[be] = '\0';
	    }//a
	    if(go == 'd'){
	    //bezier curves
		b bia = 0;
	        b bie = 0;
	        b boo = 11;
	        while(bia < 6){
			bie = 0;
		    while(bie < 3){
			ekP[bia][bie] = epku[boo];
			boo = boo + 1;
			bie++;
		    }
		     bia++;
		}//while
		//-
		glBegin(GL_LINE_STRIP);
		    b bii = 0;
		    while(bii < 6){
		        glVertex3fv(ekP[bii]);
		        bii++;
		    }
		glEnd();
		//-
		glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 6, ekP[0]);
		glEnable(GL_MAP1_VERTEX_3);

		glColor3f(pcg, pcb, pcr);
		glMapGrid1f(100, 0.0, 1.0);
		glEvalMesh1(GL_LINE, 0, 100);


	    }//d
	    if(go == 'n'){
		b bi = 0;
		b bz = 718;
		b bT;
		while(bi < (LiaTa - 3)){
		    bT = (eLTa[bi] - eLTa[bi + 2]);
		    epbo[bi] = kufa((double)bT, abs(bT));
		    epku[bi] = kufa((double)eLku[bi], (LobN - 1));
		    epkuu[bi] = epku[bi];
		    epku[bi] = epku[bi] * epbo[bi];
		    bi++;
		}
	    }//n
	    if(go == 'e'){
	        //glBegin(GL_LINE_LOOP);
	        b be = 11;
	        //while(be < 6){
	            pcr = abs(epku[be]);
	            pcg = abs(epku[be + 1]);
	            pcb = abs(epku[be + 2]);
	            glColor3f(pcr, pcg, pcb);
	            //glVertex3f(epku[be], epku[be + 1], 
			    //epku[be + 2]);
	            //be = be + 1;
	        //}//while
    		//glEnd();
	    }//e
	    if(go == 'i'){
		//pdt = pdT;
		gpt = gpt - gpdt;
		if(gpt < 0){
		b bLag = clock_gettime(clk_id, &oTsnad);
	        LT10 = oTsnad.tv_sec % 86400;;
	        LT10 = (LT10 * 1000000000) + oTsnad.tv_nsec;
	        LdT0 = LT10 - LT00;
	        LdT0 = abs(LdT0);
	        //--
		p pok = kufa((double)LdT0, 1851815851);
		gpdt = gpdt * pok;

	        /*if(LdT0 < 1851851851){
	           gpdt = gpdt * .9999;
	        } else if (LdT0 > 1851851851){
		    gpdt = gpdt * 1.0001;
	        }*/   
	    //-- 
	        b bLad = clock_gettime(clk_id, &oTsnag);
 	        LT00  = oTsnag.tv_sec % 86400;
	        LT00 = (LT00 * 1000000000) + oTsnag.tv_nsec;

		    gpt = p2pi;
		}
	    }//i
	    if(go == 'S'){
		glPushMatrix();
		    //glTranslatef(cos(gpt), sin(gpt), 0.0);
		    glTranslatef(cos(gpt), sin(gpt), (sin(gpt) * cos(gpt)));

		    glutWireSphere(0.05, 23, 23);
		glPopMatrix();
	    }//S
	    if(go == 'o'){
		glRotatef(pspn, pcr, pcg, pcb);
	    }//o
	    if(go == 'u'){
		pspn = (kufa(epku[11], epku[12]) * 1.0);
	    }//u
	    if(go == 'K'){
		gpcr = pcr;
		gpcg = pcg;
		gpcb = pcb;
	    }//K
	    if(go == 'L'){
	        //sii = "qrne";//"qranaeiSou";
	        b bi = 0;
	        b bz = sii.length();
	        while(bi < bz){
		    if(sii[bi] != 'L'){
		        uaL(sii[bi]);
		    }
		    bi++;
		}	

	    }//L
	    if(go == 'M'){
		uaL('e');
		glutWireCube(pcg);

	    }//M
	    if(go == 'm'){
		b bu = 0;
		b bo = 11;
		sii = "qranae";
		uaL('q');
		uaL('r');
		uaL('a');
		uaL('n');
		uaL('a');
		uaL('e');
		while(bu < 6){
		    //if(egku[bo] != 'm'){
			sii[bu] = egku[bo];
		        bu++;
		    //}
		    bo++;
		}//while
    		//rbs3(-0.8, 0.0, 0.0, (void *)font, sii.c_str());
	    }//m
	    if(go == 'T'){

		//uaL(ozbb.egku[13]);
		//uaL(ozbb.egku[14]);
		//uaL(ozbb.egku[15]);
	    }//T

   }//uaL 

};//ba
//-----------------------------
static b biiM = 718;
g gegku[718];
g gegku0[718];
L LiaTaa;
static GLdouble spin = -10.0;;
static L gLiaTaa;
static b gbN = 36;
p pteTa = 0.0;
b booLoS = 1;
//p p2pi = 2.0 * 3.14159265;
//p pn2pi = -2.0 * 3.14159265;
//----------------------------------------
void za1_zoe(void){
    glClearColor(gpcr, gpcg, gpcb, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //-----------------------------
    //b biiM = 23;
    b ebTa[biiM];
    b ebku[biiM];
    b bN = gbN; 

    struct timeval time_now{};
    gettimeofday(&time_now, nullptr);
    //--------------------------------
    clockid_t clk_id = CLOCK_REALTIME;
    b bTN = 677;
    struct timespec oTsnaa;
    L Lon, Lod, Lobn, LoiTr;
    L uLTa[biiM];
    L uLku[biiM];
    b bLaa;
    //Lobn = gbN;
    Lobn = 36;
    LoiTr = biiM;
     
    bLaa = clock_gettime(clk_id, &oTsnaa);
    Lon   = TaL(oTsnaa.tv_sec, 86400);
    Lon   = paL(Lon, 1000000000);
    Lon   = kaL(Lon, oTsnaa.tv_nsec);
    Lod   = paL(86400, 1000000000);

    
    LiaTaa = _a77L(uLTa, uLku, biiM, Lobn, Lon, Lod);
    gLiaTaa  = LiaTaa;
    //-------------------------------------
    uLku[0] = Ta(uLku[0], Lobn);

    g egsos[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    g egSaa[] = "abgdeuzctikLmnsopxqrST";
    g egku[biiM + 1];
    b biegku = 0;
    while(biegku < (biiM - 0)){
	gegku[biegku] = egsos[Ta(uLku[biegku], 36)];
        egku[biegku] = egsos[Ta(uLku[biegku], 36)];
        biegku++;
    }
    egku[biegku] = '\0';
    gegku[biegku] = '\0';
    //----------------------------
    b ebLx[2] = {5, 1};
    b ebLy[2] = {47, 27};
    b baLn = 2;
    b beLk[2] = {3, 2};
    Tua(ebLx, ebLy, baLn, beLk); //nth root
    b bgcd = iL(eLy1[0], eLy1[1]);
    eLy1[0] = (eLy1[0] / bgcd);
    eLy1[1] = (eLy1[1] / bgcd);
    b ebTa0[biiM];
    b ebku0[biiM];
    b bobN = 318;
    b bon = eLy1[0];
    b bod = eLy1[1];
    g egku0[biiM + 1];

    b bua77 = _a77(ebTa0, ebku0, biiM, bobN, bon, bod);
    b biS = 0;
    b bnN = 22;
    while(biS < (biiM - 1)){
        egku0[biS] = egSaa[ebku0[biS] % bnN];
	gegku0[biS] = egSaa[ebku0[biS] % bnN];
        biS++;
    }
    egku0[biS] = '\0';
    gegku0[biS] = '\0';
    //-----------------------------
    //glViewport(0, 0, 318, 318);
    
    //----------------------------
    //glutSolidSphere(0.67, 20, 16);
    GLfloat light_position[] = {0.0, 0.0, 1.5, 1.0 };
    spin = 10.25;

    //glutSolidTorus(0.275, 0.55, 8, 15);
    //glRotatef(spin, 1.0, 1.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    //rbs3(-0.8, -0.8, 0.0, (void *)font, egku);
    g egTa[719];
    sprintf(egTa, "%d:%d", eLy1[0], eLy1[1]);
    //rbs3(23, 23, 0, (void *)font, egTa);
    //rbs3(23, 56, 0, (void *)font, egku0);

    //----------------------------------
    g go;
    p p0fx = 1.0;
    p p0fy = 1.0;
    p p0fz = 1.0;
    b bikx;
    b biky;
    b bikz;
    gprx = kufa((double)uLku[11], 317);
    gpry = kufa((double)uLku[12], 317);
    gprz = kufa((double)uLku[13], 317);

    //----------------------
    //gluLookAt(0.0, 0.0, 0.3, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    //glTranslatef(0.0, 0.03, 0.0);
    //---------------------
    //glutWireTeapot(0.3);
    glPushMatrix();
	glScalef(2.0, 1.0, 1.0);
        //glutWireCube(0.5);
    glPopMatrix();
   //for
    //------------------------------------

    o5 o5_0;
    g goa;
    o5_0.iss(egku0); 
    string si05 = o5_0.oss();
    //b bLss = si05.length();
    b bLss = ozba.ss.length();
        b biLs = 0;
    b biLz = ozba.ss.length();
	//-----------------
	struct timespec oTsnab;

	b bLae = clock_gettime(clk_id, &oTsnab);
        L Lone   = TaL(oTsnab.tv_sec, 86400);
        Lone   = paL(Lone, 1000000000);
        Lone   = kaL(Lone, oTsnab.tv_nsec);
        L Lode   = paL(86400, 1000000000);

	ozbb.Lon = Lone;
	ozbb.Lod = Lode;
	ozbb.LobN = 318;
	ozbb.bnN  = 22;

	ozbb.ro();
	ozbb.cegku();

	
	
	//------------------
	ozba.Lon = Lon;
	ozba.Lod = Lod;
	ozba.LobN = 318;
	ozba.bnN = 22;
	//ozba.so = "0123456789abcdefghijklmnopqrstuvwxyz";
	ozba.ro();
	ozba.cegku();
        //rbs3(-0.8, -0.5, 0, (void *)font, ozba.egku);
	sprintf(egTa, "%d:%c", bLss, ozba.ss[0]);
        //rbs3(-0.8, -0.8, 0, (void *)font, egku);
        //------------_6
	b bLiss = ozba.ss.length();
	b bi = 14;
	p posx, posy, posz;
	p pbox, pboy, pboz;
	b btmp;
	p ptmp;
	glLineWidth(1.0);
	//----------------------------
	p pcr, pcg, pcb;
	pcr = kufa(ozbb.eLku[bi], 317.0);
	pcg = kufa(ozbb.eLku[bi + 1], 317.0);
	pcb = kufa(ozbb.eLku[bi + 2], 317.0);

	//-----------------------------
	p posbx, posby, posbz;
	b btmp0;
	p pboxb, pboyb, pbozb;
	btmp0 = ozbb.eLku[16] - ozbb.eLku[17];
	pboxb = kufa(btmp0, a5(btmp0));
	posbx = (pboxb * kufa(ozbb.eLku[16], 317.0));

	btmp0 = ozbb.eLku[18] - ozbb.eLku[19];
	pboyb = kufa(btmp0, a5(btmp0));
	posby = (pboyb * kufa(ozbb.eLku[20], 317.0));
	
	btmp0 = ozbb.eLku[21] - ozbb.eLku[23];
	pbozb = kufa(btmp0, a5(btmp0));
	posbz = (pbozb * kufa(ozbb.eLku[24], 317.0));


	//----------------------------
	/*glPushMatrix();
	     glTranslatef(posbx, posby, posbz);
	     glColor3f(pcr, pcg, pcb);
	     glutSolidSphere(0.05, 23, 23);
	glPopMatrix();*/
//-------------------------------------------------------
struct timespec oTsnae;
   //clockid_t clk_id = CLOCK_REALTIME;
   L eLTa_[718];
   L eLku_[718];
   b bM_ = 718;
   L Lobn_ = 318;
   L Lod_, Lon_;
   L LiaTaa_;
   b bLaa_;

    bLaa_ = clock_gettime(clk_id, &oTsnae);
    Lon_   = TaL(oTsnae.tv_sec, 86400);
    Lon_   = paL(Lon_, 1000000000);
    Lon_   = kaL(Lon_, oTsnae.tv_nsec);
    Lod_   = paL(86400, 1000000000);

    LiaTaa_ = _a77L(eLTa_, eLku_, bM_, Lobn_, Lon_, Lod_);

    p epku_[718];

    b bio = 0;
    b bsc = 0;
    p psc = 1.0;
    while(bio < (LiaTaa_ - 1)){
        epku_[bio] = kufa((double)eLku_[bio], 317.0);
        bsc = (eLTa_[bio] - eLTa_[bio + 1]);
        psc = kufa((double)bsc, abs(bsc));
        epku_[bio] = (epku_[bio] * psc);
        bio++;
    }
    b bioS = 0;
    for (b i = 0; i < 6; i++){
         for (b j = 0; j < 4; j++){
            cP1[i][j][0] = cP0[i][j][0] * epku_[bioS];
            cP1[i][j][1] = cP0[i][j][1] * epku_[bioS + 1];
            cP1[i][j][2] = cP0[i][j][2] * epku_[bioS + 2];
         }
         bioS = (bioS + 3);
    }
    glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 6, cP1[0][0]);
   glEnable(GL_MAP2_VERTEX_3);
    glColor3f(1.0, 1.0, 1.0);
   glMapGrid2f(20, 0.0, 1.0, 20, 0.0, 1.0);
   //---------------------
   glEnable(GL_AUTO_NORMAL);
   //--------------------
   glEvalMesh2(GL_LINE, 0, 20, 0, 20);
   p Xangle = 30;
   if(booLoS == 1){
       glRotatef(Xangle, 1.0, 0.0, 0.0);
       booLoS = 0;
   }
//------------------------------------------------------

	glPushMatrix();
	    //primary clock
	    glColor3f(pcb, pcr, pcg);
	    //glTranslatef(cos(p1), sin(p1), 0.0);
	    //glTranslatef(cos(p1), sin(p1), (sin(p1) * cos(p1)));
	    glTranslatef(cos(p1), sin(p1), 0.0);

	    glutWireSphere(0.1, 23, 23);    
	glPopMatrix();
	//--------------------------
	/*glPushMatrix();
	    p pgx = pow(cos(p1), 3);
	    p pgy = pow(sin(p1), 3);
	    glTranslatef(pgx, pgy, 0.0);
	    glColor3f(pcg, pcb, pcr);
	    glutWireSphere(0.05, 23, 23);
	glPopMatrix();*/
	//--------------------------
	struct timespec oTsnag;
	struct timespec oTsnad;
        //b bLag = clock_gettime(clk_id, &oTsnag);
        //L LT0   = kaL(Lone, oTsnab.tv_nsec);

	//p pdT = 0.08;
	p1 = (p1 - pdT);
	
	if(p1 < pn2pi){
	    p1 = 0.0; 
	    //p1 = (p1 + p2pi);
	    b bLag = clock_gettime(clk_id, &oTsnad);
	    LT1 = oTsnad.tv_sec % 86400;;
	    LT1 = (LT1 * 1000000000) + oTsnad.tv_nsec;
	    LdT = LT1 - LT0;
	    LdT = abs(LdT);
	    //--
	    p pok = kufa((double)LdT, 1851815851);
		//gpdt = gpdt * pok;
	    pdT = pdT * pok;

	    /*if(LdT < 1851851851){
	        pdT = pdT * .9999;
	    } else if (LdT > 1851851851){
		pdT = pdT * 1.0001;
	    } */
	    //-- 
	    b bLad = clock_gettime(clk_id, &oTsnag);
 	    LT0  = oTsnag.tv_sec % 86400;
	    LT0 = (LT0 * 1000000000) + oTsnag.tv_nsec;
	
	}
	 sprintf(egTa, "%ld", LdT);
         rbs3(-0.8, 0.8, 0.0, (void *)font, egTa); //LdT
	 rbs3(-0.8, -0.8, 0.0, (void *)font, egku);//cft


	 //glRotatef(-10.0, pcr, pcg, pcb);


    //----------------------------------_9
    //thi is to be a full capture_22
    ba baa;
    baa.ssz(23);
    baa.zs[0] = "qranaeiSounK";
    baa.zs[1] = "uaLmimqdSiM";
    baa.zs[2] = "TpnekiLauiLiergkoSupTeTmiTqnaeaniraiTiauiLmSriSuaqubnueupTaM";
    baa.zs[3] = "ircqubniumiSouidkaubSoruaiN";
    baa.zs[4] = "mxiLaSrqxirurobiakLuaLmxniM";
    baa.zs[5] = "iqceuuSaP";
    baa.zs[6] = "xmiM";
    baa.zs[7] = "ciLM";
    baa.zs[8] = "kiLaixamoprauN";
    baa.zs[9] = "umadmeLaixmcomLkiadM";
    baa.zs[10] = "LomLiuLdubnirSP";
    baa.zs[11] = "igbieuouP";
    baa.zs[12] = "auLM";
    baa.zs[13] = "aniadrSaLaLuaLaLeiM";
    baa.zs[14] = "aSiM";
    baa.zs[15] = "dbrTioSegdLuTuaiN";
    baa.zs[16] = "cqrnpLauTodaiN";
    baa.zs[17] = "msprenTN";
    baa.zs[18] = "mtroLpniarX";
    baa.zs[19] = "uSLcmiM";
    baa.zs[20] = "oLpnicuxuTLSuM";
    baa.zs[21] = "SpLiM";
    baa.zs[22] = "LmruM";
    //job 5:11
     sprintf(egTa, "%s:%ld", baa.zs[0].c_str(), baa.zs[0].length());
     //rbs3(-0.8, -0.8, 0, (void *)font, egTa);
    baa.qra(0);
    glColor3f(1.0, 1.0, 1.0);
    sprintf(egTa, "%s:%ld", baa.zs[0].c_str(), baa.zs[0].length());
     //rbs3(-0.8, -0.6, 0, (void *)font, baa.zs[1].c_str());

    //---------------------------------
    b bima = 0;
    p px, py, pz;
    p pr = 1.0;
    p pra = 1.0;
    p prae = 1.0;
    p psf = 0.37;
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(5.0);
    //---------------------
    //----
    spin = -10.0;
    //b bsx = 10;
    glColor3f(0.7, 0.7, 0.0);
    //----------------------
    glutSwapBuffers();
}//za1_zoe

void z80(void){
    glClearColor(gpcr, gpcg, gpcb, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //-----------------------------
    //b biiM = 23;
    b ebTa[biiM];
    b ebku[biiM];
    b bN = gbN; 

    struct timeval time_now{};
    gettimeofday(&time_now, nullptr);
    //--------------------------------
    clockid_t clk_id = CLOCK_REALTIME;
    b bTN = 677;
    struct timespec oTsnaa;
    L Lon, Lod, Lobn, LoiTr;
    L uLTa[biiM];
    L uLku[biiM];
    b bLaa;
    //Lobn = gbN;
    Lobn = 36;
    LoiTr = biiM;
     
    bLaa = clock_gettime(clk_id, &oTsnaa);
    Lon   = TaL(oTsnaa.tv_sec, 86400);
    Lon   = paL(Lon, 1000000000);
    Lon   = kaL(Lon, oTsnaa.tv_nsec);
    Lod   = paL(86400, 1000000000);

    
    LiaTaa = _a77L(uLTa, uLku, biiM, Lobn, Lon, Lod);
    gLiaTaa  = LiaTaa;
    //-------------------------------------
    uLku[0] = Ta(uLku[0], Lobn);

    g egsos[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    g egSaa[] = "abgdeuzctikLmnsopxqrST";
    g egku[biiM + 1];
    b biegku = 0;
    while(biegku < (biiM - 0)){
	gegku[biegku] = egsos[Ta(uLku[biegku], 36)];
        egku[biegku] = egsos[Ta(uLku[biegku], 36)];
        biegku++;
    }
    egku[biegku] = '\0';
    gegku[biegku] = '\0';
    //----------------------------
    b ebLx[2] = {5, 1};
    b ebLy[2] = {47, 27};
    b baLn = 2;
    b beLk[2] = {3, 2};
    Tua(ebLx, ebLy, baLn, beLk); //nth root
    b bgcd = iL(eLy1[0], eLy1[1]);
    eLy1[0] = (eLy1[0] / bgcd);
    eLy1[1] = (eLy1[1] / bgcd);
    b ebTa0[biiM];
    b ebku0[biiM];
    b bobN = 318;
    b bon = eLy1[0];
    b bod = eLy1[1];
    g egku0[biiM + 1];

    b bua77 = _a77(ebTa0, ebku0, biiM, bobN, bon, bod);
    b biS = 0;
    b bnN = 22;
    while(biS < (biiM - 1)){
        egku0[biS] = egSaa[ebku0[biS] % bnN];
	gegku0[biS] = egSaa[ebku0[biS] % bnN];
        biS++;
    }
    egku0[biS] = '\0';
    gegku0[biS] = '\0';
    //-----------------------------
    //glViewport(0, 0, 318, 318);
    
    //----------------------------
    //glutSolidSphere(0.67, 20, 16);
    GLfloat light_position[] = {0.0, 0.0, 1.5, 1.0 };
    spin = 10.25;

    //glutSolidTorus(0.275, 0.55, 8, 15);
    //glRotatef(spin, 1.0, 1.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    //rbs3(-0.8, -0.8, -0.8, (void *)font, egku);
    g egTa[719];
    sprintf(egTa, "%d:%d", eLy1[0], eLy1[1]);
    //rbs3(23, 23, 0, (void *)font, egTa);
    //rbs3(23, 56, 0, (void *)font, egku0);

    //----------------------------------
    g go;
    p p0fx = 1.0;
    p p0fy = 1.0;
    p p0fz = 1.0;
    b bikx;
    b biky;
    b bikz;
    gprx = kufa((double)uLku[11], 317);
    gpry = kufa((double)uLku[12], 317);
    gprz = kufa((double)uLku[13], 317);

    //----------------------
    //gluLookAt(0.0, 0.0, 0.3, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    //glTranslatef(0.0, 0.03, 0.0);
    //---------------------
    //glutWireTeapot(0.3);
    glPushMatrix();
	glScalef(2.0, 1.0, 1.0);
        //glutWireCube(0.5);
    glPopMatrix();
   //for
    //------------------------------------

    o5 o5_0;
    g goa;
    o5_0.iss(egku0); 
    string si05 = o5_0.oss();
    //b bLss = si05.length();
    b bLss = ozba.ss.length();
        b biLs = 0;
    b biLz = ozba.ss.length();
	//-----------------
	struct timespec oTsnab;

	b bLae = clock_gettime(clk_id, &oTsnab);
        L Lone   = TaL(oTsnab.tv_sec, 86400);
        Lone   = paL(Lone, 1000000000);
        Lone   = kaL(Lone, oTsnab.tv_nsec);
        L Lode   = paL(86400, 1000000000);

	ozbb.Lon = Lone;
	ozbb.Lod = Lode;
	ozbb.LobN = 318;
	ozbb.bnN  = 22;

	ozbb.ro();
	ozbb.cegku();

	
	
	//------------------
	ozba.Lon = Lon;
	ozba.Lod = Lod;
	ozba.LobN = 318;
	ozba.bnN = 22;
	//ozba.so = "0123456789abcdefghijklmnopqrstuvwxyz";
	ozba.ro();
	ozba.cegku();
        //rbs3(-0.8, -0.5, 0, (void *)font, ozba.egku);
	sprintf(egTa, "%d:%c", bLss, ozba.ss[0]);
        //rbs3(-0.8, -0.8, 0, (void *)font, egku);
        //------------_6
	b bLiss = ozba.ss.length();
	b bi = 14;
	p posx, posy, posz;
	p pbox, pboy, pboz;
	b btmp;
	p ptmp;
	glLineWidth(1.0);
	//----------------------------
	p pcr, pcg, pcb;
	pcr = kufa(ozbb.eLku[bi], 317.0);
	pcg = kufa(ozbb.eLku[bi + 1], 317.0);
	pcb = kufa(ozbb.eLku[bi + 2], 317.0);

	//-----------------------------
	p posbx, posby, posbz;
	b btmp0;
	p pboxb, pboyb, pbozb;
	btmp0 = ozbb.eLku[16] - ozbb.eLku[17];
	pboxb = kufa(btmp0, a5(btmp0));
	posbx = (pboxb * kufa(ozbb.eLku[16], 317.0));

	btmp0 = ozbb.eLku[18] - ozbb.eLku[19];
	pboyb = kufa(btmp0, a5(btmp0));
	posby = (pboyb * kufa(ozbb.eLku[20], 317.0));
	
	btmp0 = ozbb.eLku[21] - ozbb.eLku[23];
	pbozb = kufa(btmp0, a5(btmp0));
	posbz = (pbozb * kufa(ozbb.eLku[24], 317.0));


	//----------------------------
	/*glPushMatrix();
	     glTranslatef(posbx, posby, posbz);
	     glColor3f(pcr, pcg, pcb);
	     glutSolidSphere(0.05, 23, 23);
	glPopMatrix();*/

	glPushMatrix();
	    //primary clock
	    glColor3f(pcb, pcr, pcg);
	    //glTranslatef(cos(p1), sin(p1), 0.0);
	    glTranslatef(cos(p1), sin(p1), (sin(p1) * cos(p1)));
	    glutWireSphere(0.1, 23, 23);    
	glPopMatrix();
	//--------------------------
	/*glPushMatrix();
	    p pgx = pow(cos(p1), 3);
	    p pgy = pow(sin(p1), 3);
	    glTranslatef(pgx, pgy, 0.0);
	    glColor3f(pcg, pcb, pcr);
	    glutWireSphere(0.05, 23, 23);
	glPopMatrix();*/
	//--------------------------
	struct timespec oTsnag;
	struct timespec oTsnad;
        //b bLag = clock_gettime(clk_id, &oTsnag);
        //L LT0   = kaL(Lone, oTsnab.tv_nsec);

	//p pdT = 0.08;
	p1 = (p1 - pdT);
	
	if(p1 < pn2pi){
	    p1 = 0.0; 
	    //p1 = (p1 + p2pi);
	    b bLag = clock_gettime(clk_id, &oTsnad);
	    LT1 = oTsnad.tv_sec % 86400;;
	    LT1 = (LT1 * 1000000000) + oTsnad.tv_nsec;
	    LdT = LT1 - LT0;
	    LdT = abs(LdT);
	    //--
	    p pok = kufa((double)LdT, 1851815851);
		//gpdt = gpdt * pok;
	    pdT = pdT * pok;

	    /*if(LdT < 1851851851){
	        pdT = pdT * .9999;
	    } else if (LdT > 1851851851){
		pdT = pdT * 1.0001;
	    } */
	    //-- 
	    b bLad = clock_gettime(clk_id, &oTsnag);
 	    LT0  = oTsnag.tv_sec % 86400;
	    LT0 = (LT0 * 1000000000) + oTsnag.tv_nsec;
	
	}
	 sprintf(egTa, "%ld:%f", LdT, pdT);
         //rbs3(-0.8, 0.0, 0, (void *)font, egTa);

	 //glRotatef(-10.0, pcr, pcg, pcb);


    //----------------------------------_8
    //thi is to be a full capture_22
    ba baa;
    baa.ssz(23);
    baa.zs[0] = "qranaeiSounK";
    baa.zs[1] = "uaLmimqdSiM";
    baa.zs[2] = "TpnekiLauiLiergkoSupTeTmiTqnaeaniraiTiauiLmSriSuaqubnueupTaM";
    baa.zs[3] = "ircqubniumiSouidkaubSoruaiN";
    baa.zs[4] = "mxiLaSrqxirurobiakLuaLmxniM";
    baa.zs[5] = "iqceuuSaP";
    baa.zs[6] = "xmiM";
    baa.zs[7] = "ciLM";
    baa.zs[8] = "kiLaixamoprauN";
    baa.zs[9] = "umadmeLaixmcomLkiadM";
    baa.zs[10] = "LomLiuLdubnirSP";
    baa.zs[11] = "igbieuouP";
    baa.zs[12] = "auLM";
    baa.zs[13] = "aniadrSaLaLuaLaLeiM";
    baa.zs[14] = "aSiM";
    baa.zs[15] = "dbrTioSegdLuTuaiN";
    baa.zs[16] = "cqrnpLauTodaiN";
    baa.zs[17] = "msprenTN";
    baa.zs[18] = "mtroLpniarX";
    baa.zs[19] = "uSLcmiM";
    baa.zs[20] = "oLpnicuxuTLSuM";
    baa.zs[21] = "SpLiM";
    baa.zs[22] = "LmruM";
    //job 5:11
     sprintf(egTa, "%s:%ld", baa.zs[0].c_str(), baa.zs[0].length());
     //rbs3(-0.8, -0.8, 0, (void *)font, egTa);
    baa.qra(2);
    glColor3f(1.0, 1.0, 1.0);
    sprintf(egTa, "%s:%ld", baa.zs[0].c_str(), baa.zs[0].length());
     //rbs3(-0.8, -0.6, 0, (void *)font, baa.zs[1].c_str());

    //---------------------------------
    b bima = 0;
    p px, py, pz;
    p pr = 1.0;
    p pra = 1.0;
    p prae = 1.0;
    p psf = 0.37;
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(5.0);
    //---------------------
    //----
    spin = -10.0;
    //b bsx = 10;
    glColor3f(0.7, 0.7, 0.0);
    //----------------------
    glutSwapBuffers();
}//z80

void z60(void){
    glClearColor(gpcr, gpcg, gpcb, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //-----------------------------
    //b biiM = 23;
    b ebTa[biiM];
    b ebku[biiM];
    b bN = gbN; 

    struct timeval time_now{};
    gettimeofday(&time_now, nullptr);
    //--------------------------------
    clockid_t clk_id = CLOCK_REALTIME;
    b bTN = 677;
    struct timespec oTsnaa;
    L Lon, Lod, Lobn, LoiTr;
    L uLTa[biiM];
    L uLku[biiM];
    b bLaa;
    //Lobn = gbN;
    Lobn = 36;
    LoiTr = biiM;
     
    bLaa = clock_gettime(clk_id, &oTsnaa);
    Lon   = TaL(oTsnaa.tv_sec, 86400);
    Lon   = paL(Lon, 1000000000);
    Lon   = kaL(Lon, oTsnaa.tv_nsec);
    Lod   = paL(86400, 1000000000);

    
    LiaTaa = _a77L(uLTa, uLku, biiM, Lobn, Lon, Lod);
    gLiaTaa  = LiaTaa;
    //-------------------------------------
    uLku[0] = Ta(uLku[0], Lobn);

    g egsos[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    g egSaa[] = "abgdeuzctikLmnsopxqrST";
    g egku[biiM + 1];
    b biegku = 0;
    while(biegku < (biiM - 0)){
	gegku[biegku] = egsos[Ta(uLku[biegku], 36)];
        egku[biegku] = egsos[Ta(uLku[biegku], 36)];
        biegku++;
    }
    egku[biegku] = '\0';
    gegku[biegku] = '\0';
    //----------------------------
    b ebLx[2] = {5, 1};
    b ebLy[2] = {47, 27};
    b baLn = 2;
    b beLk[2] = {3, 2};
    Tua(ebLx, ebLy, baLn, beLk); //nth root
    b bgcd = iL(eLy1[0], eLy1[1]);
    eLy1[0] = (eLy1[0] / bgcd);
    eLy1[1] = (eLy1[1] / bgcd);
    b ebTa0[biiM];
    b ebku0[biiM];
    b bobN = 318;
    b bon = eLy1[0];
    b bod = eLy1[1];
    g egku0[biiM + 1];

    b bua77 = _a77(ebTa0, ebku0, biiM, bobN, bon, bod);
    b biS = 0;
    b bnN = 22;
    while(biS < biiM){
        egku0[biS] = egSaa[ebku0[biS] % bnN];
	gegku0[biS] = egSaa[ebku0[biS] % bnN];
        biS++;
    }
    egku0[biS] = '\0';
    gegku0[biS] = '\0';
    //-----------------------------
    //glViewport(0, 0, 318, 318);
    
    //----------------------------
    //glutSolidSphere(0.67, 20, 16);
    GLfloat light_position[] = {0.0, 0.0, 1.5, 1.0 };
    spin = 10.25;

    //glutSolidTorus(0.275, 0.55, 8, 15);
    //glRotatef(spin, 1.0, 1.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    //rbs3(-0.8, -0.8, -0.8, (void *)font, egku);
    g egTa[719];
    sprintf(egTa, "%d:%d", eLy1[0], eLy1[1]);
    //rbs3(23, 23, 0, (void *)font, egTa);
    //rbs3(23, 56, 0, (void *)font, egku0);

    //----------------------------------
    g go;
    p p0fx = 1.0;
    p p0fy = 1.0;
    p p0fz = 1.0;
    b bikx;
    b biky;
    b bikz;
    gprx = kufa((double)uLku[11], 317);
    gpry = kufa((double)uLku[12], 317);
    gprz = kufa((double)uLku[13], 317);

    //----------------------
    //gluLookAt(0.0, 0.0, 0.3, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    //glTranslatef(0.0, 0.03, 0.0);
    //---------------------
    //glutWireTeapot(0.3);
    glPushMatrix();
	glScalef(2.0, 1.0, 1.0);
        //glutWireCube(0.5);
    glPopMatrix();
   //for
    //------------------------------------

    o5 o5_0;
    g goa;
    o5_0.iss(egku0); 
    string si05 = o5_0.oss();
    //b bLss = si05.length();
    b bLss = ozba.ss.length();
        b biLs = 0;
    b biLz = ozba.ss.length();
	//-----------------
	struct timespec oTsnab;

	b bLae = clock_gettime(clk_id, &oTsnab);
        L Lone   = TaL(oTsnab.tv_sec, 86400);
        Lone   = paL(Lone, 1000000000);
        Lone   = kaL(Lone, oTsnab.tv_nsec);
        L Lode   = paL(86400, 1000000000);

	ozbb.Lon = Lone;
	ozbb.Lod = Lode;
	ozbb.LobN = 318;
	ozbb.bnN  = 22;

	ozbb.ro();
	ozbb.cegku();

	
	
	//------------------
	ozba.Lon = Lon;
	ozba.Lod = Lod;
	ozba.LobN = 318;
	ozba.bnN = 22;
	//ozba.so = "0123456789abcdefghijklmnopqrstuvwxyz";
	ozba.ro();
	ozba.cegku();
        //rbs3(-0.8, -0.5, 0, (void *)font, ozba.egku);
	sprintf(egTa, "%d:%c", bLss, ozba.ss[0]);
        //rbs3(-0.8, -0.8, 0, (void *)font, egku);
        //------------_6
	b bLiss = ozba.ss.length();
	b bi = 0;
	p posx, posy, posz;
	p pbox, pboy, pboz;
	b btmp;
	p ptmp;
	glLineWidth(1.0);
	p pcr, pcg, pcb;
	/*glBegin(GL_POLYGON);

            //while(bi < (ozba.LiaTa - 4)){
	    while(bi < 36){
		btmp = (ozba.eLTa[bi] - ozba.eLTa[bi + 1]);
		if(btmp <= 0){pbox = -1.0;} else {pbox = 1.0;}
		pbox = kufa((double)btmp, (double)a5(btmp));

		btmp = (ozba.eLTa[bi + 1] - ozba.eLTa[bi + 2]);
		if(btmp <= 0){pboy = -1.0;} else {pboy = 1.0;}
		//pboy = kufa((double)btmp, a5(btmp));
		btmp = (ozba.eLTa[bi + 2] - ozba.eLTa[bi + 3]);
		if(btmp <= 0){pboz = -1.0;} else {pboz = 1.0;}
		//pboz = kufa((double)btmp, a5(btmp));
		posx = (pbox * kufa((double)ozba.eLku[bi] , 317.0));
		posy = (pboy * kufa(ozba.eLku[bi + 1], 317.0));
		posz = (pboz * kufa(ozba.eLku[bi + 2], 317.0));
		//-------------------
		pcr = kufa(ozbb.eLku[bi], 317.0);
		pcg = kufa(ozbb.eLku[bi + 1], 317.0);
	        pcb = kufa(ozbb.eLku[bi + 2], 317.0);
		glColor3f(pcr, pcg, pcb);
		glVertex3f(posx, posy, posz);
		//------------------		
		bi++;
	    }
	glEnd();*/
	pcr = kufa(ozbb.eLku[bi], 317.0);
	pcg = kufa(ozbb.eLku[bi + 1], 317.0);
	pcb = kufa(ozbb.eLku[bi + 2], 317.0);

	//-----------------------------
	p posbx, posby, posbz;
	b btmp0;
	p pboxb, pboyb, pbozb;
	btmp0 = ozbb.eLku[16] - ozbb.eLku[17];
	pboxb = kufa(btmp0, a5(btmp0));
	posbx = (pboxb * kufa(ozbb.eLku[16], 317.0));

	btmp0 = ozbb.eLku[18] - ozbb.eLku[19];
	pboyb = kufa(btmp0, a5(btmp0));
	posby = (pboyb * kufa(ozbb.eLku[20], 317.0));
	
	btmp0 = ozbb.eLku[21] - ozbb.eLku[23];
	pbozb = kufa(btmp0, a5(btmp0));
	posbz = (pbozb * kufa(ozbb.eLku[24], 317.0));


	//----------------------------
	/*glPushMatrix();
	     glTranslatef(posbx, posby, posbz);
	     glColor3f(pcr, pcg, pcb);
	     glutSolidSphere(0.05, 23, 23);
	glPopMatrix();*/

	glPushMatrix();
	    glColor3f(pcb, pcr, pcg);
	    glTranslatef(cos(p1), sin(p1), 0.0);
	    glutWireSphere(0.1, 23, 23);    
	glPopMatrix();
	//--------------------------
	/*glPushMatrix();
	    p pgx = pow(cos(p1), 3);
	    p pgy = pow(sin(p1), 3);
	    glTranslatef(pgx, pgy, 0.0);
	    glColor3f(pcg, pcb, pcr);
	    glutWireSphere(0.05, 23, 23);
	glPopMatrix();*/
	//--------------------------
	struct timespec oTsnag;
	struct timespec oTsnad;
        //b bLag = clock_gettime(clk_id, &oTsnag);
        //L LT0   = kaL(Lone, oTsnab.tv_nsec);

	//p pdT = 0.08;
	p1 = (p1 - pdT);
	if(p1 < pn2pi){p1 = 0.0; 
	    b bLag = clock_gettime(clk_id, &oTsnad);
	    LT1 = oTsnad.tv_sec % 86400;;
	    LT1 = (LT1 * 1000000000) + oTsnad.tv_nsec;
	    LdT = LT1 - LT0;
	    LdT = abs(LdT);
	    //--
	    if(LdT < 1851851851){
	        pdT = pdT * .9999;
	    } else if (LdT > 1851851851){
		pdT = pdT * 1.0001;
	    } 
	    //-- 
	    b bLad = clock_gettime(clk_id, &oTsnag);
 	    LT0  = oTsnag.tv_sec % 86400;
	    LT0 = (LT0 * 1000000000) + oTsnag.tv_nsec;
	
	}
	 sprintf(egTa, "%ld:%f", LdT, pdT);
         //rbs3(-0.8, 0.0, 0, (void *)font, egTa);

	 //glRotatef(-10.0, pcr, pcg, pcb);


    //----------------------------------_7
    //thi is to be a full capture_22
    ba baa;
    baa.ssz(23);
    baa.zs[0] = "qranaeiSounK";
    baa.zs[1] = "uaLmimqdSiM";
    baa.zs[2] = "TpnekiLauiLiergkoSupTeTmiTqnaeaniraiTiauiLmSriSuaqubnueupTaM";
    baa.zs[3] = "ircqubniumiSouidkaubSoruaiN";
    baa.zs[4] = "mxiLaSrqxirurobiakLuaLmxniM";
    baa.zs[5] = "iqceuuSaP";
    baa.zs[6] = "xmiM";
    baa.zs[7] = "ciLM";
    baa.zs[8] = "kiLaixamoprauN";
    baa.zs[9] = "umadmeLaixmcomLkiadM";
    baa.zs[10] = "LomLiuLdubnirSP";
    baa.zs[11] = "igbieuouP";
    baa.zs[12] = "auLM";
    baa.zs[13] = "aniadrSaLaLuaLaLeiM";
    baa.zs[14] = "aSiM";
    baa.zs[15] = "dbrTioSegdLuTuaiN";
    baa.zs[16] = "cqrnpLauTodaiN";
    baa.zs[17] = "msprenTN";
    baa.zs[18] = "mtroLpniarX";
    baa.zs[19] = "uSLcmiM";
    baa.zs[20] = "oLpnicuxuTLSuM";
    baa.zs[21] = "SpLiM";
    baa.zs[22] = "LmruM";
    //job 5:11
     sprintf(egTa, "%s:%ld", baa.zs[0].c_str(), baa.zs[0].length());
     //rbs3(-0.8, -0.8, 0, (void *)font, egTa);
    baa.qra(1);
    glColor3f(1.0, 1.0, 1.0);
    sprintf(egTa, "%s:%ld", baa.zs[0].c_str(), baa.zs[0].length());
     //rbs3(-0.8, -0.6, 0, (void *)font, baa.zs[1].c_str());

    //---------------------------------
    b bima = 0;
    p px, py, pz;
    p pr = 1.0;
    p pra = 1.0;
    p prae = 1.0;
    p psf = 0.37;
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(5.0);
    //---------------------
    //----
    spin = -10.0;
    //b bsx = 10;
    glColor3f(0.7, 0.7, 0.0);
    //----------------------
    glutSwapBuffers();
}//z60


void ixf (void){


}


//--------------------------------------------------
static void kboard(unsigned char key, int x, int y){
   if(key == 'n'){
	glutIdleFunc(ixf);
   }
   if(key == 's'){
	glutIdleFunc(ixe);
   }
   if(key == 'z'){
       glutPostRedisplay();
   }

}


//-----------------------------------
int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(za1_zoe);
    glutIdleFunc(ixe);
    glutKeyboardFunc(kboard);
    glutMainLoop();

    return(0);
}	
