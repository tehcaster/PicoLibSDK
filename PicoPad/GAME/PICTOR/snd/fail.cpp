#include "include.h"

// sound format: Intel IMA ADPCM mono 4-bit 22050Hz
const u16 FailSnd_SampBlock = 1017; // number of samples per block

const u8 FailSnd[2480] = {
	0x00, 0x01, 0x00, 0x00, 0xF7, 0xF7, 0x5C, 0x80, 0xD0, 0x80, 0x80, 0xB4, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0xB7, 0x08, 0x08, 0x08, 0x08, 0x80, 0xB7, 0x08, 0x70, 0xD6, 0x91, 0x08, 0x82, 0xB0, 0x48, 
	0xC0, 0xB7, 0x80, 0x08, 0x80, 0xA2, 0xC3, 0x03, 0x1F, 0x98, 0x82, 0x80, 0x80, 0x0C, 0x3C, 0xC3, 
	0x4B, 0xB2, 0x00, 0x08, 0xC4, 0x4B, 0x38, 0x4B, 0x08, 0x08, 0x3F, 0x08, 0x08, 0xB4, 0x08, 0x08, 
	0x68, 0x0B, 0x3C, 0x08, 0x08, 0xB5, 0xAF, 0x94, 0x48, 0x89, 0x82, 0x22, 0x1D, 0x20, 0x2A, 0x0B, 
	0x08, 0x97, 0xAA, 0x83, 0x97, 0x08, 0x8A, 0x83, 0x80, 0x1F, 0x80, 0x95, 0x1C, 0x29, 0x28, 0xD8, 
	0x30, 0x80, 0x0D, 0xA1, 0x05, 0xC1, 0x89, 0x14, 0xA9, 0x20, 0x8A, 0xB3, 0xF3, 0xC3, 0x21, 0x1C, 
	0x89, 0x62, 0x0C, 0x88, 0x80, 0x82, 0x8A, 0x30, 0x08, 0x08, 0x8D, 0x27, 0x1C, 0x29, 0x2A, 0xA2, 
	0x1F, 0x21, 0x9A, 0x08, 0x38, 0x7B, 0xAB, 0x40, 0x80, 0x2A, 0x4D, 0x08, 0xAA, 0x32, 0x0E, 0xA3, 
	0xA0, 0x85, 0xA0, 0x38, 0x0E, 0x15, 0x0E, 0x81, 0x98, 0x01, 0x0A, 0x10, 0x0A, 0x02, 0x8B, 0xB4, 
	0x8B, 0x04, 0x08, 0x3D, 0x08, 0xB4, 0x0C, 0x33, 0x1F, 0x20, 0xE8, 0x21, 0x9A, 0x58, 0x89, 0x80, 
	0x80, 0x80, 0xB8, 0x84, 0x80, 0x70, 0x0B, 0x88, 0x80, 0x50, 0x1F, 0x30, 0x0C, 0x48, 0xA9, 0x22, 
	0xFA, 0x86, 0x0A, 0x14, 0xBA, 0x0C, 0x32, 0x03, 0xCF, 0x41, 0x20, 0xB0, 0xAF, 0x52, 0x90, 0xAA, 
	0x11, 0xB0, 0xCF, 0x19, 0xB1, 0xDF, 0x28, 0x26, 0x21, 0x23, 0x98, 0xB9, 0x1B, 0x37, 0xBA, 0x8A, 
	0x31, 0x06, 0xFC, 0x28, 0x03, 0xBA, 0x19, 0x04, 0xEB, 0x0A, 0x03, 0xA9, 0x99, 0x10, 0xA0, 0x8C, 
	0x00, 0x88, 0x80, 0x80, 0x80, 0x00, 0x88, 0x73, 0x27, 0x58, 0x37, 0x00, 0x08, 0x88, 0x80, 0x00, 
	0x88, 0x80, 0xFF, 0x09, 0xB1, 0x8C, 0x00, 0x88, 0x00, 0x89, 0x73, 0x83, 0x41, 0x03, 0x88, 0x01, 
	0x98, 0x81, 0xFB, 0xAC, 0xC9, 0x8B, 0x00, 0x09, 0x08, 0x78, 0x37, 0x01, 0x08, 0x88, 0x00, 0x90, 
	0x00, 0xF8, 0xAF, 0x88, 0x80, 0x00, 0x88, 0x00, 0x88, 0x66, 0x03, 0x88, 0x00, 0x88, 0x00, 0xBA, 
	0xAA, 0xDE, 0x89, 0x08, 0x08, 0x80, 0x50, 0x25, 0x01, 0x21, 0x01, 0x08, 0x88, 0x00, 0xF8, 0xCF, 
	0x08, 0x98, 0x88, 0x00, 0x12, 0x10, 0x73, 0x23, 0x08, 0x00, 0x08, 0xA8, 0xAB, 0x90, 0xEF, 0x9B, 
	0x10, 0x98, 0x8B, 0x52, 0x13, 0x00, 0x62, 0x33, 0x90, 0x1A, 0x23, 0xF9, 0xAB, 0x88, 0xE9, 0xBB, 
	0x18, 0x91, 0x0B, 0x52, 0x14, 0x00, 0x62, 0x14, 0x90, 0x10, 0x02, 0xDA, 0x9B, 0x99, 0xEA, 0xBB, 
	0x19, 0x90, 0xAA, 0x63, 0x24, 0x01, 0x52, 0x34, 0x80, 0x08, 0x12, 0xDB, 0xAC, 0x99, 0xDB, 0xAC, 
	0x18, 0x80, 0x89, 0x52, 0x14, 0x11, 0x42, 0x23, 0x91, 0x08, 0x81, 0xFB, 0xBB, 0x89, 0xDB, 0xAC, 
	0x10, 0x81, 0x08, 0x53, 0x33, 0x11, 0x43, 0x23, 0xB8, 0xAA, 0xB2, 0xDE, 0x9C, 0x80, 0xA9, 0x8B, 
	0x42, 0x83, 0x10, 0x45, 0x03, 0xA0, 0x08, 0x83, 0xCC, 0x8C, 0x00, 0xC8, 0x8C, 0x42, 0x02, 0x29, 
	0x54, 0x02, 0x89, 0x21, 0x90, 0xBE, 0x0B, 0xC9, 0xFA, 0x0A, 0x11, 0xA9, 0x19, 0x36, 0x01, 0x29, 
	0x63, 0x01, 0x9A, 0x10, 0x80, 0xCF, 0x89, 0x81, 0xBA, 0x99, 0x52, 0x90, 0x90, 0x26, 0x12, 0x08, 
	0x41, 0x80, 0x9A, 0x00, 0xC8, 0xAD, 0x10, 0x81, 0xBB, 0x7B, 0x23, 0xD8, 0x19, 0x33, 0xC0, 0x8D, 
	0x10, 0xC9, 0xAB, 0x10, 0x11, 0x99, 0x22, 0x37, 0x85, 0x20, 0x12, 0x82, 0xA1, 0xC0, 0xB9, 0x9F, 
	0x98, 0xA8, 0xA8, 0x22, 0x06, 0x11, 0x62, 0x23, 0x89, 0x8C, 0x04, 0xEB, 0xAB, 0x19, 0xB0, 0xAE, 
	0x00, 0xE4, 0x39, 0x00, 0x32, 0x21, 0x09, 0x72, 0x24, 0x80, 0x08, 0x01, 0xC0, 0x9E, 0x9B, 0x99, 
	0x8A, 0x8C, 0x19, 0x31, 0x51, 0x61, 0x41, 0x11, 0x23, 0x98, 0x1B, 0xA2, 0xDE, 0x8C, 0x08, 0xB8, 
	0x9A, 0x53, 0x02, 0x98, 0x37, 0x13, 0xA0, 0x18, 0x85, 0xA0, 0x9C, 0x90, 0xAA, 0xBB, 0xB9, 0x13, 
	0x98, 0xA2, 0x27, 0x80, 0x18, 0x97, 0x98, 0x29, 0x91, 0xBD, 0x0A, 0x52, 0xE9, 0x8A, 0x43, 0xA8, 
	0x8B, 0x61, 0xA0, 0x9D, 0x21, 0x92, 0xBA, 0x22, 0x16, 0x09, 0x30, 0x06, 0x01, 0x19, 0x22, 0xBA, 
	0xD9, 0x92, 0xF9, 0xA8, 0x19, 0xA2, 0xB9, 0x79, 0x24, 0xB9, 0x2B, 0x36, 0xBA, 0x8C, 0x43, 0xB0, 
	0x9D, 0x32, 0x22, 0xAC, 0x61, 0x02, 0x9A, 0x31, 0x84, 0xEB, 0x08, 0x82, 0xEB, 0x8A, 0x00, 0x8A, 
	0x9C, 0x42, 0x84, 0x80, 0x78, 0x12, 0xA9, 0x39, 0x14, 0xE9, 0x9A, 0x12, 0xCA, 0x9A, 0x15, 0xA8, 
	0x3A, 0x44, 0x92, 0x99, 0x45, 0x91, 0xCA, 0x10, 0x81, 0xCC, 0x89, 0x10, 0xCA, 0x8A, 0x53, 0x80, 
	0x2B, 0x54, 0x82, 0x89, 0x41, 0x84, 0xBB, 0x29, 0x83, 0xDF, 0x09, 0x02, 0xC9, 0x19, 0x25, 0x88, 
	0x2A, 0x35, 0x90, 0x99, 0x24, 0xA0, 0xBB, 0x12, 0x0A, 0xBF, 0x00, 0x01, 0xAB, 0x30, 0x44, 0xA2, 
	0xA9, 0x46, 0xA1, 0x8C, 0x10, 0xA1, 0xBD, 0x18, 0x93, 0x9D, 0x4A, 0x22, 0xA8, 0x30, 0x36, 0x8A, 
	0x09, 0x63, 0xA8, 0x9B, 0x21, 0xA9, 0x8E, 0x20, 0x99, 0x91, 0x19, 0x16, 0x80, 0x18, 0x07, 0x82, 
	0xC8, 0x20, 0x82, 0x9F, 0x18, 0x01, 0xEA, 0x18, 0x02, 0x99, 0x1A, 0x43, 0xD9, 0x0C, 0x10, 0xD8, 
	0xAB, 0x0B, 0x80, 0xDE, 0x19, 0x82, 0xB8, 0x1A, 0x74, 0x00, 0x89, 0x34, 0x83, 0x9A, 0x41, 0xA3, 
	0xCC, 0x19, 0x02, 0xBF, 0x28, 0x22, 0xAC, 0x48, 0x15, 0xA8, 0x10, 0x16, 0x98, 0x8A, 0x22, 0xA9, 
	0xAE, 0x48, 0x90, 0xDA, 0x38, 0x32, 0xAB, 0x3B, 0x27, 0xA8, 0x2B, 0x33, 0xC0, 0x8E, 0x22, 0x98, 
	0x8E, 0x41, 0x80, 0x9B, 0x62, 0x92, 0xA9, 0x31, 0x04, 0xDB, 0x10, 0x13, 0xDB, 0x1A, 0x14, 0xA8, 
	0x8A, 0x34, 0x80, 0x8C, 0x78, 0x91, 0x9A, 0x00, 0xA2, 0xFB, 0x80, 0x81, 0xAB, 0x29, 0x23, 0xF0, 
	0x00, 0x34, 0x99, 0x0B, 0x53, 0xC0, 0xBA, 0x33, 0xD0, 0x0C, 0x29, 0x92, 0x8C, 0x21, 0x15, 0x01, 
	0x11, 0x25, 0x91, 0xA1, 0x93, 0x8B, 0xAB, 0xBA, 0xB0, 0x0F, 0x81, 0x80, 0x00, 0x86, 0x82, 0x02, 
	0x80, 0x8B, 0x0C, 0xF8, 0x9C, 0x0E, 0xB9, 0x98, 0x2D, 0x81, 0xA9, 0x11, 0x27, 0xCA, 0x12, 0x23, 
	0xDA, 0x2B, 0x41, 0xC0, 0x9B, 0x62, 0xA0, 0xBA, 0x35, 0x93, 0xA8, 0x14, 0x13, 0x9B, 0x89, 0x07, 
	0xD8, 0x88, 0x22, 0xA9, 0x0D, 0x63, 0xA0, 0x89, 0x53, 0x92, 0xB9, 0x78, 0x81, 0xBB, 0x29, 0xA4, 
	0xDB, 0x2A, 0x30, 0xF0, 0x89, 0x13, 0xB2, 0x0D, 0x41, 0x90, 0x9B, 0x30, 0x02, 0x9F, 0x10, 0x93, 
	0xC0, 0x39, 0x07, 0xA8, 0x88, 0x24, 0xB0, 0xAA, 0x42, 0xB1, 0xCC, 0x13, 0x02, 0xAD, 0x21, 0x04, 
	0xA9, 0x1A, 0x07, 0xB0, 0x99, 0x13, 0x98, 0x9F, 0x20, 0x94, 0xA9, 0x50, 0x04, 0xB8, 0x21, 0x84, 
	0xC0, 0x1B, 0x83, 0xF0, 0x9B, 0x22, 0xE1, 0xA9, 0x32, 0x81, 0xCA, 0x42, 0x23, 0xEA, 0x20, 0x83, 
	0xEA, 0x08, 0x30, 0xE8, 0x89, 0x21, 0xB3, 0x9B, 0x15, 0x96, 0xA9, 0x21, 0x83, 0xAC, 0x18, 0x14, 
	0xCB, 0x0A, 0x15, 0xBA, 0x0A, 0x44, 0xB0, 0x89, 0x43, 0x89, 0x9F, 0x11, 0xC2, 0x8A, 0x48, 0x82, 
	0xC8, 0x22, 0x34, 0x9B, 0x18, 0x27, 0xA9, 0x8B, 0x23, 0xE8, 0x9B, 0x23, 0xA2, 0xDB, 0x62, 0x02, 
	0x99, 0x41, 0x12, 0x9C, 0x09, 0x84, 0xBB, 0x0D, 0x11, 0xEA, 0x0A, 0x21, 0x88, 0x1E, 0x23, 0x02, 
	0x00, 0x04, 0x31, 0x00, 0x8A, 0x53, 0xA0, 0x8E, 0x01, 0xB1, 0xBB, 0x80, 0x05, 0x9B, 0x29, 0x27, 
	0x8A, 0x4B, 0x13, 0xB1, 0x3B, 0x14, 0xB1, 0xFA, 0x33, 0x10, 0xAE, 0x12, 0x03, 0xBB, 0x08, 0x07, 
	0x98, 0x1D, 0x30, 0x9A, 0x8D, 0x48, 0xA1, 0xAB, 0x32, 0x24, 0x0E, 0x3A, 0x42, 0xE9, 0x29, 0x20, 
	0xB9, 0x8B, 0x05, 0xB1, 0x0F, 0x21, 0xB1, 0x9A, 0x43, 0x93, 0xEA, 0x20, 0x12, 0xDB, 0x2A, 0x33, 
	0xEA, 0x89, 0x42, 0xB8, 0x9A, 0x34, 0x12, 0x9F, 0x31, 0x82, 0x9C, 0x48, 0x11, 0xCA, 0x08, 0x04, 
	0xC8, 0x19, 0x42, 0xA9, 0x8A, 0x26, 0xB0, 0x9B, 0x73, 0x91, 0x9C, 0x21, 0x92, 0xAA, 0x40, 0x22, 
	0xBA, 0x2E, 0x05, 0xB8, 0x1A, 0x68, 0xC0, 0x9A, 0x31, 0xA0, 0xCB, 0x30, 0x83, 0x9F, 0x19, 0x22, 
	0xE0, 0x00, 0x06, 0x98, 0x09, 0x22, 0xB9, 0x8A, 0x61, 0xB0, 0xB8, 0x30, 0x13, 0xAF, 0x59, 0x11, 
	0xB8, 0x19, 0x24, 0xB0, 0xB9, 0x07, 0x91, 0xBA, 0x60, 0x80, 0x9B, 0x49, 0xA2, 0x9C, 0x4A, 0x11, 
	0xF9, 0x10, 0x13, 0xA9, 0x2A, 0x25, 0x98, 0x9A, 0x15, 0xA0, 0xC9, 0x10, 0x03, 0x9F, 0x00, 0x32, 
	0xDA, 0x01, 0x04, 0x91, 0x3A, 0x41, 0x89, 0xD9, 0x41, 0x9B, 0xDA, 0x38, 0xC0, 0xBA, 0x68, 0x91, 
	0x99, 0x38, 0x22, 0xD2, 0x48, 0x10, 0xAA, 0xA0, 0x08, 0xC3, 0xF0, 0x93, 0x21, 0x1D, 0x40, 0x11, 
	0xA0, 0x22, 0x33, 0xB8, 0xBC, 0x17, 0xC9, 0x98, 0x08, 0xF2, 0xA0, 0x81, 0xC2, 0x21, 0x58, 0x89, 
	0x80, 0x02, 0xB8, 0xF3, 0x08, 0x1C, 0x89, 0x20, 0x1E, 0x20, 0x08, 0x0B, 0x16, 0x80, 0x1C, 0x20, 
	0xB0, 0xE8, 0x08, 0xA2, 0xB8, 0x5F, 0x1A, 0xB1, 0x39, 0x10, 0xA2, 0xB0, 0x83, 0xB7, 0xA2, 0x80, 
	0xB6, 0x98, 0x6B, 0x02, 0xA9, 0x2A, 0x07, 0xE1, 0x00, 0x11, 0x9A, 0x09, 0x68, 0x90, 0x1C, 0x38, 
	0xA1, 0x0B, 0x78, 0x81, 0xC9, 0x80, 0x51, 0xBA, 0x18, 0x61, 0x9A, 0x88, 0x30, 0x0C, 0x2D, 0x29, 
	0xA2, 0x80, 0x20, 0xB7, 0xB1, 0x30, 0xA2, 0x9D, 0x28, 0xB4, 0xE1, 0x19, 0x13, 0x89, 0x3E, 0x83, 
	0x91, 0x91, 0x58, 0xA0, 0xD2, 0xA0, 0xB4, 0xA0, 0xAA, 0x32, 0x9F, 0x09, 0x05, 0x1B, 0x89, 0x17, 
	0x0A, 0x80, 0x50, 0x8A, 0xA2, 0x10, 0xA0, 0x2A, 0x7B, 0x19, 0x89, 0x7A, 0x10, 0x19, 0x39, 0x5C, 
	0x09, 0x19, 0x80, 0xB6, 0x98, 0x10, 0x80, 0x5A, 0x2B, 0x8A, 0x80, 0xB0, 0x03, 0x78, 0x0B, 0xB2, 
	0x97, 0x8B, 0x82, 0x80, 0xBB, 0x4B, 0x78, 0xE9, 0x80, 0x20, 0xC0, 0x90, 0x83, 0xA2, 0xB0, 0x80, 
	0x84, 0xF0, 0x4A, 0x48, 0x9B, 0x19, 0x82, 0xB3, 0x9E, 0x05, 0xA1, 0x99, 0x14, 0xA2, 0x1D, 0x69, 
	0x82, 0xBA, 0x21, 0x34, 0x0E, 0x2B, 0x02, 0xE1, 0x89, 0x32, 0xD8, 0x88, 0x31, 0xD1, 0x1A, 0x18, 
	0x30, 0x9E, 0x10, 0x83, 0xF9, 0x28, 0x10, 0x99, 0x1C, 0x52, 0x8A, 0xB9, 0x25, 0x91, 0x9B, 0x12, 
	0xA7, 0x98, 0x18, 0x84, 0xB9, 0x08, 0x24, 0xDA, 0x1C, 0x12, 0xC4, 0x9A, 0x69, 0x08, 0x0A, 0x49, 
	0x21, 0x9B, 0x80, 0x42, 0xCB, 0x3D, 0x81, 0x90, 0x2E, 0x01, 0x91, 0x80, 0x20, 0x85, 0x8D, 0x10, 
	0x23, 0xAE, 0x19, 0x11, 0xA9, 0x2D, 0x48, 0x91, 0xBC, 0x17, 0xA2, 0x09, 0x69, 0x00, 0xA9, 0x5A, 
	0x80, 0xC8, 0x80, 0x92, 0xC1, 0x2C, 0x22, 0x09, 0x8B, 0x5A, 0xA3, 0xAB, 0x52, 0x10, 0xBC, 0x7A, 
	0x08, 0xA9, 0x19, 0x23, 0xC8, 0x8C, 0x24, 0x90, 0x9C, 0x43, 0xA3, 0xF9, 0x11, 0x93, 0xD9, 0x28, 
	0x04, 0xA9, 0x3A, 0x24, 0xAA, 0x89, 0x27, 0xA9, 0x08, 0x68, 0x88, 0x8C, 0x31, 0x08, 0xAC, 0x38, 
	0x40, 0xAB, 0x3C, 0x60, 0x9A, 0x09, 0x13, 0xD0, 0x99, 0x21, 0xA7, 0x8B, 0x10, 0x21, 0x9C, 0xC8, 
	0x00, 0x01, 0x2D, 0x00, 0xA0, 0xAA, 0x32, 0x06, 0xCA, 0x39, 0x70, 0x8B, 0x3A, 0x92, 0xC2, 0x2A, 
	0x38, 0x88, 0xCA, 0x16, 0x30, 0x8F, 0x08, 0x94, 0x8A, 0x10, 0x49, 0x9A, 0xD0, 0x83, 0xB4, 0x2C, 
	0x01, 0xA1, 0x9C, 0x78, 0x08, 0xB8, 0x81, 0x23, 0xFA, 0x00, 0x83, 0x80, 0x8D, 0x14, 0xA0, 0x09, 
	0x01, 0x94, 0x0F, 0x10, 0xB3, 0xA9, 0x1B, 0x95, 0xB8, 0x28, 0x07, 0xC2, 0x00, 0x31, 0x99, 0x9D, 
	0x33, 0xE2, 0x98, 0x50, 0x08, 0xAB, 0x83, 0xB4, 0xA0, 0x28, 0x00, 0x08, 0x1F, 0x28, 0xD0, 0x0C, 
	0x31, 0x82, 0x8F, 0x40, 0x19, 0x9A, 0x48, 0x11, 0xC9, 0x28, 0x01, 0xD2, 0x89, 0x42, 0x89, 0xAA, 
	0x72, 0xB1, 0x89, 0x42, 0x49, 0x9D, 0x18, 0x03, 0x9C, 0xA0, 0x04, 0xC8, 0x8B, 0x04, 0x01, 0x8F, 
	0x02, 0xA3, 0x9B, 0x78, 0x81, 0xC9, 0x20, 0x13, 0x9E, 0x18, 0x21, 0xD9, 0x80, 0x33, 0x0A, 0x2F, 
	0x59, 0x08, 0x09, 0x18, 0x30, 0x0E, 0x08, 0x92, 0xB1, 0x1C, 0x82, 0xD4, 0x2B, 0x30, 0xA8, 0x0C, 
	0x53, 0xC2, 0xC8, 0x13, 0x93, 0xAB, 0x38, 0x17, 0xBC, 0x39, 0x22, 0x9A, 0x1F, 0x31, 0x99, 0x9A, 
	0x71, 0x88, 0x8A, 0x11, 0xA2, 0x9C, 0x21, 0x02, 0xFB, 0x30, 0x08, 0xA2, 0x0B, 0x83, 0xC0, 0xB3, 
	0x03, 0x3D, 0x4B, 0xB8, 0x84, 0x80, 0x80, 0xE0, 0x83, 0x4B, 0x08, 0x08, 0x08, 0x6F, 0x1B, 0x00, 
	0x08, 0x88, 0x80, 0x00, 0x88, 0x00, 0x3F, 0x3C, 0xF4, 0x91, 0x01, 0x80, 0x3D, 0x80, 0x0A, 0x02, 
	0x08, 0x3C, 0xC0, 0x83, 0xD0, 0x03, 0x08, 0x3D, 0x80, 0x80, 0xD8, 0xB4, 0x83, 0x4B, 0xC8, 0x84, 
	0xC0, 0x83, 0x4B, 0x08, 0x08, 0xC8, 0x84, 0x3F, 0x80, 0x2A, 0x80, 0xC0, 0x03, 0x08, 0xD8, 0xB3, 
	0x58, 0x08, 0x3C, 0x3B, 0xC0, 0xC3, 0x03, 0xC8, 0xB4, 0x03, 0x3D, 0x08, 0x08, 0x08, 0x3F, 0xB0, 
	0xC3, 0x03, 0x88, 0x80, 0x00, 0x88, 0x00, 0x08, 0xF8, 0xC7, 0x82, 0x2A, 0x80, 0x4B, 0xF8, 0xA3, 
	0x02, 0x80, 0x08, 0x80, 0xD8, 0x84, 0xF0, 0x83, 0xA0, 0x02, 0x08, 0x3F, 0xA8, 0x02, 0x80, 0x80, 
	0x3F, 0x08, 0xB0, 0x83, 0x4B, 0xF8, 0xA3, 0xB5, 0x91, 0x82, 0xB0, 0x83, 0x80, 0x80, 0x80, 0x80, 
	0xF0, 0x83, 0x80, 0x4D, 0x08, 0x3C, 0x08, 0x3C, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF0, 0x83, 0x80, 
	0xF0, 0x83, 0x80, 0x4D, 0x3B, 0x3C, 0xC0, 0x60, 0x1B, 0x3A, 0x08, 0x08, 0xC8, 0xC3, 0xB3, 0x84, 
	0x00, 0x88, 0x00, 0x88, 0x3F, 0x80, 0x80, 0x80, 0x3F, 0x3B, 0x00, 0xE8, 0xB3, 0x84, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x08, 0x80, 0x3F, 0xF8, 0x03, 0x3D, 0x80, 0x80, 0x80, 0x3E, 0x3F, 0xC2, 0xA1, 
	0xA2, 0x83, 0x80, 0x3C, 0x80, 0x3C, 0x80, 0x4C, 0x08, 0x3C, 0x3B, 0x80, 0x3F, 0x80, 0x4B, 0x08, 
	0x08, 0xC8, 0x03, 0x08, 0x08, 0x3F, 0x7B, 0x1B, 0x80, 0x00, 0x88, 0x00, 0x3D, 0xB8, 0xB4, 0x03, 
	0x08, 0x08, 0x3F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3F, 0x3D, 0x80, 0x80, 0x80, 0xF0, 0xC3, 
	0x03, 0x08, 0xD8, 0x03, 0x08, 0x08, 0x3F, 0xB8, 0x84, 0x4B, 0x08, 0x08, 0xD8, 0x84, 0xC0, 0x83, 
	0xC0, 0x03, 0x08, 0x3D, 0xD0, 0x83, 0xC0, 0x03, 0x08, 0x08, 0x08, 0x3F, 0x08, 0x3C, 0x80, 0x80, 
	0x08, 0x3F, 0x08, 0x3C, 0x80, 0x80, 0xE0, 0x03, 0x3C, 0x08, 0x08, 0x08, 0xF8, 0x03, 0x08, 0x08, 
	0x3E, 0x3C, 0x80, 0x3C, 0x4B, 0x08, 0x3C, 0x3B, 0x4C, 0xB8, 0xB7, 0x82, 0xB0, 0x83, 0xF0, 0x83, 
	0xA0, 0x02, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x03, 0x3C, 0x08, 0x08, 0x08, 0xF0, 0x83, 0xD0, 0x03, 
	0x08, 0x3D, 0xB8, 0x84, 0x80, 0x4C, 0x08, 0x08, 0xD8, 0x03, 0x3C, 0x4B, 0x08, 0x08, 0x3D, 0x3C, 
	0x00, 0x00, 0x26, 0x00, 0x80, 0xC8, 0x84, 0x4B, 0x08, 0x3C, 0x08, 0xC8, 0x84, 0x80, 0x80, 0x80, 
	0x80, 0x3F, 0x80, 0x80, 0x08, 0x80, 0x3F, 0x80, 0x08, 0x3E, 0x4B, 0x3C, 0x08, 0xB8, 0x84, 0x80, 
	0xD0, 0x03, 0x3D, 0x3B, 0x00, 0xD8, 0xC3, 0x03, 0xD0, 0xB3, 0xB7, 0x01, 0x2A, 0x80, 0x80, 0xD0, 
	0x03, 0x08, 0x08, 0xE8, 0x03, 0xC8, 0x48, 0x80, 0x80, 0x3D, 0xC0, 0x03, 0x08, 0x3D, 0x80, 0x80, 
	0xE8, 0x03, 0x3C, 0x4B, 0xB8, 0x84, 0x80, 0x80, 0x80, 0x80, 0x08, 0x80, 0xF8, 0x6A, 0xC0, 0x83, 
	0x3F, 0x80, 0x80, 0x4B, 0x08, 0x08, 0x3C, 0x3F, 0x08, 0x08, 0x3B, 0x80, 0x4C, 0xB8, 0x84, 0x80, 
	0xC0, 0x83, 0x80, 0x80, 0x3E, 0x80, 0x4C, 0x08, 0x3C, 0x08, 0x3C, 0x80, 0x3C, 0xC0, 0x03, 0x08, 
	0xE8, 0x03, 0x3C, 0x80, 0x3C, 0x3C, 0x7B, 0x2B, 0x08, 0x08, 0x08, 0x08, 0x08, 0xE8, 0x03, 0x3D, 
	0x4B, 0x3B, 0x3C, 0x4B, 0xB8, 0xF4, 0x84, 0x98, 0x91, 0x01, 0x08, 0x08, 0x08, 0x3C, 0x80, 0x3C, 
	0x80, 0x80, 0x80, 0x3F, 0xC0, 0xC3, 0x03, 0x08, 0x08, 0x3E, 0x80, 0xC8, 0x84, 0x80, 0x80, 0x80, 
	0x3E, 0x4B, 0x08, 0x08, 0x08, 0x3E, 0x3C, 0x80, 0x80, 0x80, 0x80, 0x3F, 0x80, 0x3C, 0x80, 0xE0, 
	0x03, 0x08, 0x08, 0x08, 0xF8, 0x03, 0x3C, 0x08, 0x3D, 0x80, 0x80, 0x3D, 0x80, 0x80, 0x80, 0x3E, 
	0x80, 0xD0, 0x03, 0x3D, 0x80, 0x80, 0x80, 0xF0, 0x83, 0xC0, 0x03, 0x88, 0x4C, 0x08, 0x5F, 0x99, 
	0x91, 0x48, 0x89, 0x29, 0x08, 0x3B, 0x08, 0xC8, 0x84, 0x80, 0x3C, 0x80, 0x00, 0x88, 0x3F, 0xC0, 
	0x03, 0x3C, 0x3C, 0x3B, 0x80, 0x00, 0xF8, 0xB3, 0x03, 0x08, 0x08, 0xF8, 0x03, 0x3C, 0x80, 0x3C, 
	0x80, 0x80, 0xF0, 0x83, 0x80, 0x4C, 0xB8, 0x03, 0xD0, 0x83, 0x80, 0x4C, 0x08, 0x08, 0x08, 0x08, 
	0xF8, 0xC3, 0x03, 0x08, 0x08, 0x08, 0x3F, 0x08, 0xC8, 0x84, 0x80, 0xD0, 0xC3, 0xB7, 0x01, 0x08, 
	0x80, 0x08, 0x3B, 0x80, 0x4C, 0x08, 0x3C, 0x08, 0x08, 0x80, 0x3F, 0x3B, 0x80, 0x3D, 0xC0, 0xB3, 
	0x84, 0xC0, 0x03, 0x3C, 0x08, 0x08, 0x08, 0xF8, 0x03, 0x08, 0x08, 0xF8, 0x03, 0x08, 0x0D, 0x83, 
	0x80, 0xE0, 0xB3, 0x03, 0xD8, 0xB3, 0xB7, 0x82, 0x80, 0x80, 0x80, 0x3C, 0x4B, 0x08, 0x3C, 0xD0, 
	0xB3, 0x03, 0x3C, 0xD0, 0x03, 0x08, 0x08, 0x08, 0xF8, 0x03, 0x88, 0xD0, 0x03, 0x3D, 0x3B, 0x4B, 
	0xB8, 0x84, 0x80, 0x4C, 0x3C, 0x08, 0x08, 0x80, 0xE8, 0x03, 0x80, 0x3D, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x9F, 0x05, 0x08, 0x3D, 0xB8, 0xB4, 0x03, 0x3D, 0x80, 0x3C, 0x80, 0xD0, 0x03, 0x3C, 0x08, 
	0x08, 0x08, 0x3F, 0x08, 0x3C, 0x3F, 0x80, 0x80, 0xB0, 0x83, 0x80, 0xE0, 0xB3, 0x03, 0x80, 0x08, 
	0x3F, 0xB8, 0x84, 0x80, 0xD0, 0xB3, 0x84, 0x4B, 0x08, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x3D, 0x80, 
	0x3D, 0x4B, 0x3B, 0xD0, 0xB3, 0x03, 0x80, 0x3D, 0x0C, 0xB7, 0x01, 0x80, 0x80, 0xB8, 0x84, 0x80, 
	0x80, 0x4D, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3F, 0x08, 0x08, 0xF8, 0xC3, 0x03, 0x3C, 0x0B, 
};