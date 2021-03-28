#include "notes.h"

int noteArray[][9] = 
{
	{0, 0, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 1},
	{F4, 0, 0, 0, 0, 0, 0, 0, 1},

	{F3, Bb2, F4, D4, 0, 0, 0, 0, 0},
	{F3, Bb2, D4, 0, 0, 0, 0, 0, 0},
	{F3, Bb2, D4, 0, 0, 0, 0, 0, 0},
	{F3, Bb2, F4, 0, 0, 0, 0, 0, 1},

	{F3, C3, F4, C4, 0, 0, 0, 0, 0},
	{F3, C3, C4, 0, 0, 0, 0, 0, 0},
	{F3, C3, C4, 0, 0, 0, 0, 0, 0},
	{F3, C3, D4, 0, 0, 0, 0, 0, 1},

	{A3, F3, Eb4, 0, 0, 0, 0, 0, 0},
	{A3, F3, F4, 0, 0, 0, 0, 0, 1},
	{C3, G4, 0, 0, 0, 0, 0, 0, 0},
	{C3, A4, 0, 0, 0, 0, 0, 0, 1},

	{F4, D4, Bb2, 0, 0, 0, 0, 0, 0},
	{F4, D4, F3, 0, 0, 0, 0, 0, 0},
	{F4, D4, Bb2, 0, 0, 0, 0, 0, 1},
	{0, F4, 0, 0, 0, 0, 0, 0, 1},

	{F3, Bb2, F4, D4, 0, 0, 0, 0, 0},
	{F3, Bb2, D4, 0, 0, 0, 0, 0, 0},
	{F3, Bb2, D4, 0, 0, 0, 0, 0, 0},
	{F3, Bb2, F4, 0, 0, 0, 0, 0, 1},

	{F3, C3, F4, C4, 0, 0, 0, 0, 0},
	{F3, C3, C4, 0, 0, 0, 0, 0, 0},
	{F3, C3, C4, 0, 0, 0, 0, 0, 0},
	{F3, C3, C5, 0, 0, 0, 0, 0, 1},

	{G3, D3, B2, B4, 0, 0, 0, 0, 0},
	{G3, D3, B2, C5, 0, 0, 0, 0, 1},
	{D5, G2, 0, 0, 0, 0, 0, 0, 1},
	{G4, B2, 0, 0, 0, 0, 0, 0, 1},

	{C5, E4, C3, 0, 0, 0, 0, 0, 0},
	{C5, E4, D3, 0, 0, 0, 0, 0, 0},
	{C5, E4, E3, 0, 0, 0, 0, 0, 1},
	{F4, F3, C3, A2, 0, 0, 0, 0, 1},

	{F3, Bb2, D5, F4, D4, 0, 0, 0, 0},
	{F3, Bb2, D5, 0, 0, 0, 0, 0, 0},
	{F3, Bb2, C5, 0, 0, 0, 0, 0, 0},
	{F3, Bb2, Bb4, 0, 0, 0, 0, 0, 1},

	{C3, F2, Bb4, C4, A3, 0, 0, 0, 0},
	{C3, F2, A4, 0, 0, 0, 0, 0, 0},
	{C3, F2, A4, 0, 0, 0, 0, 0, 0},
	{C3, F2, Bb4, 0, 0, 0, 0, 0, 1},

	{F2, C5, Eb4, C4, 0, 0, 0, 0, 0},
	{F2, A4, 0, 0, 0, 0, 0, 0, 0},
	{F2, G4, 0, 0, 0, 0, 0, 0, 0},
	{F2, F4, 0, 0, 0, 0, 0, 0, 1},

	{Bb4, F4, Bb3, Bb2, 0, 0, 0, 0, 0},
	{Bb4, F4, Bb3, Bb2, 0, 0, 0, 0, 0},
	{Bb4, F4, Bb3, C3, 0, 0, 0, 0, 1},
	{Bb4, Gs4, D3, 0, 0, 0, 0, 0, 1},

	{G3, Eb3, Bb4, Bb3, 0, 0, 0, 0, 0},
	{G3, Eb3, G4, 0, 0, 0, 0, 0, 0},
	{G3, Eb3, G4, 0, 0, 0, 0, 0, 1},
	{Bb4, G4, C3, 0, 0, 0, 0, 0, 1},

	{F3, Bb4, F4, D4, 0, 0, 0, 0, 0},
	{F3, F4, 0, 0, 0, 0, 0, 0, 0},
	{F3, F4, 0, 0, 0, 0, 0, 0, 0},
	{F3, F4, 0, 0, 0, 0, 0, 0, 1},

	{G3, G2, G4, Eb4, Bb3, 0, 0, 0, 0},
	{G3, G2, Bb4, 0, 0, 0, 0, 0, 1},
	{F4, A3, Eb3, F2, 0, 0, 0, 0, 1},
	{C5, F3, F2, 0, 0, 0, 0, 0, 1},

	{Bb4, F4, D4, Bb3, F3, Bb2, 0, 0, 1},

	{C4, 0, 0, 0, 0, 0, 0, 0, 1},

	{F4, F3, 0, 0, 0, 0, 0, 0, 0},
	{F3, E4, 0, 0, 0, 0, 0, 0, 0},
	{F3, F4, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{C3, F4, 0, 0, 0, 0, 0, 0, 0},
	{C3, G4, 0, 0, 0, 0, 0, 0, 0},
	{C3, A4, 0, 0, 0, 0, 0, 0, 0},
	{C3, G4, 0, 0, 0, 0, 0, 0, 1},

	{F4, F3, 0, 0, 0, 0, 0, 0, 0},
	{F3, F4, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, C5, 0, 0, 0, 0, 0, 0, 1},

	{D5, Bb2, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, D5, 0, 0, 0, 0, 0, 0, 1},

	{C5, F3, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, F4, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{C3, F4, 0, 0, 0, 0, 0, 0, 0},
	{C3, G4, 0, 0, 0, 0, 0, 0, 0},
	{C3, A4, 0, 0, 0, 0, 0, 0, 0},
	{C3, G4, 0, 0, 0, 0, 0, 0, 1},

	{F4, Bb2, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, D4, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, D4, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, C4, 0, 0, 0, 0, 0, 0, 1},

	{F4, F3, 0, 0, 0, 0, 0, 0, 0},
	{F3, D5, 0, 0, 0, 0, 0, 0, 1},

	{C5, F3, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, F4, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{C3, F4, 0, 0, 0, 0, 0, 0, 0},
	{C3, G4, 0, 0, 0, 0, 0, 0, 0},
	{C3, D5, 0, 0, 0, 0, 0, 0, 1},

	{C5, F3, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, C5, 0, 0, 0, 0, 0, 0, 1},

	{D5, Bb2, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, D5, 0, 0, 0, 0, 0, 0, 1},

	{C5, F3, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, F4, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{C3, F4, 0, 0, 0, 0, 0, 0, 0},
	{C3, G4, 0, 0, 0, 0, 0, 0, 0},
	{C3, A4, 0, 0, 0, 0, 0, 0, 0},
	{C3, G4, 0, 0, 0, 0, 0, 0, 1},

	{F4, Bb2, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, D4, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, D4, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, C4, 0, 0, 0, 0, 0, 0, 1},

	{F4, F3, 0, 0, 0, 0, 0, 0, 1},

	{0, 0, 0, 0, 0, 0, 0, 0, 1},
	{G4, G2, 0, 0, 0, 0, 0, 0, 0},
	{G2, A4, 0, 0, 0, 0, 0, 0, 1},
	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, C5, 0, 0, 0, 0, 0, 0, 1},

	{D5, B2, 0, 0, 0, 0, 0, 0, 1},
	{D5, B3, 0, 0, 0, 0, 0, 0, 0},
	{B3, B4, 0, 0, 0, 0, 0, 0, 1},
	{E5, C3, 0, 0, 0, 0, 0, 0, 1},
	{E5, C4, 0, 0, 0, 0, 0, 0, 0},
	{C4, C5, 0, 0, 0, 0, 0, 0, 1},

	{D5, B2, 0, 0, 0, 0, 0, 0, 0},
	{D5, B3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A2, 0, 0, 0, 0, 0, 0, 1},
	{C5, A3, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G2, B4, 0, 0, 0, 0, 0, 0, 1},
	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},
	{D2, A4, 0, 0, 0, 0, 0, 0, 1},
	{D3, A4, 0, 0, 0, 0, 0, 0, 0},
	{D3, Fs4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G2, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, G2, 0, 0, 0, 0, 0, 0, 0},
	{G2, A4, 0, 0, 0, 0, 0, 0, 1},
	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, C5, 0, 0, 0, 0, 0, 0, 1},

	{D5, B2, 0, 0, 0, 0, 0, 0, 1},
	{D5, B3, 0, 0, 0, 0, 0, 0, 0},
	{B3, B4, 0, 0, 0, 0, 0, 0, 1},
	{E5, C3, 0, 0, 0, 0, 0, 0, 1},
	{E5, C4, 0, 0, 0, 0, 0, 0, 0},
	{C4, C5, 0, 0, 0, 0, 0, 0, 1},

	{D5, B2, 0, 0, 0, 0, 0, 0, 0},
	{D5, B3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A2, 0, 0, 0, 0, 0, 0, 1},
	{C5, A3, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G2, B4, 0, 0, 0, 0, 0, 0, 1},
	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},
	{D2, A4, 0, 0, 0, 0, 0, 0, 1},
	{D3, A4, 0, 0, 0, 0, 0, 0, 0},
	{D3, Fs4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G2, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{D5, B2, 0, 0, 0, 0, 0, 0, 0},
	{D5, B3, 0, 0, 0, 0, 0, 0, 1},

	{C5, A2, 0, 0, 0, 0, 0, 0, 0},
	{C5, A3, 0, 0, 0, 0, 0, 0, 1},
	{B4, G2, 0, 0, 0, 0, 0, 0, 1},
	{B4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},

	{D2, A4, 0, 0, 0, 0, 0, 0, 1},
	{A4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D3, Fs4, 0, 0, 0, 0, 0, 0, 1},
	{G4, G2, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},

	{D5, B2, 0, 0, 0, 0, 0, 0, 0},
	{D5, B3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A2, 0, 0, 0, 0, 0, 0, 0},
	{C5, A3, 0, 0, 0, 0, 0, 0, 1},

	{B4, G2, 0, 0, 0, 0, 0, 0, 1},
	{B4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},
	{D2, A4, 0, 0, 0, 0, 0, 0, 1},
	{A4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D3, Fs4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G2, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, G2, 0, 0, 0, 0, 0, 0, 0},
	{G2, A4, 0, 0, 0, 0, 0, 0, 1},
	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, C5, 0, 0, 0, 0, 0, 0, 1},

	{D5, B2, 0, 0, 0, 0, 0, 0, 1},
	{D5, B3, 0, 0, 0, 0, 0, 0, 0},
	{B3, B4, 0, 0, 0, 0, 0, 0, 1},
	{C3, E5, 0, 0, 0, 0, 0, 0, 1},
	{C4, E5, 0, 0, 0, 0, 0, 0, 0},
	{C4, C5, 0, 0, 0, 0, 0, 0, 1},

	{D5, B2, 0, 0, 0, 0, 0, 0, 0},
	{D5, B3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A2, 0, 0, 0, 0, 0, 0, 1},
	{C5, A3, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G2, B4, 0, 0, 0, 0, 0, 0, 1},
	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},
	{D2, A4, 0, 0, 0, 0, 0, 0, 1},
	{D3, A4, 0, 0, 0, 0, 0, 0, 0},
	{D3, Fs4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G2, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 1},

	{0, 0, 0, 0, 0, 0, 0, 0, 1},
	{E5, 0, 0, 0, 0, 0, 0, 0, 1},
	{Eb5, 0, 0, 0, 0, 0, 0, 0, 1},

	{E5, 0, 0, 0, 0, 0, 0, 0, 1},
	{Eb5, 0, 0, 0, 0, 0, 0, 0, 1},
	{E5, 0, 0, 0, 0, 0, 0, 0, 1},
	{B4, 0, 0, 0, 0, 0, 0, 0, 1},
	{D5, 0, 0, 0, 0, 0, 0, 0, 1},
	{C5, 0, 0, 0, 0, 0, 0, 0, 1},

	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 0},
	{A3, C4, 0, 0, 0, 0, 0, 0, 1},
	{0, E4, 0, 0, 0, 0, 0, 0, 0},
	{0, A4, 0, 0, 0, 0, 0, 0, 1},

	{E3, B4, 0, 0, 0, 0, 0, 0, 0},
	{E3, 0, 0, 0, 0, 0, 0, 0, 0},
	{E3, E4, 0, 0, 0, 0, 0, 0, 1},
	{0, Gs4, 0, 0, 0, 0, 0, 0, 0},
	{0, B4, 0, 0, 0, 0, 0, 0, 1},

	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 0},
	{A3, E4, 0, 0, 0, 0, 0, 0, 1},
	{0, E5, 0, 0, 0, 0, 0, 0, 0},
	{0, Eb5, 0, 0, 0, 0, 0, 0, 1},

	{E5, 0, 0, 0, 0, 0, 0, 0, 1},
	{Eb5, 0, 0, 0, 0, 0, 0, 0, 1},
	{E5, 0, 0, 0, 0, 0, 0, 0, 1},
	{B4, 0, 0, 0, 0, 0, 0, 0, 1},
	{D5, 0, 0, 0, 0, 0, 0, 0, 1},
	{C5, 0, 0, 0, 0, 0, 0, 0, 1},

	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 0},
	{A3, C4, 0, 0, 0, 0, 0, 0, 1},
	{0, E4, 0, 0, 0, 0, 0, 0, 0},
	{0, A4, 0, 0, 0, 0, 0, 0, 1},

	{E3, B4, 0, 0, 0, 0, 0, 0, 0},
	{E3, 0, 0, 0, 0, 0, 0, 0, 0},
	{E3, E4, 0, 0, 0, 0, 0, 0, 1},
	{0, C5, 0, 0, 0, 0, 0, 0, 0},
	{0, B4, 0, 0, 0, 0, 0, 0, 1},

	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 0},
	{A3, B4, 0, 0, 0, 0, 0, 0, 1},
	{0, C5, 0, 0, 0, 0, 0, 0, 0},
	{0, D5, 0, 0, 0, 0, 0, 0, 1},

	{C4, E5, 0, 0, 0, 0, 0, 0, 0},
	{C4, 0, 0, 0, 0, 0, 0, 0, 0},
	{C4, G4, 0, 0, 0, 0, 0, 0, 1},
	{0, F5, 0, 0, 0, 0, 0, 0, 0},
	{0, E5, 0, 0, 0, 0, 0, 0, 1},

	{B3, D5, 0, 0, 0, 0, 0, 0, 0},
	{B3, 0, 0, 0, 0, 0, 0, 0, 0},
	{B3, F4, 0, 0, 0, 0, 0, 0, 1},
	{0, E5, 0, 0, 0, 0, 0, 0, 0},
	{0, D5, 0, 0, 0, 0, 0, 0, 1},

	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 0},
	{A3, E4, 0, 0, 0, 0, 0, 0, 1},
	{0, D5, 0, 0, 0, 0, 0, 0, 0},
	{0, C5, 0, 0, 0, 0, 0, 0, 1},

	{B4, Gs3, 0, 0, 0, 0, 0, 0, 1},

	{0, 0, 0, 0, 0, 0, 0, 0, 1},
	{0, E5, 0, 0, 0, 0, 0, 0, 0},
	{0, Eb5, 0, 0, 0, 0, 0, 0, 1},

	{E5, 0, 0, 0, 0, 0, 0, 0, 1},
	{Eb5, 0, 0, 0, 0, 0, 0, 0, 1},
	{E5, 0, 0, 0, 0, 0, 0, 0, 1},
	{B4, 0, 0, 0, 0, 0, 0, 0, 1},
	{D5, 0, 0, 0, 0, 0, 0, 0, 1},
	{C5, 0, 0, 0, 0, 0, 0, 0, 1},

	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 0},
	{A3, C4, 0, 0, 0, 0, 0, 0, 1},
	{0, E4, 0, 0, 0, 0, 0, 0, 0},
	{0, A4, 0, 0, 0, 0, 0, 0, 1},

	{E3, B4, 0, 0, 0, 0, 0, 0, 0},
	{E3, 0, 0, 0, 0, 0, 0, 0, 0},
	{E3, E4, 0, 0, 0, 0, 0, 0, 1},
	{0, Gs4, 0, 0, 0, 0, 0, 0, 0},
	{0, B4, 0, 0, 0, 0, 0, 0, 1},

	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 0},
	{A3, E4, 0, 0, 0, 0, 0, 0, 1},
	{0, E5, 0, 0, 0, 0, 0, 0, 0},
	{0, Eb5, 0, 0, 0, 0, 0, 0, 1},

	{E5, 0, 0, 0, 0, 0, 0, 0, 1},
	{Eb5, 0, 0, 0, 0, 0, 0, 0, 1},
	{E5, 0, 0, 0, 0, 0, 0, 0, 1},
	{B4, 0, 0, 0, 0, 0, 0, 0, 1},
	{D5, 0, 0, 0, 0, 0, 0, 0, 1},
	{C5, 0, 0, 0, 0, 0, 0, 0, 1},

	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, 0, 0, 0, 0, 0, 0, 0, 0},
	{A3, C4, 0, 0, 0, 0, 0, 0, 1},
	{0, E4, 0, 0, 0, 0, 0, 0, 0},
	{0, A4, 0, 0, 0, 0, 0, 0, 1},

	{E3, B4, 0, 0, 0, 0, 0, 0, 0},
	{E3, 0, 0, 0, 0, 0, 0, 0, 0},
	{E3, E4, 0, 0, 0, 0, 0, 0, 1},
	{0, C5, 0, 0, 0, 0, 0, 0, 0},
	{0, B4, 0, 0, 0, 0, 0, 0, 1},

	{E4, A3, A4, 0, 0, 0, 0, 0, 0},
	{A4, A1, 0, 0, 0, 0, 0, 0, 1},

	{0, D4, 0, 0, 0, 0, 0, 0, 1},

	{F4, D3, 0, 0, 0, 0, 0, 0, 1},
	{G4, E3, 0, 0, 0, 0, 0, 0, 1},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, B4, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{C3, E4, 0, 0, 0, 0, 0, 0, 1},
	{A2, C4, 0, 0, 0, 0, 0, 0, 0},
	{A2, D4, 0, 0, 0, 0, 0, 0, 0},
	{A2, E4, 0, 0, 0, 0, 0, 0, 1},

	{F4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D3, D4, 0, 0, 0, 0, 0, 0, 1},
	{Bb2, D4, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, Cs4, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, D4, 0, 0, 0, 0, 0, 0, 1},

	{A2, E4, 0, 0, 0, 0, 0, 0, 0},
	{A2, Cs4, 0, 0, 0, 0, 0, 0, 0},
	{A2, A3, 0, 0, 0, 0, 0, 0, 0},
	{A2, D4, 0, 0, 0, 0, 0, 0, 1},

	{F4, D3, 0, 0, 0, 0, 0, 0, 1},
	{G4, E3, 0, 0, 0, 0, 0, 0, 1},
	{F3, A4, 0, 0, 0, 0, 0, 0, 0},
	{F3, B4, 0, 0, 0, 0, 0, 0, 0},
	{F3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{C3, E4, 0, 0, 0, 0, 0, 0, 1},
	{A2, C4, 0, 0, 0, 0, 0, 0, 0},
	{A2, D4, 0, 0, 0, 0, 0, 0, 0},
	{A2, E4, 0, 0, 0, 0, 0, 0, 1},

	{D3, F4, 0, 0, 0, 0, 0, 0, 0},
	{D3, E4, 0, 0, 0, 0, 0, 0, 0},
	{D3, D4, 0, 0, 0, 0, 0, 0, 1},
	{A2, Cs4, 0, 0, 0, 0, 0, 0, 0},
	{A2, B3, 0, 0, 0, 0, 0, 0, 0},
	{A2, Cs4, 0, 0, 0, 0, 0, 0, 1},

	{D3, D4, 0, 0, 0, 0, 0, 0, 0},
	{D3, D4, 0, 0, 0, 0, 0, 0, 1},

	{C5, F3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A3, 0, 0, 0, 0, 0, 0, 1},
	{B4, G3, 0, 0, 0, 0, 0, 0, 1},
	{A4, F3, 0, 0, 0, 0, 0, 0, 1},

	{G4, E3, 0, 0, 0, 0, 0, 0, 0},
	{E3, E4, 0, 0, 0, 0, 0, 0, 1},
	{A2, C4, 0, 0, 0, 0, 0, 0, 0},
	{A2, D4, 0, 0, 0, 0, 0, 0, 0},
	{A2, E4, 0, 0, 0, 0, 0, 0, 1},

	{F4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D3, D4, 0, 0, 0, 0, 0, 0, 1},
	{Bb2, D4, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, Cs4, 0, 0, 0, 0, 0, 0, 0},
	{Bb2, D4, 0, 0, 0, 0, 0, 0, 1},

	{A2, E4, 0, 0, 0, 0, 0, 0, 0},
	{A2, Cs4, 0, 0, 0, 0, 0, 0, 0},
	{A2, A3, 0, 0, 0, 0, 0, 0, 1},

	{C5, F3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A3, 0, 0, 0, 0, 0, 0, 1},
	{B4, G3, 0, 0, 0, 0, 0, 0, 1},
	{A4, F3, 0, 0, 0, 0, 0, 0, 1},

	{G4, E3, 0, 0, 0, 0, 0, 0, 0},
	{E3, E4, 0, 0, 0, 0, 0, 0, 1},
	{A2, C4, 0, 0, 0, 0, 0, 0, 0},
	{A2, D4, 0, 0, 0, 0, 0, 0, 0},
	{A2, E4, 0, 0, 0, 0, 0, 0, 1},

	{D3, F4, 0, 0, 0, 0, 0, 0, 0},
	{D3, E4, 0, 0, 0, 0, 0, 0, 0},
	{D3, D4, 0, 0, 0, 0, 0, 0, 1},
	{A2, Cs4, 0, 0, 0, 0, 0, 0, 0},
	{A2, B3, 0, 0, 0, 0, 0, 0, 0},
	{A2, Cs4, 0, 0, 0, 0, 0, 0, 1},

	{D4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D4, D3, 0, 0, 0, 0, 0, 0, 1},

	{E4, 0, 0, 0, 0, 0, 0, 0, 1},

	{A3, E4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, B4, 0, 0, 0, 0, 0, 0, 1},

	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, B4, 0, 0, 0, 0, 0, 0, 0},
	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 1},

	{C3, G4, 0, 0, 0, 0, 0, 0, 0},
	{C3, G4, 0, 0, 0, 0, 0, 0, 0},
	{C3, E4, 0, 0, 0, 0, 0, 0, 1},

	{C3, G4, 0, 0, 0, 0, 0, 0, 0},
	{C3, G4, 0, 0, 0, 0, 0, 0, 0},
	{C3, A4, 0, 0, 0, 0, 0, 0, 1},

	{A3, E4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, B4, 0, 0, 0, 0, 0, 0, 1},

	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, B4, 0, 0, 0, 0, 0, 0, 0},
	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, D5, 0, 0, 0, 0, 0, 0, 1},

	{C3, E5, 0, 0, 0, 0, 0, 0, 0},
	{C3, E5, 0, 0, 0, 0, 0, 0, 0},
	{C3, C5, 0, 0, 0, 0, 0, 0, 1},

	{C3, E5, 0, 0, 0, 0, 0, 0, 0},
	{C3, E5, 0, 0, 0, 0, 0, 0, 0},
	{C3, C5, 0, 0, 0, 0, 0, 0, 1},

	{C3, E5, 0, 0, 0, 0, 0, 0, 0},
	{C3, E5, 0, 0, 0, 0, 0, 0, 0},
	{C3, E5, 0, 0, 0, 0, 0, 0, 0},
	{C3, D5, 0, 0, 0, 0, 0, 0, 0},
	{C3, C5, 0, 0, 0, 0, 0, 0, 1},

	{G3, D5, 0, 0, 0, 0, 0, 0, 0},
	{G3, D5, 0, 0, 0, 0, 0, 0, 0},
	{G3, D5, 0, 0, 0, 0, 0, 0, 0},
	{G3, B4, 0, 0, 0, 0, 0, 0, 1},

	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, B4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 1},

	{E3, B4, 0, 0, 0, 0, 0, 0, 0},
	{E3, B4, 0, 0, 0, 0, 0, 0, 0},
	{E3, B4, 0, 0, 0, 0, 0, 0, 0},
	{E3, C5, 0, 0, 0, 0, 0, 0, 0},
	{E3, D5, 0, 0, 0, 0, 0, 0, 1},

	{E5, A3, 0, 0, 0, 0, 0, 0, 1},
	{D5, D3, 0, 0, 0, 0, 0, 0, 1},

	{E3, C5, 0, 0, 0, 0, 0, 0, 0},
	{E3, B4, 0, 0, 0, 0, 0, 0, 0},
	{E3, E4, 0, 0, 0, 0, 0, 0, 1},

	{A3, E4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, G4, 0, 0, 0, 0, 0, 0, 1},

	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, D4, 0, 0, 0, 0, 0, 0, 1},

	{C3, E4, 0, 0, 0, 0, 0, 0, 0},
	{C3, E4, 0, 0, 0, 0, 0, 0, 1},
	{G3, D4, 0, 0, 0, 0, 0, 0, 1},

	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, B4, 0, 0, 0, 0, 0, 0, 1},
	{D3, A4, 0, 0, 0, 0, 0, 0, 0},
	{D3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G3, G4, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, D4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, D4, 0, 0, 0, 0, 0, 0, 1},

	{C3, E4, 0, 0, 0, 0, 0, 0, 0},
	{C3, E4, 0, 0, 0, 0, 0, 0, 1},
	{G3, D4, 0, 0, 0, 0, 0, 0, 1},

	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, B4, 0, 0, 0, 0, 0, 0, 1},
	{D3, A4, 0, 0, 0, 0, 0, 0, 0},
	{D3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G3, G4, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, D4, 0, 0, 0, 0, 0, 0, 0},
	{0, D4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, D4, 0, 0, 0, 0, 0, 0, 0},
	{G3, D4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 0},
	{G3, D4, 0, 0, 0, 0, 0, 0, 1},

	{C3, E4, 0, 0, 0, 0, 0, 0, 0},
	{C3, E4, 0, 0, 0, 0, 0, 0, 1},
	{G3, D4, 0, 0, 0, 0, 0, 0, 1},

	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, B4, 0, 0, 0, 0, 0, 0, 1},
	{D3, A4, 0, 0, 0, 0, 0, 0, 0},
	{D3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G3, 0, 0, 0, 0, 0, 0, 1},

	{D4, B3, G3, D5, 0, 0, 0, 0, 0},
	{D4, B3, G3, G4, 0, 0, 0, 0, 0},
	{D4, B3, G3, A4, 0, 0, 0, 0, 1},
	{A3, B4, 0, 0, 0, 0, 0, 0, 0},
	{A3, C5, 0, 0, 0, 0, 0, 0, 1},

	{B3, D5, 0, 0, 0, 0, 0, 0, 0},
	{B3, G4, 0, 0, 0, 0, 0, 0, 0},
	{B3, G4, 0, 0, 0, 0, 0, 0, 1},

	{C4, E5, 0, 0, 0, 0, 0, 0, 0},
	{C4, C5, 0, 0, 0, 0, 0, 0, 0},
	{C4, D5, 0, 0, 0, 0, 0, 0, 0},
	{C4, E5, 0, 0, 0, 0, 0, 0, 0},
	{C4, Fs5, 0, 0, 0, 0, 0, 0, 1},

	{B3, G5, 0, 0, 0, 0, 0, 0, 0},
	{B3, G4, 0, 0, 0, 0, 0, 0, 0},
	{B3, G4, 0, 0, 0, 0, 0, 0, 1},

	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, D5, 0, 0, 0, 0, 0, 0, 0},
	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, B4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, C5, 0, 0, 0, 0, 0, 0, 0},
	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, A4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},

	{Fs4, D4, 0, 0, 0, 0, 0, 0, 1},
	{B3, G4, 0, 0, 0, 0, 0, 0, 0},
	{B3, A4, 0, 0, 0, 0, 0, 0, 1},
	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},

	{D4, B4, 0, 0, 0, 0, 0, 0, 0},
	{D4, A4, 0, 0, 0, 0, 0, 0, 0},
	{A4, C4, 0, 0, 0, 0, 0, 0, 1},

	{B3, D5, 0, 0, 0, 0, 0, 0, 0},
	{B3, G4, 0, 0, 0, 0, 0, 0, 0},
	{B3, A4, 0, 0, 0, 0, 0, 0, 1},
	{A3, B4, 0, 0, 0, 0, 0, 0, 0},
	{A3, C5, 0, 0, 0, 0, 0, 0, 1},

	{D5, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, B3, 0, 0, 0, 0, 0, 0, 1},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},

	{C4, E5, 0, 0, 0, 0, 0, 0, 0},
	{C4, C5, 0, 0, 0, 0, 0, 0, 0},
	{C4, D5, 0, 0, 0, 0, 0, 0, 0},
	{C4, E5, 0, 0, 0, 0, 0, 0, 0},
	{C4, Fs5, 0, 0, 0, 0, 0, 0, 1},

	{B3, G5, 0, 0, 0, 0, 0, 0, 0},
	{B3, G4, 0, 0, 0, 0, 0, 0, 0},
	{B3, G4, 0, 0, 0, 0, 0, 0, 1},

	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, D5, 0, 0, 0, 0, 0, 0, 0},
	{A3, C5, 0, 0, 0, 0, 0, 0, 0},
	{A3, B4, 0, 0, 0, 0, 0, 0, 0},
	{A3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, C5, 0, 0, 0, 0, 0, 0, 0},
	{G3, B4, 0, 0, 0, 0, 0, 0, 0},
	{G3, A4, 0, 0, 0, 0, 0, 0, 0},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},

	{A4, C4, 0, 0, 0, 0, 0, 0, 1},
	{D4, B4, 0, 0, 0, 0, 0, 0, 1},
	{C4, A4, 0, 0, 0, 0, 0, 0, 1},
	{G4, B3, 0, 0, 0, 0, 0, 0, 1},
	{Fs4, A3, 0, 0, 0, 0, 0, 0, 1},

	{G3, G4, 0, 0, 0, 0, 0, 0, 1},

	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, Gs4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, Bb4, 0, 0, 0, 0, 1},

	{F3, D3, Bb2, Bb4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, Gs4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, G4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, F4, 0, 0, 0, 0, 1},

	{Bb3, G3, Eb3, Eb4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, Eb4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, F4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 1},

	{F3, D3, Bb2, G4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, F4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, F4, 0, 0, 0, 0, 1},

	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, Gs4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, Bb4, 0, 0, 0, 0, 1},

	{F3, D3, Bb2, Bb4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, Gs4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, G4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, F4, 0, 0, 0, 0, 1},

	{Bb3, G3, Eb3, Eb4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, Eb4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, F4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 1},

	{F4, F3, D3, Bb2, 0, 0, 0, 0, 1},
	{Eb4, Bb3, G3, Eb3, 0, 0, 0, 0, 1},
	{Eb4, Bb3, G3, Eb3, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 1},

	{F3, D3, Bb2, F4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, F4, 0, 0, 0, 0, 1},
	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, Eb4, 0, 0, 0, 0, 1},

	{F3, D3, Bb2, F4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, G4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, Gs4, 0, 0, 0, 0, 1},
	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, Eb4, 0, 0, 0, 0, 1},

	{F3, D3, Bb2, F4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, G4, 0, 0, 0, 0, 0},
	{F3, D3, Bb2, Gs4, 0, 0, 0, 0, 1},
	{F3, D3, B2, G4, 0, 0, 0, 0, 0},
	{F3, D3, B2, F4, 0, 0, 0, 0, 1},

	{Eb4, G3, Eb3, C3, 0, 0, 0, 0, 1},
	{F4, F3, C3, A2, 0, 0, 0, 0, 1},
	{Bb3, F3, D3, Bb2, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0, 1},

	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 0},
	{Bb3, G3, Eb3, G4, 0, 0, 0, 0, 1},
	{Bb3, G3, Cs3, Gs4, 0, 0, 0, 0, 0},
	{Bb3, G3, Cs3, Bb4, 0, 0, 0, 0, 1},

	{Gs3, Eb3, C3, Bb4, 0, 0, 0, 0, 0},
	{Gs3, Eb3, C3, Gs4, 0, 0, 0, 0, 1},
	{Gs3, Eb3, B2, G4, 0, 0, 0, 0, 0},
	{Gs3, Eb3, B2, F4, 0, 0, 0, 0, 1},

	{G3, Eb3, Bb2, Eb4, 0, 0, 0, 0, 0},
	{G3, Eb3, Bb2, Eb4, 0, 0, 0, 0, 1},
	{F3, C3, A2, F4, 0, 0, 0, 0, 0},
	{F3, C3, A2, G4, 0, 0, 0, 0, 1},

	{F4, F3, D3, Bb2, 0, 0, 0, 0, 1},
	{Eb4, Bb3, G3, Eb3, 0, 0, 0, 0, 1},
	{Eb4, Bb3, G3, Eb3, 0, 0, 0, 0, 1},

	{0, 0, 0, 0, 0, 0, 0, 0, 1},
	{E4, 0, 0, 0, 0, 0, 0, 0, 1},
	{Gs4, 0, 0, 0, 0, 0, 0, 0, 1},
	{A4, 0, 0, 0, 0, 0, 0, 0, 1},

	{0, B4, 0, 0, 0, 0, 0, 0, 0},
	{B4, E3, 0, 0, 0, 0, 0, 0, 0},
	{B4, E3, 0, 0, 0, 0, 0, 0, 0},
	{B4, Cs3, 0, 0, 0, 0, 0, 0, 0},
	{B4, E3, 0, 0, 0, 0, 0, 0, 0},

	{0, E3, 0, 0, 0, 0, 0, 0, 1},
	{0, E4, 0, 0, 0, 0, 0, 0, 1},
	{0, Gs4, 0, 0, 0, 0, 0, 0, 0},
	{0, A4, 0, 0, 0, 0, 0, 0, 1},

	{0, B4, 0, 0, 0, 0, 0, 0, 0},
	{B4, E3, 0, 0, 0, 0, 0, 0, 0},
	{B4, E3, 0, 0, 0, 0, 0, 0, 0},
	{B4, Cs3, 0, 0, 0, 0, 0, 0, 0},
	{B4, E3, 0, 0, 0, 0, 0, 0, 1},

	{0, E3, 0, 0, 0, 0, 0, 0, 1},
	{0, E4, 0, 0, 0, 0, 0, 0, 1},
	{0, Gs4, 0, 0, 0, 0, 0, 0, 0},
	{0, A4, 0, 0, 0, 0, 0, 0, 1},

	{B4, B2, 0, 0, 0, 0, 0, 0, 0},
	{B4, A2, 0, 0, 0, 0, 0, 0, 1},
	{Gs4, Gs2, 0, 0, 0, 0, 0, 0, 0},
	{Gs4, Fs2, 0, 0, 0, 0, 0, 0, 1},

	{E4, E2, 0, 0, 0, 0, 0, 0, 0},
	{E4, Fs2, 0, 0, 0, 0, 0, 0, 1},
	{Gs4, Gs2, 0, 0, 0, 0, 0, 0, 0},
	{Gs4, A2, 0, 0, 0, 0, 0, 0, 1},

	{0, Fs4, 0, 0, 0, 0, 0, 0, 0},
	{Fs4, B2, 0, 0, 0, 0, 0, 0, 0},
	{Fs4, B2, 0, 0, 0, 0, 0, 0, 0},
	{Fs4, A2, 0, 0, 0, 0, 0, 0, 1},

	{0, Gs2, 0, 0, 0, 0, 0, 0, 1},
	{0, Gs4, 0, 0, 0, 0, 0, 0, 1},
	{0, Gs4, 0, 0, 0, 0, 0, 0, 0},
	{0, Fs4, 0, 0, 0, 0, 0, 0, 1},

	{0, E4, 0, 0, 0, 0, 0, 0, 0},
	{E4, A2, 0, 0, 0, 0, 0, 0, 0},
	{E4, Gs2, 0, 0, 0, 0, 0, 0, 0},
	{E4, Fs2, 0, 0, 0, 0, 0, 0, 1},

	{Gs4, E2, 0, 0, 0, 0, 0, 0, 1},
	{B4, Gs2, 0, 0, 0, 0, 0, 0, 1},

	{A2, B4, 0, 0, 0, 0, 0, 0, 0},
	{A2, A4, 0, 0, 0, 0, 0, 0, 1},

	{0, 0, 0, 0, 0, 0, 0, 0, 1},
	{E4, E2, 0, 0, 0, 0, 0, 0, 1},
	{Gs4, Gs2, 0, 0, 0, 0, 0, 0, 1},
	{A4, A2, 0, 0, 0, 0, 0, 0, 1},

	{B4, B2, 0, 0, 0, 0, 0, 0, 1},
	{Gs4, Gs2, 0, 0, 0, 0, 0, 0, 1},

	{E4, E2, 0, 0, 0, 0, 0, 0, 1},
	{Fs4, Fs2, 0, 0, 0, 0, 0, 0, 1},

	{E2, E4, 0, 0, 0, 0, 0, 0, 1},

};