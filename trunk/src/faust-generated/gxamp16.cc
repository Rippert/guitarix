// generated from file '../src/faust/gxamp16.dsp' by dsp2cc:
#include "valve.h"
namespace gxamp16 {
static double 	fConst0;
static double 	fConst1;
static double 	fConst2;
static double 	fConst3;
static double 	fConst4;
static double 	fConst5;
static double 	fConst6;
static double 	fConst7;
static double 	fConst8;
static double 	fConst9;
static double 	fConst10;
static double 	fConst11;
static double 	fConst12;
static double 	fConst13;
static double 	fConst14;
static double 	fConst15;
static double 	fConst16;
static double 	fConst17;
static double 	fConst18;
static double 	fRec5[2];
static FAUSTFLOAT&	fslider0 = get_alias("amp2.stage2.gain1");
static double 	fRec6[2];
static FAUSTFLOAT&	fslider1 = get_alias("gxdistortion.wet_dry");
static double 	fRec8[2];
static double 	fConst19;
static double 	fConst20;
static double 	fConst21;
static double 	fConst22;
static double 	fConst23;
static double 	fConst24;
static double 	fConst25;
static double 	fConst26;
static double 	fConst27;
static double 	fVec0[2];
static double 	fConst28;
static double 	fRec21[2];
static double 	fRec20[2];
static double 	fRec19[3];
static double 	fRec18[3];
static FAUSTFLOAT&	fslider2 = get_alias("amp2.stage1.Pregain");
static double 	fRec22[2];
static double 	fConst29;
static double 	fConst30;
static double 	fConst31;
static double 	fConst32;
static double 	fRec23[2];
static double 	fRec17[3];
static double 	fConst33;
static double 	fConst34;
static double 	fRec16[2];
static double 	fConst35;
static double 	fConst36;
static double 	fConst37;
static double 	fConst38;
static double 	fRec26[2];
static double 	fRec25[3];
static double 	fRec24[2];
static double 	fRec15[2];
static double 	fConst39;
static double 	fRec14[2];
static double 	fRec27[2];
static double 	fRec13[3];
static double 	fRec12[2];
static double 	fConst40;
static double 	fConst41;
static double 	fConst42;
static double 	fConst43;
static double 	fRec30[2];
static double 	fRec29[3];
static double 	fRec28[2];
static double 	fRec11[2];
static double 	fRec31[2];
static double 	fRec10[3];
static double 	fRec9[2];
static FAUSTFLOAT&	fslider3 = get_alias("gxdistortion.drive");
static double 	fRec34[2];
static int 	IOTA;
static double 	fVec1[65536];
static int 	iConst44;
static double 	fRec33[2];
static double 	fConst45;
static double 	fRec32[2];
static double 	fConst46;
static double 	fConst47;
static double 	fConst48;
static double 	fConst49;
static double 	fConst50;
static double 	fConst51;
static double 	fConst52;
static double 	fConst53;
static double 	fConst54;
static double 	fConst55;
static double 	fConst56;
static double 	fConst57;
static double 	fConst58;
static double 	fConst59;
static double 	fConst60;
static double 	fConst61;
static double 	fConst62;
static double 	fConst63;
static double 	fConst64;
static double 	fConst65;
static double 	fConst66;
static double 	fConst67;
static double 	fConst68;
static double 	fConst69;
static double 	fConst70;
static double 	fConst71;
static double 	fConst72;
static double 	fRec41[3];
static double 	fVec2[2];
static double 	fConst73;
static double 	fRec40[2];
static double 	fConst74;
static double 	fConst75;
static double 	fRec39[2];
static double 	fRec38[3];
static double 	fConst76;
static double 	fRec37[3];
static double 	fRec36[3];
static double 	fConst77;
static double 	fConst78;
static double 	fConst79;
static double 	fConst80;
static double 	fConst81;
static double 	fConst82;
static double 	fConst83;
static double 	fConst84;
static double 	fConst85;
static double 	fRec47[2];
static double 	fRec46[3];
static double 	fVec3[2];
static double 	fConst86;
static double 	fRec45[2];
static double 	fRec44[3];
static double 	fVec4[2];
static double 	fConst87;
static double 	fConst88;
static double 	fRec43[2];
static double 	fRec42[3];
static double 	fConst89;
static double 	fRec49[2];
static double 	fRec48[3];
static double 	fConst90;
static double 	fRec52[2];
static double 	fRec51[3];
static double 	fConst91;
static double 	fRec50[3];
static double 	fVec5[2];
static double 	fConst92;
static double 	fRec35[2];
static double 	fVec6[2];
static double 	fRec7[2];
static double 	fRec4[3];
static double 	fRec3[2];
static double 	fRec55[2];
static double 	fRec54[3];
static double 	fRec53[2];
static double 	fVec7[3];
static double 	fConst93;
static double 	fConst94;
static double 	fRec2[3];
static double 	fConst95;
static double 	fConst96;
static double 	fRec1[3];
static double 	fConst97;
static double 	fConst98;
static double 	fRec0[3];
static int	fSamplingFreq;

static void init(int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = (31704.95306002819 / fSamplingFreq);
	fConst1 = (2 * cos(fConst0));
	fConst2 = (0.026178010471204185 * sin(fConst0));
	fConst3 = (fConst2 - 1);
	fConst4 = (49574.33207364693 / fSamplingFreq);
	fConst5 = (2 * cos(fConst4));
	fConst6 = (0.07042253521126761 * sin(fConst4));
	fConst7 = (fConst6 - 1);
	fConst8 = (60601.32228774711 / fSamplingFreq);
	fConst9 = (2 * cos(fConst8));
	fConst10 = (0.03546099290780142 * sin(fConst8));
	fConst11 = (fConst10 - 1);
	fConst12 = (1.0 / tan((97.38937226128358 / fSamplingFreq)));
	fConst13 = (1 + fConst12);
	fConst14 = (0 - ((1 - fConst12) / fConst13));
	fConst15 = (1.0 / tan((20517.741620594938 / fSamplingFreq)));
	fConst16 = (1 + fConst15);
	fConst17 = (0 - ((1 - fConst15) / fConst16));
	fConst18 = (0.0041 / fConst16);
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	fConst19 = tan((37699.11184307752 / fSamplingFreq));
	fConst20 = (2 * (1 - (1.0 / faustpower<2>(fConst19))));
	fConst21 = (1.0 / fConst19);
	fConst22 = (1 + ((fConst21 - 0.7653668647301795) / fConst19));
	fConst23 = (1.0 / (1 + ((0.7653668647301795 + fConst21) / fConst19)));
	fConst24 = (1 + ((fConst21 - 1.8477590650225735) / fConst19));
	fConst25 = (1.0 / (1 + ((fConst21 + 1.8477590650225735) / fConst19)));
	fConst26 = (973.8937226128359 / fSamplingFreq);
	fConst27 = (1 - fConst26);
	for (int i=0; i<2; i++) fVec0[i] = 0;
	fConst28 = (1.0 / (1 + fConst26));
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<3; i++) fRec19[i] = 0;
	for (int i=0; i<3; i++) fRec18[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	fConst29 = (1.0 / tan((270.1769682087222 / fSamplingFreq)));
	fConst30 = (1 + fConst29);
	fConst31 = (0 - ((1 - fConst29) / fConst30));
	fConst32 = (0.027 / fConst30);
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<3; i++) fRec17[i] = 0;
	fConst33 = (0 - fConst12);
	fConst34 = (0.025 / fConst13);
	for (int i=0; i<2; i++) fRec16[i] = 0;
	fConst35 = (1.0 / tan((414.6902302738527 / fSamplingFreq)));
	fConst36 = (1 + fConst35);
	fConst37 = (0 - ((1 - fConst35) / fConst36));
	fConst38 = (0.015 / fConst36);
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<3; i++) fRec25[i] = 0;
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<2; i++) fRec15[i] = 0;
	fConst39 = (1.0 / fConst16);
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<2; i++) fRec27[i] = 0;
	for (int i=0; i<3; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	fConst40 = (1.0 / tan((609.4689747964198 / fSamplingFreq)));
	fConst41 = (1 + fConst40);
	fConst42 = (0 - ((1 - fConst40) / fConst41));
	fConst43 = (0.0082 / fConst41);
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<3; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<3; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fRec34[i] = 0;
	IOTA = 0;
	for (int i=0; i<65536; i++) fVec1[i] = 0;
	iConst44 = int((int((0.1111111111111111 * fSamplingFreq)) & 65535));
	for (int i=0; i<2; i++) fRec33[i] = 0;
	fConst45 = (0.009000000000000008 / fSamplingFreq);
	for (int i=0; i<2; i++) fRec32[i] = 0;
	fConst46 = tan((942.4777960769379 / fSamplingFreq));
	fConst47 = (1.0 / faustpower<2>(fConst46));
	fConst48 = (2 * (1 - fConst47));
	fConst49 = (1.0 / fConst46);
	fConst50 = (1 + ((fConst49 - 1.0) / fConst46));
	fConst51 = (1.0 / (1 + ((1.0 + fConst49) / fConst46)));
	fConst52 = tan((3769.9111843077517 / fSamplingFreq));
	fConst53 = (1.0 / faustpower<2>(fConst52));
	fConst54 = (2 * (1 - fConst53));
	fConst55 = (1.0 / fConst52);
	fConst56 = (1 + ((fConst55 - 1.0) / fConst52));
	fConst57 = (1.0 / (1 + ((1.0 + fConst55) / fConst52)));
	fConst58 = tan((10053.096491487338 / fSamplingFreq));
	fConst59 = (1.0 / faustpower<2>(fConst58));
	fConst60 = (2 * (1 - fConst59));
	fConst61 = (1.0 / fConst58);
	fConst62 = (1 + ((fConst61 - 1.0000000000000004) / fConst58));
	fConst63 = (1 + ((1.0000000000000004 + fConst61) / fConst58));
	fConst64 = (1.0 / fConst63);
	fConst65 = (1 + fConst61);
	fConst66 = (0 - ((1 - fConst61) / fConst65));
	fConst67 = tan((47123.8898038469 / fSamplingFreq));
	fConst68 = (2 * (1 - (1.0 / faustpower<2>(fConst67))));
	fConst69 = (1.0 / fConst67);
	fConst70 = (1 + ((fConst69 - 1.414213562373095) / fConst67));
	fConst71 = (1 + ((1.414213562373095 + fConst69) / fConst67));
	fConst72 = (1.0 / fConst71);
	for (int i=0; i<3; i++) fRec41[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	fConst73 = (1.0 / (fConst13 * fConst71));
	for (int i=0; i<2; i++) fRec40[i] = 0;
	fConst74 = (0 - fConst61);
	fConst75 = (1.0 / fConst65);
	for (int i=0; i<2; i++) fRec39[i] = 0;
	for (int i=0; i<3; i++) fRec38[i] = 0;
	fConst76 = (2 * (0 - fConst59));
	for (int i=0; i<3; i++) fRec37[i] = 0;
	for (int i=0; i<3; i++) fRec36[i] = 0;
	fConst77 = (1 + ((fConst49 - 1.0000000000000004) / fConst46));
	fConst78 = (1.0 / (1 + ((fConst49 + 1.0000000000000004) / fConst46)));
	fConst79 = (1 + fConst49);
	fConst80 = (0 - ((1 - fConst49) / fConst79));
	fConst81 = (1 + ((fConst55 - 1.0000000000000004) / fConst52));
	fConst82 = (1 + ((fConst55 + 1.0000000000000004) / fConst52));
	fConst83 = (1.0 / fConst82);
	fConst84 = (1 + fConst55);
	fConst85 = (0 - ((1 - fConst55) / fConst84));
	for (int i=0; i<2; i++) fRec47[i] = 0;
	for (int i=0; i<3; i++) fRec46[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	fConst86 = (1.0 / (fConst84 * fConst63));
	for (int i=0; i<2; i++) fRec45[i] = 0;
	for (int i=0; i<3; i++) fRec44[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	fConst87 = (0 - fConst49);
	fConst88 = (1.0 / (fConst79 * fConst82));
	for (int i=0; i<2; i++) fRec43[i] = 0;
	for (int i=0; i<3; i++) fRec42[i] = 0;
	fConst89 = (2 * (0 - fConst47));
	for (int i=0; i<2; i++) fRec49[i] = 0;
	for (int i=0; i<3; i++) fRec48[i] = 0;
	fConst90 = (0 - fConst55);
	for (int i=0; i<2; i++) fRec52[i] = 0;
	for (int i=0; i<3; i++) fRec51[i] = 0;
	fConst91 = (2 * (0 - fConst53));
	for (int i=0; i<3; i++) fRec50[i] = 0;
	for (int i=0; i<2; i++) fVec5[i] = 0;
	fConst92 = (1.5848931924611136 / fConst16);
	for (int i=0; i<2; i++) fRec35[i] = 0;
	for (int i=0; i<2; i++) fVec6[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<3; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec55[i] = 0;
	for (int i=0; i<3; i++) fRec54[i] = 0;
	for (int i=0; i<2; i++) fRec53[i] = 0;
	for (int i=0; i<3; i++) fVec7[i] = 0;
	fConst93 = (0 - fConst9);
	fConst94 = (1.0 / (1 + fConst10));
	for (int i=0; i<3; i++) fRec2[i] = 0;
	fConst95 = (0 - fConst5);
	fConst96 = (1.0 / (1 + fConst6));
	for (int i=0; i<3; i++) fRec1[i] = 0;
	fConst97 = (0 - fConst1);
	fConst98 = (1.0 / (1 + fConst2));
	for (int i=0; i<3; i++) fRec0[i] = 0;
}

void compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	double 	fSlow1 = (1.000000000000001e-05 * fslider1);
	double 	fSlow2 = (0.0010000000000000009 * pow(10,(0.05 * fslider2)));
	double 	fSlow3 = fslider3;
	double 	fSlow4 = (1.25 * fSlow3);
	double 	fSlow5 = (2 * (fSlow3 - 0.5));
	double 	fSlow6 = (0.024937655860349125 * (1 - max(0, fSlow5)));
	double 	fSlow7 = pow(1e+01,(0.8 * fSlow3));
	double 	fSlow8 = (fConst78 * pow(1e+01,(2 * fSlow3)));
	double 	fSlow9 = (fConst78 * pow(1e+01,(0.9 * fSlow3)));
	double 	fSlow10 = pow(1e+01,(1.2 * fSlow3));
	double 	fSlow11 = (1 - max(0, (0 - fSlow5)));
	for (int i=0; i<count; i++) {
		fRec5[0] = ((fConst18 * (fRec4[1] + fRec4[2])) + (fConst17 * fRec5[1]));
		fRec6[0] = (fSlow0 + (0.999 * fRec6[1]));
		fRec8[0] = (fSlow1 + (0.999 * fRec8[1]));
		double fTemp0 = (double)input0[i];
		fVec0[0] = fTemp0;
		fRec21[0] = (fConst28 * ((fVec0[0] - fVec0[1]) + (fConst27 * fRec21[1])));
		fRec20[0] = (fConst28 * ((fRec21[0] - fRec21[1]) + (fConst27 * fRec20[1])));
		fRec19[0] = (fRec20[0] - (fConst25 * ((fConst24 * fRec19[2]) + (fConst20 * fRec19[1]))));
		fRec18[0] = ((fConst25 * (fRec19[2] + (fRec19[0] + (2 * fRec19[1])))) - (fConst23 * ((fConst22 * fRec18[2]) + (fConst20 * fRec18[1]))));
		fRec22[0] = (fSlow2 + (0.999 * fRec22[1]));
		fRec23[0] = ((fConst32 * (fRec17[1] + fRec17[2])) + (fConst31 * fRec23[1]));
		fRec17[0] = (Ftube(TUBE_TABLE_12AT7_68k, ((fRec23[0] + (fConst23 * (fRec22[0] * (fRec18[2] + (fRec18[0] + (2 * fRec18[1])))))) - 2.617753)) - 153.04618518518518);
		fRec16[0] = ((fConst34 * ((fConst33 * fRec17[1]) + (fConst12 * fRec17[0]))) + (fConst14 * fRec16[1]));
		fRec26[0] = ((fConst38 * (fRec25[1] + fRec25[2])) + (fConst37 * fRec26[1]));
		fRec25[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec26[0] + fRec15[1]) - 1.887333)) - 124.17779999999999);
		fRec24[0] = ((fConst34 * ((fConst33 * fRec25[1]) + (fConst12 * fRec25[0]))) + (fConst14 * fRec24[1]));
		fRec15[0] = ((0.6 * fRec24[0]) + fRec16[0]);
		fRec14[0] = ((fConst39 * (fRec15[0] + fRec15[1])) + (fConst17 * fRec14[1]));
		fRec27[0] = ((fConst38 * (fRec13[1] + fRec13[2])) + (fConst37 * fRec27[1]));
		fRec13[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec27[0] + fRec14[0]) - 1.887333)) - 124.17779999999999);
		fRec12[0] = ((fConst34 * ((fConst33 * fRec13[1]) + (fConst12 * fRec13[0]))) + (fConst14 * fRec12[1]));
		fRec30[0] = ((fConst43 * (fRec29[1] + fRec29[2])) + (fConst42 * fRec30[1]));
		fRec29[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec30[0] + fRec11[1]) - 1.256962)) - 96.7119512195122);
		fRec28[0] = ((fConst34 * ((fConst33 * fRec29[1]) + (fConst12 * fRec29[0]))) + (fConst14 * fRec28[1]));
		fRec11[0] = ((0.6 * fRec28[0]) + fRec12[0]);
		fRec31[0] = ((fConst43 * (fRec10[1] + fRec10[2])) + (fConst42 * fRec31[1]));
		fRec10[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec31[0] + fRec11[0]) - 1.256962)) - 96.7119512195122);
		fRec9[0] = ((fConst34 * ((fConst33 * fRec10[1]) + (fConst12 * fRec10[0]))) + (fConst14 * fRec9[1]));
		double fTemp1 = (fRec9[0] * (1 - fRec8[0]));
		double fTemp2 = (fRec9[0] * fRec8[0]);
		double fTemp3 = fabs(fTemp2);
		fRec34[0] = ((9.999999999998899e-05 * fTemp3) + (0.9999 * fRec34[1]));
		double fTemp4 = max(fRec34[0], fTemp3);
		fVec1[IOTA&65535] = fTemp4;
		fRec33[0] = ((fVec1[IOTA&65535] + fRec33[1]) - fVec1[(IOTA-iConst44)&65535]);
		fRec32[0] = ((fConst45 * fRec33[0]) + (0.999 * fRec32[1]));
		double fTemp5 = max(-1.0, min(-0.01, (fVec1[IOTA&65535] - (1.0 + (1.02 * fRec32[0])))));
		double fTemp6 = (0 - fTemp5);
		double fTemp7 = (40.1 * fTemp6);
		double fTemp8 = max(-600, fTemp7);
		double fTemp9 = (0 - fTemp8);
		double fTemp10 = (fTemp2 - fTemp5);
		double fTemp11 = (40.1 * fTemp10);
		double fTemp12 = max(-600, fTemp11);
		double fTemp13 = (0 - fTemp12);
		double fTemp14 = (((int((fabs(fTemp11) > 0.0001)))?((int((fTemp12 < -50)))?(exp(fTemp12) * fTemp13):(fTemp12 / (1 - exp(fTemp13)))):(1 + (fTemp10 * (20.05 + (134.00083333333336 * fTemp10))))) - ((int((fabs(fTemp7) > 0.0001)))?((int((fTemp8 < -50)))?(exp(fTemp8) * fTemp9):(fTemp8 / (1 - exp(fTemp9)))):(1 + (fTemp6 * (20.05 + (134.00083333333336 * fTemp6))))));
		double fTemp15 = (fConst48 * fRec36[1]);
		double fTemp16 = (fConst54 * fRec37[1]);
		fRec41[0] = ((0.024937655860349125 * fTemp14) - (fConst72 * ((fConst70 * fRec41[2]) + (fConst68 * fRec41[1]))));
		double fTemp17 = (fRec41[2] + (fRec41[0] + (2 * fRec41[1])));
		fVec2[0] = fTemp17;
		fRec40[0] = ((fConst73 * ((fConst33 * fVec2[1]) + (fConst12 * fVec2[0]))) + (fConst14 * fRec40[1]));
		fRec39[0] = ((fConst75 * ((fConst74 * fRec40[1]) + (fConst61 * fRec40[0]))) + (fConst66 * fRec39[1]));
		fRec38[0] = (fRec39[0] - (fConst64 * ((fConst62 * fRec38[2]) + (fConst60 * fRec38[1]))));
		fRec37[0] = ((fConst64 * (((fConst59 * fRec38[0]) + (fConst76 * fRec38[1])) + (fConst59 * fRec38[2]))) - (fConst57 * ((fConst56 * fRec37[2]) + fTemp16)));
		fRec36[0] = ((fRec37[2] + (fConst57 * (fTemp16 + (fConst56 * fRec37[0])))) - (fConst51 * ((fConst50 * fRec36[2]) + fTemp15)));
		double fTemp18 = max(-1, min(1, (fSlow7 * (fRec36[2] + (fConst51 * (fTemp15 + (fConst50 * fRec36[0])))))));
		fRec47[0] = ((fConst75 * (fRec40[0] + fRec40[1])) + (fConst66 * fRec47[1]));
		fRec46[0] = (fRec47[0] - (fConst64 * ((fConst62 * fRec46[2]) + (fConst60 * fRec46[1]))));
		double fTemp19 = (fRec46[2] + (fRec46[0] + (2 * fRec46[1])));
		fVec3[0] = fTemp19;
		fRec45[0] = ((fConst86 * (fVec3[0] + fVec3[1])) + (fConst85 * fRec45[1]));
		fRec44[0] = (fRec45[0] - (fConst83 * ((fConst81 * fRec44[2]) + (fConst54 * fRec44[1]))));
		double fTemp20 = (fRec44[2] + (fRec44[0] + (2 * fRec44[1])));
		fVec4[0] = fTemp20;
		fRec43[0] = ((fConst88 * ((fConst87 * fVec4[1]) + (fConst49 * fVec4[0]))) + (fConst80 * fRec43[1]));
		fRec42[0] = (fRec43[0] - (fConst78 * ((fConst77 * fRec42[2]) + (fConst48 * fRec42[1]))));
		double fTemp21 = max(-1, min(1, (fSlow8 * (((fConst47 * fRec42[0]) + (fConst89 * fRec42[1])) + (fConst47 * fRec42[2])))));
		fRec49[0] = ((fConst88 * (fVec4[0] + fVec4[1])) + (fConst80 * fRec49[1]));
		fRec48[0] = (fRec49[0] - (fConst78 * ((fConst77 * fRec48[2]) + (fConst48 * fRec48[1]))));
		double fTemp22 = max(-1, min(1, (fSlow9 * (fRec48[2] + (fRec48[0] + (2 * fRec48[1]))))));
		double fTemp23 = (fConst48 * fRec50[1]);
		fRec52[0] = ((fConst86 * ((fConst90 * fVec3[1]) + (fConst55 * fVec3[0]))) + (fConst85 * fRec52[1]));
		fRec51[0] = (fRec52[0] - (fConst83 * ((fConst81 * fRec51[2]) + (fConst54 * fRec51[1]))));
		fRec50[0] = ((fConst83 * (((fConst53 * fRec51[0]) + (fConst91 * fRec51[1])) + (fConst53 * fRec51[2]))) - (fConst51 * ((fConst50 * fRec50[2]) + fTemp23)));
		double fTemp24 = max(-1, min(1, (fSlow10 * (fRec50[2] + (fConst51 * (fTemp23 + (fConst50 * fRec50[0])))))));
		double fTemp25 = (((fTemp24 * (1 - (0.3333333333333333 * faustpower<2>(fTemp24)))) + ((fTemp22 * (1 - (0.3333333333333333 * faustpower<2>(fTemp22)))) + (0.841395141645195 * (fTemp21 * (1 - (0.3333333333333333 * faustpower<2>(fTemp21))))))) + (0.7943282347242815 * (fTemp18 * (1 - (0.3333333333333333 * faustpower<2>(fTemp18))))));
		fVec5[0] = fTemp25;
		fRec35[0] = ((fConst92 * (fVec5[0] + fVec5[1])) + (fConst17 * fRec35[1]));
		double fTemp26 = (((fSlow11 * fRec35[0]) + (fSlow6 * fTemp14)) + (fTemp1 * (1 + (fSlow4 * ((4 - (4 * fabs(fTemp1))) - 1)))));
		fVec6[0] = fTemp26;
		fRec7[0] = ((fConst39 * (fVec6[0] + fVec6[1])) + (fConst17 * fRec7[1]));
		double fTemp27 = (fRec7[0] * fRec6[0]);
		fRec4[0] = (Ftube(TUBE_TABLE_6V6_68k, ((fTemp27 + fRec5[0]) - 0.664541)) - 87.91682926829267);
		fRec3[0] = ((fConst34 * ((fConst33 * fRec4[1]) + (fConst12 * fRec4[0]))) + (fConst14 * fRec3[1]));
		fRec55[0] = ((fConst18 * (fRec54[1] + fRec54[2])) + (fConst17 * fRec55[1]));
		fRec54[0] = (Ftube(TUBE_TABLE_6V6_250k, ((fRec55[0] + fTemp27) - 0.659761)) - 89.08268292682925);
		fRec53[0] = ((fConst34 * ((fConst33 * fRec54[1]) + (fConst12 * fRec54[0]))) + (fConst14 * fRec53[1]));
		double fTemp28 = (min(0.7, fRec53[0]) + max(-0.75, fRec3[0]));
		fVec7[0] = fTemp28;
		fRec2[0] = (fConst94 * ((fVec7[2] + (fVec7[0] + (fConst93 * fVec7[1]))) + ((fConst11 * fRec2[2]) + (fConst9 * fRec2[1]))));
		fRec1[0] = (fConst96 * ((fRec2[2] + (fRec2[0] + (fConst95 * fRec2[1]))) + ((fConst7 * fRec1[2]) + (fConst5 * fRec1[1]))));
		fRec0[0] = (fConst98 * ((fRec1[2] + (fRec1[0] + (fConst97 * fRec1[1]))) + ((fConst3 * fRec0[2]) + (fConst1 * fRec0[1]))));
		output0[i] = (FAUSTFLOAT)fRec0[0];
		// post processing
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fVec7[2] = fVec7[1]; fVec7[1] = fVec7[0];
		fRec53[1] = fRec53[0];
		fRec54[2] = fRec54[1]; fRec54[1] = fRec54[0];
		fRec55[1] = fRec55[0];
		fRec3[1] = fRec3[0];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		fRec7[1] = fRec7[0];
		fVec6[1] = fVec6[0];
		fRec35[1] = fRec35[0];
		fVec5[1] = fVec5[0];
		fRec50[2] = fRec50[1]; fRec50[1] = fRec50[0];
		fRec51[2] = fRec51[1]; fRec51[1] = fRec51[0];
		fRec52[1] = fRec52[0];
		fRec48[2] = fRec48[1]; fRec48[1] = fRec48[0];
		fRec49[1] = fRec49[0];
		fRec42[2] = fRec42[1]; fRec42[1] = fRec42[0];
		fRec43[1] = fRec43[0];
		fVec4[1] = fVec4[0];
		fRec44[2] = fRec44[1]; fRec44[1] = fRec44[0];
		fRec45[1] = fRec45[0];
		fVec3[1] = fVec3[0];
		fRec46[2] = fRec46[1]; fRec46[1] = fRec46[0];
		fRec47[1] = fRec47[0];
		fRec36[2] = fRec36[1]; fRec36[1] = fRec36[0];
		fRec37[2] = fRec37[1]; fRec37[1] = fRec37[0];
		fRec38[2] = fRec38[1]; fRec38[1] = fRec38[0];
		fRec39[1] = fRec39[0];
		fRec40[1] = fRec40[0];
		fVec2[1] = fVec2[0];
		fRec41[2] = fRec41[1]; fRec41[1] = fRec41[0];
		fRec32[1] = fRec32[0];
		fRec33[1] = fRec33[0];
		IOTA = IOTA+1;
		fRec34[1] = fRec34[0];
		fRec9[1] = fRec9[0];
		fRec10[2] = fRec10[1]; fRec10[1] = fRec10[0];
		fRec31[1] = fRec31[0];
		fRec11[1] = fRec11[0];
		fRec28[1] = fRec28[0];
		fRec29[2] = fRec29[1]; fRec29[1] = fRec29[0];
		fRec30[1] = fRec30[0];
		fRec12[1] = fRec12[0];
		fRec13[2] = fRec13[1]; fRec13[1] = fRec13[0];
		fRec27[1] = fRec27[0];
		fRec14[1] = fRec14[0];
		fRec15[1] = fRec15[0];
		fRec24[1] = fRec24[0];
		fRec25[2] = fRec25[1]; fRec25[1] = fRec25[0];
		fRec26[1] = fRec26[0];
		fRec16[1] = fRec16[0];
		fRec17[2] = fRec17[1]; fRec17[1] = fRec17[0];
		fRec23[1] = fRec23[0];
		fRec22[1] = fRec22[0];
		fRec18[2] = fRec18[1]; fRec18[1] = fRec18[0];
		fRec19[2] = fRec19[1]; fRec19[1] = fRec19[0];
		fRec20[1] = fRec20[0];
		fRec21[1] = fRec21[0];
		fVec0[1] = fVec0[0];
		fRec8[1] = fRec8[0];
		fRec6[1] = fRec6[0];
		fRec5[1] = fRec5[0];
	}
}

static struct RegisterParams { RegisterParams(); } RegisterParams;
RegisterParams::RegisterParams()
{
	registerInit("amp2", init);
}

} // end namespace gxamp16
