#include "include.h"

// sound format: Intel IMA ADPCM mono 4-bit 22050Hz
const u16 GlassSnd_SampBlock = 1017; // number of samples per block

const u8 GlassSnd[3856] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x5F, 0xF0, 0x83, 0x3D, 0x4B, 0xFC, 0x7A, 0xB6, 0x4D, 0x80, 
	0x9B, 0x17, 0x0D, 0x92, 0x49, 0x89, 0x19, 0x2E, 0xC7, 0x90, 0x41, 0xD8, 0x81, 0x11, 0xB9, 0x03, 
	0x39, 0xD0, 0x4A, 0xB2, 0x5B, 0x00, 0xC9, 0x93, 0xA1, 0x70, 0xD0, 0x39, 0x91, 0x3C, 0xC1, 0x13, 
	0x8B, 0x1A, 0x50, 0x0A, 0xC5, 0x91, 0x98, 0x31, 0x7C, 0xB9, 0x20, 0xB1, 0x21, 0x0C, 0x78, 0x8A, 
	0x1A, 0x12, 0xA9, 0xB2, 0x83, 0xE6, 0x91, 0x38, 0xB1, 0xA1, 0x4A, 0x80, 0x6D, 0x3A, 0xC9, 0x80, 
	0x95, 0x00, 0x2B, 0x09, 0xB2, 0xA7, 0x18, 0x2B, 0x6A, 0x1A, 0xC0, 0x02, 0x19, 0x3B, 0xB3, 0x3D, 
	0xF3, 0x91, 0xA3, 0x89, 0xA6, 0x18, 0x09, 0x81, 0x5B, 0x89, 0xC1, 0x04, 0x4E, 0xC0, 0x11, 0xB0, 
	0x92, 0x12, 0x2C, 0x2D, 0xC3, 0x08, 0x10, 0x90, 0x90, 0xC3, 0x80, 0x01, 0x78, 0x1E, 0xB1, 0xC3, 
	0x13, 0x0C, 0x92, 0x2B, 0xD3, 0x93, 0x4A, 0x89, 0x28, 0xF2, 0x81, 0xC3, 0x01, 0x3C, 0xB0, 0x81, 
	0xC5, 0x82, 0xA8, 0xA3, 0x81, 0xC2, 0x03, 0x1F, 0x81, 0x90, 0xD2, 0x52, 0x5F, 0x1C, 0xA1, 0xA3, 
	0x81, 0x2A, 0x2A, 0xB8, 0xD7, 0xB4, 0x01, 0x90, 0x80, 0x30, 0xAC, 0x95, 0x69, 0xC9, 0x03, 0x1A, 
	0x4A, 0x38, 0x0D, 0x39, 0x4B, 0x8C, 0xF6, 0x61, 0x9A, 0xC3, 0x00, 0xB1, 0xB4, 0x11, 0x9A, 0xC7, 
	0x93, 0xB0, 0xA7, 0x29, 0xA0, 0xA8, 0x97, 0x29, 0x99, 0xA5, 0x09, 0xB5, 0x28, 0xD0, 0x94, 0x3B, 
	0xA1, 0x18, 0xB0, 0x97, 0x09, 0x48, 0x0D, 0xD5, 0x68, 0x1C, 0x88, 0x81, 0x19, 0x79, 0x4E, 0x5B, 
	0x9A, 0x92, 0xA2, 0xA1, 0x01, 0xC1, 0x78, 0x0B, 0xB1, 0x05, 0x4C, 0x5D, 0x1B, 0x6B, 0x1A, 0x8A, 
	0x31, 0x0D, 0x38, 0x2A, 0x5E, 0x1B, 0x6B, 0x2D, 0xA2, 0x39, 0x19, 0xDA, 0x24, 0x3E, 0xB0, 0x50, 
	0xAA, 0x94, 0x80, 0x89, 0xB4, 0x02, 0xA9, 0xB4, 0xD7, 0xB4, 0xA3, 0x82, 0x1B, 0xE4, 0x12, 0xB8, 
	0x10, 0x10, 0x98, 0xCA, 0x17, 0xC8, 0x91, 0x93, 0xB1, 0xD3, 0x21, 0x18, 0x9A, 0xD5, 0x40, 0x0A, 
	0x6B, 0x2C, 0x08, 0x00, 0x5E, 0x1A, 0x0A, 0xA2, 0x18, 0xE3, 0x48, 0x3B, 0xC0, 0x39, 0x20, 0x4F, 
	0x8A, 0x08, 0x60, 0x3F, 0x39, 0xC8, 0x32, 0x3F, 0x4A, 0x2D, 0x92, 0xF1, 0x32, 0x9A, 0x59, 0x28, 
	0x1F, 0x12, 0x8D, 0x03, 0x5A, 0x0D, 0xC5, 0x91, 0x81, 0xC2, 0x11, 0xA9, 0x96, 0xF2, 0x83, 0x80, 
	0xE2, 0x31, 0x9B, 0x01, 0x80, 0xC5, 0x08, 0x48, 0xE0, 0xB3, 0x13, 0x2C, 0xD8, 0x23, 0x8A, 0x1B, 
	0x95, 0x88, 0x88, 0x11, 0x19, 0xFA, 0x86, 0x1A, 0xC0, 0x03, 0xA8, 0x00, 0x81, 0x91, 0x09, 0x58, 
	0xE8, 0x01, 0xC4, 0x91, 0x10, 0x1A, 0xA2, 0x2A, 0xA3, 0x3C, 0x10, 0x0F, 0x83, 0x8A, 0xD3, 0x83, 
	0xD1, 0x82, 0x39, 0xC8, 0xA2, 0x82, 0x03, 0x3F, 0xF2, 0x01, 0x89, 0x81, 0x00, 0xF8, 0x84, 0x88, 
	0xA1, 0xA2, 0xA3, 0x98, 0x83, 0x88, 0xF3, 0x32, 0xCC, 0x04, 0x2A, 0xE0, 0x02, 0x98, 0x82, 0x1A, 
	0xC6, 0x20, 0x1B, 0xC2, 0x20, 0x2A, 0xA9, 0x22, 0x2C, 0x08, 0x5D, 0x89, 0x00, 0x2A, 0x90, 0x49, 
	0x8B, 0x32, 0x9E, 0x86, 0x3C, 0x0A, 0x02, 0x3E, 0x09, 0x90, 0x38, 0x0A, 0x00, 0x1D, 0xB5, 0x49, 
	0x8B, 0x96, 0x2A, 0xA0, 0x38, 0x1A, 0xB0, 0x83, 0x89, 0x02, 0x1A, 0xC0, 0x69, 0x10, 0x1F, 0x92, 
	0x89, 0x00, 0x30, 0xAD, 0x54, 0x0E, 0xB2, 0x12, 0x1D, 0x92, 0x5B, 0x89, 0x38, 0x2C, 0x09, 0x80, 
	0x19, 0x28, 0x19, 0x3E, 0x89, 0x81, 0xB0, 0x13, 0x5F, 0xC8, 0x31, 0x2B, 0x2B, 0x5C, 0xC0, 0x20, 
	0x1A, 0xA1, 0x39, 0xD1, 0x02, 0x9A, 0xB5, 0x02, 0x89, 0xA0, 0x85, 0x6B, 0x8A, 0x92, 0x99, 0x85, 
	0x00, 0xF6, 0x45, 0x00, 0x91, 0xA3, 0xA4, 0x5D, 0xB8, 0x94, 0x28, 0x8A, 0x10, 0xC0, 0x94, 0x4A, 
	0xB8, 0x02, 0x18, 0x8B, 0x23, 0xFB, 0x04, 0x99, 0x83, 0x4F, 0x2A, 0x0A, 0x28, 0x88, 0x19, 0x6E, 
	0x0A, 0x18, 0xA8, 0x22, 0x9A, 0x49, 0xB2, 0x5C, 0x89, 0x7A, 0x8A, 0x11, 0x2B, 0x09, 0x90, 0x81, 
	0x10, 0x5E, 0x8A, 0x81, 0xA0, 0xC6, 0xA3, 0x39, 0xB8, 0xA6, 0x08, 0x82, 0x8B, 0xA7, 0x29, 0x19, 
	0xC2, 0x30, 0x0D, 0x82, 0x0A, 0xA2, 0x79, 0x1A, 0xA9, 0x04, 0x0A, 0x91, 0x28, 0xB8, 0x60, 0x3C, 
	0x2D, 0x90, 0x28, 0x90, 0x5C, 0x98, 0x38, 0x1C, 0xA0, 0x22, 0x2F, 0x90, 0x28, 0xA8, 0x30, 0x8B, 
	0x02, 0x5D, 0x0B, 0xA4, 0x4A, 0x9A, 0x13, 0x2C, 0x09, 0xF1, 0x83, 0xC1, 0x58, 0x99, 0x81, 0xB1, 
	0xB5, 0x38, 0x09, 0xE1, 0x02, 0x98, 0x01, 0x89, 0xA4, 0x6C, 0x99, 0xB3, 0x12, 0x1E, 0x01, 0x1B, 
	0xA2, 0x6A, 0x99, 0xA3, 0x5A, 0x8A, 0x01, 0x99, 0xB6, 0x11, 0x09, 0x1B, 0xC3, 0x11, 0xD8, 0x96, 
	0x19, 0x08, 0x89, 0xD5, 0x82, 0x88, 0xA5, 0x3C, 0xB1, 0x31, 0x9C, 0x03, 0x09, 0x08, 0x2A, 0x98, 
	0x52, 0x9F, 0x85, 0x1A, 0x80, 0x29, 0xF1, 0x02, 0x89, 0x21, 0x1E, 0xA2, 0x29, 0xD1, 0xA3, 0x91, 
	0x81, 0x28, 0xF0, 0x01, 0xB2, 0x11, 0xD8, 0x52, 0x1E, 0xB2, 0x28, 0x09, 0x38, 0xAB, 0x24, 0x1F, 
	0x80, 0x28, 0x2C, 0x28, 0x2C, 0x19, 0x3C, 0xA1, 0x5B, 0xF2, 0x11, 0x89, 0xA2, 0x19, 0xC3, 0x48, 
	0x1B, 0x10, 0x3D, 0x2A, 0x3D, 0x90, 0x39, 0x3B, 0x19, 0xAC, 0x16, 0xAB, 0xB7, 0x21, 0xAA, 0x13, 
	0x8B, 0x92, 0xA3, 0x4D, 0xA1, 0x2A, 0x21, 0x2F, 0xA8, 0x31, 0x8B, 0x39, 0xB2, 0x49, 0xF0, 0x82, 
	0x39, 0xC0, 0x80, 0xB4, 0xA5, 0x5C, 0x99, 0x01, 0x08, 0xC2, 0x90, 0x03, 0x9B, 0x33, 0x1E, 0xA1, 
	0x08, 0xD6, 0x81, 0x81, 0x88, 0x58, 0xBA, 0x33, 0xAC, 0x84, 0x5B, 0x09, 0x2A, 0x20, 0x0E, 0x10, 
	0x98, 0xA1, 0xB4, 0x01, 0xD5, 0x92, 0x4A, 0x88, 0x0B, 0x97, 0x19, 0x09, 0x01, 0xAA, 0x93, 0x94, 
	0x90, 0x00, 0x3B, 0x90, 0xF8, 0x96, 0x80, 0xA0, 0x40, 0xC8, 0x30, 0x2B, 0xD0, 0x70, 0xA9, 0x38, 
	0x1A, 0x90, 0x4A, 0xD4, 0x00, 0x10, 0xAA, 0xA3, 0xB4, 0xA1, 0x05, 0x8B, 0x94, 0x5B, 0x1C, 0xA3, 
	0xA9, 0xA6, 0x11, 0xD9, 0x04, 0x99, 0xA2, 0xA3, 0xB1, 0x95, 0x98, 0x91, 0x82, 0x1C, 0x85, 0xD0, 
	0x69, 0x88, 0x1A, 0x4A, 0xA1, 0x5C, 0xA0, 0x18, 0x3A, 0xD0, 0x31, 0x2C, 0x09, 0x2A, 0xD4, 0x28, 
	0x29, 0x2A, 0x3B, 0x1A, 0x6B, 0x0A, 0x98, 0x32, 0x3F, 0xA9, 0x22, 0x8D, 0xA3, 0x92, 0x08, 0xA3, 
	0x3C, 0x09, 0xB4, 0x1C, 0x03, 0x1A, 0x3D, 0xF4, 0x30, 0x1B, 0x90, 0x0A, 0x97, 0x1A, 0x91, 0x10, 
	0x2D, 0xC4, 0x49, 0x1A, 0x90, 0x19, 0x20, 0x0E, 0x22, 0x8D, 0xA4, 0x48, 0x9B, 0x12, 0x8B, 0xB6, 
	0x21, 0xAA, 0x42, 0x8D, 0x93, 0x89, 0xB4, 0x82, 0x08, 0x88, 0x80, 0xD2, 0xB3, 0x95, 0x3C, 0xF4, 
	0x11, 0x0B, 0xA3, 0x08, 0xC3, 0xA3, 0x98, 0xA5, 0x80, 0x29, 0x00, 0x2C, 0xD1, 0x12, 0x2C, 0x80, 
	0x6A, 0x1C, 0xB2, 0x58, 0x9B, 0xA5, 0x81, 0x08, 0x28, 0x2D, 0x88, 0x00, 0xB8, 0x07, 0x3D, 0x89, 
	0x00, 0x5B, 0xD0, 0x02, 0x1A, 0x02, 0x0D, 0xB3, 0x39, 0xA8, 0x93, 0x39, 0x38, 0x8D, 0x49, 0x1A, 
	0xC0, 0x93, 0xF5, 0x51, 0x1D, 0x80, 0x19, 0xC1, 0x12, 0x0A, 0x91, 0x29, 0xA8, 0x32, 0x9C, 0x93, 
	0x81, 0x6C, 0xC9, 0x95, 0x29, 0xA8, 0xB4, 0xC3, 0x84, 0x2C, 0xA0, 0x02, 0xB8, 0x96, 0x2A, 0xB0, 
	0x03, 0xA9, 0x03, 0xC8, 0x13, 0x2D, 0x2A, 0x4D, 0xC0, 0x13, 0xBA, 0x04, 0x2B, 0xF1, 0x02, 0x98, 
	0x00, 0x00, 0x37, 0x00, 0xA0, 0x22, 0x0E, 0x21, 0x2E, 0x88, 0x00, 0x2A, 0x00, 0x2D, 0x90, 0x00, 
	0x81, 0x4E, 0x88, 0x18, 0xB9, 0x84, 0x28, 0xC9, 0x97, 0x90, 0x28, 0x2C, 0x98, 0x11, 0xC0, 0xC5, 
	0x01, 0x80, 0x2A, 0xC1, 0xD3, 0xA6, 0x00, 0xA8, 0x83, 0xB0, 0x94, 0x6A, 0xB8, 0x02, 0x2B, 0xC1, 
	0x20, 0xF4, 0x21, 0x1C, 0x91, 0x29, 0x1A, 0x5A, 0x89, 0x6B, 0x89, 0x20, 0x1D, 0x18, 0x28, 0x0A, 
	0x5A, 0x8B, 0xA5, 0x6B, 0x89, 0x00, 0xA8, 0x95, 0x2A, 0x19, 0xB2, 0xA0, 0xA6, 0x20, 0xAA, 0xC4, 
	0xA3, 0x38, 0xD0, 0x82, 0xD4, 0x01, 0x1A, 0x80, 0x91, 0x3A, 0xC4, 0x80, 0xE5, 0x01, 0x18, 0xA9, 
	0x94, 0x91, 0xA0, 0x21, 0x1C, 0x10, 0x89, 0x10, 0x68, 0x1E, 0x19, 0x28, 0x8C, 0x96, 0x98, 0x82, 
	0x3A, 0x0D, 0x83, 0x4B, 0xC8, 0x95, 0x19, 0x80, 0x08, 0x3A, 0x90, 0x09, 0xC3, 0x82, 0x2E, 0x91, 
	0x7B, 0x09, 0xB0, 0x04, 0x8A, 0x80, 0x6A, 0xE0, 0x83, 0x88, 0x80, 0x7A, 0x8B, 0xA4, 0x01, 0xB8, 
	0x83, 0xD0, 0x12, 0x08, 0x3D, 0x38, 0x1E, 0xB0, 0x84, 0x1A, 0x10, 0x2A, 0x2C, 0x30, 0x1F, 0x08, 
	0x08, 0x8A, 0xA7, 0xA1, 0x31, 0x8B, 0x5B, 0x2A, 0xA1, 0x28, 0xF0, 0x21, 0x0A, 0xE2, 0x11, 0xC0, 
	0x95, 0x08, 0xA8, 0x79, 0x89, 0x01, 0x2B, 0x80, 0xB0, 0x93, 0xB0, 0x04, 0x28, 0x8F, 0x84, 0x99, 
	0xC3, 0x93, 0xC1, 0x14, 0x1E, 0x91, 0x49, 0x2B, 0x88, 0x4B, 0x00, 0x2A, 0x1D, 0x00, 0x28, 0x8A, 
	0xB3, 0x7C, 0x09, 0x90, 0x1B, 0x93, 0x30, 0xE4, 0x00, 0x2B, 0x81, 0x19, 0x3D, 0x39, 0x29, 0xCC, 
	0x30, 0xB7, 0x80, 0x00, 0x39, 0xCB, 0x16, 0x8D, 0xA4, 0x20, 0x8A, 0x92, 0x4C, 0x90, 0x4A, 0x8B, 
	0x33, 0x3D, 0xAB, 0x93, 0x10, 0xF1, 0x82, 0x28, 0x1A, 0xF4, 0x58, 0x2D, 0xA0, 0xA3, 0x20, 0x2C, 
	0xB0, 0xB4, 0x79, 0x0A, 0xA1, 0x01, 0x4A, 0x2C, 0xF1, 0x82, 0x18, 0xB0, 0xA4, 0x38, 0x2D, 0x90, 
	0xB2, 0x30, 0x1A, 0x5B, 0x8B, 0xB3, 0x58, 0xB8, 0x02, 0x3B, 0xA1, 0x92, 0x4C, 0x3D, 0x88, 0xF3, 
	0x02, 0x5B, 0x0B, 0xD4, 0x21, 0x3E, 0xA8, 0xA3, 0x10, 0x3C, 0xA8, 0xA3, 0x28, 0x88, 0xD2, 0x82, 
	0xA0, 0xA2, 0x83, 0x98, 0x80, 0xF3, 0xC5, 0x01, 0xA8, 0xB6, 0x02, 0x0A, 0x81, 0x90, 0x91, 0x10, 
	0x3A, 0xE9, 0xA7, 0x49, 0x2B, 0x88, 0x80, 0x58, 0x1D, 0xB1, 0x82, 0x4A, 0x09, 0xA8, 0x84, 0x19, 
	0x19, 0x98, 0x7B, 0x5C, 0x89, 0x28, 0x4D, 0x8A, 0xA3, 0x80, 0x29, 0x88, 0x91, 0x00, 0x3C, 0x3C, 
	0xD1, 0x83, 0x7B, 0xA9, 0x01, 0x91, 0x58, 0x1E, 0x91, 0x29, 0xB0, 0x32, 0xF0, 0xA1, 0xA2, 0xA6, 
	0x00, 0x19, 0x19, 0xD9, 0x04, 0x5B, 0x09, 0x2A, 0xA8, 0x02, 0x1A, 0x7E, 0x0A, 0xB3, 0x29, 0x89, 
	0x01, 0xB0, 0x43, 0x8B, 0x99, 0x69, 0x88, 0x7B, 0x2B, 0x80, 0x99, 0xB3, 0x79, 0x19, 0x2B, 0xB0, 
	0x84, 0x2B, 0x4A, 0x49, 0x9A, 0x91, 0xC1, 0xB4, 0xB2, 0x15, 0x2E, 0x98, 0x01, 0xF3, 0xB3, 0x81, 
	0x00, 0xB8, 0xA7, 0x10, 0x98, 0x91, 0xB1, 0xC3, 0xC3, 0xC7, 0xA3, 0xC2, 0xA4, 0x91, 0xB2, 0x82, 
	0xA0, 0x01, 0xA0, 0xC6, 0x91, 0xA2, 0xA3, 0x91, 0x91, 0xC1, 0x95, 0x18, 0xB8, 0x12, 0x7C, 0x4C, 
	0x1B, 0x19, 0x38, 0x2C, 0x3A, 0x2D, 0x5A, 0x2B, 0x09, 0x90, 0x39, 0x59, 0x2F, 0x38, 0x0E, 0x10, 
	0x90, 0x3B, 0x20, 0x8C, 0x40, 0x9A, 0x29, 0xA4, 0x9A, 0x44, 0x0C, 0x0A, 0xA6, 0x19, 0x81, 0x88, 
	0x2A, 0xB4, 0x3B, 0xA3, 0xB9, 0x97, 0x18, 0x99, 0xA5, 0x2A, 0xA3, 0x0B, 0xA5, 0xA2, 0x3A, 0xC5, 
	0x3A, 0xE3, 0x92, 0x80, 0xA3, 0xB9, 0x97, 0xA0, 0x50, 0x8A, 0xB1, 0x96, 0x99, 0x03, 0xB8, 0xB3, 
	0x00, 0x01, 0x32, 0x00, 0x09, 0x3D, 0x81, 0x3F, 0x39, 0x0B, 0x4A, 0x98, 0x0A, 0x84, 0xE8, 0x41, 
	0xB8, 0xC3, 0x95, 0xA8, 0x12, 0xA9, 0x82, 0xB4, 0x3A, 0xA4, 0x5D, 0x3D, 0x19, 0x1A, 0xC1, 0x93, 
	0x5A, 0xA9, 0x92, 0xA4, 0x08, 0x4A, 0xF2, 0xA2, 0xA2, 0x00, 0xB3, 0xD0, 0xA7, 0x81, 0x08, 0x19, 
	0x08, 0xE2, 0x93, 0x80, 0x08, 0xA0, 0x02, 0xB8, 0x12, 0xB1, 0xD1, 0x78, 0x0C, 0x02, 0xD1, 0x21, 
	0x4C, 0x2C, 0x08, 0x08, 0xA8, 0x93, 0x48, 0x2D, 0x2A, 0xA8, 0xC3, 0x23, 0x5F, 0x1B, 0x19, 0x88, 
	0x90, 0x02, 0x2B, 0x7A, 0x3C, 0x0B, 0xD4, 0xA3, 0x81, 0x39, 0x2C, 0x98, 0xA1, 0xB6, 0x48, 0x3B, 
	0x2B, 0x09, 0xD1, 0xA4, 0x48, 0x1B, 0x28, 0x4C, 0x8A, 0x81, 0x08, 0x6A, 0x2C, 0x08, 0xF2, 0x82, 
	0x18, 0x4C, 0x89, 0xA1, 0xA3, 0xA0, 0x96, 0x3B, 0x5B, 0x19, 0x1A, 0x09, 0xA2, 0x89, 0xC6, 0x82, 
	0xA0, 0x01, 0x81, 0xB9, 0x34, 0x3F, 0x1B, 0x08, 0xD3, 0xB1, 0x86, 0x1A, 0x90, 0x00, 0xA1, 0xE2, 
	0x83, 0xE0, 0x12, 0xA8, 0x31, 0x1D, 0xD2, 0xB3, 0x60, 0x1B, 0x29, 0x0B, 0xC4, 0xF3, 0x03, 0x1A, 
	0x3A, 0x1A, 0x4A, 0xB9, 0xA5, 0x81, 0x39, 0xD9, 0x93, 0xD5, 0x93, 0x98, 0x93, 0x90, 0x29, 0xE5, 
	0x92, 0x80, 0x00, 0x2A, 0x08, 0xC1, 0x21, 0x0A, 0x18, 0xCB, 0xA7, 0xA3, 0x59, 0x8A, 0x4A, 0x01, 
	0xBA, 0xA3, 0xB7, 0x69, 0x2B, 0x09, 0xA1, 0xC2, 0xA4, 0x10, 0x09, 0xB2, 0xA0, 0xA6, 0xD2, 0x12, 
	0x1A, 0x4A, 0xA9, 0xD4, 0xA3, 0x01, 0x19, 0x98, 0x10, 0xA8, 0xF4, 0x03, 0x3A, 0x3C, 0x1B, 0x18, 
	0xF1, 0x82, 0x80, 0x49, 0x0A, 0xC0, 0x83, 0x20, 0xCB, 0x53, 0x1D, 0x80, 0x90, 0x01, 0xC8, 0x12, 
	0x99, 0x71, 0x1C, 0x08, 0x6B, 0x0A, 0x29, 0x59, 0x1C, 0x39, 0x0C, 0x00, 0x91, 0x81, 0x09, 0xC1, 
	0x12, 0xF8, 0x93, 0xC3, 0xC3, 0x82, 0xB0, 0x32, 0xBA, 0xB4, 0x12, 0x1C, 0x80, 0x50, 0x8A, 0xD1, 
	0x01, 0x4A, 0x09, 0xA1, 0xD2, 0x01, 0xC1, 0xC7, 0x01, 0x80, 0xD2, 0x82, 0x2A, 0xE1, 0x02, 0xB2, 
	0x10, 0x3B, 0x3C, 0x0C, 0xB6, 0x11, 0x4D, 0xA8, 0x10, 0x5B, 0x09, 0x98, 0x93, 0x09, 0x38, 0x2B, 
	0x2F, 0x80, 0x80, 0x88, 0x80, 0xB5, 0x40, 0x0E, 0xB2, 0x02, 0x39, 0x1E, 0x81, 0x5B, 0x8A, 0xC3, 
	0x21, 0x89, 0xF1, 0x02, 0x29, 0x3C, 0xC1, 0x10, 0x28, 0x8C, 0x02, 0x2C, 0xD3, 0x82, 0x19, 0x09, 
	0xB0, 0x34, 0x3F, 0x2B, 0xB8, 0x50, 0x3A, 0x2E, 0x08, 0x3B, 0x08, 0x08, 0x3C, 0x90, 0x92, 0x4D, 
	0x99, 0x38, 0xC5, 0xB1, 0xC3, 0xA3, 0x93, 0xF3, 0xB2, 0xC4, 0x94, 0x88, 0xA1, 0x11, 0xC0, 0x84, 
	0x99, 0x39, 0xC3, 0x10, 0x3C, 0x3D, 0x90, 0x18, 0x09, 0x6B, 0x09, 0x5A, 0x0C, 0x01, 0x38, 0x2F, 
	0x08, 0x2A, 0x6B, 0x2B, 0x98, 0x83, 0x1F, 0x11, 0x19, 0x8C, 0x94, 0x10, 0xCA, 0x83, 0x01, 0x2B, 
	0x88, 0xC7, 0x08, 0x02, 0x89, 0x1B, 0x23, 0xCA, 0xF4, 0x03, 0x99, 0xE3, 0x03, 0x99, 0xB1, 0xA7, 
	0x20, 0x2D, 0x90, 0x00, 0x3B, 0x91, 0x90, 0x19, 0x22, 0x1F, 0x1A, 0x93, 0x19, 0x0C, 0x95, 0x7B, 
	0x2C, 0x18, 0x89, 0x18, 0x38, 0x1F, 0x18, 0x4A, 0x1B, 0x19, 0x80, 0x19, 0x19, 0x01, 0x2E, 0x08, 
	0xF3, 0x20, 0x99, 0xB4, 0x01, 0x2B, 0xC7, 0x81, 0x19, 0x91, 0x88, 0x81, 0xB3, 0x7B, 0x89, 0x80, 
	0xA0, 0xB3, 0xA6, 0x91, 0x08, 0xD4, 0x01, 0x18, 0x1A, 0x09, 0xA6, 0x4B, 0x1B, 0x40, 0x8B, 0x92, 
	0x3C, 0xA1, 0x31, 0x1F, 0x08, 0x90, 0xB4, 0x18, 0x3B, 0xA5, 0x2C, 0x3A, 0x4C, 0xA1, 0xB8, 0x94, 
	0x11, 0x0F, 0xB3, 0xC3, 0x82, 0xA3, 0x8B, 0xB5, 0x78, 0x1B, 0xC1, 0x02, 0x00, 0x2F, 0x80, 0x5A, 
	0x00, 0xFF, 0x3D, 0x00, 0x91, 0x89, 0x13, 0x0B, 0xA0, 0x32, 0xAC, 0x43, 0xFA, 0x85, 0x2B, 0x88, 
	0x81, 0x8A, 0x97, 0x88, 0x80, 0xA1, 0x18, 0x82, 0x9C, 0x97, 0xA0, 0xB5, 0xE3, 0xA3, 0xA3, 0x80, 
	0x29, 0xA8, 0x50, 0x89, 0x2D, 0xB6, 0x08, 0x81, 0x08, 0x1A, 0x29, 0x22, 0x0F, 0x29, 0x80, 0x88, 
	0x2A, 0x22, 0x8F, 0x12, 0x2B, 0x4F, 0x99, 0x01, 0x80, 0xA8, 0x23, 0x1E, 0x18, 0x3B, 0x6B, 0x2B, 
	0x3A, 0x19, 0x2E, 0x08, 0x59, 0x0C, 0x01, 0xB0, 0x93, 0x0A, 0xB7, 0x18, 0x11, 0x1D, 0xD3, 0xB2, 
	0x02, 0xB8, 0x06, 0x1C, 0x92, 0x2A, 0xB8, 0xA4, 0xB4, 0x59, 0xA0, 0x80, 0x80, 0x18, 0x19, 0x2C, 
	0x95, 0x3C, 0x89, 0x98, 0xC7, 0x20, 0x88, 0x08, 0x80, 0xE3, 0x18, 0x91, 0x91, 0x40, 0x0B, 0x3B, 
	0xD0, 0x13, 0xBA, 0x79, 0x19, 0x48, 0x1E, 0x09, 0x11, 0x2C, 0xA8, 0x24, 0x1F, 0x90, 0xA1, 0x02, 
	0xA9, 0x05, 0x2B, 0xA0, 0xD2, 0xB5, 0xB2, 0xB6, 0x02, 0x99, 0xE5, 0x11, 0x98, 0xC3, 0x81, 0x91, 
	0x88, 0x84, 0x2B, 0xAA, 0x72, 0x89, 0xD1, 0x50, 0x2C, 0xA0, 0x81, 0x08, 0x80, 0xA0, 0xB6, 0xB1, 
	0x95, 0x80, 0xA8, 0x96, 0x80, 0x90, 0x1A, 0xC7, 0x82, 0x98, 0xB4, 0x41, 0x2F, 0xA8, 0x93, 0x20, 
	0x3D, 0x9A, 0x93, 0xA1, 0x38, 0x3E, 0xB0, 0xA4, 0x28, 0x0A, 0x80, 0xB2, 0xA4, 0x89, 0xB6, 0x82, 
	0x3C, 0x4A, 0x8A, 0x83, 0x5F, 0x0B, 0x82, 0x89, 0xA1, 0x22, 0x2E, 0x98, 0x02, 0x5E, 0x0A, 0x90, 
	0x01, 0x1A, 0x00, 0x98, 0x90, 0x95, 0x91, 0x2A, 0xB0, 0x32, 0xF8, 0x97, 0xB0, 0x7A, 0x1C, 0xB4, 
	0x90, 0x94, 0x5A, 0xB9, 0x51, 0x8B, 0x22, 0xBC, 0x96, 0x10, 0x99, 0x79, 0x9A, 0x93, 0xC2, 0x81, 
	0x48, 0x0C, 0x01, 0x99, 0x81, 0x94, 0x3C, 0x4A, 0x8C, 0x94, 0xB1, 0x11, 0x88, 0x98, 0x32, 0x1F, 
	0x90, 0xE3, 0x93, 0x80, 0x2A, 0x28, 0xAA, 0x94, 0x08, 0x81, 0x7B, 0x1B, 0x01, 0x1D, 0x91, 0x82, 
	0x4C, 0x0A, 0x10, 0xB9, 0xA5, 0x82, 0x2A, 0x20, 0x0F, 0x10, 0xF2, 0xC3, 0x83, 0x2A, 0x19, 0x09, 
	0x49, 0x0B, 0x18, 0xD4, 0xC2, 0x02, 0x91, 0xC0, 0x50, 0x2B, 0x3B, 0x2A, 0x80, 0x0C, 0xC5, 0x93, 
	0xC0, 0x93, 0x30, 0xD8, 0x7C, 0x09, 0x08, 0x90, 0xB2, 0xA2, 0xA5, 0x29, 0x90, 0x18, 0x29, 0xD0, 
	0x59, 0xA0, 0x18, 0xD1, 0xB4, 0xC4, 0xA4, 0x39, 0x19, 0x3B, 0x1A, 0xB0, 0x03, 0xF3, 0x00, 0x81, 
	0x0A, 0xE3, 0x93, 0x49, 0x2B, 0x4B, 0x2A, 0x9B, 0x97, 0xD1, 0x02, 0x29, 0x1A, 0x29, 0x1B, 0x21, 
	0x9E, 0x03, 0x3A, 0x2D, 0xD4, 0x80, 0x82, 0x4B, 0x1A, 0x91, 0x4B, 0x90, 0xC8, 0x97, 0x18, 0x0A, 
	0xC4, 0x10, 0x00, 0x3C, 0xB8, 0x02, 0x08, 0x98, 0xE3, 0xA5, 0x39, 0x4A, 0xCA, 0x13, 0x89, 0x28, 
	0xF3, 0x10, 0x09, 0xF2, 0x82, 0x91, 0x7C, 0x0A, 0x90, 0x21, 0x1D, 0x91, 0x91, 0x18, 0x4A, 0x8B, 
	0xA4, 0x18, 0x18, 0x1A, 0x1A, 0x83, 0x0C, 0xB1, 0xB6, 0xA5, 0x98, 0xC4, 0x84, 0x8A, 0x01, 0x91, 
	0x09, 0x00, 0xE2, 0xB5, 0x7B, 0x88, 0x88, 0x00, 0x10, 0x0B, 0x28, 0x08, 0x5B, 0x1B, 0xA0, 0xB6, 
	0x30, 0xAA, 0x68, 0x3B, 0x1B, 0x6B, 0xA8, 0x01, 0x6C, 0xB9, 0xA6, 0x00, 0x80, 0x28, 0x3D, 0x09, 
	0xB0, 0xA4, 0x81, 0x08, 0x20, 0x1F, 0xA1, 0x12, 0x3E, 0x8A, 0x22, 0x1F, 0x91, 0x28, 0xB9, 0x97, 
	0x29, 0x2A, 0x8A, 0xA5, 0x88, 0x00, 0xA2, 0x3A, 0xC1, 0x82, 0x6D, 0x99, 0xA2, 0x01, 0x3B, 0x81, 
	0x3F, 0x88, 0x80, 0x2A, 0xE2, 0x93, 0x28, 0x0B, 0xE5, 0xB3, 0xA3, 0x92, 0x5B, 0x19, 0x9A, 0x13, 
	0xC9, 0xB5, 0x93, 0x39, 0x2D, 0xB1, 0x93, 0xE0, 0x22, 0x4B, 0x1C, 0x18, 0x2A, 0xC1, 0x01, 0x19, 
	0x00, 0x00, 0x38, 0x00, 0xF2, 0x93, 0x90, 0x28, 0xB1, 0x4A, 0xE2, 0xE3, 0x12, 0x3B, 0x8A, 0xB3, 
	0xA2, 0x02, 0x8B, 0x60, 0xF1, 0x01, 0x19, 0xA0, 0x92, 0x7B, 0x99, 0xA3, 0x38, 0x8A, 0xC1, 0x05, 
	0xBA, 0x97, 0x08, 0x29, 0xC0, 0x22, 0x8A, 0x98, 0x13, 0x0B, 0x7F, 0x1A, 0x1A, 0xC1, 0x03, 0x2C, 
	0x98, 0x83, 0x9A, 0xB6, 0x82, 0x98, 0x10, 0xE3, 0x91, 0xA2, 0x82, 0x08, 0x2B, 0x22, 0x2F, 0x88, 
	0x6B, 0x2B, 0x28, 0x1B, 0x4B, 0xA9, 0x84, 0x29, 0x1F, 0xB5, 0x5A, 0xA8, 0xC3, 0x21, 0xA9, 0xB3, 
	0x68, 0x1B, 0x39, 0x1B, 0xB1, 0xB3, 0x93, 0x2A, 0x91, 0x7F, 0xC8, 0x12, 0x4B, 0x0B, 0xA3, 0x39, 
	0x2C, 0xB0, 0xB6, 0x10, 0xB0, 0x32, 0x0D, 0xD4, 0x21, 0x2C, 0x09, 0x08, 0xB1, 0x02, 0x88, 0x7C, 
	0xB0, 0x38, 0x5D, 0xA9, 0xA3, 0x91, 0x38, 0x89, 0xB0, 0x33, 0xAC, 0x42, 0xAA, 0xE6, 0x31, 0x1D, 
	0xA1, 0x91, 0xB3, 0x12, 0x2F, 0xB1, 0x40, 0x2D, 0x88, 0x29, 0xE2, 0x21, 0x8B, 0xB3, 0x68, 0x9A, 
	0x82, 0x80, 0x98, 0xB3, 0xC3, 0xA3, 0xC4, 0xA2, 0x82, 0x6B, 0x2C, 0xA0, 0x02, 0xB8, 0x23, 0x2F, 
	0x88, 0x18, 0x3A, 0x29, 0x8E, 0xA6, 0x00, 0x2A, 0x08, 0x88, 0xB1, 0x93, 0x81, 0x6D, 0x1B, 0x92, 
	0x3C, 0x88, 0xD3, 0xB2, 0x83, 0x2A, 0x90, 0x2A, 0x96, 0x6F, 0x2B, 0xD0, 0x12, 0x0A, 0x20, 0x1C, 
	0xB1, 0x70, 0x8B, 0xB3, 0x91, 0xA2, 0x12, 0x2D, 0x08, 0x2A, 0xE2, 0x30, 0xB8, 0xA1, 0xB6, 0x30, 
	0xAA, 0x82, 0xC7, 0x91, 0x40, 0x0C, 0xB3, 0x49, 0x1A, 0x3A, 0xDA, 0x97, 0x19, 0x80, 0x80, 0x90, 
	0x21, 0x2F, 0xC0, 0x93, 0x91, 0xB2, 0x01, 0x3A, 0x39, 0x1E, 0xB1, 0x93, 0xC1, 0x03, 0x8B, 0x62, 
	0x9B, 0x28, 0x11, 0x1F, 0x00, 0xE4, 0x80, 0x83, 0x2C, 0x08, 0xA9, 0x97, 0x18, 0x1B, 0x82, 0x3A, 
	0x2B, 0x6E, 0x9B, 0xA7, 0x00, 0x19, 0x08, 0x4A, 0xA9, 0x03, 0x1B, 0x90, 0xB3, 0xA2, 0xA5, 0x5E, 
	0x19, 0x89, 0x08, 0xB4, 0x49, 0x8A, 0x20, 0x2B, 0xF3, 0x20, 0x2A, 0x8A, 0xC3, 0xC5, 0x11, 0x3C, 
	0x88, 0x90, 0x29, 0xA0, 0x04, 0x0D, 0xB5, 0x28, 0x29, 0x3B, 0x2E, 0xB1, 0x03, 0x1C, 0x49, 0x0A, 
	0xB0, 0x84, 0x1A, 0x80, 0xF3, 0xB4, 0x10, 0x19, 0xA2, 0x2D, 0x10, 0xB8, 0x14, 0x2F, 0xA0, 0x01, 
	0x3A, 0x09, 0x7E, 0x2B, 0x98, 0x10, 0x88, 0x80, 0xD2, 0x82, 0x88, 0x48, 0x89, 0x28, 0x9C, 0x03, 
	0xD6, 0x80, 0x91, 0xC3, 0x93, 0x5B, 0x2A, 0x09, 0x4A, 0xA9, 0x83, 0x99, 0x12, 0x6D, 0x0C, 0x82, 
	0xC8, 0x95, 0xB1, 0x82, 0x01, 0x4E, 0xA8, 0x91, 0xD3, 0xA3, 0xC2, 0xA4, 0x92, 0x19, 0x80, 0x29, 
	0x1A, 0xA2, 0x2A, 0xC4, 0x6C, 0xB0, 0x82, 0x5A, 0x1B, 0x18, 0xB8, 0xA7, 0x49, 0x89, 0x98, 0xA5, 
	0x18, 0x90, 0x91, 0xC1, 0x22, 0x0A, 0x2A, 0xA1, 0x2A, 0x11, 0x2F, 0x08, 0x6F, 0x89, 0x29, 0x88, 
	0xB1, 0x94, 0x3A, 0xA8, 0x92, 0x20, 0xE8, 0x93, 0x00, 0xF1, 0x83, 0x2A, 0xE4, 0x81, 0xA1, 0xF4, 
	0xB4, 0xA3, 0x38, 0x2B, 0x4B, 0x3B, 0x5E, 0x2B, 0x19, 0x19, 0x98, 0x92, 0xB1, 0xA2, 0xC2, 0xA7, 
	0x91, 0xC2, 0x12, 0x2D, 0x00, 0x5C, 0x0A, 0x80, 0xA0, 0xC5, 0x82, 0xA0, 0x11, 0x09, 0x29, 0x5B, 
	0x1B, 0x39, 0x2B, 0x09, 0x4B, 0xE2, 0xB4, 0xE3, 0xA4, 0x00, 0x00, 0x5B, 0x1B, 0x39, 0x3B, 0x1B, 
	0x29, 0xD8, 0xA7, 0xB1, 0xB6, 0x92, 0xB1, 0x95, 0x29, 0x3B, 0x4A, 0x1B, 0x08, 0x3A, 0x09, 0x2A, 
	0xF2, 0xB2, 0xA6, 0x91, 0x91, 0x18, 0x6A, 0x3C, 0x1A, 0x3A, 0x0A, 0x00, 0x3B, 0x88, 0x2A, 0xB5, 
	0xF2, 0x82, 0x80, 0x49, 0x09, 0x2B, 0x3A, 0xD0, 0xB5, 0xD4, 0xA3, 0x92, 0x90, 0x00, 0x18, 0x28, 
	0x00, 0xFD, 0x34, 0x00, 0x93, 0xF2, 0xC5, 0x02, 0x09, 0x80, 0x5C, 0x1A, 0x39, 0x8B, 0xD4, 0x92, 
	0x82, 0xA8, 0xB2, 0xA4, 0xB4, 0xA2, 0x58, 0x2C, 0x4A, 0x3C, 0x09, 0x2A, 0x80, 0xA8, 0xC3, 0x94, 
	0x08, 0xE3, 0x01, 0x2A, 0x18, 0x7C, 0x1B, 0x08, 0x09, 0x92, 0xB1, 0xD2, 0x94, 0x88, 0xB4, 0x58, 
	0x1C, 0x10, 0x4C, 0x0A, 0x39, 0x2B, 0xD2, 0xB2, 0x92, 0xB2, 0xB4, 0x03, 0x0A, 0x7B, 0x4E, 0x2A, 
	0x09, 0x19, 0x88, 0x00, 0xE2, 0xA2, 0xB4, 0xC4, 0x01, 0xB1, 0x28, 0x28, 0x4C, 0x3C, 0x1B, 0x49, 
	0x2B, 0x08, 0x09, 0xF1, 0x94, 0x29, 0xF3, 0x82, 0xA8, 0x78, 0x0B, 0x92, 0x80, 0x80, 0x39, 0x8B, 
	0x11, 0xC0, 0x94, 0x08, 0x08, 0x80, 0x4B, 0x08, 0x29, 0xDA, 0x97, 0x80, 0x90, 0xA2, 0xC1, 0x84, 
	0x2B, 0x91, 0x92, 0x08, 0x7F, 0x3C, 0x1A, 0x09, 0x81, 0x88, 0x91, 0x91, 0x08, 0xE2, 0x01, 0xD2, 
	0xC5, 0x82, 0x08, 0x10, 0x1C, 0x6A, 0x1B, 0x80, 0xC1, 0xB5, 0xA2, 0x01, 0xB1, 0x39, 0xF7, 0x11, 
	0x5B, 0xE0, 0x30, 0x98, 0x0A, 0x95, 0xD0, 0x13, 0x8A, 0x5A, 0x88, 0x99, 0x04, 0x9A, 0x21, 0xC0, 
	0x28, 0x30, 0x0F, 0x10, 0xC8, 0x83, 0x81, 0x3D, 0x28, 0x1D, 0x39, 0xB8, 0x81, 0xB5, 0x18, 0x28, 
	0x1B, 0x2A, 0xC5, 0x88, 0x84, 0xC9, 0x13, 0xA0, 0x6E, 0x09, 0x09, 0x81, 0xB0, 0x21, 0xC0, 0x00, 
	0xA4, 0x1A, 0x31, 0x9D, 0xA3, 0xC5, 0x10, 0x00, 0x2D, 0x28, 0xC8, 0x92, 0xA3, 0x88, 0x21, 0x9C, 
	0x71, 0x1B, 0x2B, 0xB4, 0xD1, 0x23, 0x0C, 0x49, 0x09, 0x8A, 0xA6, 0xA0, 0x12, 0x99, 0x08, 0x13, 
	0x3F, 0x3B, 0xF8, 0xA4, 0x92, 0x19, 0x20, 0x8C, 0x21, 0xBA, 0x03, 0xC2, 0x08, 0xA5, 0x4B, 0x7A, 
	0x8A, 0xA0, 0xB5, 0x92, 0x00, 0x90, 0x18, 0xA1, 0x81, 0x08, 0xF8, 0xA5, 0xC3, 0x20, 0x19, 0x4D, 
	0x09, 0xB0, 0xA3, 0xB3, 0x31, 0xAB, 0xB2, 0x73, 0x3D, 0x1B, 0xF3, 0x81, 0x20, 0x2C, 0x09, 0x90, 
	0xC3, 0x93, 0x1B, 0x41, 0x8C, 0x12, 0x2C, 0x3D, 0xA0, 0xD3, 0xA4, 0x90, 0x40, 0x2B, 0x99, 0x92, 
	0xB1, 0x12, 0xC0, 0xB2, 0x05, 0x4F, 0x2A, 0x0B, 0xA2, 0xC4, 0x82, 0x80, 0x2A, 0xA1, 0x80, 0x7A, 
	0x1B, 0x80, 0xD3, 0x11, 0x4C, 0x2B, 0x88, 0x80, 0xC1, 0x94, 0x80, 0x3A, 0x7C, 0x0B, 0xA3, 0xA8, 
	0xB6, 0xD5, 0x82, 0xA1, 0x00, 0x08, 0xF3, 0x92, 0xE3, 0x92, 0xA2, 0x91, 0x91, 0x20, 0x8B, 0xB4, 
	0xD4, 0x93, 0x88, 0x10, 0x2A, 0x19, 0x4C, 0x88, 0x19, 0x90, 0x49, 0x09, 0x6F, 0x1A, 0x3A, 0x8A, 
	0x01, 0x4A, 0x2C, 0x2A, 0x38, 0x1F, 0x20, 0x2D, 0x09, 0x08, 0x39, 0x4B, 0x2D, 0x08, 0xB1, 0x7A, 
	0x98, 0x81, 0x89, 0x03, 0x2E, 0x08, 0x88, 0x01, 0xB9, 0x97, 0x18, 0xA8, 0x81, 0xC4, 0xA2, 0x10, 
	0x08, 0xD8, 0x06, 0x8B, 0x02, 0x8A, 0xC5, 0xA3, 0x90, 0xC4, 0x82, 0xA8, 0x96, 0x19, 0xB1, 0x01, 
	0xB0, 0xA5, 0x90, 0x22, 0xAB, 0x02, 0xE0, 0x96, 0x3A, 0x08, 0x2B, 0x5A, 0x8A, 0x69, 0x1C, 0xB2, 
	0x21, 0xAA, 0x68, 0x89, 0x29, 0x2A, 0x6B, 0x1B, 0x18, 0xB8, 0x13, 0x5C, 0x2C, 0x4A, 0x9A, 0xC5, 
	0x12, 0x1D, 0x82, 0x2B, 0x1A, 0x11, 0x0B, 0x80, 0xD2, 0x21, 0x1A, 0x5E, 0xA9, 0xA5, 0x18, 0x90, 
	0x18, 0xE2, 0x93, 0x4A, 0x89, 0x91, 0x08, 0xE7, 0x11, 0x1A, 0xB1, 0x20, 0x88, 0x88, 0x10, 0xF0, 
	0x22, 0x0C, 0x82, 0x4A, 0xAA, 0xB6, 0x81, 0xA1, 0x02, 0x3E, 0xF2, 0x11, 0x99, 0x12, 0x1C, 0xA1, 
	0x01, 0x1A, 0x80, 0x81, 0x0B, 0xA7, 0x49, 0x2B, 0x88, 0x28, 0xC8, 0x78, 0x2C, 0xA0, 0x20, 0xB8, 
	0x03, 0x3B, 0x0A, 0x4A, 0xB8, 0xB7, 0x31, 0x9C, 0x95, 0x4A, 0xA9, 0x31, 0x0D, 0xC4, 0x82, 0x88, 
	0x00, 0x01, 0x38, 0x00, 0xB8, 0x84, 0x2A, 0xB0, 0x60, 0x2B, 0x89, 0x01, 0xC8, 0xC6, 0x31, 0x0B, 
	0x29, 0x3C, 0x90, 0x08, 0x81, 0x18, 0x3F, 0x3C, 0x80, 0x4D, 0xA8, 0x02, 0x1B, 0x11, 0x2A, 0x2F, 
	0x80, 0x38, 0x0E, 0x81, 0xC1, 0xB5, 0x48, 0x09, 0x0A, 0x11, 0x89, 0x00, 0x09, 0x81, 0x5D, 0xB9, 
	0x84, 0x90, 0x91, 0x91, 0x91, 0x08, 0x78, 0x2D, 0x88, 0x91, 0xE2, 0x82, 0x3A, 0xC0, 0x93, 0x80, 
	0xB3, 0x28, 0xDA, 0x43, 0xA9, 0x20, 0xD2, 0x28, 0x2A, 0x20, 0x2F, 0xD8, 0x12, 0xE1, 0x02, 0x4B, 
	0x3D, 0x19, 0xA8, 0xA4, 0x20, 0x3D, 0x19, 0x8C, 0x84, 0x09, 0x18, 0xA1, 0x08, 0x7C, 0x2D, 0x18, 
	0xC0, 0x82, 0x10, 0x5C, 0x9A, 0x11, 0xB0, 0x02, 0x19, 0x89, 0xA2, 0xE4, 0x82, 0x4A, 0x2B, 0x90, 
	0x91, 0x28, 0xA0, 0xF5, 0x82, 0x00, 0x4C, 0xB9, 0x97, 0x08, 0x80, 0x88, 0xE5, 0x11, 0x1A, 0x80, 
	0x80, 0x90, 0xC2, 0x13, 0x0F, 0xA3, 0x10, 0x9A, 0xB3, 0x04, 0x1A, 0x6D, 0x0A, 0xC2, 0x81, 0xC2, 
	0x31, 0x3E, 0xA9, 0x94, 0x29, 0x09, 0x08, 0xB0, 0x22, 0x1B, 0x90, 0x3C, 0x01, 0x08, 0x3F, 0xB8, 
	0x97, 0x4B, 0x4A, 0x8A, 0xA1, 0x92, 0x7A, 0x2C, 0xA0, 0xC4, 0x11, 0x5B, 0x1B, 0x80, 0x80, 0x18, 
	0x19, 0x09, 0x90, 0x01, 0x5B, 0x0A, 0xA1, 0xD4, 0x92, 0x10, 0x19, 0x08, 0x3D, 0x89, 0x02, 0xA8, 
	0xB2, 0x84, 0x7B, 0x2B, 0xD2, 0x28, 0x08, 0x2A, 0xF3, 0xB3, 0x48, 0x3D, 0x98, 0xA1, 0x82, 0x5A, 
	0x1B, 0xC2, 0xB3, 0x21, 0x3F, 0x8A, 0xB3, 0x22, 0x0B, 0x3B, 0x80, 0x80, 0x00, 0x88, 0x80, 0x00, 
	0x88, 0x00, 0x88, 0x80, 0x80, 0x80, 0x80, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};