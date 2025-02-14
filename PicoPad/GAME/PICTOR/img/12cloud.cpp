#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 35 pixels
// image height: 29 lines
// image pitch: 35 bytes
const u16 CloudImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xF81F, 0xFFFF, 0xEF3C, 0xFFBE, 0xF79E, 0xEF5D, 0xFFDF, 0xDEBC, 0xE71C, 0xDEDC, 0xD67B, 0xD69C, 0xEF7E, 0xF7BF, 0xEF7E, 0xC63B, 
	0xC61A, 0xE71D, 0xBE1B, 0xCE9C, 0xCE7B, 0xC65B, 0xCE7C, 0xC65A, 0xEF7E, 0xE75D, 0xC67B, 0xCE9C, 0xC65B, 0xBE1A, 0xCE9C, 0xCE9C, 
	0xCE9C, 0xF79E, 0xF79E, 0xBE1A, 0xC65B, 0xC65B, 0xCE9C, 0xEF5E, 0xB61B, 0xB5FB, 0xB61B, 0xBE1B, 0xBE5B, 0xC67B, 0xD6FD, 0xB61B, 
	0xADDA, 0xBE3B, 0xB5FA, 0xB61B, 0xB61B, 0xB5FA, 0xB5FA, 0xBE1A, 0xBE3B, 0xC69C, 0xCE9C, 0xD6DC, 0xE73E, 0xEF7E, 0xEF7E, 0xF7BF, 
	0xFFFF, 0xFFDF, 0xF7DF, 0xF7BF, 0xF7BE, 0xF79E, 0xB61B, 0xBE3B, 0xC67B, 0xC65B, 0xBE3A, 0xCE9C, 0xC67C, 0xC65B, 0xC67B, 0xD6DD, 
	0xDF3E, 0xDF1D, 0xDF1D, 0xE73E, 0xEF7E, 0xE75D, 0xE73D, 0xB5FA, 0xADB9, 0xBE5B, 0xBE3A, 0xD6FD, 0xD6DC, 0xDF1D, 0xDEFD, 0xE75E, 
	0xE73D, 0xDF1D, 0xF79F, 0xEF9E, 0xEF7E, 0xEF7E, 0xBE3B, 0xC67B, 0xC67B, 0xCEDC, 0xC67B, 0xCEBC, 0xCE9B, 0xC67B, 0xCEBC, 0xCEBC, 
	0xD71D, 0xDF1D, 0xD6DC, 0xF7BF, 0xEF9E, 0xEF9E, 0xEF7E, 0xBE5B, 0xCEBC, 0xB5F9, 0xCE9C, 0xDF1D, 0xEF9F, 0xE75E, 0xE73D, 0xCE9B, 
	0xE75E, 0xF7BF, 0xEF9E, 0xE77E, 0xEF9F, 0xE77E, 0xEF9E, 0xEF7E, 0xE75D, 0xCE7A, 0xFFDF, 0xF7BF, 0xF7BE, 0xD6DB, 0xF7BE, 0xF79E, 
	0xF7BF, 0xA577, 0xADB7, 0xDF3D, 0xF7BF, 0xF7BE, 0xE75D, 0x9D76, 0xBE39, 0xDF1C, 0xEF9E, 0xB5F8, 0xAE19, 0x9514, 0xE75D, 0x8CF4, 
	0xE77D, 0xA555, 0xA555, 0x8CD3, 0xB5D7, 0xFFFF, 0xFFDF, 0xF79E, 0xEF9E, 0xF7BE, 0xF7BE, 0xF7BE, 0xF79E, 0x8CB2, 0xEFBE, 0xAD95, 
	0xF7BE, 0xF7BE, 0xC638, 0x9D13, 0x94F3, 0xA534, 0x8C91, 0xFFFF, 0xFFDF, 0xFFDF, 0xFFFF, 0xF7DE, 0x8C70, 0x94D2, 0x9CF2, 0x94B1, 
	0x8C6F, 0xFFFE, 0xFFFF, 0xFFDF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFDE, 0xF7BE, 0x9470, 0x9490, 0x8C70, 0xFFDE, 0x946F, 0x9CB1, 
	0x946F, 0x9CB0, 0x946F, 0x9CD1, 0xA513, 0x944E, 0x944F, 0xFFDE, 0xFFFF, 0xFFBE, 0xF7BE, 0xFFBD, 0xFFBE, 0xFF5C, 0xFFDE, 0xFF3B, 
	0xFED9, 0xFEFA, 0xE637, 0xEE99, 0xE594, 0xBCB1, 0x7A06, 0x8A26, 0xF75C, 0x6984, 0xABCE, 0xD5D6, 0xE658, 0xFF9E, 0xF77D, 0x8227, 
	0xCCB1, 0xEEFB, 0xFF9E, 0xB40F, 0xFE58, 0xFE9A, 0xF73C, 0x7A69, 0x2000, 0x934D, 0xF6FB, 0xFFDF, 0xFFFF, 0xFFFF, 0xFFDF, 0xFFDF, 
};

