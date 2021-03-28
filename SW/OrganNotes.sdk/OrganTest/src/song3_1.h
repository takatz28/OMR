#ifndef SONG_H_
#define SONG_H_

#include "notes.h"

int noteArray[][9] =
{
 	// intro
	{B4, G4, D4, G3, 0, 0, 0, 0, 1},
	{B4, G4, D4, F3, 0, 0, 0, 0, 1},
	{C5, G4, E4, E3, 0, 0, 0, 0, 1},
	{G4, E4, C4, A3, 0, 0, 0, 0, 0},
	{C4, A3, 0, 0, 0, 0, 0, 0, 0},
	{G4, E4, C4, D3, 0, 0, 0, 0, 1},
	{A4, Fs4, D4, D3, 0, 0, 0, 0, 0},
	{A4, Fs4, D4, D3, 0, 0, 0, 0, 1},

	// verse 1
	{B4, G4, D4, G3, 0, 0, 0, 0, 1},
	{B4, G4, D4, F3, 0, 0, 0, 0, 1},
	{C5, G4, E4, E3, 0, 0, 0, 0, 1},
	{G4, E4, C4, A3, 0, 0, 0, 0, 0},
	{C4, A3, 0, 0, 0, 0, 0, 0, 1},
	{G4, E4, C4, D3, 0, 0, 0, 0, 0},
	{A4, Fs4, D4, D3, 0, 0, 0, 0, 0},
	{A4, Fs4, D4, D3, 0, 0, 0, 0, 1},

	{B4, G4, D4, G3, 0, 0, 0, 0, 1},
	{B4, G4, D4, G3, 0, 0, 0, 0, 1},
	{B4, G4, D4, F3, 0, 0, 0, 0, 1},
	{B4, G4, D4, F3, 0, 0, 0, 0, 1},
	{C5, G4, E4, E3, 0, 0, 0, 0, 1},
	{C5, G4, E4, E3, 0, 0, 0, 0, 1},
	{G4, E4, C4, A3, 0, 0, 0, 0, 0},
	{C4, A3, 0, 0, 0, 0, 0, 0, 0},
	{G4, E4, C4, D3, 0, 0, 0, 0, 0},
	{A4, Fs4, D4, D3, 0, 0, 0, 0, 1},

	{B4, G4, E4, E3, E2, 0, 0, 0, 0},
	{E4, E3, E2, 0, 0, 0, 0, 0, 1},
	{B4, G4, Fs3, 0, 0, 0, 0, 0, 1},
	{B4, G4, E4, G4, 0, 0, 0, 0, 1},
	{B4, G4, D4, D3, D2, 0, 0, 0, 0},
	{D4, D3, D2, 0, 0, 0, 0, 0, 1},
	{B4, G4, Fs3, 0, 0, 0, 0, 0, 1},
	{B4, G4, D4, G4, 0, 0, 0, 0, 1},
	{B4, G4, E4, D4, C3, C2, 0},
	{B4, G4, E4, C4, C3, C2, 1},

	{C5, G4, E4, C4, D3, D2, 0},
	{C4, D3, D2, 0, 0, 0, 0, 0, 1},
	{G4, E4, D3, 0, 0, 0, 0, 0, 1},
	{A4, Fs4, D4, Cs2, 0, 0, 0, 0, 0},
	{A4, Fs4, D4, D2, 0, 0, 0, 0, 0},
	{A4, Fs4, D4, Eb2, 0, 0, 0, 0, 1},
	{B4, G4, E4, B3, E3, E2, 0},
	{E4, E3, E2, 0, 0, 0, 0, 0, 1},
	{B4, G4, E4, Fs3, 0, 0, 0, 0, 1},
	{B4, G4, E4, G3, 0, 0, 0, 0, 1},
	{B4, G4, E4, B3, D3, D2, 0},
	{E4, E3, E2, 0, 0, 0, 0, 0, 1},
	{B4, G4, E4, Fs3, 0, 0, 0, 0, 1},
	{B4, G4, E4, G3, 0, 0, 0, 0, 0},
	{B4, G4, E4, G2, 0, 0, 0, 0, 1},

	{G4, E4, D4, G3, C3, C2, 1},
	{D3, 0, 0, 0, 0, 0, 0, 0, 0},
	{A3, D3, 0, 0, 0, 0, 0, 0, 0},
	{C4, A3, D3, 0, 0, 0, 0, 0, 0},
	{E4, C4, A3, D3, 0, 0, 0, 0, 0},
	{G4, E4, C4, A3, D3, 0, 0, 0, 0},
	{D5, G4, E4, C4, A3, D3, 0},

	// chorus
	{B4, G4, D4, G2, G1, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 1},

	{B4, G4, D4, F3, 0, 0, 0, 0, 0},
	{F3, 0, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, F3, 0, 0, 0, 0, 0},
	{F3, 0, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, F3, 0, 0, 0, 0, 0},
	{F3, 0, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, F3, 0, 0, 0, 0, 0},
	{F3, 0, 0, 0, 0, 0, 0, 0, 1},

	{C5, G4, E4, E3, 0, 0, 0, 0, 0},
	{E3, 0, 0, 0, 0, 0, 0, 0, 0},
	{C5, G4, E4, E3, 0, 0, 0, 0, 0},
	{E3, 0, 0, 0, 0, 0, 0, 0, 0},
	{C5, G4, E4, E3, 0, 0, 0, 0, 0},
	{E3, 0, 0, 0, 0, 0, 0, 0, 0},
	{C5, G4, E4, E3, 0, 0, 0, 0, 0},
	{E3, 0, 0, 0, 0, 0, 0, 0, 0},

	{C5, G4, E4, A3, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 1},
	{C5, G4, E4, A3, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 1},
	{C5, G4, E4, D3, 0, 0, 0, 0, 1},
	{D5, A4, Fs4, D3, 0, 0, 0, 0, 0},
	{D5, A4, Fs4, D4, D3, 0, 0, 0, 0},
	{D5, A4, Fs4, D4, D3, 0, 1},

	{B4, G4, D4, G3, G2, 0, 0, 0, 0},
	{G3, G2, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, G3, G2, 0, 0, 0, 0},
	{G3, G2, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, G3, G2, 0, 0, 0, 0},
	{G3, G2, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, G3, G2, 0, 0, 0, 0},
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{B4, G4, D4, F3, F2, 0, 0, 0, 0},
	{F3, F2, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, F3, F2, 0, 0, 0, 0},
	{F3, F2, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, F3, F2, 0, 0, 0, 0},
	{F3, F2, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, D4, F3, F2, 0, 0, 0, 0},
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{C5, G4, E4, C3, E2, 0, 0, 0, 0},
	{C3, E2, 0, 0, 0, 0, 0, 0, 0},
	{C5, G4, E4, C3, E2, 0, 0, 0, 0},
	{C3, E2, 0, 0, 0, 0, 0, 0, 0},
	{C5, G4, E4, C3, E2, 0, 0, 0, 0},
	{C3, E2, 0, 0, 0, 0, 0, 0, 0},
	{C5, G4, E4, C3, E2, 0, 0, 0, 0},
	{G2, 0, 0, 0, 0, 0, 0, 0, 0},

	{C5, G4, E4, A2, 0, 0, 0, 0, 0},
	{A2, 0, 0, 0, 0, 0, 0, 0, 0},
	{C5, G4, E4, A2, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{C5, G4, E4, D3, 0, 0, 0, 0, 1},
	{D5, A4, Fs4, A2, 0, 0, 0, 0, 0},
	{D5, A4, Fs4, D4, D2, 0, 0, 0, 0},
	{D5, A4, Fs4, D4, Eb2, Eb1, 1},

	{B4, G4, E4, E2, E1, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 1},
	{B4, G4, E4, 0, 0, 0, 0, 0, 1},
	{G2, G1, 0, 0, 0, 0, 0, 0, 1},
	{B4, G4, E4, 0, 0, 0, 0, 0, 1},
	{B2, B1, 0, 0, 0, 0, 0, 0, 1},
	{B4, G4, E4, 0, 0, 0, 0, 0, 1},
	{D3, D2, 0, 0, 0, 0, 0, 0, 1},

	{B4, G4, E4, D4, D2, D1, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 1},
	{B4, G4, E4, D4, 0, 0, 0, 0, 1},
	{Fs2, Fs1, 0, 0, 0, 0, 0, 0, 1},
	{B4, G4, E4, D4, 0, 0, 0, 0, 1},
	{G2, G1, 0, 0, 0, 0, 0, 0, 1},
	{B4, G4, E4, D4, 0, 0, 0, 0, 1},
	{B2, B2, 0, 0, 0, 0, 0, 0, 1},

	{B4, G4, E4, C4, C3, C2, 0, 0, 0},
	{C3, C2, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, E4, C4, C3, C2, 0},
	{C3, C2, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, E4, C4, C3, C2, 0},
	{G2, 0, 0, 0, 0, 0, 0, 0, 0},
	{B4, G4, E4, C4, C3, 0, 0, 0, 0},
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{C5, G4, Eb4, C4, Eb3, Eb2, 0, 0, 1},
	{C3, C2, 0, 0, 0, 0, 0, 0, 0},
	{D3, D2, 0, 0, 0, 0, 0, 0, 0},
	{Eb3, Eb2, 0, 0, 0, 0, 0, 0, 0},
};

double beatArray[] =
{

 	// intro
	4, 4, 4, 1.5, 0.5, 0.5, 1, 0.5,

	// verse 1
	4, 4, 4, 1.5, 0.5, 0.5, 1, 0.5,		// 8
	2, 2, 2, 2, 2, 2, 1.5, 0.5, 0.5, 1.5,	// 10
	1.5, 0.5, 0.5, 1.5, 1.5, 0.5, 0.5, 1.5, 2, 2,	// 10
	1.5, 0.5, 0.5, 0.5, 0.5, 0.5, 1.5, 	// 7
	0.5, 0.5, 1.5, 1.5, 0.5, 0.5, 1, 0.5,	// 8


	4, 0.015625, 0.015625, 0.015625, 	// 4
	0.015625, 0.015625, 7,			// 3

	// chorus
	0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475,
	0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475,
	0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475,
	0.475, 0.475, 0.475, 0.5, 0.5, 0.5, 0.5, 0.5,

	0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475,
	0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475,
	0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475,
	0.475, 0.475, 0.475, 0.5, 0.5, 0.5, 0.5, 0.5,

	0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475,
	0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475,

	0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475, 0.475,

	3, 0.33, 0.33, 0.34
};



//int noteArray[][6] = {
//
//// intro (40)
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{G3, Eb4, G4, 0, 0, 0, 0, 0},
//	{A0, F4, A4, 0, 0, 0, 0, 0},
//	{G3, G4, B4, 0, 0, 0, 0, 0},
//	{A0, A4, Cs5, 0, 0, 0, 0, 0},
//	{G3, B4, Eb5, 0, 0, 0, 0, 0},
//	{A0, Cs5, F5, 0, 0, 0, 0, 0},
//	{G3, Eb5, G5, 0, 0, 0, 0, 0},
//	{A0, F5, A5, 0, 0, 0, 0, 0},
//	{G3, G5, B5, 0, 0, 0, 0, 0},
//	{G3, G5, B5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{G3, Eb4, G4, 0, 0, 0, 0, 0},
//	{A0, F4, A4, 0, 0, 0, 0, 0},
//	{G3, G4, B4, 0, 0, 0, 0, 0},
//	{A0, A4, Cs5, 0, 0, 0, 0, 0},
//	{G3, B4, Eb5, 0, 0, 0, 0, 0},
//	{A0, Cs5, F5, 0, 0, 0, 0, 0},
//	{G3, Eb5, G5, 0, 0, 0, 0, 0},
//	{A0, F5, A5, 0, 0, 0, 0, 0},
//	{G3, G5, B5, 0, 0, 0, 0, 0},
//	{G3, G5, B5, 0, 0, 0, 0, 0},
//// verse 1 (74)
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{D4, G4, B4, 0, 0, 0, 0, 0},
//	{C4, F4, A4, 0, 0, 0, 0, 0},
//	{B3, D4, G4, 0, 0, 0, 0, 0},
//	{A0,G4,G4, 0, 0, 0, 0, 0},
//	{A0,A4,A4, 0, 0, 0, 0, 0},
//	{Cs4, Fs4, Bb4, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{Bb4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{Cs5, Fs5, Bb5, 0, 0, 0, 0, 0},
//	{C5, F5, A5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{G4, C5, E5, 0, 0, 0, 0, 0},
//	{A0, C5, C5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{A0, A0, E5, 0, 0, 0, 0, 0},
//	{A0, A0, D5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{A0, G4, A0, 0, 0, 0, 0, 0},
//	{F4, A4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{A0, G4, A0, 0, 0, 0, 0, 0},
//	{F4, A4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	// repeat
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{D4, G4, B4, 0, 0, 0, 0, 0},
//	{C4, F4, A4, 0, 0, 0, 0, 0},
//	{B3, D4, G4, 0, 0, 0, 0, 0},
//	{A0,G4,G4, 0, 0, 0, 0, 0},
//	{A0,A4,A4, 0, 0, 0, 0, 0},
//	{Cs4, Fs4, Bb4, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{Bb4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{Cs5, Fs5, Bb5, 0, 0, 0, 0, 0},
//	{C5, F5, A5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{G4, C5, E5, 0, 0, 0, 0, 0},
//	{A0, C5, C5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{A0, A0, E5, 0, 0, 0, 0, 0},
//	{A0, A0, D5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{A0, G4, A0, 0, 0, 0, 0, 0},
//	{F4, A4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{A0, G4, A0, 0, 0, 0, 0, 0},
//	{F4, A4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//// DS (60)
//	{B4, E5, G5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{G4, B4, E5, 0, 0, 0, 0, 0},
//	{A0, G4, G4, 0, 0, 0, 0, 0},
//	{A0, C5, C5, 0, 0, 0, 0, 0},
//	{B4, E5, G5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{A4, C5, E5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{F4, A4, E5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{B3, E4, G4, 0, 0, 0, 0, 0},
//	{C4, E4, A4, 0, 0, 0, 0, 0},
//	{B3, E4, G4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{C4, F4, A4, 0, 0, 0, 0, 0},
//	{B3, E4, G4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, G4, G4, 0, 0, 0, 0, 0},
//	{A0, C5, C5, 0, 0, 0, 0, 0},
//	{B4, E5, G5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{A0, A0, E5, 0, 0, 0, 0, 0},
//	{A0, A0, D5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{E4, Gs4, E5, 0, 0, 0, 0, 0},
//	{E4, Gs4, E5, 0, 0, 0, 0, 0},
//	{E4, Gs4, E5, 0, 0, 0, 0, 0},
//	{E4, B4, D5, 0, 0, 0, 0, 0},
//	{Gs4, Cs5, E5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{A0, E4, E4, 0, 0, 0, 0, 0},
//	{A0, A4, A4, 0, 0, 0, 0, 0},
//	{G4, C5, E5, 0, 0, 0, 0, 0},
//	{Fs4, A4, D4, 0, 0, 0, 0, 0},
//	{Fs4, A4, Cs5, 0, 0, 0, 0, 0},
//	{E4, Gs4, B4, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{A3, C4, E4, 0, 0, 0, 0, 0},
//	{A3, C4, E4, 0, 0, 0, 0, 0},
//	{A3, C4, F4, 0, 0, 0, 0, 0},
//	{A3, C4, E4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{E4, A4, C5, 0, 0, 0, 0, 0},
//	{A0, A0, E5, 0, 0, 0, 0, 0},
//	{E4, C5, D5, 0, 0, 0, 0, 0},
//	{E4, C5, D5, 0, 0, 0, 0, 0},
//	{E4, C5, D5, 0, 0, 0, 0, 0},
//	{Fs4, C5, D5, 0, 0, 0, 0, 0},
//	{Fs4, C5, D5, 0, 0, 0, 0, 0},
//	{C5, Fs5, A5, 0, 0, 0, 0, 0},
//	{A0, A0, G5, 0, 0, 0, 0, 0},
//// ending 1 (8)
//	{A4, F5, G5, 0, 0, 0, 0, 0},
//	{A0, A0, F5, 0, 0, 0, 0, 0},
//	{A4, F5, G5, 0, 0, 0, 0, 0},
//	{A0, A0, A5, 0, 0, 0, 0, 0},
//	{A0, A0, G5, 0, 0, 0, 0, 0},
//	{F4, C5, E5, 0, 0, 0, 0, 0},
//	{A0, A0, D5, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//// verse 2 (74)
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{D4, G4, B4, 0, 0, 0, 0, 0},
//	{C4, F4, A4, 0, 0, 0, 0, 0},
//	{B3, D4, G4, 0, 0, 0, 0, 0},
//	{A0,G4,G4, 0, 0, 0, 0, 0},
//	{A0,A4,A4, 0, 0, 0, 0, 0},
//	{Cs4, Fs4, Bb4, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{Bb4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{Cs5, Fs5, Bb5, 0, 0, 0, 0, 0},
//	{C5, F5, A5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{G4, C5, E5, 0, 0, 0, 0, 0},
//	{A0, C5, C5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{A0, A0, E5, 0, 0, 0, 0, 0},
//	{A0, A0, D5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{A0, G4, A0, 0, 0, 0, 0, 0},
//	{F4, A4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{A0, G4, A0, 0, 0, 0, 0, 0},
//	{F4, A4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	// repeat
//	{D4, E4, G4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{D4, G4, B4, 0, 0, 0, 0, 0},
//	{C4, F4, A4, 0, 0, 0, 0, 0},
//	{B3, D4, G4, 0, 0, 0, 0, 0},
//	{A0,G4,G4, 0, 0, 0, 0, 0},
//	{A0,A4,A4, 0, 0, 0, 0, 0},
//	{Cs4, Fs4, Bb4, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{Bb4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{Cs5, Fs5, Bb5, 0, 0, 0, 0, 0},
//	{C5, F5, A5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{G4, C5, E5, 0, 0, 0, 0, 0},
//	{A0, C5, C5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{A0, A0, E5, 0, 0, 0, 0, 0},
//	{A0, A0, D5, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{A0, G4, A0, 0, 0, 0, 0, 0},
//	{F4, A4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{A0, G4, A0, 0, 0, 0, 0, 0},
//	{F4, A4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//// DS (60)
//	{B4, E5, G5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{G4, B4, E5, 0, 0, 0, 0, 0},
//	{A0, G4, G4, 0, 0, 0, 0, 0},
//	{A0, C5, C5, 0, 0, 0, 0, 0},
//	{B4, E5, G5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{A4, C5, E5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{F4, A4, E5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{B3, E4, G4, 0, 0, 0, 0, 0},
//	{C4, E4, A4, 0, 0, 0, 0, 0},
//	{B3, E4, G4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{C4, F4, A4, 0, 0, 0, 0, 0},
//	{B3, E4, G4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, G4, G4, 0, 0, 0, 0, 0},
//	{A0, C5, C5, 0, 0, 0, 0, 0},
//	{B4, E5, G5, 0, 0, 0, 0, 0},
//	{A4, C5, F5, 0, 0, 0, 0, 0},
//	{A0, A0, E5, 0, 0, 0, 0, 0},
//	{A0, A0, D5, 0, 0, 0, 0, 0},
//	{F4, A4, C5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{A0, A0, C5, 0, 0, 0, 0, 0},
//	{F4, A4, D5, 0, 0, 0, 0, 0},
//	{E4, Gs4, E5, 0, 0, 0, 0, 0},
//	{E4, Gs4, E5, 0, 0, 0, 0, 0},
//	{E4, Gs4, E5, 0, 0, 0, 0, 0},
//	{E4, B4, D5, 0, 0, 0, 0, 0},
//	{Gs4, Cs5, E5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{A0, E4, E4, 0, 0, 0, 0, 0},
//	{A0, A4, A4, 0, 0, 0, 0, 0},
//	{G4, C5, E5, 0, 0, 0, 0, 0},
//	{Fs4, A4, D4, 0, 0, 0, 0, 0},
//	{Fs4, A4, Cs5, 0, 0, 0, 0, 0},
//	{E4, Gs4, B4, 0, 0, 0, 0, 0},
//	{E4, G4, C5, 0, 0, 0, 0, 0},
//	{A3, C4, E4, 0, 0, 0, 0, 0},
//	{A3, C4, E4, 0, 0, 0, 0, 0},
//	{A3, C4, F4, 0, 0, 0, 0, 0},
//	{A3, C4, E4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{E4, A4, C5, 0, 0, 0, 0, 0},
//	{A0, A0, E5, 0, 0, 0, 0, 0},
//	{E4, C5, D5, 0, 0, 0, 0, 0},
//	{E4, C5, D5, 0, 0, 0, 0, 0},
//	{E4, C5, D5, 0, 0, 0, 0, 0},
//	{Fs4, C5, D5, 0, 0, 0, 0, 0},
//	{Fs4, C5, D5, 0, 0, 0, 0, 0},
//	{C5, Fs5, A5, 0, 0, 0, 0, 0},
//	{A0, A0, G5, 0, 0, 0, 0, 0},
//// ending 2 (8)
//	{A4, F5, G5, 0, 0, 0, 0, 0},
//	{A0, A0, G5, 0, 0, 0, 0, 0},
//	{Bb4, Fs5, Gs5, 0, 0, 0, 0, 0},
//	{A0, A0, Bb5, 0, 0, 0, 0, 0},
//	{A0, A0, Gs5, 0, 0, 0, 0, 0},
//	{Fs4, Cs5, F5, 0, 0, 0, 0, 0},
//	{A0, A0, Eb5, 0, 0, 0, 0, 0},
//	{A0, A0, Cs5, 0, 0, 0, 0, 0},
//// transposed (66)
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, Cs5, 0, 0, 0, 0, 0},
//	{F4, Gs4, Cs5, 0, 0, 0, 0, 0},
//	{F4, Gs4, Cs5, 0, 0, 0, 0, 0},
//	{Gs4, C5, Eb5, 0, 0, 0, 0, 0},
//	{Gs4, C5, Eb5, 0, 0, 0, 0, 0},
//	{Eb4, Gs4, C5, 0, 0, 0, 0, 0},
//	{Cs4, Gs4, Bb4, 0, 0, 0, 0, 0},
//	{C4, Eb4, Gs4, 0, 0, 0, 0, 0},
//	{A0, Gs4, Gs4, 0, 0, 0, 0, 0},
//	{A0, Bb4, Bb4, 0, 0, 0, 0, 0},
//	{D4, G4, B4, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{B4, D5, G5, 0, 0, 0, 0, 0},
//	{D5, G5, B5, 0, 0, 0, 0, 0},
//	{Cs5, Fs5, Bb5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, Cs5, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{Bb4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{Bb4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{Gs4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{A0, Cs5, Cs5, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Eb5, 0, 0, 0, 0, 0},
//	{A0, A0, F5, 0, 0, 0, 0, 0},
//	{A0, A0, Eb5, 0, 0, 0, 0, 0},
//	{F4, Gs4, Cs5, 0, 0, 0, 0, 0},
//	{A0, Gs4, A0, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, Cs5, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{A0, Gs4, A0, 0, 0, 0, 0, 0},
//	{F4, Bb4, A0, 0, 0, 0, 0, 0},
//	{A0, A0, Cs5, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, Cs5, 0, 0, 0, 0, 0},
//	{F4, Gs4, Cs5, 0, 0, 0, 0, 0},
//	{F4, Gs4, Cs5, 0, 0, 0, 0, 0},
//	{Gs4, C5, Eb5, 0, 0, 0, 0, 0},
//	{Gs4, C5, Eb5, 0, 0, 0, 0, 0},
//	{Eb4, Gs4, C5, 0, 0, 0, 0, 0},
//	{Cs4, Gs4, Bb4, 0, 0, 0, 0, 0},
//	{C4, Eb4, Gs4, 0, 0, 0, 0, 0},
//	{A0, Gs4, Gs4, 0, 0, 0, 0, 0},
//	{A0, Bb4, Bb4, 0, 0, 0, 0, 0},
//	{D4, G4, B4, 0, 0, 0, 0, 0},
//	{G4, B4, D5, 0, 0, 0, 0, 0},
//	{B4, D5, G5, 0, 0, 0, 0, 0},
//	{D5, G5, B5, 0, 0, 0, 0, 0},
//	{Cs5, Fs5, Bb5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{A0, A0, Cs5, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Cs5, 0, 0, 0, 0, 0},
//	{Bb4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{Bb4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{Gs4, Cs5, Fs5, 0, 0, 0, 0, 0},
//	{A0, Cs5, Cs5, 0, 0, 0, 0, 0},
//	{Fs4, Bb4, Eb5, 0, 0, 0, 0, 0},
//	{A0, A0, F5, 0, 0, 0, 0, 0},
//	{A0, A0, Eb5, 0, 0, 0, 0, 0},
//	{F4, Gs4, Cs5, 0, 0, 0, 0, 0},
//// ending (42)
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Gs3, E4, Gs4, 0, 0, 0, 0, 0},
//	{A0, Fs4, Bb4, 0, 0, 0, 0, 0},
//	{Gs3, Gs4, C4, 0, 0, 0, 0, 0},
//	{A0, Bb4, D5, 0, 0, 0, 0, 0},
//	{Gs3, C4, E5, 0, 0, 0, 0, 0},
//	{A0, D5, Fs5, 0, 0, 0, 0, 0},
//	{Gs3, E5, Gs5, 0, 0, 0, 0, 0},
//	{A0, Fs5, Bb5, 0, 0, 0, 0, 0},
//	{Gs3, Gs5, C5, 0, 0, 0, 0, 0},
//	{Gs3, Gs5, C5, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{Gs3, E4, Gs4, 0, 0, 0, 0, 0},
//	{A0, Fs4, Bb4, 0, 0, 0, 0, 0},
//	{Gs3, Gs4, C4, 0, 0, 0, 0, 0},
//	{A0, Bb4, D5, 0, 0, 0, 0, 0},
//	{Gs3, C4, E5, 0, 0, 0, 0, 0},
//	{A0, D5, Fs5, 0, 0, 0, 0, 0},
//	{Gs3, E5, Gs5, 0, 0, 0, 0, 0},
//	{A0, Fs5, Bb5, 0, 0, 0, 0, 0},
//	{Gs3, Gs5, C5, 0, 0, 0, 0, 0},
//	{Gs3, Gs5, C5, 0, 0, 0, 0, 0},
//	{Eb4, F4, Gs4, 0, 0, 0, 0, 0},
//	{A0, A0, A0, 0, 0, 0}
//};
//
//double beatArray[] =
//{
//
//// intro (40)
//	0.5, 0.5, 1, 0.5, 1, 1,
//	1, 1, 0.5, 1,
//	1, 0.5, 1, 0.5, 1,
//	0.5, 1, 0.5, 1, 1,
//	0.5, 0.5, 1, 0.5, 1, 1,
//	1, 1, 0.5, 1,
//	1, 0.5, 1, 0.5, 1,
//	0.5, 1, 0.5, 1, 1,
//// verse 1 (74)
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 1, 3,
//	0.5, 1,
//	0.5, 1, 1.5, 1,
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 0.5, 1.5,	0.25, 0.25, 3,
//	0.125, 0.375, 0.5, 1, 0.125, 0.375, 0.5, 1,
//	// repeat
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 1, 3,
//	0.5, 1,
//	0.5, 1, 1.5, 1,
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 0.5, 1.5,	0.25, 0.25, 3,
//	0.125, 0.375, 0.5, 1, 0.125, 0.375, 0.5, 1,
//// DS (
//	0.5, 0.5, 0.5, 0.5, 0.5, 1, 1,
//	1, 1, 1.5,
//	0.5, 1, 1, 1.5,
//	1, 1, 0.5, 1.5,
//	1, 0.5, 0.5, 0.5, 1, 1,
//	0.5, 0.5, 1, 1, 1.5,
//	1.5, 0.5, 0.5, 2,
//	0.5, 1, 1,
//
//	0.5, 0.5, 0.5, 0.5, 0.5, 1, 1,
//	1, 1, 1.5,
//	1, 0.5, 1, 3.5,
//	0.5, 0.5, 0.5, 1.5,
//	0.5, 2, 1.5,
//	0.5, 2, 0.5,
//	3.5, 0.5,
//	1, 0.5, 0.5, 1, 0.5, 0.5,
//// verse 2 (74)
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 1, 3,
//	0.5, 1,
//	0.5, 1, 1.5, 1,
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 0.5, 1.5,	0.25, 0.25, 3,
//	0.125, 0.375, 0.5, 1, 0.125, 0.375, 0.5, 1,
//	// repeat
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 1, 3,
//	0.5, 1,
//	0.5, 1, 1.5, 1,
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 0.5, 1.5,	0.25, 0.25, 3,
//	0.125, 0.375, 0.5, 1, 0.125, 0.375, 0.5, 1,
//// DS (60)
//	0.5, 0.5, 0.5, 0.5, 0.5, 1, 1,
//	1, 1, 1.5,
//	0.5, 1, 1, 1.5,
//	1, 1, 0.5, 1.5,
//	1, 0.5, 0.5, 0.5, 1, 1,
//	0.5, 0.5, 1, 1, 1.5,
//	1.5, 0.5, 0.5, 2,
//	0.5, 1, 1,
//	0.5, 0.5, 0.5, 0.5, 0.5, 1, 1,
//	1, 1, 1.5,
//	1, 0.5, 1, 3.5,
//	0.5, 0.5, 0.5, 1.5,
//	0.5, 2, 1.5,
//	0.5, 2, 0.5,
//// ending 2 (8)
//	3.5, 0.5,
//	1, 0.5, 0.5, 1, 0.5, 0.5,
//// transposed ()
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 1, 3,
//	0.5, 1,
//	0.5, 1, 1.5, 1,
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 0.5, 1.5,	0.25, 0.25, 3,
//	0.125, 0.375, 0.5, 1, 0.125, 0.375, 0.5, 1,
//	// repeat
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 1, 3,
//	0.5, 1,
//	0.5, 1, 1.5, 1,
//	1, 0.5, 0.5, 1, 0.5, 1,
//	1, 1, 0.5, 1.5,	0.25, 0.25, 7,
//// ending (42)
//	0.5, 0.5, 1, 0.5, 1, 1,
//	1, 1, 0.5, 1,
//	1, 0.5, 1, 0.5, 1,
//	0.5, 1, 0.5, 1, 1,
//	0.5, 0.5, 1, 0.5, 1, 1,
//	1, 1, 0.5, 1,
//	1, 0.5, 1, 0.5, 1,
//	0.5, 1, 0.5, 1, 1, 8,
//	4
//};
//int noteArray[] = {
//    // refrain
//	   G4, E4, E4, D4, G4,
//	   E4, E4, E4, D4, G4,
//	   E4, E4, D4, G4,
//	   G4, E4, E4, E4, D4, F4,
//	   D4, D4, D4, C4, E4,
//	   C4, C4, C4, Bb3,
//	   R, C4, R,
//	   G4, E4, E4, D4, G4,
//	   E4, E4, E4, D4, G4,
//	   E4, E4, D4, G4,
//	   G4, E4, E4, E4, D4, F4,
//	   D4, D4, D4, C4, E4,
//	   C4, C4, C4, Bb3,
//	   R, C4, R,
//    // verse
//	   F4, Fs4, F4, Eb4, F4, Eb4,
//	   Cs4, Eb4, R, Gs4,
//	   A4, Gs4, Fs4, Gs4, Fs4, E4,
//	   Fs4, R,
//	   A4, Bb4, A4, G4, A4, G4, F4, G4,
//	   R, A4, Bb4, C5, C4, D4, E4, F4,
//	   G4, Gs4, A4, Bb4, Bb3, C4, D4,
//	   E4, F4, Fs4, R,
//    // ref 2
//	   G4, E4, E4, D4, G4,
//	   E4, E4, E4, D4, G4,
//	   E4, E4, D4, G4,
//	   G4, E4, E4, E4, D4,
//	   A4, F4, F4, F4, D4,
//	   C5, E4, E4, E4, D4, E4,
//	   R, E4, E4, E4, D4, E4,
//	   R, E4, E4, E4, D4, E4, R
//	};
//
//
//	double beatArray[] = {
//	// refrain
//	   1.5, 0.5, 1, 0.5, 1.5,
//	   0.5, 1, 0.5, 0.5, 1.5,
//	   1, 1, 0.5, 1,
//	   0.5, 0.5, 1, 0.5, 0.5, 1,
//	   1, 1, 0.5, 0.5, 1,
//	   1, 1, 0.5, 1,
//	   1, 5, 2,
//	   1.5, 0.5, 1, 0.5, 1.5,
//	   0.5, 1, 0.5, 0.5, 1.5,
//	   1, 1, 0.5, 1,
//	   0.5, 0.5, 1, 0.5, 0.5, 1,
//	   1, 1, 0.5, 0.5, 1,
//	   1, 1, 0.5, 1,
//	   1, 5, 2,
//    // verse
//	   4.67, 0.66, 0.66, 0.66, 0.66, 0.66,
//	   1.5, 5.5, 0.5, 5.17,
//	   0.66, 0.66, 0.66, 0.66, 0.66, 1.5,
//	   5.5, 0.5,
//	   5.17, 0.66, 0.66, 0.66, 0.66, 0.66, 1.5, 4.5,
//	   0.67, 0.66, 0.66, 0.66, 0.66, 0.66, 0.66, 0.66,
//	   0.66, 3, 1, 0.66, 0.66, 0.66, 0.66,
//	   0.66, 0.66, 3, 1,
//	// ref 2
//	   1.5, 0.5, 1, 0.5, 1.5,
//	   0.5, 1, 0.5, 0.5, 1.5,
//	   1, 1, 0.5, 1,
//	   0.5, 0.5, 1, 0.5, 0.5,
//	   2, 0.5, 0.5, 0.5, 0.5,
//	   2, 0.5, 0.67, 0.66, 0.66, 4,
//	   1.5, 0.5, 0.67, 0.66, 0.66, 4,
//	   1.5, 0.5, 0.67, 0.66, 0.66, 7, 1
//	};
#endif