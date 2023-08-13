#include "include.h"

// sound format: PCM mono 8-bit 22050Hz
const u8 Tone1Snd[739] = {
	0x7F, 0x81, 0x7F, 0x80, 0x7E, 0x81, 0x7F, 0x81, 0x7E, 0x80, 0x7E, 0x81, 0x80, 0x7F, 0x7F, 0x7F, 
	0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7E, 0x82, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7E, 0x80, 0x7F, 0x81, 
	0x7F, 0x81, 0x7E, 0x7D, 0x7E, 0x87, 0x9A, 0xA8, 0xB8, 0xC4, 0xCD, 0xD4, 0xD6, 0xD5, 0xD5, 0xD4, 
	0xD5, 0xD6, 0xD1, 0xC2, 0xB2, 0xA0, 0x92, 0x87, 0x7E, 0x76, 0x6F, 0x69, 0x68, 0x63, 0x61, 0x5E, 
	0x5E, 0x5E, 0x5B, 0x5B, 0x5A, 0x5A, 0x5E, 0x5D, 0x60, 0x5F, 0x61, 0x60, 0x5E, 0x60, 0x6D, 0x84, 
	0x9F, 0xB1, 0xBE, 0xC8, 0xCD, 0xCF, 0xD0, 0xD2, 0xD2, 0xD6, 0xD4, 0xCB, 0xB7, 0xA2, 0x90, 0x80, 
	0x74, 0x6B, 0x65, 0x5E, 0x5C, 0x56, 0x57, 0x54, 0x52, 0x54, 0x52, 0x53, 0x52, 0x51, 0x52, 0x55, 
	0x58, 0x57, 0x59, 0x5C, 0x58, 0x57, 0x5D, 0x6E, 0x88, 0x9F, 0xB3, 0xC0, 0xC8, 0xCF, 0xCD, 0xCF, 
	0xD0, 0xD2, 0xD4, 0xD1, 0xC4, 0xAC, 0x97, 0x85, 0x78, 0x6C, 0x62, 0x5D, 0x5A, 0x56, 0x55, 0x52, 
	0x53, 0x52, 0x52, 0x52, 0x51, 0x51, 0x51, 0x53, 0x56, 0x56, 0x59, 0x5B, 0x5A, 0x57, 0x57, 0x63, 
	0x7A, 0x91, 0xA7, 0xB6, 0xC2, 0xCA, 0xCC, 0xCE, 0xCF, 0xD0, 0xD4, 0xD4, 0xCD, 0xB8, 0xA2, 0x8D, 
	0x7D, 0x71, 0x67, 0x5F, 0x5B, 0x57, 0x55, 0x52, 0x52, 0x51, 0x51, 0x52, 0x52, 0x50, 0x51, 0x52, 
	0x54, 0x57, 0x57, 0x5A, 0x5C, 0x5D, 0x5D, 0x5D, 0x5C, 0x5E, 0x60, 0x63, 0x63, 0x66, 0x64, 0x64, 
	0x62, 0x6A, 0x79, 0x7E, 0x85, 0x93, 0xA6, 0xB4, 0xC1, 0xCB, 0xD2, 0xD6, 0xD6, 0xD5, 0xD3, 0xD5, 
	0xD7, 0xD3, 0xC7, 0xB5, 0xA4, 0x95, 0x8A, 0x81, 0x77, 0x70, 0x6B, 0x68, 0x63, 0x62, 0x60, 0x5E, 
	0x5E, 0x5B, 0x5C, 0x5A, 0x59, 0x5D, 0x5E, 0x5F, 0x5F, 0x61, 0x61, 0x5D, 0x5F, 0x69, 0x7E, 0x97, 
	0xAE, 0xBB, 0xC6, 0xCC, 0xCF, 0xCF, 0xD2, 0xD2, 0xD5, 0xD5, 0xCD, 0xBE, 0xA7, 0x94, 0x84, 0x78, 
	0x6C, 0x66, 0x60, 0x5C, 0x59, 0x55, 0x55, 0x53, 0x53, 0x52, 0x54, 0x52, 0x50, 0x52, 0x56, 0x55, 
	0x59, 0x59, 0x5A, 0x5A, 0x56, 0x5B, 0x68, 0x82, 0x9A, 0xAE, 0xBD, 0xC6, 0xCD, 0xCF, 0xCE, 0xD0, 
	0xD0, 0xD4, 0xD4, 0xC7, 0xB3, 0x9C, 0x89, 0x7B, 0x6D, 0x66, 0x5F, 0x5A, 0x57, 0x55, 0x53, 0x53, 
	0x52, 0x51, 0x52, 0x51, 0x52, 0x51, 0x53, 0x54, 0x57, 0x58, 0x59, 0x5C, 0x57, 0x57, 0x5F, 0x73, 
	0x8B, 0xA2, 0xB3, 0xC0, 0xC7, 0xCD, 0xCE, 0xCE, 0xD0, 0xD2, 0xD4, 0xD0, 0xC0, 0xA5, 0x93, 0x80, 
	0x74, 0x6A, 0x61, 0x5B, 0x58, 0x56, 0x52, 0x52, 0x52, 0x50, 0x51, 0x53, 0x51, 0x51, 0x51, 0x54, 
	0x56, 0x57, 0x58, 0x5C, 0x5D, 0x5E, 0x5C, 0x5C, 0x5E, 0x5E, 0x62, 0x64, 0x66, 0x65, 0x64, 0x62, 
	0x63, 0x6C, 0x7A, 0x80, 0x87, 0x95, 0xA8, 0xB8, 0xC3, 0xCD, 0xD3, 0xD5, 0xD6, 0xD4, 0xD5, 0xD4, 
	0xD7, 0xD1, 0xC4, 0xB3, 0xA1, 0x93, 0x88, 0x7E, 0x76, 0x70, 0x6A, 0x68, 0x63, 0x61, 0x5F, 0x5E, 
	0x5D, 0x5C, 0x5B, 0x5B, 0x5A, 0x5C, 0x5E, 0x5F, 0x60, 0x60, 0x61, 0x5D, 0x60, 0x6B, 0x83, 0x9C, 
	0xAF, 0xBF, 0xC6, 0xCD, 0xD0, 0xD0, 0xD2, 0xD2, 0xD4, 0xD5, 0xCC, 0xB9, 0xA4, 0x91, 0x81, 0x76, 
	0x6B, 0x65, 0x5E, 0x5C, 0x59, 0x54, 0x55, 0x53, 0x53, 0x52, 0x55, 0x50, 0x52, 0x52, 0x55, 0x56, 
	0x58, 0x5A, 0x5B, 0x59, 0x56, 0x5C, 0x6D, 0x86, 0x9D, 0xB1, 0xBF, 0xC9, 0xCD, 0xCF, 0xCE, 0xCF, 
	0xD2, 0xD5, 0xD3, 0xC3, 0xAF, 0x99, 0x86, 0x78, 0x6C, 0x64, 0x5D, 0x5A, 0x57, 0x54, 0x53, 0x52, 
	0x52, 0x53, 0x51, 0x51, 0x52, 0x51, 0x53, 0x56, 0x56, 0x58, 0x5B, 0x5A, 0x57, 0x57, 0x62, 0x78, 
	0x90, 0xA4, 0xB5, 0xC1, 0xC9, 0xCE, 0xCD, 0xCE, 0xD0, 0xD4, 0xD5, 0xCE, 0xB9, 0xA3, 0x8F, 0x7F, 
	0x71, 0x68, 0x60, 0x5B, 0x58, 0x54, 0x53, 0x51, 0x52, 0x50, 0x53, 0x50, 0x52, 0x52, 0x51, 0x54, 
	0x56, 0x57, 0x59, 0x5D, 0x5D, 0x5C, 0x5E, 0x5D, 0x5D, 0x5F, 0x62, 0x64, 0x66, 0x64, 0x63, 0x68, 
	0x73, 0x7E, 0x82, 0x90, 0xA0, 0xB0, 0xBE, 0xC8, 0xD2, 0xD5, 0xD6, 0xD6, 0xD4, 0xD2, 0xD7, 0xD4, 
	0xCC, 0xBB, 0xA9, 0x99, 0x8B, 0x83, 0x7A, 0x72, 0x6C, 0x69, 0x65, 0x63, 0x60, 0x5D, 0x5E, 0x5C, 
	0x5C, 0x5A, 0x5A, 0x5B, 0x5E, 0x5E, 0x5F, 0x61, 0x61, 0x5E, 0x5F, 0x64, 0x78, 0x90, 0xA8, 0xB8, 
	0xC4, 0xCB, 0xCF, 0xD0, 0xD0, 0xD1, 0xD4, 0xD6, 0xD1, 0xC3, 0xAD, 0x98, 0x88, 0x7B, 0x70, 0x68, 
	0x61, 0x5B, 0x5B, 0x55, 0x56, 0x53, 0x54, 0x52, 0x53, 0x52, 0x50, 0x54, 0x53, 0x56, 0x58, 0x59, 
	0x5A, 0x58, 0x58, 0x59, 0x63, 0x7C, 0x93, 0xA8, 0xBA, 0xC4, 0xCB, 0xD0, 0xCE, 0xCE, 0xD2, 0xD3, 
	0xD4, 0xCC, 0xB8, 0xA3, 0x8D, 0x7F, 0x70, 0x68, 0x60, 0x5B, 0x58, 0x56, 0x53, 0x53, 0x52, 0x52, 
	0x52, 0x52, 0x50, 0x52, 0x52, 0x55, 0x55, 0x57, 0x5A, 0x5B, 0x58, 0x57, 0x5B, 0x6D, 0x86, 0x9B, 
	0xAF, 0xBC, 0xC5, 0xCC, 0xCF, 0xCE, 0xCE, 0xD1, 0xD6, 0xD2, 0xC4, 0xAE, 0x97, 0x84, 0x78, 0x6B, 
	0x64, 0x5C, 0x5A, 0x56, 0x54, 0x51, 0x52, 0x50, 0x52, 0x51, 0x52, 0x52, 0x51, 0x52, 0x55, 0x58, 
	0x57, 0x5B, 0x5D, 0x5E, 0x5D, 0x5C, 0x5C, 0x5F, 0x61, 0x64, 0x64, 0x66, 0x63, 0x65, 0x64, 0x63, 
	0x63, 0x61, 0x65, 
};