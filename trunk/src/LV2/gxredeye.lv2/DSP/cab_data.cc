/*
 * Copyright (C) 2012 Hermann Meyer, Andreas Degert, Pete Shorthose
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * --------------------------------------------------------------------------
 */


struct CabDesc
{
  int32_t ir_count;
  uint32_t ir_sr;
  float ir_data[];
};

template <int32_t tab_size>
struct CabDesc_imp
{
  int32_t ir_count;
  uint32_t ir_sr;
  float ir_data[tab_size];
  operator CabDesc&()
  {
    return *(CabDesc*)this;
  }
};
/**----------------------------- cabinet impulse response data --------------------------------**/

CabDesc_imp<192> contrast_ir_desc =
{
  192, 48000,
  {
    0.147081, 0.208808, 0.208996, 0.163228, 0.0858905, -0.0119104, -0.0932825, -0.121011, -0.0999426, -0.071073, -0.0403973, -0.00214844, 0.0287018,
    0.0381079, 0.0372284, 0.0330389, 0.0252979, 0.0141394, 0.00118835, -0.00764709, -0.00751953, 0.00262512, 0.0143475, 0.0174762, 0.0168384, 0.0179126,
    0.00738525, -0.0114069, -0.0192352, -0.0145825, -0.0179932, -0.0244049, -0.0173956, -0.00357178, 0.00643188, 0.0108966, 0.0132935, 0.0123737, 0.00680786,
    -0.000214844, -0.0040686, -0.00533752, -0.00738525, -0.00539124, -0.00171875, 0.00156433, 0.00481384, 0.0038739, -0.00666016, -0.018866, -0.0216522, -0.0171606,
    -0.00717712, 0.00770081, 0.0209003, 0.0251971, 0.0221222, 0.0157977, 0.00453857, -0.0107892, -0.022478, -0.029165, -0.0303467, 0, -0.0169592,
    -0.00966125, -0.00163147, 0.00273254, 0.000436401, -0.00282654, -0.00791565, -0.0136493, -0.0128436, -0.00564636, 0.00298096, 0.0090033, 0.00841248, 0.00201416,
    -0.00579407, -0.0119171, -0.0145624, -0.0128436, -0.00741211, 0.000543823, 0.00414917, 0.00414917, 0.00114136, -0.00778809, -0.021377, -0.0325623, -0.0386584,
    -0.038974, -0.0333679, -0.0221289, -0.0107825, -0.00453186, -0.00127563, -0.000261841, 0.000631104, 0.000537109, 0.000355835, 0.00114136, 0.00174561, 0.00104065,
    -0.000100708, -0.00128906, -0.00083252, 0.00146362, 0.00234314, 0.000443115, -0.00245056, -0.00782165, -0.0164423, -0.0250092, -0.0309644, -0.0314343, -0.0265063,
    -0.0176508, -0.00496155, 0.00805664, 0.0157843, 0.0171069, 0.0131055, 0.00613647, -0.00216187, -0.00804321, -0.0117157, 0, -0.015321, -0.0154352,
    -0.013374, -0.00994995, -0.00672058, -0.00353821, -0.00110779, 0.000678101, 0.00250427, -0.00564636, 0.00298096, 0.0090033, 0.00841248, 0.00201416, -0.00579407,
    -0.0119171, -0.0145624, -0.0128436, -0.00741211, 0.000543823, 0.00414917, 0.00414917, 0.00114136, -0.00778809, -0.021377, -0.0325623, -0.0386584, -0.038974,
    -0.0333679, -0.0221289, -0.0107825, -0.00453186, -0.00127563, -0.000261841, 0.000631104, 0.000537109, 0.000355835, 0.00114136, 0.00174561, 0.00104065, -0.000100708,
    -0.00128906, -0.00083252, 0.00146362, 0.00234314, 0.000443115, -0.00245056, -0.00782165, -0.0164423, -0.0250092, -0.0309644, -0.0314343, -0.0265063, -0.0176508,
    -0.00496155, 0.00805664, 0.0157843, 0.0171069, 0.0131055, 0.00613647, -0.00216187, -0.00804321, -0.0117157, 0
  }
};

