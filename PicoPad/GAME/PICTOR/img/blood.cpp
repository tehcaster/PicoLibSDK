#include "../include.h"

// format: 4-bit paletted pixel graphics
// image width: 16 pixels
// image height: 16 lines
// image pitch: 8 bytes
const u16 BloodImg_Pal[6] __attribute__ ((aligned(4))) = {
	0xF81F, 0xF920, 0xF9C3, 0xF800, 0xC800, 0x0000, 
};

const u8 BloodImg[128] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x44, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x34, 0x04, 0x40, 0x00, 
	0x00, 0x00, 0x44, 0x13, 0x13, 0x04, 0x04, 0x00, 0x40, 0x44, 0x30, 0x20, 0x21, 0x33, 0x04, 0x00, 
	0x04, 0x30, 0x01, 0x21, 0x01, 0x10, 0x33, 0x40, 0x00, 0x41, 0x00, 0x21, 0x21, 0x02, 0x10, 0x40, 
	0x04, 0x03, 0x21, 0x11, 0x31, 0x11, 0x13, 0x04, 0x04, 0x30, 0x10, 0x11, 0x11, 0x01, 0x03, 0x44, 
	0x30, 0x31, 0x11, 0x13, 0x31, 0x10, 0x10, 0x34, 0x04, 0x00, 0x10, 0x12, 0x11, 0x02, 0x10, 0x30, 
	0x00, 0x41, 0x11, 0x10, 0x22, 0x10, 0x13, 0x00, 0x40, 0x43, 0x01, 0x11, 0x10, 0x12, 0x34, 0x34, 
	0x00, 0x04, 0x03, 0x01, 0x11, 0x00, 0x03, 0x00, 0x04, 0x00, 0x44, 0x33, 0x01, 0x44, 0x33, 0x40, 
	0x00, 0x00, 0x00, 0x44, 0x00, 0x40, 0x30, 0x00, 0x00, 0x00, 0x40, 0x30, 0x04, 0x00, 0x04, 0x00, 
};