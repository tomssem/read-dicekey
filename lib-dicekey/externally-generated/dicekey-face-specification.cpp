////////////////////////////////////////////////////////////
// DiceKey Specification Cpp (NOT TO BE MODIFIED DIRECTLY!)
////////////////////////////////////////////////////////////
//
// This file is generated automatically by the DiceKey
// specification generator, which is written in TypeScript.

#include "dicekey-face-specification.h"
#include <assert.h>

const std::string FaceLetters = "ABCDEFGHIJKLMNOPRSTUVWXYZ";
const std::string FaceDigits = "123456";
const std::string FaceRotationLetters = "trbl";

const FaceSpecification NullFaceSpecification = {'\0', '\0', 0, 0};

namespace FaceDimensionsFractional {
  const std::vector<float> dotCentersAsFractionOfUndoverline = {
    float(0.0967745),
    float(0.1774195),
    float(0.2580645),
    float(0.3387095),
    float(0.41935449999999996),
    float(0.4999995),
    float(0.5806445),
    float(0.6612894999999999),
    float(0.7419344999999999),
    float(0.8225795),
    float(0.9032244999999999),
  };
};

const FaceSpecification letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[150] = {	{'A', '1', 0x7, 0xe9},
	{'A', '2', 0xb, 0xf1},
	{'A', '3', 0xd, 0xe0},
	{'A', '4', 0x16, 0xf2},
	{'A', '5', 0x1a, 0xea},
	{'A', '6', 0x1e, 0xe1},
	{'B', '1', 0x1f, 0xe6},
	{'B', '2', 0x26, 0xc3},
	{'B', '3', 0x27, 0xc4},
	{'B', '4', 0x29, 0xc6},
	{'B', '5', 0x2b, 0xdc},
	{'B', '6', 0x2c, 0xca},
	{'C', '1', 0x2d, 0xcd},
	{'C', '2', 0x2e, 0xd0},
	{'C', '3', 0x31, 0xc9},
	{'C', '4', 0x32, 0xd4},
	{'C', '5', 0x33, 0xd3},
	{'C', '6', 0x34, 0xc5},
	{'D', '1', 0x35, 0xc2},
	{'D', '2', 0x37, 0xd8},
	{'D', '3', 0x39, 0xda},
	{'D', '4', 0x3a, 0xc7},
	{'D', '5', 0x3b, 0xc0},
	{'D', '6', 0x3c, 0xd6},
	{'E', '1', 0x3d, 0xd1},
	{'E', '2', 0x3e, 0xcc},
	{'E', '3', 0x3f, 0xcb},
	{'E', '4', 0x45, 0xa6},
	{'E', '5', 0x47, 0xbc},
	{'E', '6', 0x4a, 0xa3},
	{'F', '1', 0x4b, 0xa4},
	{'F', '2', 0x4c, 0xb2},
	{'F', '3', 0x4d, 0xb5},
	{'F', '4', 0x4e, 0xa8},
	{'F', '5', 0x51, 0xb1},
	{'F', '6', 0x52, 0xac},
	{'G', '1', 0x53, 0xab},
	{'G', '2', 0x55, 0xba},
	{'G', '3', 0x56, 0xa7},
	{'G', '4', 0x57, 0xa0},
	{'G', '5', 0x58, 0xa5},
	{'G', '6', 0x59, 0xa2},
	{'H', '1', 0x5b, 0xb8},
	{'H', '2', 0x5c, 0xae},
	{'H', '3', 0x5d, 0xa9},
	{'H', '4', 0x5e, 0xb4},
	{'H', '5', 0x5f, 0xb3},
	{'H', '6', 0x62, 0x9d},
	{'I', '1', 0x63, 0x9a},
	{'I', '2', 0x64, 0x8c},
	{'I', '3', 0x65, 0x8b},
	{'I', '4', 0x66, 0x96},
	{'I', '5', 0x67, 0x91},
	{'I', '6', 0x68, 0x94},
	{'J', '1', 0x69, 0x93},
	{'J', '2', 0x6a, 0x8e},
	{'J', '3', 0x6b, 0x89},
	{'J', '4', 0x6d, 0x98},
	{'J', '5', 0x6e, 0x85},
	{'J', '6', 0x6f, 0x82},
	{'K', '1', 0x70, 0x9b},
	{'K', '2', 0x71, 0x9c},
	{'K', '3', 0x72, 0x81},
	{'K', '4', 0x73, 0x86},
	{'K', '5', 0x74, 0x90},
	{'K', '6', 0x75, 0x97},
	{'L', '1', 0x76, 0x8a},
	{'L', '2', 0x77, 0x8d},
	{'L', '3', 0x78, 0x88},
	{'L', '4', 0x79, 0x8f},
	{'L', '5', 0x7a, 0x92},
	{'L', '6', 0x7b, 0x95},
	{'M', '1', 0x7c, 0x83},
	{'M', '2', 0x7d, 0x84},
	{'M', '3', 0x7e, 0x99},
	{'M', '4', 0x85, 0x6a},
	{'M', '5', 0x87, 0x70},
	{'M', '6', 0x89, 0x72},
	{'N', '1', 0x8b, 0x68},
	{'N', '2', 0x8d, 0x79},
	{'N', '3', 0x8e, 0x64},
	{'N', '4', 0x8f, 0x63},
	{'N', '5', 0x92, 0x60},
	{'N', '6', 0x93, 0x67},
	{'O', '1', 0x94, 0x71},
	{'O', '2', 0x95, 0x76},
	{'O', '3', 0x96, 0x6b},
	{'O', '4', 0x97, 0x6c},
	{'O', '5', 0x98, 0x69},
	{'O', '6', 0x99, 0x6e},
	{'P', '1', 0x9a, 0x73},
	{'P', '2', 0x9b, 0x74},
	{'P', '3', 0x9c, 0x62},
	{'P', '4', 0x9d, 0x65},
	{'P', '5', 0x9e, 0x78},
	{'P', '6', 0xa1, 0x4c},
	{'R', '1', 0xa2, 0x51},
	{'R', '2', 0xa3, 0x56},
	{'R', '3', 0xa5, 0x47},
	{'R', '4', 0xa6, 0x5a},
	{'R', '5', 0xa7, 0x5d},
	{'R', '6', 0xa8, 0x58},
	{'S', '1', 0xaa, 0x42},
	{'S', '2', 0xab, 0x45},
	{'S', '3', 0xac, 0x53},
	{'S', '4', 0xad, 0x54},
	{'S', '5', 0xae, 0x49},
	{'S', '6', 0xaf, 0x4e},
	{'T', '1', 0xb0, 0x57},
	{'T', '2', 0xb1, 0x50},
	{'T', '3', 0xb2, 0x4d},
	{'T', '4', 0xb3, 0x4a},
	{'T', '5', 0xb4, 0x5c},
	{'T', '6', 0xb5, 0x5b},
	{'U', '1', 0xb6, 0x46},
	{'U', '2', 0xb7, 0x41},
	{'U', '3', 0xb8, 0x44},
	{'U', '4', 0xb9, 0x43},
	{'U', '5', 0xba, 0x5e},
	{'U', '6', 0xbb, 0x59},
	{'V', '1', 0xbc, 0x4f},
	{'V', '2', 0xbd, 0x48},
	{'V', '3', 0xbe, 0x55},
	{'V', '4', 0xc1, 0x34},
	{'V', '5', 0xc2, 0x29},
	{'V', '6', 0xc3, 0x2e},
	{'W', '1', 0xc4, 0x38},
	{'W', '2', 0xc6, 0x22},
	{'W', '3', 0xc7, 0x25},
	{'W', '4', 0xc9, 0x27},
	{'W', '5', 0xca, 0x3a},
	{'W', '6', 0xcb, 0x3d},
	{'X', '1', 0xcc, 0x2b},
	{'X', '2', 0xcd, 0x2c},
	{'X', '3', 0xce, 0x31},
	{'X', '4', 0xcf, 0x36},
	{'X', '5', 0xd0, 0x2f},
	{'X', '6', 0xd1, 0x28},
	{'Y', '1', 0xd2, 0x35},
	{'Y', '2', 0xd3, 0x32},
	{'Y', '3', 0xd4, 0x24},
	{'Y', '4', 0xd5, 0x23},
	{'Y', '5', 0xd6, 0x3e},
	{'Y', '6', 0xd7, 0x39},
	{'Z', '1', 0xd8, 0x3c},
	{'Z', '2', 0xd9, 0x3b},
	{'Z', '3', 0xda, 0x26},
	{'Z', '4', 0xdb, 0x21},
	{'Z', '5', 0xdc, 0x37},
	{'Z', '6', 0xdd, 0x30}
};

