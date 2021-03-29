#include "notes.h"

int noteArray[][9] = 
{
	{Fs5, D3, 0, 0, 0, 0, 0, 0, 0},
	{Fs5, A3, 0, 0, 0, 0, 0, 0, 0},
	{Fs5, D4, 0, 0, 0, 0, 0, 0, 0},
	{Fs5, Fs4, 0, 0, 0, 0, 0, 0, 1},
	{E5, A2, 0, 0, 0, 0, 0, 0, 0},
	{E5, E3, 0, 0, 0, 0, 0, 0, 0},
	{E5, A3, 0, 0, 0, 0, 0, 0, 0},
	{E5, Cs4, 0, 0, 0, 0, 0, 0, 1},

	{D5, B2, 0, 0, 0, 0, 0, 0, 0},
	{D5, Fs3, 0, 0, 0, 0, 0, 0, 0},
	{D5, B3, 0, 0, 0, 0, 0, 0, 0},
	{D5, D4, 0, 0, 0, 0, 0, 0, 1},
	{Cs5, Fs2, 0, 0, 0, 0, 0, 0, 0},
	{Cs5, Cs3, 0, 0, 0, 0, 0, 0, 0},
	{Cs5, Fs3, 0, 0, 0, 0, 0, 0, 0},
	{Cs5, A3, 0, 0, 0, 0, 0, 0, 1},

	{B4, G2, 0, 0, 0, 0, 0, 0, 0},
	{B4, D3, 0, 0, 0, 0, 0, 0, 0},
	{B4, G3, 0, 0, 0, 0, 0, 0, 0},
	{B4, B3, 0, 0, 0, 0, 0, 0, 1},
	{A4, D2, 0, 0, 0, 0, 0, 0, 0},
	{A4, A2, 0, 0, 0, 0, 0, 0, 0},
	{A4, D3, 0, 0, 0, 0, 0, 0, 0},
	{A4, Fs3, 0, 0, 0, 0, 0, 0, 1},

	{B4, G2, 0, 0, 0, 0, 0, 0, 0},
	{B4, D3, 0, 0, 0, 0, 0, 0, 0},
	{B4, G3, 0, 0, 0, 0, 0, 0, 0},
	{B4, B3, 0, 0, 0, 0, 0, 0, 1},
	{Cs5, A2, 0, 0, 0, 0, 0, 0, 0},
	{Cs5, E3, 0, 0, 0, 0, 0, 0, 0},
	{Cs5, A3, 0, 0, 0, 0, 0, 0, 0},
	{Cs5, Cs4, 0, 0, 0, 0, 0, 0, 1},

	{Fs5, D5, D3, 0, 0, 0, 0, 0, 0},
	{Fs5, D5, A3, 0, 0, 0, 0, 0, 0},
	{Fs5, D5, D4, 0, 0, 0, 0, 0, 0},
	{Fs5, D5, Fs4, 0, 0, 0, 0, 0, 1},
	{E5, Cs5, A2, 0, 0, 0, 0, 0, 0},
	{E5, Cs5, E3, 0, 0, 0, 0, 0, 0},
	{E5, Cs5, A3, 0, 0, 0, 0, 0, 0},
	{E5, Cs5, Cs4, 0, 0, 0, 0, 0, 1},

	{D5, B4, B2, 0, 0, 0, 0, 0, 0},
	{D5, B4, Fs3, 0, 0, 0, 0, 0, 0},
	{D5, B4, B3, 0, 0, 0, 0, 0, 0},
	{D5, B4, D4, 0, 0, 0, 0, 0, 1},
	{Cs5, A4, Fs2, 0, 0, 0, 0, 0, 0},
	{Cs5, A4, Cs3, 0, 0, 0, 0, 0, 0},
	{Cs5, A4, Fs3, 0, 0, 0, 0, 0, 0},
	{Cs5, A4, A3, 0, 0, 0, 0, 0, 1},

	{B4, G4, G2, 0, 0, 0, 0, 0, 0},
	{B4, G4, D3, 0, 0, 0, 0, 0, 0},
	{B4, G4, G3, 0, 0, 0, 0, 0, 0},
	{B4, G4, B3, 0, 0, 0, 0, 0, 1},
	{A4, Fs4, D2, 0, 0, 0, 0, 0, 0},
	{A4, Fs4, A2, 0, 0, 0, 0, 0, 0},
	{A4, Fs4, D3, 0, 0, 0, 0, 0, 0},
	{A4, Fs4, Fs3, 0, 0, 0, 0, 0, 1},

	{B4, G4, G2, 0, 0, 0, 0, 0, 0},
	{B4, G4, D3, 0, 0, 0, 0, 0, 0},
	{B4, G4, G3, 0, 0, 0, 0, 0, 0},
	{B4, G4, B3, 0, 0, 0, 0, 0, 1},
	{Cs5, A4, A2, 0, 0, 0, 0, 0, 0},
	{Cs5, A4, E3, 0, 0, 0, 0, 0, 0},
	{Cs5, A4, A3, 0, 0, 0, 0, 0, 0},
	{Cs5, A4, Cs4, 0, 0, 0, 0, 0, 1},

	{Fs5, D5, D3, 0, 0, 0, 0, 0, 1},
	{Cs5, A3, 0, 0, 0, 0, 0, 0, 1},
	{D4, D5, 0, 0, 0, 0, 0, 0, 1},
	{Fs4, A3, 0, 0, 0, 0, 0, 0, 1},
	{E5, E4, A2, 0, 0, 0, 0, 0, 1},
	{A4, E3, 0, 0, 0, 0, 0, 0, 1},
	{G4, A3, 0, 0, 0, 0, 0, 0, 1},
	{A4, E3, 0, 0, 0, 0, 0, 0, 1},

	{D5, Fs4, B2, 0, 0, 0, 0, 0, 1},
	{D5, Fs3, 0, 0, 0, 0, 0, 0, 1},
	{Cs5, B3, 0, 0, 0, 0, 0, 0, 1},
	{B4, Fs3, 0, 0, 0, 0, 0, 0, 1},
	{Cs5, Fs2, A4, 0, 0, 0, 0, 0, 1},
	{Cs3, Fs5, 0, 0, 0, 0, 0, 0, 1},
	{A3, A5, Cs5, 0, 0, 0, 0, 0, 1},
	{Cs3, B5, 0, 0, 0, 0, 0, 0, 1},

	{G5, B4, G2, 0, 0, 0, 0, 0, 1},
	{Fs5, D3, 0, 0, 0, 0, 0, 0, 1},
	{E5, B3, 0, 0, 0, 0, 0, 0, 1},
	{G5, D3, 0, 0, 0, 0, 0, 0, 1},
	{D2, Fs5, A4, 0, 0, 0, 0, 0, 1},
	{A2, E5, 0, 0, 0, 0, 0, 0, 1},
	{D3, D5, 0, 0, 0, 0, 0, 0, 1},
	{Fs3, Cs5, 0, 0, 0, 0, 0, 0, 1},

	{B4, G4, G2, 0, 0, 0, 0, 0, 1},
	{A4, D3, 0, 0, 0, 0, 0, 0, 1},
	{B4, G3, 0, 0, 0, 0, 0, 0, 1},
	{D5, B3, 0, 0, 0, 0, 0, 0, 1},
	{D5, E4, A2, 0, 0, 0, 0, 0, 0},
	{D5, E4, E3, 0, 0, 0, 0, 0, 1},
	{Cs5, E4, A3, 0, 0, 0, 0, 0, 0},
	{Cs5, E4, E3, 0, 0, 0, 0, 0, 1},

	{A5, D3, 0, 0, 0, 0, 0, 0, 1},
	{Fs5, A3, 0, 0, 0, 0, 0, 0, 0},
	{A3, G5, 0, 0, 0, 0, 0, 0, 1},
	{D4, A5, 0, 0, 0, 0, 0, 0, 1},
	{Fs5, A3, 0, 0, 0, 0, 0, 0, 0},
	{A3, G5, 0, 0, 0, 0, 0, 0, 1},
	{A5, A2, 0, 0, 0, 0, 0, 0, 0},
	{A2, A4, 0, 0, 0, 0, 0, 0, 1},
	{E3, B4, 0, 0, 0, 0, 0, 0, 0},
	{E3, Cs5, 0, 0, 0, 0, 0, 0, 1},
	{A3, D5, 0, 0, 0, 0, 0, 0, 0},
	{A3, E5, 0, 0, 0, 0, 0, 0, 1},
	{E3, Fs5, 0, 0, 0, 0, 0, 0, 0},
	{E3, G5, 0, 0, 0, 0, 0, 0, 1},

	{Fs5, B2, 0, 0, 0, 0, 0, 0, 1},
	{D5, Fs3, 0, 0, 0, 0, 0, 0, 0},
	{Fs3, E5, 0, 0, 0, 0, 0, 0, 1},
	{B3, Fs5, 0, 0, 0, 0, 0, 0, 1},
	{Fs3, Fs4, 0, 0, 0, 0, 0, 0, 0},
	{Fs3, G4, 0, 0, 0, 0, 0, 0, 1},
	{A4, Fs2, 0, 0, 0, 0, 0, 0, 0},
	{Fs2, B4, 0, 0, 0, 0, 0, 0, 1},
	{Cs3, A4, 0, 0, 0, 0, 0, 0, 0},
	{Cs3, G4, 0, 0, 0, 0, 0, 0, 1},
	{A3, A4, 0, 0, 0, 0, 0, 0, 0},
	{A3, Fs4, 0, 0, 0, 0, 0, 0, 1},
	{Cs3, G4, 0, 0, 0, 0, 0, 0, 0},
	{Cs3, A4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G2, 0, 0, 0, 0, 0, 0, 1},
	{B4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D3, A4, 0, 0, 0, 0, 0, 0, 1},
	{G3, G4, 0, 0, 0, 0, 0, 0, 1},
	{Fs4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D3, E4, 0, 0, 0, 0, 0, 0, 1},
	{D2, Fs4, 0, 0, 0, 0, 0, 0, 0},
	{D2, E4, 0, 0, 0, 0, 0, 0, 1},
	{A2, D4, 0, 0, 0, 0, 0, 0, 0},
	{A2, E4, 0, 0, 0, 0, 0, 0, 1},
	{D3, Fs4, 0, 0, 0, 0, 0, 0, 0},
	{D3, G4, 0, 0, 0, 0, 0, 0, 1},
	{A2, A4, 0, 0, 0, 0, 0, 0, 0},
	{A2, B4, 0, 0, 0, 0, 0, 0, 1},

	{G4, G2, 0, 0, 0, 0, 0, 0, 1},
	{B4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D3, A4, 0, 0, 0, 0, 0, 0, 1},
	{G3, B4, 0, 0, 0, 0, 0, 0, 1},
	{D3, Cs5, 0, 0, 0, 0, 0, 0, 0},
	{D3, D5, 0, 0, 0, 0, 0, 0, 1},
	{Cs5, A2, 0, 0, 0, 0, 0, 0, 0},
	{A2, B4, 0, 0, 0, 0, 0, 0, 1},
	{E3, A4, 0, 0, 0, 0, 0, 0, 0},
	{E3, B4, 0, 0, 0, 0, 0, 0, 1},
	{Cs5, A3, 0, 0, 0, 0, 0, 0, 0},
	{A3, D5, 0, 0, 0, 0, 0, 0, 1},
	{E3, E5, 0, 0, 0, 0, 0, 0, 0},
	{E3, Fs5, 0, 0, 0, 0, 0, 0, 1},

};