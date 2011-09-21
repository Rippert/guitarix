// generated from file '../src/faust/gxamp.dsp' by dsp2cc:
#include "valve.h"
namespace gxamp {
static FAUSTFLOAT 	fslider0;
static double 	fRec0[2];
static double 	fConst0;
static double 	fConst1;
static double 	fConst2;
static double 	fConst3;
static double 	fConst4;
static double 	fConst5;
static FAUSTFLOAT 	fslider1;
static double 	fRec7[2];
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
static FAUSTFLOAT&	fslider2 = get_alias("gxdistortion.wet_dry");
static double 	fRec17[2];
static double 	fRec16[3];
static double 	fVec0[2];
static double 	fConst33;
static double 	fConst34;
static double 	fRec15[2];
static double 	fConst35;
static double 	fConst36;
static double 	fRec14[2];
static double 	fRec13[3];
static double 	fConst37;
static double 	fRec12[3];
static double 	fRec11[3];
static FAUSTFLOAT&	fslider3 = get_alias("gxdistortion.drive");
static double 	fConst38;
static double 	fConst39;
static double 	fConst40;
static double 	fConst41;
static double 	fConst42;
static double 	fConst43;
static double 	fConst44;
static double 	fConst45;
static double 	fConst46;
static double 	fRec23[2];
static double 	fRec22[3];
static double 	fVec1[2];
static double 	fConst47;
static double 	fRec21[2];
static double 	fRec20[3];
static double 	fVec2[2];
static double 	fConst48;
static double 	fConst49;
static double 	fRec19[2];
static double 	fRec18[3];
static double 	fConst50;
static double 	fRec25[2];
static double 	fRec24[3];
static double 	fConst51;
static double 	fRec28[2];
static double 	fRec27[3];
static double 	fConst52;
static double 	fRec26[3];
static double 	fVec3[2];
static double 	fConst53;
static double 	fRec10[2];
static double 	fConst54;
static double 	fConst55;
static double 	fConst56;
static double 	fConst57;
static double 	fRec29[2];
static double 	fRec9[3];
static double 	fConst58;
static double 	fRec8[2];
static double 	fVec4[2];
static double 	fConst59;
static double 	fRec6[2];
static double 	fConst60;
static double 	fConst61;
static double 	fConst62;
static double 	fConst63;
static double 	fRec30[2];
static double 	fRec5[3];
static double 	fRec4[2];
static double 	fVec5[2];
static double 	fRec3[2];
static double 	fConst64;
static double 	fConst65;
static double 	fConst66;
static double 	fConst67;
static double 	fRec31[2];
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
	for (int i=0; i<2; i++) fRec7[i] = 0;
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
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<3; i++) fRec16[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	fConst33 = (0 - fConst0);
	fConst34 = (1.0 / (fConst1 * fConst31));
	for (int i=0; i<2; i++) fRec15[i] = 0;
	fConst35 = (0 - fConst21);
	fConst36 = (1.0 / fConst25);
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<3; i++) fRec13[i] = 0;
	fConst37 = (2 * (0 - fConst19));
	for (int i=0; i<3; i++) fRec12[i] = 0;
	for (int i=0; i<3; i++) fRec11[i] = 0;
	fConst38 = (1 + ((fConst9 - 1.0000000000000004) / fConst6));
	fConst39 = (1.0 / (1 + ((fConst9 + 1.0000000000000004) / fConst6)));
	fConst40 = (1 + fConst9);
	fConst41 = (0 - ((1 - fConst9) / fConst40));
	fConst42 = (1 + ((fConst15 - 1.0000000000000004) / fConst12));
	fConst43 = (1 + ((fConst15 + 1.0000000000000004) / fConst12));
	fConst44 = (1.0 / fConst43);
	fConst45 = (1 + fConst15);
	fConst46 = (0 - ((1 - fConst15) / fConst45));
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<3; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	fConst47 = (1.0 / (fConst45 * fConst23));
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<3; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	fConst48 = (0 - fConst9);
	fConst49 = (1.0 / (fConst40 * fConst43));
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<3; i++) fRec18[i] = 0;
	fConst50 = (2 * (0 - fConst7));
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<3; i++) fRec24[i] = 0;
	fConst51 = (0 - fConst15);
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<3; i++) fRec27[i] = 0;
	fConst52 = (2 * (0 - fConst13));
	for (int i=0; i<3; i++) fRec26[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	fConst53 = (1.5848931924611136 / fConst4);
	for (int i=0; i<2; i++) fRec10[i] = 0;
	fConst54 = (1.0 / tan((270.1769682087222 / fSamplingFreq)));
	fConst55 = (1 + fConst54);
	fConst56 = (0 - ((1 - fConst54) / fConst55));
	fConst57 = (0.027 / fConst55);
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<3; i++) fRec9[i] = 0;
	fConst58 = (0.025 / fConst1);
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	fConst59 = (1.0 / fConst4);
	for (int i=0; i<2; i++) fRec6[i] = 0;
	fConst60 = (1.0 / tan((414.6902302738527 / fSamplingFreq)));
	fConst61 = (1 + fConst60);
	fConst62 = (0 - ((1 - fConst60) / fConst61));
	fConst63 = (0.015 / fConst61);
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<3; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fVec5[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	fConst64 = (1.0 / tan((609.4689747964198 / fSamplingFreq)));
	fConst65 = (1 + fConst64);
	fConst66 = (0 - ((1 - fConst64) / fConst65));
	fConst67 = (0.0082 / fConst65);
	for (int i=0; i<2; i++) fRec31[i] = 0;
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
	double 	fSlow5 = (fConst39 * pow(1e+01,(2 * fSlow3)));
	double 	fSlow6 = (fConst39 * pow(1e+01,(0.9 * fSlow3)));
	double 	fSlow7 = pow(1e+01,(1.2 * fSlow3));
	double 	fSlow8 = (2 * (fSlow3 - 0.5));
	double 	fSlow9 = (1 - max(0, (0 - fSlow8)));
	double 	fSlow10 = (1.25 * fSlow3);
	double 	fSlow11 = (1 - max(0, fSlow8));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
		fRec7[0] = (fSlow1 + (0.999 * fRec7[1]));
		double fTemp0 = (fConst8 * fRec11[1]);
		double fTemp1 = (fConst14 * fRec12[1]);
		fRec17[0] = (fSlow2 + (0.999 * fRec17[1]));
		double fTemp2 = (double)input0[i];
		fRec16[0] = ((fTemp2 * fRec17[0]) - (fConst32 * ((fConst30 * fRec16[2]) + (fConst28 * fRec16[1]))));
		double fTemp3 = (fRec16[2] + (fRec16[0] + (2 * fRec16[1])));
		fVec0[0] = fTemp3;
		fRec15[0] = ((fConst34 * ((fConst33 * fVec0[1]) + (fConst0 * fVec0[0]))) + (fConst2 * fRec15[1]));
		fRec14[0] = ((fConst36 * ((fConst35 * fRec15[1]) + (fConst21 * fRec15[0]))) + (fConst26 * fRec14[1]));
		fRec13[0] = (fRec14[0] - (fConst24 * ((fConst22 * fRec13[2]) + (fConst20 * fRec13[1]))));
		fRec12[0] = ((fConst24 * (((fConst19 * fRec13[0]) + (fConst37 * fRec13[1])) + (fConst19 * fRec13[2]))) - (fConst17 * ((fConst16 * fRec12[2]) + fTemp1)));
		fRec11[0] = ((fRec12[2] + (fConst17 * (fTemp1 + (fConst16 * fRec12[0])))) - (fConst11 * ((fConst10 * fRec11[2]) + fTemp0)));
		double fTemp4 = max(-1, min(1, (fSlow4 * (fRec11[2] + (fConst11 * (fTemp0 + (fConst10 * fRec11[0])))))));
		fRec23[0] = ((fConst36 * (fRec15[0] + fRec15[1])) + (fConst26 * fRec23[1]));
		fRec22[0] = (fRec23[0] - (fConst24 * ((fConst22 * fRec22[2]) + (fConst20 * fRec22[1]))));
		double fTemp5 = (fRec22[2] + (fRec22[0] + (2 * fRec22[1])));
		fVec1[0] = fTemp5;
		fRec21[0] = ((fConst47 * (fVec1[0] + fVec1[1])) + (fConst46 * fRec21[1]));
		fRec20[0] = (fRec21[0] - (fConst44 * ((fConst42 * fRec20[2]) + (fConst14 * fRec20[1]))));
		double fTemp6 = (fRec20[2] + (fRec20[0] + (2 * fRec20[1])));
		fVec2[0] = fTemp6;
		fRec19[0] = ((fConst49 * ((fConst48 * fVec2[1]) + (fConst9 * fVec2[0]))) + (fConst41 * fRec19[1]));
		fRec18[0] = (fRec19[0] - (fConst39 * ((fConst38 * fRec18[2]) + (fConst8 * fRec18[1]))));
		double fTemp7 = max(-1, min(1, (fSlow5 * (((fConst7 * fRec18[0]) + (fConst50 * fRec18[1])) + (fConst7 * fRec18[2])))));
		fRec25[0] = ((fConst49 * (fVec2[0] + fVec2[1])) + (fConst41 * fRec25[1]));
		fRec24[0] = (fRec25[0] - (fConst39 * ((fConst38 * fRec24[2]) + (fConst8 * fRec24[1]))));
		double fTemp8 = max(-1, min(1, (fSlow6 * (fRec24[2] + (fRec24[0] + (2 * fRec24[1]))))));
		double fTemp9 = (fConst8 * fRec26[1]);
		fRec28[0] = ((fConst47 * ((fConst51 * fVec1[1]) + (fConst15 * fVec1[0]))) + (fConst46 * fRec28[1]));
		fRec27[0] = (fRec28[0] - (fConst44 * ((fConst42 * fRec27[2]) + (fConst14 * fRec27[1]))));
		fRec26[0] = ((fConst44 * (((fConst13 * fRec27[0]) + (fConst52 * fRec27[1])) + (fConst13 * fRec27[2]))) - (fConst11 * ((fConst10 * fRec26[2]) + fTemp9)));
		double fTemp10 = max(-1, min(1, (fSlow7 * (fRec26[2] + (fConst11 * (fTemp9 + (fConst10 * fRec26[0])))))));
		double fTemp11 = (((fTemp10 * (1 - (0.3333333333333333 * faustpower<2>(fTemp10)))) + ((fTemp8 * (1 - (0.3333333333333333 * faustpower<2>(fTemp8)))) + (0.841395141645195 * (fTemp7 * (1 - (0.3333333333333333 * faustpower<2>(fTemp7))))))) + (0.7943282347242815 * (fTemp4 * (1 - (0.3333333333333333 * faustpower<2>(fTemp4))))));
		fVec3[0] = fTemp11;
		fRec10[0] = ((fConst53 * (fVec3[0] + fVec3[1])) + (fConst5 * fRec10[1]));
		fRec29[0] = ((fConst57 * (fRec9[1] + fRec9[2])) + (fConst56 * fRec29[1]));
		double fTemp12 = (1 - fRec17[0]);
		fRec9[0] = (Ftube(TUBE_TABLE_12AX7_68k, (((fTemp2 * ((fSlow11 * fRec17[0]) + (fTemp12 * (1 + (fSlow10 * ((4 - (4 * fabs((fTemp2 * fTemp12)))) - 1)))))) + (fRec29[0] + (fSlow9 * fRec10[0]))) - 1.581656)) - 191.42014814814814);
		fRec8[0] = ((fConst58 * ((fConst33 * fRec9[1]) + (fConst0 * fRec9[0]))) + (fConst2 * fRec8[1]));
		double fTemp13 = (fRec8[0] * fRec7[0]);
		fVec4[0] = fTemp13;
		fRec6[0] = ((fConst59 * (fVec4[0] + fVec4[1])) + (fConst5 * fRec6[1]));
		fRec30[0] = ((fConst63 * (fRec5[1] + fRec5[2])) + (fConst62 * fRec30[1]));
		fRec5[0] = (Ftube(TUBE_TABLE_12AX7_250k, ((fRec30[0] + fRec6[0]) - 1.204285)) - 169.71433333333334);
		fRec4[0] = ((fConst58 * ((fConst33 * fRec5[1]) + (fConst0 * fRec5[0]))) + (fConst2 * fRec4[1]));
		double fTemp14 = (fRec7[0] * fRec4[0]);
		fVec5[0] = fTemp14;
		fRec3[0] = ((fConst59 * (fVec5[0] + fVec5[1])) + (fConst5 * fRec3[1]));
		fRec31[0] = ((fConst67 * (fRec2[1] + fRec2[2])) + (fConst66 * fRec31[1]));
		fRec2[0] = (Ftube(TUBE_TABLE_12AX7_250k, ((fRec31[0] + fRec3[0]) - 0.840703)) - 147.47524390243905);
		fRec1[0] = ((fConst58 * ((fConst33 * fRec2[1]) + (fConst0 * fRec2[0]))) + (fConst2 * fRec1[1]));
		output0[i] = (FAUSTFLOAT)(fRec1[0] * fRec0[0]);
		// post processing
		fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec31[1] = fRec31[0];
		fRec3[1] = fRec3[0];
		fVec5[1] = fVec5[0];
		fRec4[1] = fRec4[0];
		fRec5[2] = fRec5[1]; fRec5[1] = fRec5[0];
		fRec30[1] = fRec30[0];
		fRec6[1] = fRec6[0];
		fVec4[1] = fVec4[0];
		fRec8[1] = fRec8[0];
		fRec9[2] = fRec9[1]; fRec9[1] = fRec9[0];
		fRec29[1] = fRec29[0];
		fRec10[1] = fRec10[0];
		fVec3[1] = fVec3[0];
		fRec26[2] = fRec26[1]; fRec26[1] = fRec26[0];
		fRec27[2] = fRec27[1]; fRec27[1] = fRec27[0];
		fRec28[1] = fRec28[0];
		fRec24[2] = fRec24[1]; fRec24[1] = fRec24[0];
		fRec25[1] = fRec25[0];
		fRec18[2] = fRec18[1]; fRec18[1] = fRec18[0];
		fRec19[1] = fRec19[0];
		fVec2[1] = fVec2[0];
		fRec20[2] = fRec20[1]; fRec20[1] = fRec20[0];
		fRec21[1] = fRec21[0];
		fVec1[1] = fVec1[0];
		fRec22[2] = fRec22[1]; fRec22[1] = fRec22[0];
		fRec23[1] = fRec23[0];
		fRec11[2] = fRec11[1]; fRec11[1] = fRec11[0];
		fRec12[2] = fRec12[1]; fRec12[1] = fRec12[0];
		fRec13[2] = fRec13[1]; fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		fRec15[1] = fRec15[0];
		fVec0[1] = fVec0[0];
		fRec16[2] = fRec16[1]; fRec16[1] = fRec16[0];
		fRec17[1] = fRec17[0];
		fRec7[1] = fRec7[0];
		fRec0[1] = fRec0[0];
	}
}

static struct RegisterParams { RegisterParams(); } RegisterParams;
RegisterParams::RegisterParams()
{
	registerVar("amp2.stage1.Pregain","","S","",&fslider1, -6.0, -2e+01, 2e+01, 0.1);
	registerVar("amp2.stage2.gain1","","S","",&fslider0, -6.0, -2e+01, 2e+01, 0.1);
	registerInit("amp2", init);
}

} // end namespace gxamp
