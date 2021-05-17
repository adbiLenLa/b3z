/*
 *	11aqi/3do:johndavidjones:vanhavaasa:::
 *
 *	-lGL -lGLU -lglut -lao -ldl -lm 
 */
#include<math.h>
#include "omijopik.GL.11apv.c.h"
#define FNAME "iSmoL"

L* guLTaLa;
L* guLkuLa;

L* guLTaL;
L* guLkuL;
L gLnaL;
L gLdaL;
L gLbN;
int* guotaL;
d*   gudroi;
double* gudoLa;
wchar_t* guxaoL;
L gLuoTaL;
L gLuoTaLa;
o goLuokuL;
o goLgudoLa;
o goLgudroi;
o goa = 0;
L gLiTr;
o goLaa;
struct timespec goTsLa;
clockid_t clk_id;
/*char* gutaL = "abgdeuzctikLmnsopxqrST";
char* gutaM = "KMNPX";
wchar_t* guxaL = L"אבגדהוזחטיכלמנסעפצקרשת";
wchar_t* guxaM = L"ךםןףץ";*/
    d gdar = 0.0;
    d gdag = 0.0;
    d gdab = 0.0;
    d gdaa = 0.0;
o goaL = 0;
o goam = 0;
/* ---------------------------------------------- */
/* ----------------------------------------------- */
void boz(void);
void ao(void);
void ro(void);
void tub(void);
void Lob(void);
void mob(void);
void roi(void);
void _tub(void);
void _Lob(void);
void Texamae(void);
void nob(void);
/* ----------------------------------------------- */

    static double gdoL = 10.0;
    GLfloat diffuseMaterial[4] = { 0.5, 0.5, 0.5, 1.0 };


/* ------------------------------------------- */
    /* ------------------ */
    ao_device* gdevice;
    ao_sample_format gformat;
    int gdefault_driver;
    char* gbuffer;
    int gbuf_size;
    int gsample;
    float gfreq = 440.0;
    int gi;
    /* ------------------- */
