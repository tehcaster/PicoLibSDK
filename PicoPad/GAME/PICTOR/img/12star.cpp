#include "../include.h"

// format: 8-bit paletted pixel graphics
// image width: 35 pixels
// image height: 32 lines
// image pitch: 35 bytes
const u16 StarImg_Pal[256] __attribute__ ((aligned(4))) = {
	0xF81F, 0xFFFF, 0x9451, 0xB555, 0xD679, 0xE6FC, 0xEF5D, 0xF79E, 0xEF5D, 0xE73D, 0xE77E, 0xF7BE, 0xF7BE, 0xEF9E, 0xE75D, 0xF79E, 
	0xFFFF, 0xFFFF, 0xFFDF, 0xF79E, 0xEF7D, 0xDF3C, 0xD6FB, 0xFFFF, 0xFFDF, 0xFFFF, 0xE75C, 0xEF9D, 0xDF3B, 0xCE98, 0xFFFD, 0xF7DC, 
	0xD699, 0xD6D7, 0xCEB7, 0xD6B8, 0xD6F7, 0xD6B7, 0xC676, 0xD6D7, 0xE739, 0xCEB5, 0xD6D7, 0xD6D8, 0xEF9B, 0xFFFE, 0xD6D6, 0xD6B6, 
	0xC653, 0xC634, 0xE790, 0xDF14, 0xCEB3, 0xD6D4, 0xE735, 0xDF16, 0xDEF7, 0xE771, 0xD6F0, 0xDF13, 0xCEA9, 0xDF0C, 0xD6CF, 0xE752, 
	0xCE91, 0xE734, 0xE754, 0xE734, 0xC632, 0xE736, 0xD6E7, 0xD6C8, 0xDF09, 0xCE8B, 0xF7CE, 0xE74E, 0xEF91, 0xEF71, 0xEF73, 0xEF74, 
	0xEF95, 0xE755, 0xF7D7, 0xE723, 0xE723, 0xE744, 0xE746, 0xD6A6, 0xE727, 0xDF07, 0xEF67, 0xDEE7, 0xD6A7, 0xF7A8, 0xEF69, 0xF7CB, 
	0xFFEE, 0xF7D3, 0xE732, 0xE703, 0xEF43, 0xE724, 0xEF64, 0xD6A4, 0xEF45, 0xEF25, 0xF7A6, 0xD665, 0xEF66, 0xF7A6, 0xF7A7, 0xE726, 
	0xE747, 0xF787, 0xF787, 0xF788, 0xFFC9, 0xFFC9, 0xFFC9, 0xFFEA, 0xFFCA, 0xFFCA, 0xFFEA, 0xFFAA, 0xF76A, 0xFFEB, 0xEF4A, 0xFFEB, 
	0xFFCB, 0xFFEC, 0xFFEC, 0xF7AC, 0xD6AA, 0xFFED, 0xF7AD, 0xF7AE, 0xFFCE, 0xFFEF, 0xFFCF, 0xFFCF, 0xF7AF, 0xEF4F, 0xF7B0, 0xF792, 
	0xEF72, 0xF7B5, 0xE734, 0xF7B9, 0xFFFF, 0xFFFF, 0xFFDF, 0xF79D, 0xFFFF, 0xE6C0, 0xE6C1, 0xDEA1, 0xD661, 0xDEA1, 0xEF01, 0xE6E1, 
	0xDEA1, 0xD681, 0xE6E2, 0xE702, 0xDEC2, 0xDEA2, 0xE703, 0xEF23, 0xF784, 0xE6E4, 0xF765, 0xF786, 0xFF86, 0xF786, 0xF767, 0xD666, 
	0xFFA7, 0xF787, 0xFFA8, 0xF788, 0xFFA9, 0xFFA9, 0xFFCA, 0xFFCA, 0xFFCA, 0xFFAA, 0xFFAA, 0xFFCA, 0xFFAB, 0xFFCB, 0xF78B, 0xFFCB, 
	0xFFCB, 0xFFCB, 0xFFCC, 0xFFCC, 0xFFCC, 0xFFAC, 0xFFCC, 0xFFAC, 0xFF8D, 0xFFCE, 0xFFCE, 0xFFAE, 0xFFCF, 0xFFDB, 0xE6E1, 0xEEE1, 
	0xEF22, 0xF78A, 0xFFAB, 0xFFAC, 0xFF8C, 0xFFAC, 0xFFAC, 0xFFAC, 0xFFAD, 0xFFAD, 0xFFAD, 0xFFCE, 0xFFCE, 0xFFCE, 0xFFAF, 0xFF8F, 
	0xFF8F, 0xFF8D, 0xFFAD, 0xFF8D, 0xFF6D, 0xFFAE, 0xFFAE, 0xFFAF, 0xFFAF, 0xFFB0, 0xE696, 0xF79E, 0xFFDE, 0xF7BE, 0xEF5C, 0xE71B, 
	0xC5D6, 0xCE38, 0x4985, 0xC596, 0xFF9D, 0x9BAE, 0x7B2C, 0x30A2, 0xAC51, 0xF5F7, 0xFE79, 0xACF3, 0xC5D7, 0xF75D, 0xF7BE, 0xF7BE, 
};