CabDesc_imp<256> cab_data_2x12 = {
    256, 48000,
    { 0.000143433, -0.00176392, -0.00148621, -0.000708008, -0.00242004, -0.00015564, -0.00227661, 0.00195923, -0.000411987, -0.0011322, 0.00241699, -0.00110779, 0.00299988,
      -0.000100708, 0.000189209, 0.00255127, -0.00119019, 0.00362854, -0.000640869, 0.000799561, 0.00148926, -0.0009552, -0.000741577, 0.0017334, -0.00278931, -0.00083313, 
      0.000411987, -0.0014679, -0.00211182, -0.000662231, -0.00348206, -0.00157166, -0.00445557, -0.00551147, -0.00564575, -0.00552673, -0.00611267, -0.007901, -0.00586548, 
      -0.00760193, -0.00686646, -0.010202, -0.00746155, -0.00887146, -0.0119141, -0.0100189, -0.0115234, -0.0120728, -0.0124878, -0.0139679, -0.0155396, -0.0146942, 
      -0.0170868, -0.0169342, -0.0191925, -0.017276, -0.0189301, -0.0201874, -0.0189819, -0.0203156, -0.020752, -0.0187805, -0.019931, -0.0156586, -0.0159058, 
      -0.0126221, -0.0113953, -0.00873108, -0.00889282, -0.00210876, -0.0026825, 0.00179138, 0.00219421, 0.00495605, 0.00692444, 0.00840759, 0.0102356, 0.014975, 
      0.019455, 0.0266296, 0.0396606, 0.052948, 0.0664978, 0.0833435, 0.0918762, 0.0999908, 0.0972931, 0.0924927, 0.0758545, 0.054422, 0.0295898, 
      0.00602417, -0.0216614, -0.0355194, -0.0448547, -0.0399078, -0.0199615, 0.00698242, 0.0346191, 0.0591583, 0.0692841, 0.0647217, 0.0514526, 0.0332001, 
      0.0167999, 0.00681458, 0.00488281, 0.00647888, 0.0122345, 0.0148865, 0.0147125, 0.00926208, 0.00722961, 0.000537109, 0.00311279, 0.0019928, 0.00849304, 
      0.00611877, 0.00529175, 0.00500793, 0.00375671, 0.00472717, 0.00438538, 0.00638123, 0.0071991, 0.00927429, 0.0129761, 0.0149109, 0.0128357, 0.0157562, 
      0.0125854, 0.0104034, 0.00974121, 0.0106659, 0.0100616, 0.00920105, 0.0147186, 0.00974426, 0.0111176, 0.00884399, 0.00645752, 0.00431519, 0.00408325, 
      0.00221252, 0.000546265, 0.00363464, -0.00218201, 0.00339966, 0.00130615, 0.00484009, 0.002771, 0.00285339, 0.00342407, 0.00233765, 0.00296021, 0.00154114, 
      0.00496216, 0.00328369, 0.0069397, 0.00532227, 0.00668945, 0.00419006, 0.00760803, 0.00194397, 0.00585327, 0.00207825, 0.00577087, 0.00396423, 0.00489502, 
      0.00350037, 0.00200195, 0.00146179, 0.000360107, -0.00267944, -0.000491333, -0.00198975, -3.35693e-05, -0.00172119, -0.00174561, -0.00203552, -0.00316162, -0.00356445, 
      -0.00203552, -0.00137329, -0.000125122, -0.0014679, 0.00169983, -0.00302734, -0.000732422, -0.00154114, 0.00132141, 0.00317993, 0.00477905, 0.00530701, 0.00194397, 
      0.00465393, 0.00020752, -0.00163574, 0.00102844, 0.000671387, 0.00357056, 0.00527344, 0.00367432, 0.00550232, 0.000964355, 0.000823975, -0.0027832, -0.00310669, 
      -0.00472412, -0.00222473, -0.000158691, -0.00157166, 0.00230713, 0.00313721, 0.00281067, 0.0050415, 0.000247192, 0.00225525, 0.00065918, -0.00229492, -0.00158997, 
      -0.00288391, -0.00158081, -0.00151978, 0.000778198, -0.00110779, 0.0043457, 0.00118408, 0.00274353, 0.00305481, -0.00177917, 0.00302429, -0.00206604, -0.00274048, 
      -0.00111694, -0.00370483, -0.00282898, -0.00700989, -0.00551453, -0.00950012, -0.00652161, -0.00733643, -0.00209961, -0.00406799, -0.00316162, -0.00356445, -0.00203552, 
      -0.00137329, -0.000125122, -0.0014679, 0.00169983, -0.00302734, -0.000732422, -0.00154114, 0.00132141, 0.00317993
    }
};