void zob(void){
    glutPostRedisplay();
}
/* --------------------------------------------- */
void keyboard(unsigned char key, int x, int y){
    switch(key){
	case 'r':
	    glutPostRedisplay();
	    break;
	case 'a':
	    glutIdleFunc(boz);
	    break;
	case 'z':
	    glutIdleFunc(NULL);
	    break;
	case 'b':
	    glEnable(GL_BLEND);
	    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	    break;
	case 'd':
	    glDisable(GL_BLEND);
	    break;
	case 'f':
	    glShadeModel(GL_FLAT);
	    break;
	case 's': 
	    glShadeModel(GL_SMOOTH);
	    break;
	case 'o':
     	    gdoL = puda(0.0, gdoL);
	    glutIdleFunc(zob);
	    break;
    }/* switch */
}/* keyboard */
/* ----------------------------------------------- */
int main(int argc, char* argv[]){
    struct timespec oTsLa;
    struct timespec oTsLe;
    clockid_t clk_id;
    clk_id	= CLOCK_REALTIME;
    /* ---------------------------- */ 
    o oLiTr	= 100;
    if(argc >= 2){
        oLiTr = _atoi(argv[1]);
    }
    gLiTr = oLiTr;
    char* ukLoa = FNAME;
    /*if(argc >= 2){
	ukLoa = argv[1];
    }*/
    FILE* upoLa;
    int oLaa, oLae;
    L Laxn, Laxd;
    oLaa = clock_gettime(clk_id, &oTsLa);
    usleep(125000);
    oLae = clock_gettime(clk_id, &oTsLe);
    Laxn = oTsLa.tv_nsec;
    /*oaxn = a7b(oaxn, 1000);*/
    Laxd = oTsLe.tv_nsec;
    /*oaxd = a7b(oaxd, 1000);*/
    if(argc >= 4){
	Laxn	= atol(argv[2]);
	Laxd    = atol(argv[3]);
    }
    gLnaL = Laxn;
    gLdaL = Laxd;
    printf("%ld:%ld\n", oTsLa.tv_nsec, oTsLe.tv_nsec);
    printf("%ld:%ld\n", Laxn, Laxd);
    /* ----------------------------------------------- */
    goLuokuL = oLiTr;
    L LoLiTr = (long) oLiTr;
    L LabN 	= 22;
    gLbN      = LabN;
    guLTaLa = (L*)malloc(a2b(oLiTr, sizeof(L)));
    guLkuLa = (L*)malloc(a2b(oLiTr, sizeof(L)));

    guLTaL = (L*)malloc(a2b(oLiTr, sizeof(L)));
    guLkuL = (L*)malloc(a2b(oLiTr, sizeof(L)));
    guotaL = (int*)malloc(a2b(oLiTr, sizeof(int)));
    guxaoL = (wchar_t*)malloc(a2b(oLiTr, sizeof(wchar_t)));
    gLuoTaL = _a77L(guLTaL, guLkuL, gLiTr, LabN, gLnaL, gLdaL);
    gLuoTaLa = _a77L(guLTaLa, guLkuLa, gLiTr, 3, gLnaL, gLdaL);

    guLkuL[0] = TaL(guLkuL[0], LabN);
    guLkuLa[0] = TaL(guLkuLa[0], 3);
    o eotLa[2];
    /*upoLa = fopen(ukLoa, "w");*/
    for(o oa=0;oa < gLiTr;oa++){
	guotaL[oa] = gutaL[guLkuL[oa]];
	guxaoL[oa] = guxaL[guLkuL[oa]];
	/* ----------------------- */
        if((guotaL[oa] == 'k') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'K';
	    guxaoL[oa] = L'ך';
	}
	if((guotaL[oa] == 'm') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'M';
	    guxaoL[oa] = L'ם';
	}
	if((guotaL[oa] == 'n') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'N';
	    guxaoL[oa] = L'ן';
	}
	if((guotaL[oa] == 'p') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'P';
	    guxaoL[oa] = L'ף';
	}
	if((guotaL[oa] == 'x') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'X';
	    guxaoL[oa] = L'ץ';
	}
	/* ----------------------- */
	eotLa[0]	= guotaL[oa];
	/*fwrite(eotLa, sizeof(char), 1, upoLa);*/
    } 
    /*fclose(upoLa);*/
    L LgudoLa = puL(gLuoTaL, 1);
    goLgudoLa = LgudoLa;
    o opa = 1;
    /*gudoLa = (double*)malloc(pa(LgudoLa, sizeof(double)));*/
    gudoLa = (double*)malloc(pa(gLiTr, sizeof(double)));
    for(int oa=0;oa<LgudoLa;oa++){
	gudoLa[oa] = kuda(guLTaL[oa] ,guLTaL[ka(oa, 1)]);
	if(gudoLa[oa] >= 1){
	    gudoLa[oa] = (gudoLa[oa] - floor(gudoLa[oa]));
	}
    }
    L Lgudroi = puL(gLuoTaL, 1);
    goLgudroi = Lgudroi;
    /*gudroi = (d*)malloc(pa(Lgudroi, sizeof(double)));*/
    gudroi = (d*)malloc(pa(gLiTr, sizeof(double)));
    for(int oa = 0;oa < Lgudroi;oa++){
	gudroi[oa] = (double)TaL(puL(guLTaL[oa], guLTaL[oa + 1]), 111);
    }
    /* ----------------------------------------------- */
    ao_initialize();
    gdefault_driver = ao_default_driver_id();
    memset(&gformat, 0, sizeof(gformat));
    gformat.bits = 16;
    gformat.channels = 2;
    gformat.rate = 44000;
    gformat.byte_format = AO_FMT_LITTLE;

    gdevice= ao_open_live(gdefault_driver, &gformat, NULL);
    gbuf_size   = gformat.bits/8 * gformat.channels * gformat.rate;
    gbuffer = calloc(gbuf_size, sizeof(char));
    for(int oa=0;oa < gformat.rate;oa++){
        gsample = (int)(0.75 * 32768.0 *
                        sin(2 * M_PI * gfreq * ((float) oa/gformat.rate)));
        gbuffer[4*oa] = gbuffer[4*oa+2] = gsample & 0xff;
        gbuffer[4*oa+1] = gbuffer[4*oa+3] = (gsample >> 8) & 0xff;
    }
    ao_play(gdevice, gbuffer, gbuf_size);
    /* ----------------------------------------------- */
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    nob();
    glShadeModel(GL_SMOOTH);
    glEnable(GL_BLEND);
    glutKeyboardFunc(keyboard);
    glutDisplayFunc(Texamae);
    glutIdleFunc(boz);
    glutMainLoop();
    /* ------------------------------------------------ */
    free(gudroi);
    free(gbuffer);
    free(guLTaLa);
    free(guLkuLa);
    free(guLTaL);
    free(guLkuL);
    free(guotaL);
    free(guxaoL);
    free(gudoLa);
    return(0);
}/* main */
/* ----------------------------------------------------- */
void nob(void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
   /* glMatrixMode(GL_PROJECTION);*/
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glOrtho(-111.0, 111.0, -111.0, 111.0, -111.0, 111.0);
    glScalef(0.75, 0.75, 0.75);
    glTranslatef(0.2, 0.2, 0.0);
    /* ----------------------------- */
    GLfloat mat_shininess[] = { 50.0 };
    GLfloat light_position[] = { 100.0, 100.0, 100.0, 1.0 };
    GLfloat no_mat[] = {0.0, 0.0, 0.0, 1.0 };
    GLfloat mat_ambient[] = { 0.7, 0.7, 0.7, 1.0 };
    GLfloat mat_ambient_color[] =  { 0.8, 0.8, 0.2, 1.0};
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
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseMaterial);
    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);

    glMaterialfv(GL_BACK, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_BACK, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_BACK, GL_DIFFUSE, diffuseMaterial);

    /*glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);*/
    

    /*glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);*/
   /*glMaterialfv(GL_BACK, GL_DIFFUSE, mat_diffuse);*/
    /*glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);*/
    /*glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);*/
    /* ---------------------------------------- */
    glColorMaterial(GL_FRONT, GL_DIFFUSE);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    /*glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);*/
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
} /* nob */
void mob(void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
   /* glMatrixMode(GL_PROJECTION);*/
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -100.0, 100.0);
    glScalef(0.75, 0.75, 0.75);
    glTranslatef(0.2, 0.2, 0.0);
    /* ----------------------------- */
    GLfloat mat_shininess[] = { 50.0 };
    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    GLfloat no_mat[] = {0.0, 0.0, 0.0, 1.0 };
    GLfloat mat_ambient[] = { 0.7, 0.7, 0.7, 1.0 };
    GLfloat mat_ambient_color[] =  { 0.8, 0.8, 0.2, 1.0};
    GLfloat mat_diffuse[] = { 0.1, 0.5, 0.8, 1.0 };
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat no_shininess[] = { 0.0 };
    GLfloat low_shininess[] = { 5.0 };
    GLfloat high_shininess[] = { 100.0 };
    GLfloat mat_emission[] = { 0.3, 0.2, 0.2, 0.0 };
    /* ------------------------------ */
    glClearColor(gdar, gdag, gdab, gdaa);
   /* glShadeModel(GL_SMOOTH);*/ /* GL_FLAT */

    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseMaterial);
    glMaterialfv(GL_BACK, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_BACK, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_BACK, GL_DIFFUSE, diffuseMaterial);

    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
   /*glMaterialfv(GL_BACK, GL_DIFFUSE, mat_diffuse);*/
    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
    glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
    glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
    /* ---------------------------------------- */
    glColorMaterial(GL_FRONT, GL_DIFFUSE);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    /*glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0.5);*/
    
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    glEnable(GL_CULL_FACE);
    glEnable(GL_COLOR_MATERIAL);
    glFrontFace(GL_CCW);
    glPolygonMode(GL_FRONT, GL_FILL);
    glPolygonMode(GL_BACK, GL_FILL);
    /* ------------------- */
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    /* ------------------- */
    glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
} /* mob */
void Texamae(void){
    /* ---------------------------------- */
/*	11aqi/3do:johndavidjones:vanhavaasa:::*/
    /* ---------------------------------- */	
    glClearColor(gdar, gdag, gdab, gdaa);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glTranslatef(0.0, 0.0, 0.0);
    /*glRotatef((GLfloat)gdoL, 1.0, 1.0, 1.0);*/
    /* -------------------------------------- */
    t* utLa = "0123456789abcdefghijkLmnopqrstuvwxyz";
    clockid_t clk_id = CLOCK_REALTIME;
    struct timespec oTsnaa;
    L Lon, Lod, Lobn, LoiTr;
    o oLaa;
    L LuLTa;
    Lobn = 36;
    LoiTr = gLiTr;

    oLaa = clock_gettime(clk_id, &oTsnaa);
    /*Lon   = TaL(oTsnaa.tv_sec, 86400);
    Lon   = paL(Lon, 1000);
    Lon   = kaL(Lon, TaL(oTsnaa.tv_nsec, 1000));
    Lod   = 86400000;*/
    Lon   = TaL(oTsnaa.tv_sec, 86400);
    Lon   = paL(Lon, 1000000000);
    Lon   = kaL(Lon, oTsnaa.tv_nsec);
    Lod   = paL(86400, 1000000000);
    L* uLTa = (L*)malloc(paL(LoiTr, sizeof(L)));
    L* uLku = (L*)malloc(paL(LoiTr, sizeof(L)));
    t* ukaku = (t*)malloc(paL(LoiTr, sizeof(char)));
    LuLTa = _a77L(uLTa, uLku, LoiTr, Lobn, Lon, Lod);
    uLku[0] = TaL(uLku[0], Lobn);
    /* ----------------------------------------- */
    L Loma = 0;
    while(Loma < LoiTr){
        ukaku[Loma] = utLa[uLku[Loma]];
        Loma = kaL(Loma, 1);
    }
    /*printf("%s\n", ukaku);*/
    L LoLgudoLa = pu(LuLTa, 1);
    d* udoLa = (double*)malloc(pa(gLiTr, sizeof(double)));
    for(L La=0;La<LoLgudoLa;La++){
	udoLa[La] = kuda(uLTa[La] ,uLTa[kaL(La, 1)]);
	if(udoLa[La] >= 1){
	    udoLa[La] = puda(udoLa[La], floor(udoLa[La]));
	}
    }
    o oLgudroi = pu(LuLTa, 1);
    d* udroi = (d*)malloc(pa(gLiTr, sizeof(double)));
    for(int oa = 0;oa < oLgudroi;oa++){
	udroi[oa] = (double)TaL(puL(uLTa[oa], uLTa[oa + 1]), 111);
    }
    /* --------------------------------------- */
    if(oLgudroi >= 4){
        glColor4f(udoLa[0], udoLa[1], udoLa[2], udoLa[3]);
    } else {
        glColor4f(0.0, 0.0, 1.0,1.0);
    }
    /*glutSolidSphere(50.0, 15, 15);*/
    /* -------------------------------------- */
    glPointSize(5.0);
    /* ------------------------------------- */
    o oLa = 0;
    glBegin(GL_TRIANGLE_STRIP);
    while(oLa < pu(oLgudroi, 3)){
        glColorMaterial(GL_FRONT, GL_SPECULAR);
        glColorMaterial(GL_BACK, GL_SPECULAR);
	glColor4f(udoLa[oLa], udoLa[oLa + 1], udoLa[oLa + 2], udoLa[oLa + 3]);
	glVertex3f(udroi[oLa], udroi[oLa + 1], udroi[oLa + 2]);
	glNormal3f(udoLa[oLa], udoLa[oLa + 1], udoLa[oLa + 2]);
	oLa++;
    }
    glEnd();
    /*glFlush();*/
    /* -------------------------------- */
    d doL = 13.6;
    o oz = 0.0;
    o oy, ox;
    o oae;
    d theta;
    /*glColor4f(1.0, 1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    for(theta = 0.0; theta <= M_PI; theta += (M_PI/36.0)){
	ox = 90.0 * sin(theta);
	oy = 90.0 * cos(theta);
	glVertex3f(ox, oy, oz);

	ox = 90.0 * sin(theta + M_PI);
	oy = 90.0 * cos(theta + M_PI);
	glVertex3f(ox, oy, oz);
    }
    glEnd();*/
    /* -------------------------------- */
    o oau = 0;
    while(oau < LoiTr){
	switch(ukaku[oau]){
	    case '0':
		    break;
		oz = 0.0;
		glPushMatrix();
		glTranslatef(90.0, 0.0, 0.0);
		/*glRotatef(10.0, 0.0, 0.0, 1.0);*/
		glBegin(GL_LINES);
		for(theta = 0.0; theta <= M_PI; theta += (M_PI/22.0)){
        	    ox = 30.0 * sin(theta);
         	    oy = 30.0 * cos(theta);
        	    glVertex3f(ox, oy, oz);

        	    ox = 30.0 * sin(theta + M_PI);
        	    oy = 30.0 * cos(theta + M_PI);
        	    glVertex3f(ox, oy, oz);
    		}
		glEnd();
		/*glRotatef(doL, 1.0, 1.0, 1.0);*/
		glPopMatrix();
	        break;	
	    case '1':
		doL = puda(0.0, doL);
		break;
	    case '3':
		glPushMatrix();
		glTranslatef(-90.0, 0.0, 0.0);
		glScalef(0.25, 0.25, 0.25);
    		glBegin(GL_TRIANGLE_STRIP);
    		o oLa = 0;
    		while(oLa < pu(goLgudroi, 3)){
        	    glColorMaterial(GL_FRONT, GL_SPECULAR);
        	    glColorMaterial(GL_BACK, GL_SPECULAR);
		    glColor4f(gudoLa[oLa], gudoLa[oLa + 1], gudoLa[oLa + 2], gudoLa[oLa + 3]);
		    glVertex3f(gudroi[oLa], gudroi[oLa + 1], gudroi[oLa + 2]);
		    glNormal3f(gudoLa[oLa], gudoLa[oLa + 1], gudoLa[oLa + 2]);
		    oLa++;
    		}
    		glEnd();
		/*glRotatef(doL, 1.0, 1.0, 1.0);*/
		glPopMatrix();
		break;
	    case '4':
		goaL = goaL;
		void* font = GLUT_BITMAP_TIMES_ROMAN_24;
		t* utaM = "aLLhaiL31415";
		o oma = 0;
		o oLutaM = qa(ukaku);
		/*oLutaM = Ta(16, qa(ukaku));*/
		glRasterPos3f(-100.0, 100.0, 100.0);
		glColor4f(1.0, 1.0, 1.0, 1.0);
		while(oma < oLutaM){
		    glutBitmapCharacter(font, ukaku[oma]);
		    oma = ka(oma, 1);
		}
		break;
	    case '5':
	    if(oau == pu(LoiTr, 1)){
		oae = 0;
	    } else {
		oae = ka(oau, 1);
	    }
	    /* ----------------------- */
	    d edpraLa[36] = {523.3, 554.4, 587.3, 622.3, 659.3, 
		    	    698.5, 740.0, 784.0, 830.6, 880.0, 
			    932.3, 987.8, 1047, 1109, 1175, 
			    1245, 1319, 1397, 1480, 1568, 
			    1661, 1760, 1865, 1976, 2093, 
			    2217, 2349, 2489, 2637, 2794, 
			    2960, 3136, 3322, 3520, 3729, 
			    3951};
	    o om;
	    d odra;
	    o ooL;
	    om = uLku[oae];
	    odra = edpraLa[om];
	    /* ----------------------- */
	    gfreq = odra; 
	    gformat.rate = 44000;
            for(int oa=0;oa < gformat.rate;oa++){
                gsample = (int)(0.75 * 32768.0 *
                sin(2 * M_PI * gfreq * ((float) oa/gformat.rate)));
                gbuffer[4*oa] = gbuffer[4*oa+2] = gsample & 0xff;
                gbuffer[4*oa+1] = gbuffer[4*oa+3] = (gsample >> 8) & 0xff;
            }
            ao_play(gdevice, gbuffer, ku(gbuf_size, ka(60, om)));
	    /*glRotatef(doL, 1.0, 1.0, 1.0);*/
	    break;
	    case '6':
	    goaL = goaL;
	    void* fonta = GLUT_BITMAP_TIMES_ROMAN_24;
	    o omaa = 0;
	    o oLutaMa = gLiTr;
		glRasterPos3f(-100.0, -100.0, 100.0);
		glColor4f(1.0, 1.0, 1.0, 1.0);
		while(omaa < oLutaMa){
		    glutBitmapCharacter(fonta, guotaL[omaa]);
		    omaa = ka(omaa, 1);
		}
	    break;
	    }/*switch */
	oau = ka(oau, 1);
    }/* while */
    /* -------------------------------- */
    glutSwapBuffers();
    /* -------------------------------- */
    free(udroi);
    free(udoLa);
    free(uLTa);
    free(uLku);
    free(ukaku);
}/* Texamae */
/* ----------------------------------------------------- */
    o goaoL = 8;
    o goaom = 25;
