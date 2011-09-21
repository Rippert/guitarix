// generated from file '../src/faust/gxamp13.dsp' by dsp2cc:
#include "valve.h"
namespace gxamp13 {
static FAUSTFLOAT&	fslider0 = get_alias("amp2.stage2.gain1");
static double 	fRec0[2];
static double 	fConst0;
static double 	fConst1;
static double 	fConst2;
static double 	fConst3;
static double 	fConst4;
static double 	fConst5;
static FAUSTFLOAT&	fslider1 = get_alias("amp2.stage1.Pregain");
static double 	fRec8[2];
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
static double 	fConst19;
static double 	fConst20;
static double 	fConst21;
static double 	fConst22;
static double 	fConst23;
static double 	fConst24;
static double 	fConst25;
static double 	fConst26;
static double 	fConst27;
static double 	fConst28;
static double 	fConst29;
static double 	fConst30;
static double 	fConst31;
static double 	fConst32;
static double 	fRec21[2];
static int 	IOTA;
static double 	fVec0[65536];
static int 	iConst33;
static double 	fRec20[2];
static double 	fConst34;
static double 	fRec19[2];
static FAUSTFLOAT&	fslider2 = get_alias("gxdistortion.wet_dry");
static double 	fRec22[2];
static double 	fRec18[3];
static double 	fVec1[2];
static double 	fConst35;
static double 	fConst36;
static double 	fRec17[2];
static double 	fConst37;
static double 	fConst38;
static double 	fRec16[2];
static double 	fRec15[3];
static double 	fConst39;
static double 	fRec14[3];
static double 	fRec13[3];
static FAUSTFLOAT&	fslider3 = get_alias("gxdistortion.drive");
static double 	fConst40;
static double 	fConst41;
static double 	fConst42;
static double 	fConst43;
static double 	fConst44;
static double 	fConst45;
static double 	fConst46;
static double 	fConst47;
static double 	fConst48;
static double 	fRec28[2];
static double 	fRec27[3];
static double 	fVec2[2];
static double 	fConst49;
static double 	fRec26[2];
static double 	fRec25[3];
static double 	fVec3[2];
static double 	fConst50;
static double 	fConst51;
static double 	fRec24[2];
static double 	fRec23[3];
static double 	fConst52;
static double 	fRec30[2];
static double 	fRec29[3];
static double 	fConst53;
static double 	fRec33[2];
static double 	fRec32[3];
static double 	fConst54;
static double 	fRec31[3];
static double 	fVec4[2];
static double 	fConst55;
static double 	fRec12[2];
static double 	fConst56;
static double 	fConst57;
static double 	fConst58;
static double 	fConst59;
static double 	fRec34[2];
static double 	fRec11[3];
static double 	fConst60;
static double 	fRec10[2];
static double 	fConst61;
static double 	fConst62;
static double 	fConst63;
static double 	fConst64;
static double 	fRec37[2];
static double 	fRec36[3];
static double 	fRec35[2];
static double 	fRec9[2];
static double 	fVec5[2];
static double 	fConst65;
static double 	fRec7[2];
static double 	fRec38[2];
static double 	fRec6[3];
static double 	fRec5[2];
static double 	fConst66;
static double 	fConst67;
static double 	fConst68;
static double 	fConst69;
static double 	fRec41[2];
static double 	fRec40[3];
static double 	fRec39[2];
static double 	fRec4[2];
static double 	fRec3[2];
static double 	fRec42[2];
static double 	fRec2[3];
static double 	fRec1[2];
static int	fSamplingFreq;

static void init(int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	fConst0 = (1.0 / tan((97.38937226128358 / fSamplingFreq)));
	fConst1 = (1 + fConst0);
	fConst2 = (0 - ((1 - fConst0) / fConst1));
	fConst3 = (1.0 / tan((20517.741620594938 / fSamplingFreq)));
	fConst4 = (1 + fConst3);
	fConst5 = (0 - ((1 - fConst3) / fConst4));
	for (int i=0; i<2; i++) fRec8[i] = 0;
	fConst6 = tan((942.4777960769379 / fSamplingFreq));
	fConst7 = (1.0 / faustpower<2>(fConst6));
	fConst8 = (2 * (1 - fConst7));
	fConst9 = (1.0 / fConst6);
	fConst10 = (1 + ((fConst9 - 1.0) / fConst6));
	fConst11 = (1.0 / (1 + ((1.0 + fConst9) / fConst6)));
	fConst12 = tan((3769.9111843077517 / fSamplingFreq));
	fConst13 = (1.0 / faustpower<2>(fConst12));
	fConst14 = (2 * (1 - fConst13));
	fConst15 = (1.0 / fConst12);
	fConst16 = (1 + ((fConst15 - 1.0) / fConst12));
	fConst17 = (1.0 / (1 + ((1.0 + fConst15) / fConst12)));
	fConst18 = tan((10053.096491487338 / fSamplingFreq));
	fConst19 = (1.0 / faustpower<2>(fConst18));
	fConst20 = (2 * (1 - fConst19));
	fConst21 = (1.0 / fConst18);
	fConst22 = (1 + ((fConst21 - 1.0000000000000004) / fConst18));
	fConst23 = (1 + ((1.0000000000000004 + fConst21) / fConst18));
	fConst24 = (1.0 / fConst23);
	fConst25 = (1 + fConst21);
	fConst26 = (0 - ((1 - fConst21) / fConst25));
	fConst27 = tan((47123.8898038469 / fSamplingFreq));
	fConst28 = (2 * (1 - (1.0 / faustpower<2>(fConst27))));
	fConst29 = (1.0 / fConst27);
	fConst30 = (1 + ((fConst29 - 1.414213562373095) / fConst27));
	fConst31 = (1 + ((1.414213562373095 + fConst29) / fConst27));
	fConst32 = (1.0 / fConst31);
	for (int i=0; i<2; i++) fRec21[i] = 0;
	IOTA = 0;
	for (int i=0; i<65536; i++) fVec0[i] = 0;
	iConst33 = int((int((0.1111111111111111 * fSamplingFreq)) & 65535));
	for (int i=0; i<2; i++) fRec20[i] = 0;
	fConst34 = (0.009000000000000008 / fSamplingFreq);
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<3; i++) fRec18[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	fConst35 = (0 - fConst0);
	fConst36 = (1.0 / (fConst1 * fConst31));
	for (int i=0; i<2; i++) fRec17[i] = 0;
	fConst37 = (0 - fConst21);
	fConst38 = (1.0 / fConst25);
	for (int i=0; i<2; i++) fRec16[i] = 0;
	for (int i=0; i<3; i++) fRec15[i] = 0;
	fConst39 = (2 * (0 - fConst19));
	for (int i=0; i<3; i++) fRec14[i] = 0;
	for (int i=0; i<3; i++) fRec13[i] = 0;
	fConst40 = (1 + ((fConst9 - 1.0000000000000004) / fConst6));
	fConst41 = (1.0 / (1 + ((fConst9 + 1.0000000000000004) / fConst6)));
	fConst42 = (1 + fConst9);
	fConst43 = (0 - ((1 - fConst9) / fConst42));
	fConst44 = (1 + ((fConst15 - 1.0000000000000004) / fConst12));
	fConst45 = (1 + ((fConst15 + 1.0000000000000004) / fConst12));
	fConst46 = (1.0 / fConst45);
	fConst47 = (1 + fConst15);
	fConst48 = (0 - ((1 - fConst15) / fConst47));
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<3; i++) fRec27[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	fConst49 = (1.0 / (fConst47 * fConst23));
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<3; i++) fRec25[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	fConst50 = (0 - fConst9);
	fConst51 = (1.0 / (fConst42 * fConst45));
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<3; i++) fRec23[i] = 0;
	fConst52 = (2 * (0 - fConst7));
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<3; i++) fRec29[i] = 0;
	fConst53 = (0 - fConst15);
	for (int i=0; i<2; i++) fRec33[i] = 0;
	for (int i=0; i<3; i++) fRec32[i] = 0;
	fConst54 = (2 * (0 - fConst13));
	for (int i=0; i<3; i++) fRec31[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	fConst55 = (1.5848931924611136 / fConst4);
	for (int i=0; i<2; i++) fRec12[i] = 0;
	fConst56 = (1.0 / tan((270.1769682087222 / fSamplingFreq)));
	fConst57 = (1 + fConst56);
	fConst58 = (0 - ((1 - fConst56) / fConst57));
	fConst59 = (0.027 / fConst57);
	for (int i=0; i<2; i++) fRec34[i] = 0;
	for (int i=0; i<3; i++) fRec11[i] = 0;
	fConst60 = (0.05 / fConst1);
	for (int i=0; i<2; i++) fRec10[i] = 0;
	fConst61 = (1.0 / tan((414.6902302738527 / fSamplingFreq)));
	fConst62 = (1 + fConst61);
	fConst63 = (0 - ((1 - fConst61) / fConst62));
	fConst64 = (0.015 / fConst62);
	for (int i=0; i<2; i++) fRec37[i] = 0;
	for (int i=0; i<3; i++) fRec36[i] = 0;
	for (int i=0; i<2; i++) fRec35[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fVec5[i] = 0;
	fConst65 = (1.0 / fConst4);
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fRec38[i] = 0;
	for (int i=0; i<3; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	fConst66 = (1.0 / tan((609.4689747964198 / fSamplingFreq)));
	fConst67 = (1 + fConst66);
	fConst68 = (0 - ((1 - fConst66) / fConst67));
	fConst69 = (0.0082 / fConst67);
	for (int i=0; i<2; i++) fRec41[i] = 0;
	for (int i=0; i<3; i++) fRec40[i] = 0;
	for (int i=0; i<2; i++) fRec39[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec42[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
}

void compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	double 	fSlow1 = (0.0010000000000000009 * pow(10,(0.05 * fslider1)));
	double 	fSlow2 = (1.000000000000001e-05 * fslider2);
	double 	fSlow3 = fslider3;
	double 	fSlow4 = pow(1e+01,(0.8 * fSlow3));
	double 	fSlow5 = pow(1e+01,(2 * fSlow3));
	double 	fSlow6 = (fConst41 * fSlow5);
	double 	fSlow7 = (fConst41 * pow(1e+01,(0.9 * fSlow3)));
	double 	fSlow8 = pow(1e+01,(1.2 * fSlow3));
	double 	fSlow9 = (2 * (fSlow3 - 0.5));
	double 	fSlow10 = (1 - max(0, (0 - fSlow9)));
	double 	fSlow11 = (0.024937655860349125 * (1 - max(0, fSlow9)));
	double 	fSlow12 = (1.25 * fSlow3);
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
		fRec8[0] = (fSlow1 + (0.999 * fRec8[1]));
		double fTemp0 = (fConst8 * fRec13[1]);
		double fTemp1 = (fConst14 * fRec14[1]);
		double fTemp2 = (double)input0[i];
		double fTemp3 = fabs(fTemp2);
		fRec21[0] = ((9.999999999998899e-05 * fTemp3) + (0.9999 * fRec21[1]));
		double fTemp4 = max(fRec21[0], fTemp3);
		fVec0[IOTA&65535] = fTemp4;
		fRec20[0] = ((fVec0[IOTA&65535] + fRec20[1]) - fVec0[(IOTA-iConst33)&65535]);
		fRec19[0] = ((fConst34 * fRec20[0]) + (0.999 * fRec19[1]));
		double fTemp5 = max(-1, min(-0.01, (fVec0[IOTA&65535] - (1.0 + (1.02 * fRec19[0])))));
		double fTemp6 = (0 - fTemp5);
		double fTemp7 = (40.1 * fTemp6);
		double fTemp8 = max(-600, fTemp7);
		double fTemp9 = (0 - fTemp8);
		double fTemp10 = (fTemp2 - fTemp5);
		double fTemp11 = (40.1 * fTemp10);
		double fTemp12 = max(-600, fTemp11);
		double fTemp13 = (0 - fTemp12);
		double fTemp14 = (((int((fabs(fTemp11) > 0.0001)))?((int((fTemp12 < -50)))?(exp(fTemp12) * fTemp13):(fTemp12 / (1 - exp(fTemp13)))):(1 + (fTemp10 * (20.05 + (134.00083333333336 * fTemp10))))) - ((int((fabs(fTemp7) > 0.0001)))?((int((fTemp8 < -50)))?(exp(fTemp8) * fTemp9):(fTemp8 / (1 - exp(fTemp9)))):(1 + (fTemp6 * (20.05 + (134.00083333333336 * fTemp6))))));
		fRec22[0] = (fSlow2 + (0.999 * fRec22[1]));
		double fTemp15 = (0.024937655860349125 * (fRec22[0] * fTemp14));
		fRec18[0] = (fTemp15 - (fConst32 * ((fConst30 * fRec18[2]) + (fConst28 * fRec18[1]))));
		double fTemp16 = (fRec18[2] + (fRec18[0] + (2 * fRec18[1])));
		fVec1[0] = fTemp16;
		fRec17[0] = ((fConst36 * ((fConst35 * fVec1[1]) + (fConst0 * fVec1[0]))) + (fConst2 * fRec17[1]));
		fRec16[0] = ((fConst38 * ((fConst37 * fRec17[1]) + (fConst21 * fRec17[0]))) + (fConst26 * fRec16[1]));
		fRec15[0] = (fRec16[0] - (fConst24 * ((fConst22 * fRec15[2]) + (fConst20 * fRec15[1]))));
		fRec14[0] = ((fConst24 * (((fConst19 * fRec15[0]) + (fConst39 * fRec15[1])) + (fConst19 * fRec15[2]))) - (fConst17 * ((fConst16 * fRec14[2]) + fTemp1)));
		fRec13[0] = ((fRec14[2] + (fConst17 * (fTemp1 + (fConst16 * fRec14[0])))) - (fConst11 * ((fConst10 * fRec13[2]) + fTemp0)));
		double fTemp17 = max(-1, min(1, (fSlow4 * (fRec13[2] + (fConst11 * (fTemp0 + (fConst10 * fRec13[0])))))));
		fRec28[0] = ((fConst38 * (fRec17[0] + fRec17[1])) + (fConst26 * fRec28[1]));
		fRec27[0] = (fRec28[0] - (fConst24 * ((fConst22 * fRec27[2]) + (fConst20 * fRec27[1]))));
		double fTemp18 = (fRec27[2] + (fRec27[0] + (2 * fRec27[1])));
		fVec2[0] = fTemp18;
		fRec26[0] = ((fConst49 * (fVec2[0] + fVec2[1])) + (fConst48 * fRec26[1]));
		fRec25[0] = (fRec26[0] - (fConst46 * ((fConst44 * fRec25[2]) + (fConst14 * fRec25[1]))));
		double fTemp19 = (fRec25[2] + (fRec25[0] + (2 * fRec25[1])));
		fVec3[0] = fTemp19;
		fRec24[0] = ((fConst51 * ((fConst50 * fVec3[1]) + (fConst9 * fVec3[0]))) + (fConst43 * fRec24[1]));
		fRec23[0] = (fRec24[0] - (fConst41 * ((fConst40 * fRec23[2]) + (fConst8 * fRec23[1]))));
		double fTemp20 = max(-1, min(1, (fSlow6 * (((fConst7 * fRec23[0]) + (fConst52 * fRec23[1])) + (fConst7 * fRec23[2])))));
		fRec30[0] = ((fConst51 * (fVec3[0] + fVec3[1])) + (fConst43 * fRec30[1]));
		fRec29[0] = (fRec30[0] - (fConst41 * ((fConst40 * fRec29[2]) + (fConst8 * fRec29[1]))));
		double fTemp21 = max(-1, min(1, (fSlow7 * (fRec29[2] + (fRec29[0] + (2 * fRec29[1]))))));
		double fTemp22 = (fConst8 * fRec31[1]);
		fRec33[0] = ((fConst49 * ((fConst53 * fVec2[1]) + (fConst15 * fVec2[0]))) + (fConst48 * fRec33[1]));
		fRec32[0] = (fRec33[0] - (fConst46 * ((fConst44 * fRec32[2]) + (fConst14 * fRec32[1]))));
		fRec31[0] = ((fConst46 * (((fConst13 * fRec32[0]) + (fConst54 * fRec32[1])) + (fConst13 * fRec32[2]))) - (fConst11 * ((fConst10 * fRec31[2]) + fTemp22)));
		double fTemp23 = max(-1, min(1, (fSlow8 * (fRec31[2] + (fConst11 * (fTemp22 + (fConst10 * fRec31[0])))))));
		double fTemp24 = (((fTemp23 * (1 - (0.3333333333333333 * faustpower<2>(fTemp23)))) + ((fTemp21 * (1 - (0.3333333333333333 * faustpower<2>(fTemp21)))) + (0.841395141645195 * (fTemp20 * (1 - (0.3333333333333333 * faustpower<2>(fTemp20))))))) + (0.7943282347242815 * (fTemp17 * (1 - (0.3333333333333333 * faustpower<2>(fTemp17))))));
		fVec4[0] = fTemp24;
		fRec12[0] = ((fConst55 * (fVec4[0] + fVec4[1])) + (fConst5 * fRec12[1]));
		fRec34[0] = ((fConst59 * (fRec11[1] + fRec11[2])) + (fConst58 * fRec34[1]));
		double fTemp25 = max(-1, min(1, (fSlow5 * max(-0.7, min(0.7, fTemp15)))));
		double fTemp26 = (1 - fRec22[0]);
		fRec11[0] = (Ftube(TUBE_TABLE_6DJ8_68k, (((fTemp14 * ((fTemp26 * (0.024937655860349125 + (fSlow12 * ((0.0997506234413965 - (0.0997506234413965 * fabs((0.024937655860349125 * (fTemp26 * fTemp14))))) - 0.024937655860349125)))) + (fSlow11 * fRec22[0]))) + ((0.5 * (fTemp25 * (1 - (0.3333333333333333 * faustpower<2>(fTemp25))))) + (fRec34[0] + (fSlow10 * fRec12[0])))) - 1.863946)) - 60.96496296296296);
		fRec10[0] = ((fConst60 * ((fConst35 * fRec11[1]) + (fConst0 * fRec11[0]))) + (fConst2 * fRec10[1]));
		fRec37[0] = ((fConst64 * (fRec36[1] + fRec36[2])) + (fConst63 * fRec37[1]));
		fRec36[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec37[0] + fRec9[1]) - 1.271609)) - 45.22606666666667);
		fRec35[0] = ((fConst60 * ((fConst35 * fRec36[1]) + (fConst0 * fRec36[0]))) + (fConst2 * fRec35[1]));
		fRec9[0] = ((0.6 * fRec35[0]) - fRec10[0]);
		double fTemp27 = (fRec9[0] * fRec8[0]);
		fVec5[0] = fTemp27;
		fRec7[0] = ((fConst65 * (fVec5[0] + fVec5[1])) + (fConst5 * fRec7[1]));
		fRec38[0] = ((fConst64 * (fRec6[1] + fRec6[2])) + (fConst63 * fRec38[1]));
		fRec6[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec38[0] + fRec7[0]) - 1.271609)) - 45.22606666666667);
		fRec5[0] = ((fConst60 * ((fConst35 * fRec6[1]) + (fConst0 * fRec6[0]))) + (fConst2 * fRec5[1]));
		fRec41[0] = ((fConst69 * (fRec40[1] + fRec40[2])) + (fConst68 * fRec41[1]));
		fRec40[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec41[0] + fRec4[1]) - 0.797043)) - 32.799634146341475);
		fRec39[0] = ((fConst60 * ((fConst35 * fRec40[1]) + (fConst0 * fRec40[0]))) + (fConst2 * fRec39[1]));
		fRec4[0] = ((0.6 * fRec39[0]) + fRec5[0]);
		fRec3[0] = ((fConst65 * (fRec4[0] + fRec4[1])) + (fConst5 * fRec3[1]));
		fRec42[0] = ((fConst69 * (fRec2[1] + fRec2[2])) + (fConst68 * fRec42[1]));
		fRec2[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec42[0] + fRec3[0]) - 0.797043)) - 32.799634146341475);
		fRec1[0] = ((fConst60 * ((fConst35 * fRec2[1]) + (fConst0 * fRec2[0]))) + (fConst2 * fRec1[1]));
		output0[i] = (FAUSTFLOAT)(fRec1[0] * fRec0[0]);
		// post processing
		fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec42[1] = fRec42[0];
		fRec3[1] = fRec3[0];
		fRec4[1] = fRec4[0];
		fRec39[1] = fRec39[0];
		fRec40[2] = fRec40[1]; fRec40[1] = fRec40[0];
		fRec41[1] = fRec41[0];
		fRec5[1] = fRec5[0];
		fRec6[2] = fRec6[1]; fRec6[1] = fRec6[0];
		fRec38[1] = fRec38[0];
		fRec7[1] = fRec7[0];
		fVec5[1] = fVec5[0];
		fRec9[1] = fRec9[0];
		fRec35[1] = fRec35[0];
		fRec36[2] = fRec36[1]; fRec36[1] = fRec36[0];
		fRec37[1] = fRec37[0];
		fRec10[1] = fRec10[0];
		fRec11[2] = fRec11[1]; fRec11[1] = fRec11[0];
		fRec34[1] = fRec34[0];
		fRec12[1] = fRec12[0];
		fVec4[1] = fVec4[0];
		fRec31[2] = fRec31[1]; fRec31[1] = fRec31[0];
		fRec32[2] = fRec32[1]; fRec32[1] = fRec32[0];
		fRec33[1] = fRec33[0];
		fRec29[2] = fRec29[1]; fRec29[1] = fRec29[0];
		fRec30[1] = fRec30[0];
		fRec23[2] = fRec23[1]; fRec23[1] = fRec23[0];
		fRec24[1] = fRec24[0];
		fVec3[1] = fVec3[0];
		fRec25[2] = fRec25[1]; fRec25[1] = fRec25[0];
		fRec26[1] = fRec26[0];
		fVec2[1] = fVec2[0];
		fRec27[2] = fRec27[1]; fRec27[1] = fRec27[0];
		fRec28[1] = fRec28[0];
		fRec13[2] = fRec13[1]; fRec13[1] = fRec13[0];
		fRec14[2] = fRec14[1]; fRec14[1] = fRec14[0];
		fRec15[2] = fRec15[1]; fRec15[1] = fRec15[0];
		fRec16[1] = fRec16[0];
		fRec17[1] = fRec17[0];
		fVec1[1] = fVec1[0];
		fRec18[2] = fRec18[1]; fRec18[1] = fRec18[0];
		fRec22[1] = fRec22[0];
		fRec19[1] = fRec19[0];
		fRec20[1] = fRec20[0];
		IOTA = IOTA+1;
		fRec21[1] = fRec21[0];
		fRec8[1] = fRec8[0];
		fRec0[1] = fRec0[0];
	}
}

static struct RegisterParams { RegisterParams(); } RegisterParams;
RegisterParams::RegisterParams()
{
	registerInit("amp2", init);
}

} // end namespace gxamp13