CabDesc_imp<1000> cab_data_4x12 =
{
  1000, 48000,
  {
    0.0210554,0.0750885,0.139243,0.180713,0.184139,0.144903,0.0686037,-0.0185033,-0.0886042,-0.12552,
    -0.121363,-0.0787852,-0.0213013,0.0229356,0.0411458,0.0370145,0.0195269,-0.00133213,-0.0152812,-0.0145159,
    -0.00183383,0.0137818,0.0256187,0.0286779,0.0207782,0.0077942,-0.00120299,-0.0031918,-0.00206098,-0.00135227,
    -0.00140983,-0.00497816,-0.0130377,-0.0218103,-0.0277226,-0.0286464,-0.0215221,-0.00951618,-0.00086607,0.0013951,
    4.17435e-05,-0.00319773,-0.00740044,-0.00716618,-0.00255126,0.00219789,0.00519503,0.00521192,0.000273707,-0.00618929,
    -0.00908,-0.010311,-0.0123735,-0.0142287,-0.017697,-0.0241029,-0.0284137,-0.0277091,-0.0227469,-0.0152625,
    -0.00519387,0.00359817,0.00729039,0.00671523,0.00318916,-0.00156796,-0.0063908,-0.00976712,-0.0129904,-0.017544,
    -0.022616,-0.0259348,-0.0261542,-0.0244839,-0.0203182,-0.0130093,-0.00603727,-0.0032797,-0.00488236,-0.00846209,
    -0.0130562,-0.0172578,-0.019061,-0.0178728,-0.0150705,-0.0105603,-0.00434051,0.000776129,0.00313197,0.00289589,
    0.00099021,-0.00304687,-0.00856731,-0.0134404,-0.0173033,-0.019982,-0.0200995,-0.0189035,-0.0176908,-0.0158077,
    -0.0144982,-0.0144288,-0.0148401,-0.0143923,-0.0124568,-0.00914924,-0.00554664,-0.00161911,0.00204186,0.00466298,
    0.00609433,0.00586043,0.00444049,0.00230369,-0.000460247,-0.00331487,-0.00620476,-0.00860464,-0.00977339,-0.0103904,
    -0.010582,-0.010316,-0.00959965,-0.0079265,-0.00490751,-0.000773675,0.00326292,0.0060596,0.00712823,0.0062126,
    0.00304346,-0.00120159,-0.00554078,-0.00940086,-0.0116814,-0.0115473,-0.00920741,-0.00570695,-0.00192381,0.00131636,
    0.00313601,0.00310522,0.0019866,0.00024603,-0.00151895,-0.00254442,-0.00257635,-0.00162088,0.000189493,0.00233523,
    0.00431406,0.00546426,0.00550678,0.00412306,0.00163322,-0.00135299,-0.00397516,-0.00564887,-0.00616138,-0.00556616,
    -0.00411866,-0.00213908,-0.000414186,0.000858571,0.00146968,0.00134177,0.000706731,0.000101598,-2.74503e-05,0.000216126,
    0.000921334,0.00170689,0.00206986,0.00178904,0.00108999,0.000418435,-0.000329494,-0.00108679,-0.00160318,-0.00186207,
    -0.00184908,-0.00174925,-0.0017532,-0.00168678,-0.00128635,-0.000532894,0.000551346,0.00173037,0.00285549,0.00381329,
    0.00444954,0.00483888,0.00505528,0.00517976,0.00536394,0.00566848,0.00582878,0.00582337,0.00573454,0.00568407,
    0.005573,0.00543545,0.00536728,0.00536814,0.00553587,0.00596405,0.00663779,0.00725726,0.00749624,0.00707181,
    0.00588561,0.00408059,0.00192134,3.47446e-05,-0.00100598,-0.000915017,4.2448e-05,0.00134795,0.00249509,0.00322568,
    0.0035816,0.00386374,0.00451921,0.00540239,0.0062616,0.00694728,0.0072783,0.00703991,0.00629145,0.00535576,
    0.00433242,0.0032916,0.00256128,0.00234155,0.00256369,0.00301814,0.00356167,0.00389767,0.00377937,0.00333664,
    0.00305993,0.00308825,0.00323129,0.00347644,0.00368722,0.00369027,0.0035434,0.0033256,0.00313601,0.00318107,
    0.00358381,0.00415188,0.00472327,0.00508203,0.00512893,0.00469563,0.00385072,0.00285837,0.00193384,0.0011745,
    0.000625585,0.000444931,0.000447908,0.000509171,0.000766472,0.00131361,0.00198278,0.00252006,0.00288339,0.00305278,
    0.00301612,0.00284385,0.0027595,0.0028841,0.00307673,0.00335143,0.00374592,0.00420453,0.00472283,0.00537605,
    0.00605867,0.00667969,0.0071488,0.00726939,0.00694415,0.00626471,0.00550721,0.0049613,0.00471663,0.00477505,
    0.00498066,0.00516581,0.00520946,0.00505574,0.00483425,0.00468391,0.00466834,0.00471656,0.00470018,0.00453961,
    0.0042108,0.00375276,0.00315533,0.00236797,0.00148797,0.000770994,0.000356717,0.000263414,0.000411073,0.00065758,
    0.000956942,0.00116598,0.00118259,0.0010794,0.00090411,0.000730068,0.000713639,0.00101561,0.00158903,0.0022272,
    0.00269874,0.00283804,0.00266545,0.00230882,0.00195122,0.00177202,0.0018221,0.00198835,0.00219707,0.0024585,
    0.00262623,0.00258478,0.00247114,0.00236725,0.00229178,0.00227378,0.00223327,0.0020942,0.0018775,0.00165049,
    0.00145125,0.0013392,0.00133322,0.0013771,0.00146459,0.00154074,0.00148781,0.00131534,0.00115589,0.00110735,
    0.00111562,0.00117102,0.0011977,0.00112514,0.000940195,0.000626312,0.000241008,-0.000110301,-0.000294454,-0.00026455,
    -3.9153e-05,0.000364625,0.000848391,0.00124397,0.00133727,0.00111349,0.00081935,0.000737272,0.000979052,0.00152794,
    0.00229764,0.00300549,0.00349459,0.00378848,0.00383738,0.00362037,0.00319689,0.00261696,0.00202673,0.00153753,
    0.0010692,0.000529509,-3.48582e-05,-0.000518806,-0.000836461,-0.000893089,-0.000683757,-0.00041539,-0.000240531,-0.000199855,
    -0.00040037,-0.000829803,-0.00130214,-0.00175941,-0.00214005,-0.00239538,-0.00255126,-0.00260319,-0.00258167,-0.00258312,
    -0.00261625,-0.00257821,-0.00243703,-0.00224874,-0.002035,-0.0018443,-0.00177327,-0.00182376,-0.00196122,-0.00222559,
    -0.00246046,-0.0023872,-0.00200267,-0.00146368,-0.000895475,-0.000426638,-0.000116391,8.54413e-05,0.000229487,0.000434546,
    0.000783401,0.00125185,0.00170428,0.00195945,0.00191818,0.00165093,0.0013,0.000928947,0.00048422,-4.45158e-05,
    -0.000552028,-0.000942422,-0.00123235,-0.00149559,-0.00177645,-0.00204586,-0.00228739,-0.00245312,-0.00249216,-0.00238563,
    -0.00216864,-0.00195288,-0.00184076,-0.0018401,-0.00190445,-0.00195077,-0.0018578,-0.00162677,-0.00132209,-0.00103643,
    -0.000946898,-0.00112221,-0.00150406,-0.00195615,-0.00229437,-0.00239499,-0.00218277,-0.0017268,-0.00124285,-0.00091104,
    -0.000849391,-0.00104366,-0.00129184,-0.00138022,-0.00126944,-0.00107845,-0.000937854,-0.000922902,-0.00107965,-0.00139665,
    -0.00174952,-0.00198203,-0.00202984,-0.00187962,-0.0015708,-0.00124176,-0.00109158,-0.00130834,-0.0019349,-0.00284735,
    -0.00377169,-0.00432535,-0.00427272,-0.00367104,-0.00275803,-0.00184037,-0.00124326,-0.00112073,-0.00138117,-0.00175739,
    -0.00199908,-0.00197451,-0.00163986,-0.00107954,-0.000508739,-0.000136274,-2.69049e-05,-0.000195924,-0.000604997,-0.00107277,
    -0.00139074,-0.00147588,-0.00138458,-0.00119441,-0.00105561,-0.00112623,-0.00139983,-0.00174871,-0.00207738,-0.00232496,
    -0.00235838,-0.00213469,-0.00182601,-0.00162957,-0.00156907,-0.00164833,-0.00185294,-0.00208449,-0.002181,-0.00207736,
    -0.00181851,-0.00145291,-0.00105886,-0.000777402,-0.000693301,-0.000780538,-0.000966736,-0.00110846,-0.00100441,-0.000639605,
    -0.000167997,0.000278684,0.000595589,0.000718707,0.000677736,0.000535644,0.000359331,0.000214058,0.000116118,-2.04741e-05,
    -0.000248734,-0.000545983,-0.00088025,-0.00122061,-0.0015376,-0.00175523,-0.00175457,-0.00148886,-0.00107979,-0.000750293,
    -0.000715752,-0.00112187,-0.0019394,-0.0029335,-0.00377016,-0.00421975,-0.00417837,-0.00370331,-0.00304405,-0.00245053,
    -0.00210699,-0.00207797,-0.0022711,-0.00249086,-0.00253708,-0.00230403,-0.00181831,-0.00124433,-0.000780152,-0.000599361,
    -0.00073175,-0.00104361,-0.00127435,-0.00119859,-0.000762859,-8.26917e-05,0.000629675,0.00112308,0.00126592,0.0011715,
    0.00103854,0.000983915,0.00102964,0.00109781,0.00111035,0.000980961,0.000642923,0.000128366,-0.000457361,-0.000965123,
    -0.00129109,-0.00143212,-0.00144318,-0.0014024,-0.00139796,-0.00148234,-0.00166874,-0.00191579,-0.00211699,-0.00215912,
    -0.0020502,-0.00183696,-0.00155674,-0.00122281,-0.000867206,-0.000589227,-0.000474017,-0.000498718,-0.000541393,-0.000489083,
    -0.000283456,6.39901e-05,0.000442908,0.000769699,0.000966486,0.000987869,0.000807193,0.000472449,6.91029e-05,-0.000300749,
    -0.000520124,-0.000506989,-0.000277707,-7.49884e-07,0.000197924,0.000303067,0.000322268,0.000290614,0.000293023,0.000353695,
    0.000410527,0.000420457,0.000342197,0.000133297,-0.000165088,-0.000453839,-0.000679258,-0.000834689,-0.000952602,-0.00110901,
    -0.00138581,-0.00176734,-0.00213167,-0.00235534,-0.00238038,-0.0022105,-0.0018848,-0.00142392,-0.000878386,-0.000337561,
    0.000124526,0.000442113,0.000576183,0.000579069,0.000590295,0.000704595,0.000887021,0.00101477,0.0010045,0.000847664,
    0.000575138,0.000306771,0.000121299,3.08588e-05,9.36218e-06,-8.68729e-05,-0.000309611,-0.000568184,-0.000781879,-0.00090086,
    -0.000816373,-0.000530804,-0.00015868,0.000212172,0.000470813,0.000541848,0.000420117,0.000213262,5.74002e-05,5.44461e-05,
    0.000231169,0.000503149,0.000735295,0.000831939,0.000801057,0.00070564,0.000658602,0.000765108,0.00102202,0.00132866,
    0.00158623,0.00171223,0.00161877,0.00138119,0.00109374,0.000773789,0.000429865,0.000119368,-0.000121345,-0.000232623,
    -0.000125412,0.000170474,0.000515011,0.000714866,0.000659852,0.000381759,2.34736e-05,-0.000255279,-0.000353581,-0.00027348,
    -8.40097e-05,0.000180108,0.000442772,0.000595703,0.00059443,0.000443181,0.00020006,-4.72427e-05,-0.000237849,-0.000336152,
    -0.000260891,-1.77245e-06,0.000308816,0.000549233,0.000726773,0.000843596,0.000880568,0.000881363,0.000886135,0.000917471,
    0.000981234,0.00105438,0.00110092,0.0011346,0.00116191,0.00120611,0.00130918,0.00150924,0.00173518,0.00188839,
    0.0019312,0.00182619,0.00154596,0.00111546,0.000674054,0.000338175,0.000137615,6.37174e-05,9.953e-05,0.000188198,
    0.000251211,0.000265322,0.000236736,0.000180904,0.000111483,2.96318e-05,-4.73336e-05,-8.53731e-05,-1.88834e-05,0.000190425,
    0.000533576,0.000938581,0.00131834,0.00155549,0.00158925,0.00148725,0.0013572,0.00129875,0.00134022,0.00146789,
    0.00163836,0.00174532,0.00169876,0.00147691,0.00111449,0.000735204,0.000492014,0.000435092,0.000515761,0.000663783,
    0.000799262,0.00084905,0.000801557,0.000690779,0.000557527,0.000428524,0.000314815,0.00019497,5.04922e-05,-0.000104847,
    -0.000234282,-0.000318564,-0.000372079,-0.000385258,-0.00035599,-0.0003227,-0.000303067,-0.000293341,-0.000320655,-0.000354127,
    -0.000328881,-0.000232259,-0.000107938,1.18163e-05,0.000143091,0.000270049,0.000361626,0.000452498,0.00056314,0.000661147,
    0.000724365,0.000744134,0.000727273,0.00072107,0.000736863,0.000779379,0.000855094,0.000962941,0.00110471,0.00125183,
    0.001321,0.00125508,0.00107511,0.000815532,0.000494719,0.000180608,-4.70381e-05,-0.000147682,-0.000113164,2.06559e-05,
    0.000179654,0.000301226,0.00036008,0.000352877,0.000314178,0.000264527,0.000197424,0.000127707,7.75789e-05,3.03816e-05,
    -4.49248e-05,-0.000123981,-0.000188198,-0.000230032,-0.000205332,-9.22811e-05,8.61003e-05,0.000310111,0.000546188,0.00074752,
    0.000886044,0.000967781,0.000983915,0.000906905,0.000743066,0.000538462,0.000377373,0.000343151,0.000430569,0.000540598,
    0.000564958,0.000431751,0.000133502,-0.000251643,-0.000614836,-0.000844801,-0.00086966,-0.000704595,-0.000452021,-0.000232532,
    -0.00011021,-9.40536e-05,-0.000144818,-0.000166747,-0.000102916,5.03785e-05,0.000256278,0.000434682,0.000496309,0.000419026,
    0.000240804,4.47203e-05,-9.02133e-05,-0.000122117,-6.04452e-05,1.82926e-05,5.15602e-05,1.39297e-05,-0.00012089,-0.00033004,
    -0.000557345,-0.000726751,-0.000759268,-0.000650285,-0.000450657,-0.00021608,3.68579e-05,0.000297704,0.000538644,0.000710049,
    0.00077363,0.000723092,0.000614791,0.000532167,0.000514057,0.00058116,0.000682076,0.00072566,0.000673282,0.000508217,
    0.000270299,6.37401e-05,-5.79001e-05,-0.000104257,-9.17585e-05,-6.15359e-05,-5.7741e-05,-7.34204e-05,-8.94407e-05,-0.000104779,
    -0.00013891,-0.000166588,-0.000132638,-2.27237e-05,0.000174609,0.00045193,0.00072032,0.000864434,0.000871569,0.000768994,
    0.00059284,0.00041948,0.000294795,0.000222579,0.000194515,0.000144409,-1.60202e-05,-0.000275753,-0.000566662,-0.00085005,
    -0.00107913,-0.00119302,-0.00120593,-0.00115421,-0.00108797,-0.00107377,-0.00112567,-0.00117748,-0.00117754,-0.00112203,
    -0.00103152,-0.000931128,-0.000873637,-0.000869274,-0.000861684,-0.000822599,-0.000761041,-0.000649717,-0.000460974,-0.000247598,
    -6.14223e-05,9.10313e-05,0.000194265,0.000208968,0.000170814,0.000139069,0.000142114,0.000191107,0.000249529,0.000275162,
    0.000279048,0.000277048,0.000268231,0.000283933,0.000336425,0.000397711,0.000432933,0.0004093,0.00032804,0.000203196,
    6.06951e-05,-4.35841e-05,-8.5464e-05,-7.4602e-05,-3.88122e-05,-4.04483e-05,-0.000130343,-0.00030134,-0.000497514,-0.000679258,
    -0.000815623,-0.000864775,-0.000821327,-0.000721615,-0.000589863,-0.000465223,-0.000387599,-0.000366648,-0.000385849,-0.000436
  }
};