void ao(void){
    o i, j, k;
    d s, t, x, y, z, twopi;
    twopi = 2 * (double)M_PI;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    for(i=0;i<goaoL;i++){
	glBegin(GL_QUAD_STRIP);
	for(j=0;j <= goaom;j++){
	    for(k=i;k>= 0;k--){
		s = (i + k) % goaoL + 0.5;
		t = j % goaom;
		x = (1+.1*cos(s*twopi/goaoL))*cos(t*twopi/goaom);
		y = (1+.1*cos(s*twopi/goaoL))*sin(t*twopi/goaom);
		z = .1 * sin(s * twopi / goaoL);

		glVertex3f(x, y, z);
	    }
	}
	glEnd();
 	/*glFlush();*/
	glFlush();
    }
}/* ao */
/* ------------------------------------------------------ */
#define ZZ 1
        o gom;
    o goLta = 0;
#define BOZ 1
void boz(void){
    switch(guotaL[goaL]){
	case 'a':
		break;
	    gdoL = pu(0, gdoL);
	    if(goaL == pu(goLuokuL, 1)){
		goaL = -1;
	    }
	    switch(guotaL[ka(goaL, 1)]){
		case 'o':
		    ao();
		    break;
	    }
	    break;
	case 'b':
    	    clk_id	= CLOCK_REALTIME;
    	    goLaa = clock_gettime(clk_id, &goTsLa);
    	    gLnaL = goTsLa.tv_nsec;
	    break;
	case 'g':
       	    clk_id	= CLOCK_REALTIME;
    	    goLaa = clock_gettime(clk_id, &goTsLa);
    	    gLdaL = goTsLa.tv_nsec;
	    break;
	case 't':
	    goaL = goaL;
	    o oam = goaL;
	    if(oam == pu(goLuokuL, 1)){
		oam = -1;
	    }
	    o   oan = ka(oam, 1);
	    /* ----------------------- */
	    d edpraL[22] = {523.3, 587.3, 659.3, 698.5, 784.0, 880.0, 932.3,			       1047, 1175, 1319, 1397, 1568, 1760, 1976,
	    		    2093, 2349, 2637, 2794, 3136, 3520, 3951,
	    		    4186};
	    d edpraM[5]  = {277.2, 311.1, 370.0, 415.3, 466.2};
	    d odra;
	    o ooL;
	    gom = qe(gutaL, guotaL[ka(oam, 1)]);
	    if(gom != -1){
		odra = edpraL[gom];
		goLta = gom;
	    } else {
		gom = qe(gutaM, guotaL[ka(oam, 1)]);
		ooL = ka(ku(goLta, 7), 1);
		odra = pada(ooL, edpraM[gom]);
	    }
	    /* ----------------------- */
	    /*gfreq = ka(440, pa(20, gom));*/
	    gfreq = odra;
	    gformat.rate = 44000;
            for(int oa=0;oa < gformat.rate;oa++){
                gsample = (int)(0.75 * 32768.0 *
                sin(2 * M_PI * gfreq * ((float) oa/gformat.rate)));
                gbuffer[4*oa] = gbuffer[4*oa+2] = gsample & 0xff;
                gbuffer[4*oa+1] = gbuffer[4*oa+3] = (gsample >> 8) & 0xff;
            }
            ao_play(gdevice, gbuffer, ku(gbuf_size, ka(70, guLkuLa[oan])));
	    break;
	case 'L':
	    break;
	    break;
        case 'm':
	    break;
	    break;
	case 'o':
	    break;
	    gdar = 0.0;
	    gdag = 0.0;
	    gdab = 0.0;
	    gdaa = 0.0;
	    break;
	case 'p':
	    break;
	    gdar = 0.0;
	    gdag = 0.0;
	    gdab = 0.0;
	    gdaa = 0.0;
	    break;
    } /* switch */
    goaL = ka(goaL, 1); 
    goam = goaL;
    if(goam == gLiTr){
	goaL = 0;
	goam = 0;
	/*printf("%ld:%ld\n", gLnaL, gLdaL);*/
    gLuoTaL = _a77L(guLTaL, guLkuL, gLiTr, gLbN, gLnaL, gLdaL);
    gLuoTaLa = _a77L(guLTaLa, guLkuLa, gLiTr, 3, gLnaL, gLdaL);
    guLkuL[0] = TaL(guLkuL[0], gLbN);
    guLkuLa[0] = TaL(guLkuLa[0], 3);
    for(o oa=0;oa < gLiTr;oa++){
	guotaL[oa] = gutaL[guLkuL[oa]];
	guxaoL[oa] = guxaL[guLkuL[oa]];
        if((guotaL[oa] == 'k') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'K';
	    guxaoL[oa] = L'ך';
	}
	if((guotaL[oa] == 'm') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'M';
	    guxaoL[oa] = L'ם';
	}
	if((guotaL[oa] == 'n') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'N';
	    guxaoL[oa] = L'ן';
	}
	if((guotaL[oa] == 'p') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'P';
	    guxaoL[oa] = L'ף';
	}
	if((guotaL[oa] == 'x') && (guLkuLa[oa] == 0)){
	    guotaL[oa] = 'X';
	    guxaoL[oa] = L'ץ';
	}
    } 
    L LgudoLa = puL(gLuoTaL, 1);
    goLgudoLa = LgudoLa;
    o opa = 1;
    for(int oa=0;oa<LgudoLa;oa++){
	gudoLa[oa] = kuda(guLTaL[oa] ,guLTaL[ka(oa, 1)]);
	if(gudoLa[oa] >= 1){
	    gudoLa[oa] = (gudoLa[oa] - floor(gudoLa[oa]));
	}
    }
    L Lgudroi = puL(gLuoTaL, 1);
    goLgudroi = Lgudroi;
    for(int oa = 0;oa < Lgudroi;oa++){
	gudroi[oa] = (double)TaL(puL(guLTaL[oa], guLTaL[oa + 1]), 111);
    }
    }
    glutPostRedisplay();
 }/* boz */
/* ---------------------------------------------------------- */