const u8 StarImg[1120] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x8A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D, 0x80, 0xC9, 0x4E, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4D, 0xBD, 0xD9, 0xDB, 0x2B, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x80, 0xBF, 
	0xE2, 0xE5, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x4D, 0x7A, 0xC0, 0xDE, 0xE7, 0xDB, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x23, 0x5F, 0x77, 0xC2, 0xE9, 0xE9, 0xDC, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x79, 0xBB, 0xC7, 0x8D, 0xE4, 0xE7, 0xCA, 0x42, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x5F, 0x75, 0xC4, 0x1F, 0x01, 0x91, 0xE3, 0xE6, 
	0x89, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x75, 0xBB, 0x93, 0x11, 0x01, 
	0x01, 0x8F, 0xE6, 0xCA, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2B, 0x37, 0x4E, 0x88, 0x78, 0xB7, 0x61, 
	0x10, 0x01, 0x01, 0x01, 0x94, 0xDF, 0xDE, 0xC9, 0x36, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x36, 0x4C, 0x60, 0x85, 0x82, 0x81, 0xC1, 0xBD, 
	0xB9, 0x88, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0xCD, 0xD4, 0xE2, 0xDA, 0xDC, 0xCC, 0x8F, 0x37, 
	0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x7C, 0x7B, 0x74, 0x77, 0xB6, 0xBD, 0xC1, 
	0xB8, 0x8B, 0x52, 0x2D, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x2D, 0x91, 0xCB, 0xD6, 
	0xE5, 0xE2, 0xD9, 0xDB, 0xDD, 0x8E, 0x43, 0x25, 0x00, 0x00, 0x00, 0x00, 0x3A, 0x70, 0x6C, 0xAB, 
	0xB0, 0xBC, 0x61, 0x1E, 0x10, 0x17, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x93, 0xC8, 0xE1, 0xE8, 0xE6, 0xDA, 0xD9, 0xD8, 0xC6, 0x83, 0x21, 0x00, 0x00, 0x00, 
	0x3A, 0x59, 0x65, 0x64, 0xB4, 0x1A, 0x0B, 0x18, 0x12, 0x19, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x19, 0xC8, 0xD3, 0xBC, 0xB9, 0xB4, 0x73, 0x5E, 0x22, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x34, 0x5B, 0x65, 0x66, 0x8D, 0x15, 0x07, 0x0B, 0x03, 0xF6, 0x04, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0xFB, 0xFB, 0xED, 0x98, 0x12, 0x2C, 0xB9, 0xB2, 0x71, 0x72, 0x5A, 0x3D, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x5B, 0x54, 0x6E, 0x33, 0x09, 0x07, 0xF6, 
	0xF7, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0xF2, 0xF7, 0xFC, 0x18, 0x1B, 0x86, 0xB0, 0xAE, 0x6C, 
	0x56, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x46, 0x54, 0x71, 
	0x24, 0xEF, 0xF9, 0xF8, 0x97, 0x12, 0x98, 0x94, 0x98, 0x95, 0xF0, 0xF5, 0xFD, 0x97, 0x8C, 0xAD, 
	0x68, 0x69, 0x58, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x26, 0x47, 0x63, 0x72, 0xEA, 0xF9, 0xFA, 0xEC, 0xEF, 0x18, 0xF0, 0x94, 0xEE, 0xF4, 0xF9, 0xF9, 
	0xE0, 0xAD, 0x66, 0x55, 0x48, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x29, 0x6F, 0x6D, 0x45, 0x06, 0xEB, 0xED, 0x06, 0xF3, 0xF1, 0xF3, 0xEF, 
	0x96, 0xF4, 0x93, 0xBC, 0xB5, 0x6C, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0x5E, 0x76, 0x1A, 0x07, 0x13, 0x13, 0x97, 0x14, 
	0x14, 0x97, 0xED, 0xFE, 0x96, 0x94, 0xC5, 0xD7, 0x81, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x5D, 0x87, 0x0A, 0x0C, 0x13, 
	0x14, 0x0E, 0x1C, 0x45, 0x16, 0x09, 0x14, 0xFF, 0x98, 0x8E, 0xD7, 0x82, 0x41, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4B, 0x6E, 0x90, 
	0x0D, 0x07, 0x08, 0x15, 0x4F, 0xBA, 0x68, 0xBE, 0x41, 0x16, 0x0E, 0xFE, 0x91, 0xD5, 0x82, 0x4A, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x7E, 0x6A, 0x92, 0x0A, 0x15, 0x51, 0xC5, 0xB1, 0x68, 0xA2, 0xA3, 0xAA, 0xD1, 0x62, 0x28, 0x50, 
	0xD5, 0xC3, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1D, 0x5E, 0xA8, 0x8D, 0x4D, 0xBA, 0xAA, 0xA7, 0xA6, 0xA4, 0x9C, 0x9B, 0x9A, 0xA3, 
	0x64, 0xAC, 0xB2, 0xD2, 0xC2, 0x81, 0x2A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x5A, 0xA8, 0xD0, 0x9E, 0xCE, 0x9F, 0xA4, 0x5C, 0x44, 0x00, 
	0x31, 0xAF, 0x9D, 0x99, 0x99, 0x9E, 0xAA, 0xBF, 0x7F, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2E, 0x6F, 0xCF, 0x99, 0xA0, 0xA5, 0x57, 0x30, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x6B, 0xA1, 0x9D, 0x9A, 0xAE, 0x7D, 0x39, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0xA9, 0xA5, 0x67, 0x3C, 
	0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x49, 0x67, 0xA4, 0xB3, 0x32, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x47, 
	0x40, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x30, 0x84, 0x4B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};