CabDesc_imp<192> cab_data_Twin = {
    192, 48000,
    { -0.00248718, 0.00213013, 0.00604248, 0.0112091, 0.0163269, 0.021521, 0.0275574, 0.0338104, 0.0412903, 0.0489868, 0.0579742, 0.0658875, 0.0735504, 
      0.0774078, 0.0771973, 0.07229, 0.0630219, 0.051239, 0.0374146, 0.021994, 0.00320129, -0.0183258, -0.0423828, -0.0672119, -0.0882599, -0.0995728, 
      -0.0971954, -0.0775452, -0.0434357, 0.000286865, 0.0402557, 0.0653076, 0.0661804, 0.0455444, 0.0165436, -0.0072052, -0.0144287, -0.00848083, 0.00375977, 
      0.0146698, 0.0196289, 0.0180511, 0.011264, 0.00258789, -0.00515747, -0.00702209, -0.00657959, -0.00658569, -0.0059082, -0.0061554, -0.00519714, -0.00263672, 
      -0.000387573, -0.000177002, -0.000402832, -0.0019165, -0.00285645, -0.002771, -0.00153198, 0.000860596, 0.00449524, 0.00925903, 0.0124573, 0.0158722, 0.0168488, 
      0.01828, 0.0172485, 0.0160065, 0.015097, 0.0136658, 0.0133423, 0.0126892, 0.0120972, 0.0106384, 0.00811462, 0.00519104, 0.00170593, -0.00169983, 
      -0.00419006, -0.00576782, -0.00625916, -0.00639343, -0.00591431, -0.00499573, -0.00469971, -0.00328674, -0.00227661, -0.00125732, -0.0006073, -0.000317383, -0.00134888, 
      -0.00276184, -0.00381775, -0.00519714, -0.00510254, -0.00422974, -0.00214844, 0.000784302, 0.00391541, 0.00646362, 0.00923157, 0.0100983, 0.0102875, 0.0102692, 
      0.00893555, 0.00744934, 0.006427, 0.00488892, 0.0039093, 0.00360718, 0.00300903, 0.00233154, 0.00245972, 0.00163574, 0.00125732, 0.000762939, 0.000540161, 
      0.000210571, -0.000256348, 0.000112915, -0.000436401, 0.000650024, 0.000924683, 0.00168457, 0.00215454, 0.00183105, 0.00153809, 0.000708008, -0.000939941, -0.000753784, 
      -0.00201416, -0.000750732, -0.000592041, 0.000344849, 0.00183105, 0.00214233, 0.00311279, 0.0032074, 0.0024231, 0.00189209, 0.000485229, -0.00122375, -0.00232239, 
      -0.003479, -0.00364075, -0.00359192, -0.00312195, -0.00229492, -0.00212708, -0.000912476, -0.00114746, -0.00125732, -0.0006073, -0.000317383, -0.00134888, -0.00276184, 
      -0.00381775, -0.00519714, -0.00510254, -0.00422974, -0.00214844, 0.000784302, 0.00391541, 0.00646362, 0.00923157, 0.0100983, 0.0102875, 0.0102692, 0.00893555, 
      0.00744934, 0.006427, 0.00488892, 0.0039093, 0.00360718, 0.00300903, 0.00233154, 0.00245972, 0.00163574, 0.00125732, 0.000762939, 0.000540161, 0.000210571, 
      -0.000256348, 0.000112915, -0.000436401, 0.000650024, 0.000924683, 0.00168457, 0.00215454, 0.00183105, 0.00153809, 0.000708008
    }
};