const FaceSpecification* underlineCodeToFaceSpecification[256] = {
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[0]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[1]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[2]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[3]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[4]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[5]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[6]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[7]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[8]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[9]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[10]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[11]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[12]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[13]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[14]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[15]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[16]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[17]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[18]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[19]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[20]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[21]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[22]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[23]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[24]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[25]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[26]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[27]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[28]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[29]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[30]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[31]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[32]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[33]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[34]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[35]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[36]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[37]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[38]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[39]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[40]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[41]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[42]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[43]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[44]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[45]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[46]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[47]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[48]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[49]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[50]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[51]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[52]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[53]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[54]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[55]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[56]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[57]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[58]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[59]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[60]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[61]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[62]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[63]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[64]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[65]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[66]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[67]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[68]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[69]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[70]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[71]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[72]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[73]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[74]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[75]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[76]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[77]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[78]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[79]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[80]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[81]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[82]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[83]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[84]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[85]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[86]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[87]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[88]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[89]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[90]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[91]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[92]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[93]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[94]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[95]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[96]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[97]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[98]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[99]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[100]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[101]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[102]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[103]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[104]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[105]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[106]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[107]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[108]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[109]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[110]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[111]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[112]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[113]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[114]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[115]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[116]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[117]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[118]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[119]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[120]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[121]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[122]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[123]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[124]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[125]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[126]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[127]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[128]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[129]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[130]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[131]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[132]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[133]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[134]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[135]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[136]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[137]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[138]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[139]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[140]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[141]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[142]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[143]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[144]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[145]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[146]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[147]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[148]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[149]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification
};