const u8 CloudImg[1015] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0xB5, 0xA4, 0xB2, 
	0xAF, 0xBD, 0xD5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB4, 0x7F, 0xBA, 
	0x01, 0x01, 0xC4, 0x01, 0x01, 0x8D, 0x9D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x89, 
	0x01, 0xC4, 0x01, 0x01, 0xFD, 0xBA, 0xB7, 0xC7, 0x01, 0x01, 0x8D, 0xBC, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xC0, 0xB1, 0x01, 0x01, 0x01, 0xC6, 0xFE, 0xFF, 0xA9, 0x22, 0x74, 0x95, 0x63, 0x04, 0x05, 0xCC, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x96, 0x01, 0x01, 0xC5, 0xC7, 0xFF, 0xBB, 0xAB, 0x65, 0x56, 0x60, 0x55, 0x61, 
	0x7A, 0x08, 0x77, 0xCE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xB3, 0x01, 0x01, 0xFD, 0xB8, 0xAA, 0x45, 0x18, 0x88, 0x56, 0x88, 
	0x3E, 0x65, 0x53, 0x51, 0x3D, 0xFC, 0x0D, 0x89, 0xB4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x01, 0xC6, 0xB8, 0xB9, 0x8F, 0x22, 0x8C, 
	0x94, 0x42, 0xBA, 0xC4, 0xC6, 0xA5, 0xC4, 0xC4, 0x01, 0x01, 0xC4, 0xC2, 0x97, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCA, 0x9B, 0x99, 0xDA, 0xC3, 0xC3, 0xC7, 0xFD, 
	0xC4, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB7, 0xA6, 0x43, 0x42, 0xFE, 0x8B, 0x80, 0xEE, 
	0xA3, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB6, 0xC7, 0x01, 0xC4, 0xD7, 0xC6, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0xEE, 0x01, 0x01, 0x8A, 0x81, 0x82, 
	0x3D, 0x53, 0x0D, 0xC4, 0x8A, 0x9E, 0xA4, 0xCA, 0x00, 0x00, 0x00, 0x00, 0xCC, 0x01, 0x01, 0xC7, 
	0xBB, 0xC6, 0xFB, 0xE3, 0xE4, 0xEC, 0xFD, 0x01, 0x01, 0x01, 0x01, 0xC4, 0xF6, 0xF0, 0xF0, 0xEB, 
	0x03, 0x8A, 0x63, 0x7E, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0xDE, 0xAD, 0x00, 0x00, 0xBD, 0x98, 
	0x01, 0xC6, 0xBB, 0xC5, 0x01, 0xED, 0xE2, 0xE3, 0xF2, 0x01, 0x01, 0x01, 0x01, 0xC5, 0xC7, 0xC4, 
	0x01, 0xF1, 0xEC, 0xED, 0xFE, 0x43, 0x8B, 0x01, 0xC4, 0x40, 0x41, 0xFF, 0x80, 0x0C, 0x05, 0xCC, 
	0x00, 0x9B, 0x9A, 0xC4, 0xC8, 0xFE, 0x01, 0xFD, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xC5, 
	0xC3, 0xB8, 0xC3, 0xC7, 0x01, 0x01, 0xA5, 0xB9, 0x43, 0x8E, 0xFE, 0x42, 0x3D, 0x3D, 0x81, 0x53, 
	0x70, 0x05, 0x92, 0x00, 0x89, 0xC8, 0xD8, 0xB9, 0x01, 0xFD, 0xC5, 0x01, 0x01, 0x01, 0xC4, 0xC4, 
	0xC5, 0xC6, 0xC3, 0xB9, 0xB9, 0xBB, 0x01, 0x01, 0x01, 0xBB, 0xA9, 0xA9, 0x8F, 0x44, 0x8B, 0x3E, 
	0x73, 0x41, 0x62, 0x5B, 0x5C, 0x20, 0xCE, 0xA1, 0x99, 0xC2, 0xFF, 0x01, 0xC6, 0xC4, 0xFB, 0xF3, 
	0xE2, 0xFD, 0xFD, 0xC6, 0x01, 0xC4, 0xC8, 0xB9, 0xC6, 0xEB, 0xF9, 0xF1, 0xFE, 0xC8, 0x44, 0x45, 
	0x74, 0x63, 0x40, 0x01, 0x62, 0x5E, 0x4C, 0x1F, 0x0A, 0xB6, 0xCC, 0xA1, 0x01, 0xB8, 0xC6, 0xBA, 
	0x01, 0xEA, 0xF8, 0xE7, 0x01, 0x01, 0x01, 0xA6, 0xC7, 0x01, 0x01, 0xD8, 0xE9, 0xF8, 0xEF, 0x01, 
	0xBB, 0xAC, 0x45, 0x18, 0x56, 0x3E, 0x3E, 0x5B, 0x48, 0x26, 0x1A, 0x0A, 0xB6, 0x00, 0xD6, 0x93, 
	0xC2, 0xC3, 0xCD, 0xC7, 0xEB, 0xF7, 0xEB, 0x01, 0x02, 0xEC, 0xE6, 0xE5, 0xF1, 0xEE, 0xC4, 0xE5, 
	0xE9, 0xE5, 0xFD, 0xAE, 0xA8, 0x0E, 0x76, 0x52, 0x3B, 0x3B, 0x24, 0x24, 0x25, 0x12, 0x13, 0xCE, 
	0x00, 0x00, 0x9F, 0xC2, 0xDB, 0xDF, 0xE1, 0xBA, 0xC5, 0x01, 0xBA, 0xF6, 0xEB, 0xE3, 0xEB, 0xEB, 
	0xEE, 0xFE, 0xC4, 0xC4, 0xDC, 0xE1, 0xFA, 0x05, 0x76, 0x19, 0x61, 0x6C, 0x24, 0x2B, 0x2B, 0x23, 
	0x0B, 0x9D, 0x00, 0x00, 0x00, 0x9C, 0xC1, 0xDD, 0xE0, 0xE0, 0xE1, 0xD9, 0xB7, 0xB8, 0x01, 0xFD, 
	0xFD, 0x01, 0x01, 0x01, 0xA9, 0xB0, 0xDF, 0xF4, 0xF4, 0xF4, 0xFA, 0xA0, 0x18, 0x73, 0x64, 0x4F, 
	0x26, 0x2C, 0x0F, 0x58, 0x00, 0x00, 0x00, 0xD1, 0xA6, 0xCD, 0xDB, 0xDF, 0xE1, 0xDD, 0xDA, 0xB9, 
	0xB9, 0xC3, 0xC6, 0xC6, 0xC6, 0xC7, 0xB9, 0xC9, 0xAB, 0xE8, 0xF5, 0xF5, 0xF5, 0x02, 0x94, 0x01, 
	0x01, 0xC4, 0x62, 0x3C, 0x5D, 0x1B, 0x1C, 0xAD, 0x00, 0x00, 0xBD, 0x06, 0x3F, 0x8B, 0xA7, 0xDA, 
	0xBB, 0xC9, 0xC9, 0xBB, 0xBB, 0xC8, 0xC8, 0xC8, 0x44, 0x76, 0x0E, 0xAC, 0x45, 0xA8, 0x0E, 0x27, 
	0x90, 0x01, 0xC4, 0x43, 0x3D, 0x53, 0x4B, 0x4F, 0x50, 0x09, 0x2A, 0x00, 0x00, 0xAD, 0xDE, 0x5D, 
	0x7D, 0x7C, 0x90, 0xB9, 0x21, 0x75, 0x22, 0xAB, 0xAC, 0xA8, 0x65, 0x65, 0x5E, 0x72, 0x18, 0x18, 
	0x87, 0x7C, 0x84, 0x40, 0xC6, 0x8C, 0x86, 0x7D, 0x5B, 0x59, 0x2C, 0x2E, 0x16, 0x57, 0x00, 0x00, 
	0xD0, 0x5D, 0x5D, 0x71, 0x85, 0x7E, 0x51, 0x83, 0x5F, 0x80, 0x74, 0x3E, 0x27, 0x55, 0x61, 0x6C, 
	0x4D, 0x3B, 0x53, 0x64, 0x54, 0x80, 0x54, 0x86, 0x7D, 0x7B, 0x78, 0x47, 0x33, 0x31, 0x31, 0xD4, 
	0x00, 0x00, 0x00, 0x00, 0x79, 0x11, 0x69, 0x39, 0x4C, 0x2C, 0x4B, 0x5B, 0x5C, 0x52, 0x55, 0x60, 
	0x3B, 0x6D, 0x23, 0x1D, 0x1A, 0x54, 0x62, 0x5F, 0x7B, 0x6F, 0x6E, 0x4F, 0x39, 0x66, 0x46, 0x29, 
	0x29, 0xD3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB6, 0x09, 0x0B, 0x1E, 0x39, 0x2C, 0x2B, 0x49, 0x67, 
	0x68, 0x6C, 0x4E, 0x38, 0x37, 0x36, 0x37, 0x6F, 0x5F, 0x53, 0x71, 0x6B, 0x5A, 0x32, 0x2B, 0x33, 
	0x29, 0x46, 0x29, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9F, 0x07, 0x0A, 0x12, 0x38, 
	0x15, 0x14, 0x89, 0x1C, 0x37, 0x57, 0x57, 0x36, 0x10, 0x1D, 0x38, 0x2D, 0x2D, 0x38, 0x57, 0x58, 
	0x30, 0x34, 0x2A, 0x31, 0x47, 0x2F, 0x2A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAD, 
	0x79, 0x1A, 0x2C, 0x79, 0x92, 0x91, 0x98, 0x09, 0x14, 0x17, 0x4D, 0x58, 0x14, 0x4A, 0x37, 0x35, 
	0x57, 0x57, 0x32, 0x32, 0x59, 0x48, 0x47, 0x28, 0x58, 0xD4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xCE, 0xD6, 0x00, 0x00, 0x00, 0x00, 0xCF, 0xA2, 0xA2, 0xBF, 0x00, 0x97, 
	0xB2, 0x14, 0x4A, 0x66, 0x5A, 0x23, 0x25, 0x4C, 0x3A, 0x2D, 0x9B, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x9D, 0xB2, 0x6A, 0x48, 0x59, 0x79, 0xB4, 0xBF, 0xA1, 0x91, 0xD2, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBE, 0xAF, 0xA4, 0x92, 0xB3, 0x00, 0x00, 0xD0, 0xCB, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