CabDesc_imp<192> cab_data_Bassman = {
    192, 48000,
    { -0.0135193, -0.0170654, -0.0122955, -0.0142334, -0.0131775, -0.0132965, -0.0127258, -0.0152039, -0.01138, -0.016806, -0.011557, -0.0141876, -0.00864258, 
      -0.0124908, -0.0108978, -0.00955811, -0.0157318, -0.0183807, -0.0201386, -0.0251465, -0.0209259, -0.0262756, -0.0199371, -0.0149078, -0.00731201, 0.00153503, 
      0.0135101, 0.0243683, 0.0322968, 0.0433075, 0.0503571, 0.0568634, 0.0703674, 0.0783051, 0.0914154, 0.0999908, 0.0980591, 0.0955383, 0.0794281, 
      0.0597534, 0.031485, -0.00279541, -0.0304779, -0.0540436, -0.0625885, -0.0501495, -0.0274353, 0.0180267, 0.0631134, 0.0926331, 0.098819, 0.0706421, 
      0.0196289, -0.0225616, -0.0428589, -0.0351105, -0.0119171, 0.0210815, 0.0415833, 0.0480377, 0.0494293, 0.0368988, 0.0178253, 0.000698853, -0.0044281, 
      -0.00349731, 0.00496216, 0.0109161, 0.0185181, 0.0168701, 0.0179718, 0.0142792, 0.0111298, 0.0111786, 0.00481567, 0.00551453, 0.00521545, 0.00835266, 
      0.00484619, 0.0102722, 0.0072998, 0.0072937, 0.00602112, 0.00800476, 0.000827026, 0.00921326, 0.00395813, 0.00715942, 0.00660706, 0.00912476, 0.00556641, 
      0.00999451, 0.0117157, 0.00827637, 0.00951843, 0.00418091, 0.00426025, 0.00639343, 0.00884705, 0.0105438, 0.0115021, 0.0123657, 0.011795, 0.00934143, 
      0.00721741, 0.0111633, 0.00832214, 0.0115936, 0.0131409, 0.0116516, 0.0109802, 0.00982666, 0.0116791, 0.00919495, 0.010733, 0.00323791, 0.00908508, 
      0.00430908, 0.00735168, 0.00718994, 0.00866394, 0.00606079, 0.0063324, 0.00391541, 0.00143738, 0.00595398, 0.00281677, 0.00145569, 0.00218201, -0.0025238, 
      0.00496216, 0.0109161, 0.0185181, 0.0168701, 0.0179718, 0.0142792, 0.0111298, 0.0111786, 0.00481567, 0.00551453, 0.00521545, 0.00835266, 0.00484619, 
      0.0102722, 0.0072998, 0.0072937, 0.00602112, 0.00800476, 0.000827026, 0.00921326, 0.00395813, 0.00715942, 0.00660706, 0.00912476, 0.00556641, 0.00999451, 
      0.0117157, 0.00827637, 0.00951843, 0.00418091, 0.00426025, 0.00639343, 0.00884705, 0.0105438, 0.0115021, 0.0123657, 0.011795, 0.00934143, 0.00721741, 
      0.0111633, 0.00832214, 0.0115936, 0.0131409, 0.0116516, 0.0109802, 0.00982666, 0.0116791, 0.00919495, 0.010733, 0.00323791, 0.00908508, 0.00430908, 
      0.00735168, 0.00718994, 0.00866394, 0.00606079, 0.0063324, 0.00391541, 0.00143738, 0.00595398, 0.00281677, 0.00145569
    }
};

