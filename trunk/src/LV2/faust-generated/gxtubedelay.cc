// generated from file '../src/LV2/faust/gxtubedelay.dsp' by dsp2cc:
// Code generated with Faust 0.9.46 (http://faust.grame.fr)

#include "valve.h"

namespace gxtubedelay {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec3[2];
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fVec0[2];
	double 	fConst10;
	double 	fRec8[2];
	double 	fRec7[2];
	double 	fConst11;
	double 	fConst12;
	double 	fRec6[2];
	double 	fConst13;
	double 	fRec5[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	int 	IOTA;
	double 	fVec1[524288];
	double 	fConst14;
	double 	fConst15;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fConst16;
	double 	fRec9[2];
	double 	fRec10[2];
	double 	fRec11[2];
	double 	fRec12[2];
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec4[2];
	double 	fVec2[2];
	double 	fRec13[2];
	double 	fRec2[2];
	double 	fRec1[2];
	double 	fRec0[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, float *input0, float *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, float *input0, float *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "gxtubedelay";
	name = N_("Tube Delay");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<524288; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = (1.0 / tan((20517.741620594938 / iConst0)));
	fConst2 = (1 + fConst1);
	fConst3 = (0 - ((1 - fConst1) / fConst2));
	fConst4 = (1.0 / tan((97.38937226128358 / iConst0)));
	fConst5 = (1 + fConst4);
	fConst6 = (0 - ((1 - fConst4) / fConst5));
	fConst7 = (1.0 / tan((6.5973445725385655 / iConst0)));
	fConst8 = (1 + fConst7);
	fConst9 = (0 - ((1 - fConst7) / fConst8));
	fConst10 = (1.0 / fConst8);
	fConst11 = (0 - fConst4);
	fConst12 = (0.025 / fConst5);
	fConst13 = (1.0 / fConst2);
	IOTA = 0;
	fConst14 = (1e+01 / iConst0);
	fConst15 = (0 - fConst14);
	fConst16 = (0.001 * iConst0);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

inline void Dsp::compute(int count, float *input0, float *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	double 	fSlow1 = fslider1;
	double 	fSlow2 = (0.1 * fSlow1);
	double 	fSlow3 = (fConst16 * fslider2);
	double 	fSlow4 = fslider3;
	for (int i=0; i<count; i++) {
		fRec3[0] = (fSlow0 + (0.999 * fRec3[1]));
		double fTemp0 = (1e-15 + (0.015 * fRec7[1]));
		fVec0[0] = fTemp0;
		fRec8[0] = ((fConst10 * (fVec0[0] + fVec0[1])) + (fConst9 * fRec8[1]));
		fRec7[0] = (Ftube(TUBE_TABLE_12AX7_68k, (((double)input0[i] + fRec8[0]) - 1.204540999999999)) - 169.69726666666665);
		fRec6[0] = ((fConst12 * ((fConst11 * fRec7[1]) + (fConst4 * fRec7[0]))) + (fConst6 * fRec6[1]));
		fRec5[0] = ((fConst13 * (fRec6[0] + fRec6[1])) + (fConst3 * fRec5[1]));
		double fTemp1 = (fRec5[0] + (fSlow2 * fRec4[1]));
		fVec1[IOTA&524287] = fTemp1;
		double fTemp2 = ((int((fRec9[1] != 0.0)))?((int(((fRec10[1] > 0.0) & (fRec10[1] < 1.0))))?fRec9[1]:0):((int(((fRec10[1] == 0.0) & (fSlow3 != fRec11[1]))))?fConst14:((int(((fRec10[1] == 1.0) & (fSlow3 != fRec12[1]))))?fConst15:0)));
		fRec9[0] = fTemp2;
		fRec10[0] = max(0.0, min(1.0, (fRec10[1] + fTemp2)));
		fRec11[0] = ((int(((fRec10[1] >= 1.0) & (fRec12[1] != fSlow3))))?fSlow3:fRec11[1]);
		fRec12[0] = ((int(((fRec10[1] <= 0.0) & (fRec11[1] != fSlow3))))?fSlow3:fRec12[1]);
		fRec4[0] = (0.1 * ((fSlow4 * ((fRec10[0] * fVec1[(IOTA-int((int(fRec12[0]) & 524287)))&524287]) + ((1.0 - fRec10[0]) * fVec1[(IOTA-int((int(fRec11[0]) & 524287)))&524287]))) + ((fSlow1 * fRec4[1]) + (1e+01 * fRec5[0]))));
		double fTemp3 = (1e-15 + (0.015 * fRec2[1]));
		fVec2[0] = fTemp3;
		fRec13[0] = ((fConst10 * (fVec2[0] + fVec2[1])) + (fConst9 * fRec13[1]));
		fRec2[0] = (Ftube(TUBE_TABLE_12AX7_250k, ((fRec13[0] + (fRec4[0] * fRec3[0])) - 1.204284999999999)) - 169.71433333333334);
		fRec1[0] = ((fConst12 * ((fConst11 * fRec2[1]) + (fConst4 * fRec2[0]))) + (fConst6 * fRec1[1]));
		fRec0[0] = ((fConst13 * (fRec1[0] + fRec1[1])) + (fConst3 * fRec0[1]));
		output0[i] = (FAUSTFLOAT)fRec0[0];
		// post processing
		fRec0[1] = fRec0[0];
		fRec1[1] = fRec1[0];
		fRec2[1] = fRec2[0];
		fRec13[1] = fRec13[0];
		fVec2[1] = fVec2[0];
		fRec4[1] = fRec4[0];
		fRec12[1] = fRec12[0];
		fRec11[1] = fRec11[0];
		fRec10[1] = fRec10[0];
		fRec9[1] = fRec9[0];
		IOTA = IOTA+1;
		fRec5[1] = fRec5[0];
		fRec6[1] = fRec6[0];
		fRec7[1] = fRec7[0];
		fRec8[1] = fRec8[0];
		fVec0[1] = fVec0[0];
		fRec3[1] = fRec3[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
}

void Dsp::compute_static(int count, float *input0, float *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case LEVEL: 
		fslider3_ = (float*)data; // , 0.0, 0.0, 1e+01, 0.1 
		break;
	case DELAY: 
		fslider2_ = (float*)data; // , 0.0, 0.0, 5e+03, 0.1 
		break;
	case FEEDBACK: 
		fslider1_ = (float*)data; // , 0.0, 0.0, 1e+01, 0.1 
		break;
	case GAIN: 
		fslider0_ = (float*)data; // , 0.0, -3e+01, 6.0, 0.1 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   LEVEL, 
   DELAY, 
   FEEDBACK, 
   GAIN, 
} PortIndex;
*/

} // end namespace gxtubedelay