const FaceSpecification* overlineCodeToFaceSpecification[256] = {
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[147]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[127]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[141]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[140]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[128]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[146]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[129]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[137]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[124]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[132]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[133]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[125]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[136]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[149]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[134]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[139]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[123]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[138]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[135]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[148]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[126]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[143]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[130]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[145]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[144]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[131]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[142]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[115]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[102]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[117]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[116]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[103]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[114]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[98]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[121]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[106]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[111]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[95]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[110]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[107]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[120]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[109]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[96]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[104]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[105]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[122]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[97]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[108]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[101]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[119]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[99]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[113]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[112]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[100]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[118]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[82]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[92]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[81]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[80]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[93]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[83]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[78]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[88]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[75]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[86]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[87]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[89]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[76]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[84]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[77]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[90]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[91]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[85]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[94]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[79]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[62]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[59]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[72]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[73]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[58]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[63]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[68]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[56]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[66]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[50]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[49]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[67]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[55]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[69]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[64]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[52]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[70]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[54]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[53]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[71]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[51]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[65]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[57]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[74]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[48]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[60]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[61]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[47]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[39]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[41]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[29]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[30]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[40]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[27]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[38]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[33]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[44]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[36]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[35]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[43]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[34]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[31]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[46]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[45]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[32]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[42]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[37]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[28]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[22]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[18]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[7]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[8]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[17]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[9]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[21]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[14]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[11]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[26]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[25]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[12]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[13]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[24]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[16]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[15]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[23]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[19]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[20]),
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[10]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[2]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[5]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[6]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[0]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[4]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[1]),
	&(letterIndexTimesSixPlusDigitIndexFaceWithUndoverlineCodes[3]),
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification,
	&NullFaceSpecification
};

const FaceSpecification* decodeUndoverlineByte(bool isOverline, unsigned char letterDigitEncodingByte) {
  return isOverline ?
		overlineCodeToFaceSpecification[letterDigitEncodingByte] :
		underlineCodeToFaceSpecification[letterDigitEncodingByte];
}