CabDesc_imp<768> cab_data_1x12 = {
    768, 48000,
    { -0.00323486, -0.0026062, -0.00215454, -0.00219116, -0.00232544, -0.00252686, -0.002948, -0.00360107, -0.00460205, -0.00614014, -0.00812988, -0.0102478, -0.0127991,
      -0.0177124, -0.02771, -0.0431702, -0.0599945, -0.0708221, -0.0681854, -0.0474915, -0.0095398, 0.0378418, 0.0806122, 0.0999969, 0.0999969, 0.0800568,
      0.0421997, -0.00293579, -0.0395203, -0.057785, -0.0583466, -0.0467346, -0.0289368, -0.0101624, 0.00603027, 0.0182739, 0.0267273, 0.0316956, 0.0329712,
      0.0304016, 0.0247803, 0.017749, 0.0108948, 0.00513916, 0.000915527, -0.0013855, -0.00125732, 0.00157471, 0.00671997, 0.0129822, 0.0184143, 0.0207336,
      0.0182556, 0.0109802, 0.000982666, -0.00841675, -0.0141663, -0.0147156, -0.0104309, -0.00318604, 0.00450439, 0.0104492, 0.013446, 0.0133362, 0.0107178, 
      0.00665894, 0.00249023, -0.000457764, -0.00115967, 0.000714111, 0.00458984, 0.00911255, 0.0126099, 0.0137512, 0.0121033, 0.00830078, 0.00375977, 8.54492e-05, 
      -0.0015564, -0.000823975, 0.00172729, 0.00490723, 0.00735474, 0.00796509, 0.00628052, 0.00263672, -0.00196533, -0.00614014, -0.00858765, -0.00855103, -0.0060852, 
      -0.00204468, 0.00221558, 0.00528564, 0.00625, 0.00495605, 0.00204468, -0.00131836, -0.00386353, -0.0046936, -0.00354004, -0.000854492, 0.00239258, 0.00506592, 
      0.0062561, 0.00559692, 0.00337524, 0.000402832, -0.00227051, -0.00375366, -0.00361328, -0.00202026, 0.00032959, 0.00247192, 0.00354004, 0.00303345, 0.00101929, 
      -0.00193481, -0.00493774, -0.00710449, -0.00784302, -0.00702515, -0.0050415, -0.0026123, -0.000579834, 0.000408936, 7.93457e-05, -0.00136108, -0.00332031, -0.00504761, 
      -0.00588989, -0.00551147, -0.0039978, -0.00186157, 0.000189209, 0.00145264, 0.00150757, 0.000341797, -0.00163574, -0.00372925, -0.0052124, -0.00556641, -0.00467529, 
      -0.00284424, -0.000726318, 0.000921631, 0.00150146, 0.000732422, -0.0012085, -0.00378418, -0.00626221, -0.00796509, -0.00845947, -0.00770874, -0.00604858, -0.00406494, 
      -0.00238647, -0.00150757, -0.00159912, -0.00249634, -0.00377808, -0.00490723, -0.00545044, -0.0052002, -0.00426025, -0.00296631, -0.00180054, -0.00115967, -0.00125122, 
      -0.00201416, -0.00314331, -0.00421143, -0.00482178, -0.00476074, -0.00404053, -0.00294189, -0.00186768, -0.00123291, -0.00127563, -0.00201416, -0.00321045, -0.00445557, 
      -0.00533447, -0.0055481, -0.00501099, -0.00392456, -0.00266113, -0.00166626, -0.00127563, -0.00162964, -0.0026062, -0.00388184, -0.0050354, -0.00567627, -0.00557861, 
      -0.00476685, -0.00348511, -0.00211182, -0.00106812, -0.000640869, -0.000897217, -0.00169067, -0.00269165, -0.00352173, -0.00388184, -0.0036499, -0.00292358, -0.00197754, 
      -0.00115356, -0.000726318, -0.000830078, -0.00140991, -0.00224609, -0.00305786, -0.00357056, -0.0036377, -0.00325928, -0.00257568, -0.00182495, -0.00125732, -0.0010498, 
      -0.00126343, -0.00178833, -0.0024292, -0.00292358, -0.00306396, -0.00276489, -0.0020752, -0.00120239, -0.000421143, 4.88281e-05, 7.32422e-05, -0.000317383, -0.000952148, 
      -0.00157471, -0.00195312, -0.00194702, -0.00155029, -0.000909424, -0.000244141, 0.000213623, 0.000305176, 1.2207e-05, -0.00055542, -0.00118408, -0.00163574, -0.00174561, 
      -0.00146484, -0.000878906, -0.000170898, 0.00043335, 0.000744629, 0.000683594, 0.000299072, -0.000256348, -0.000775146, -0.00106812, -0.00103149, -0.00067749, -0.00012207, 
      0.000445557, 0.000842285, 0.000958252, 0.00078125, 0.000396729, -3.66211e-05, -0.000341797, -0.000384521, -0.000134277, 0.000354004, 0.000927734, 0.00142212, 0.00168457, 
      0.00165405, 0.00136108, 0.000915527, 0.000482178, 0.000213623, 0.000189209, 0.000427246, 0.000836182, 0.00128174, 0.00162964, 0.00177612, 0.00169067, 0.00141602, 
      0.00106812, 0.000775146, 0.000634766, 0.000701904, 0.000952148, 0.00130005, 0.00164185, 0.00187988, 0.00195923, 0.00188599, 0.00172119, 0.00154419, 0.00145264, 
      0.00148926, 0.00164795, 0.00187988, 0.00209351, 0.00222778, 0.00223389, 0.00211182, 0.0019165, 0.00172729, 0.00162964, 0.00166626, 0.00184937, 0.00213013, 
      0.00241089, 0.0026123, 0.00265503, 0.00253296, 0.00227051, 0.00195923, 0.00169067, 0.0015625, 0.00160522, 0.00181885, 0.00213013, 0.00245972, 0.00270386, 
      0.00280762, 0.00275269, 0.00256958, 0.00234375, 0.00213623, 0.00202026, 0.00202637, 0.00213013, 0.00227661, 0.00241089, 0.00247803, 0.00245361, 0.00234375, 
      0.00219116, 0.00206299, 0.00201416, 0.00206909, 0.00221558, 0.00241699, 0.0026062, 0.00272217, 0.00272827, 0.00262451, 0.00244751, 0.0022522, 0.00209961, 
      0.00203857, 0.0020813, 0.00220947, 0.00236816, 0.00251465, 0.00259399, 0.00259399, 0.00252075, 0.00239868, 0.00229492, 0.00224609, 0.00227661, 0.00237427, 
      0.00251465, 0.00264282, 0.00272217, 0.00272217, 0.00263062, 0.00248413, 0.00231323, 0.00218506, 0.00211792, 0.00213013, 0.00219727, 0.00229492, 0.00238037, 
      0.00241089, 0.00238037, 0.00228271, 0.00216064, 0.00204468, 0.00197144, 0.00196533, 0.00202026, 0.00211182, 0.00219727, 0.0022522, 0.00223999, 0.00216675, 
      0.00205078, 0.0019165, 0.00181274, 0.00176392, 0.00176392, 0.00181885, 0.00188599, 0.00194702, 0.00196533, 0.00192871, 0.00184326, 0.0017395, 0.00164795, 
      0.00158691, 0.00158081, 0.00162354, 0.00169067, 0.00176392, 0.00180664, 0.00180664, 0.00175171, 0.00166626, 0.0015686, 0.00148926, 0.00145264, 0.00145264, 
      0.00148926, 0.00154419, 0.00158081, 0.00158081, 0.00154419, 0.00147095, 0.00137939, 0.00128784, 0.00122681, 0.00120239, 0.0012146, 0.00124512, 0.00128784, 
      0.00130005, 0.00128174, 0.00122681, 0.00114136, 0.0010498, 0.000976562, 0.000927734, 0.000915527, 0.000933838, 0.000964355, 0.000976562, 0.000970459, 0.000933838, 
      0.000860596, 0.000775146, 0.000689697, 0.000628662, 0.000598145, 0.000592041, 0.000610352, 0.000628662, 0.000628662, 0.000604248, 0.00055542, 0.000482178, 0.000402832, 
      0.000341797, 0.000299072, 0.000292969, 0.000299072, 0.000317383, 0.000323486, 0.000317383, 0.000286865, 0.000231934, 0.000164795, 9.76563e-05, 4.88281e-05, 2.44141e-05, 
      2.44141e-05, 3.66211e-05, 4.88281e-05, 4.88281e-05, 2.44141e-05, -1.83105e-05, -7.93457e-05, -0.000140381, -0.000195313, -0.000231934, -0.000244141, -0.000238037, -0.000231934, 
      -0.00022583, -0.000231934, -0.000262451, -0.000305176, -0.000360107, -0.000415039, -0.00045166, -0.000469971, -0.000469971, -0.000463867, -0.00045166, -0.00045166, -0.000463867, 
      -0.000500488, -0.000543213, -0.000598145, -0.000640869, -0.000665283, -0.00067749, -0.000683594, -0.00067749, -0.00067749, -0.000683594, -0.000714111, -0.000756836, -0.000805664, 
      -0.000848389, -0.000891113, -0.000915527, -0.000927734, -0.000927734, -0.000927734, -0.000933838, -0.000958252, -0.00098877, -0.0010376, -0.00108032, -0.00112305, -0.00114746, 
      -0.00116577, -0.00117188, -0.00117188, -0.00117188, -0.00118408, -0.0012085, -0.00124512, -0.00128174, -0.00132446, -0.00134888, -0.00136719, -0.00137329, -0.00137939, 
      -0.00137939, -0.0013855, -0.00139771, -0.00142212, -0.00145874, -0.00148926, -0.00151978, -0.00153809, -0.00155029, -0.00155029, -0.00155029, -0.00155029, -0.0015564, 
      -0.00157471, -0.00159302, -0.00162354, -0.00164795, -0.00166626, -0.00167847, -0.00167847, -0.00167236, -0.00166626, -0.00166016, -0.00166626, -0.00168457, -0.00170288, 
      -0.00172119, -0.0017334, -0.0017395, -0.00174561, -0.0017395, -0.00172729, -0.00172119, -0.00171509, -0.00171509, -0.0017334, -0.00174561, -0.00175781, -0.00176392, 
      -0.00176392, -0.00175781, -0.00175171, -0.0017395, -0.00172729, -0.00172729, -0.0017334, -0.0017395, -0.00174561, -0.00175171, -0.00175171, -0.00174561, -0.0017395, 
      -0.00172119, -0.00170898, -0.00170288, -0.00170288, -0.00170288, -0.00170898, -0.00170898, -0.00170898, -0.00170288, -0.00169678, -0.00167847, -0.00166626, -0.00165405, 
      -0.00164795, -0.00164185, -0.00164185, -0.00164795, -0.00164795, -0.00164185, -0.00162964, -0.00161743, -0.00160522, -0.00159302, -0.00158081, -0.00157471, -0.00157471, 
      -0.00157471, -0.00157471, -0.00157471, -0.0015625, -0.0015564, -0.00153809, -0.00152588, -0.00151367, -0.00150146, -0.00149536, -0.00149536, -0.00149536, -0.00148926, 
      -0.00148315, -0.00147095, -0.00145874, -0.00144653, -0.00143433, -0.00142212, -0.00141602, -0.00140991, -0.00140381, -0.00140381, -0.00139771, -0.0013916, -0.00137939, 
      -0.00136108, -0.00134888, -0.00133667, -0.00132446, -0.00131836, -0.00131836, -0.00131226, -0.00130615, -0.00129395, -0.00128784, -0.00127563, -0.00126343, -0.00125122, 
      -0.00123901, -0.00122681, -0.0012207, -0.0012146, -0.0012085, -0.00120239, -0.00119019, -0.00118408, -0.00116577, -0.00115356, -0.00114136, -0.00112915, -0.00112305, 
      -0.00111084, -0.00110474, -0.00109863, -0.00108643, -0.00107422, -0.00106201, -0.0010498, -0.0010376, -0.00102539, -0.00101318, -0.00100708, -0.000994873, -0.00098877, 
      -0.000976562, -0.000970459, -0.000952148, -0.000933838, -0.000921631, -0.000909424, -0.000897217, -0.00088501, -0.000872803, -0.000866699, -0.000854492, -0.000842285, -0.000830078, 
      -0.000817871, -0.000799561, -0.00078125, -0.000769043, -0.000756836, -0.000744629, -0.000738525, -0.000726318, -0.000708008, -0.000695801, -0.000683594, -0.000665283, -0.000646973, 
      -0.000634766, -0.000616455, -0.000604248, -0.000592041, -0.000579834, -0.000567627, -0.00055542, -0.000543213, -0.000524902, -0.000506592, -0.000488281, -0.000469971, -0.000457764, 
      -0.000445557, -0.000427246, -0.000415039, -0.0012085, -0.00120239, -0.00119019, -0.00118408, -0.00116577, -0.00115356, -0.00114136, -0.00112915, -0.00112305, -0.00111084, 
      -0.00110474, -0.00109863, -0.00108643, -0.00107422, -0.00106201, -0.0010498, -0.0010376, -0.00102539, -0.00101318, -0.00100708, -0.000994873, -0.00098877, -0.000976562, 
      -0.000970459, -0.000952148, -0.000933838, -0.000921631, -0.000909424, -0.000897217, -0.00088501, -0.000872803, -0.000866699, -0.000854492, -0.000842285, -0.000830078, -0.000817871, 
      -0.000799561, -0.00078125, -0.000769043, -0.000756836, -0.000744629, -0.000738525, -0.000726318, -0.000708008, -0.000695801, -0.000683594, -0.000665283, -0.000646973, -0.000634766, 
      -0.000616455
    }
};


CabDesc_imp<244> cab_data_1x8 = {
244,44100,
{
0.001984
,0.002991
,0.002503
,0.001404
,0.002075
,0.000580
,-0.000488
,0.003693
,-0.003723
,0.001892
,0.139683
,0.468245
,0.796930
,0.837855
,0.536576
,0.106235
,-0.233131
,-0.408521
,-0.435896
,-0.359020
,-0.234901
,-0.112644
,-0.021912
,0.025178
,0.031861
,0.010681
,-0.025025
,-0.062380
,-0.092380
,-0.110141
,-0.114505
,-0.107700
,-0.094668
,-0.079287
,-0.065859
,-0.055635
,-0.050478
,-0.049471
,-0.051485
,-0.055086
,-0.058473
,-0.060213
,-0.059450
,-0.056032
,-0.050600
,-0.043977
,-0.036927
,-0.030732
,-0.025666
,-0.022248
,-0.020356
,-0.019562
,-0.019105
,-0.018586
,-0.017701
,-0.016205
,-0.013947
,-0.011597
,-0.008820
,-0.006348
,-0.004608
,-0.003296
,-0.002869
,-0.003143
,-0.003601
,-0.004364
,-0.005188
,-0.005371
,-0.005402
,-0.005432
,-0.005097
,-0.004913
,-0.004822
,-0.005219
,-0.005676
,-0.006317
,-0.007630
,-0.008789
,-0.009644
,-0.009613
,-0.008942
,-0.008240
,-0.007477
,-0.006836
,-0.006958
,-0.006928
,-0.006531
,-0.006958
,-0.006592
,-0.004517
,-0.008576
,0.000305
,0.085299
,0.262825
,0.417463
,0.409803
,0.238472
,0.023530
,-0.134831
,-0.210211
,-0.213385
,-0.168035
,-0.103305
,-0.042604
,0.000671
,0.021760
,0.023194
,0.011811
,-0.006378
,-0.024659
,-0.038881
,-0.046266
,-0.046480
,-0.041139
,-0.033753
,-0.025330
,-0.018555
,-0.014222
,-0.011780
,-0.011567
,-0.013977
,-0.014252
,-0.017212
,-0.021699
,0.019959
,0.162481
,0.349803
,0.429304
,0.324412
,0.114750
,-0.075564
,-0.188299
,-0.222541
,-0.196539
,-0.138096
,-0.074404
,-0.022889
,0.008148
,0.018067
,0.012329
,-0.002564
,-0.020386
,-0.036225
,-0.046632
,-0.050996
,-0.049043
,-0.043519
,-0.036225
,-0.029328
,-0.023560
,-0.020325
,-0.019074
,-0.019471
,-0.021058
,-0.022980
,-0.024110
,-0.024293
,-0.023438
,-0.021180
,-0.018067
,-0.014893
,-0.011628
,-0.008942
,-0.006958
,-0.005676
,-0.005005
,-0.004578
,-0.004212
,-0.003845
,-0.003113
,-0.002075
,-0.000702
,0.000855
,0.002472
,0.003540
,0.004578
,0.005097
,0.005158
,0.005341
,0.005219
,0.005310
,0.005341
,0.005280
,0.005524
,0.005707
,0.006165
,0.006317
,0.006378
,0.006348
,0.006348
,0.006134
,0.005615
,0.005341
,0.005219
,0.005310
,0.005219
,0.005371
,0.005310
,0.005524
,0.005554
,0.005615
,0.005707
,0.005524
,0.005493
,0.005585
,0.005707
,0.005768
,0.006104
,0.006287
,0.006531
,0.006623
,0.007172
,0.007263
,0.007538
,0.007752
,0.007935
,0.008209
,0.008271
,0.008637
,0.008881
,0.009217
,0.009522
,0.009827
,0.009796
,0.010071
,0.010132
,0.010132
,0.010163
,0.010254
,0.010224
,0.010346
,0.010468
,0.010407
,0.010468
,0.010498
,0.010376
,0.010224
,0.009888
,0.009735
,0.009491
,0.009217
,0.009278
,0.009003
,0.000000
}
};
