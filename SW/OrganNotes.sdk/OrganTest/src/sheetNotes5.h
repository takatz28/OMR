#include "notes.h"

int noteArray[][9] = 
{
	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{G3, 0, 0, 0, 0, 0, 0, 0, 1},
	{C4, 0, 0, 0, 0, 0, 0, 0, 1},
	{G3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},

	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{A3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{C3, 0, 0, 0, 0, 0, 0, 0, 1},

	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{G3, 0, 0, 0, 0, 0, 0, 0, 1},
	{C4, 0, 0, 0, 0, 0, 0, 0, 1},
	{G3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},

	{0, A2, 0, 0, 0, 0, 0, 0, 0},
	{0, C3, 0, 0, 0, 0, 0, 0, 0},
	{0, E3, 0, 0, 0, 0, 0, 0, 0},
	{0, A3, 0, 0, 0, 0, 0, 0, 1},
	{0, E3, 0, 0, 0, 0, 0, 0, 1},
	{E4, C3, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{G4, E3, 0, 0, 0, 0, 0, 0, 1},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, C4, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, E3, 0, 0, 0, 0, 0, 0, 1},

	{A4, A2, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{A4, E3, 0, 0, 0, 0, 0, 0, 1},
	{A4, A3, 0, 0, 0, 0, 0, 0, 0},
	{A4, E3, 0, 0, 0, 0, 0, 0, 1},
	{E4, C3, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{G4, E3, 0, 0, 0, 0, 0, 0, 1},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, C4, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, E3, 0, 0, 0, 0, 0, 0, 1},

	{A4, A2, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{A4, E3, 0, 0, 0, 0, 0, 0, 1},
	{A4, A3, 0, 0, 0, 0, 0, 0, 0},
	{A4, E3, 0, 0, 0, 0, 0, 0, 1},
	{G4, C3, 0, 0, 0, 0, 0, 0, 1},

	{A4, F2, 0, 0, 0, 0, 0, 0, 0},
	{A4, A2, 0, 0, 0, 0, 0, 0, 1},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{A4, F3, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A2, 0, 0, 0, 0, 0, 0, 1},

	{B4, G2, 0, 0, 0, 0, 0, 0, 0},
	{B4, B2, 0, 0, 0, 0, 0, 0, 1},
	{A4, D3, 0, 0, 0, 0, 0, 0, 1},
	{G4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G4, D3, 0, 0, 0, 0, 0, 0, 1},
	{F4, B2, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{G4, E3, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, C4, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 0},
	{G4, E3, 0, 0, 0, 0, 0, 0, 1},

	{0, G2, 0, 0, 0, 0, 0, 0, 0},
	{0, B2, 0, 0, 0, 0, 0, 0, 0},
	{0, D3, 0, 0, 0, 0, 0, 0, 0},
	{0, G3, 0, 0, 0, 0, 0, 0, 1},
	{0, D3, 0, 0, 0, 0, 0, 0, 1},
	{E4, B2, 0, 0, 0, 0, 0, 0, 1},

	{G4, C3, 0, 0, 0, 0, 0, 0, 0},
	{G4, E3, 0, 0, 0, 0, 0, 0, 1},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, C4, 0, 0, 0, 0, 0, 0, 0},
	{G4, G3, 0, 0, 0, 0, 0, 0, 1},
	{G4, E3, 0, 0, 0, 0, 0, 0, 1},

	{A4, F2, 0, 0, 0, 0, 0, 0, 0},
	{A4, A2, 0, 0, 0, 0, 0, 0, 1},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{B4, G2, 0, 0, 0, 0, 0, 0, 0},
	{B4, B2, 0, 0, 0, 0, 0, 0, 1},
	{G4, D3, 0, 0, 0, 0, 0, 0, 1},

	{C5, A2, 0, 0, 0, 0, 0, 0, 0},
	{C5, C3, 0, 0, 0, 0, 0, 0, 1},
	{C5, E3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A3, 0, 0, 0, 0, 0, 0, 0},
	{C5, E3, 0, 0, 0, 0, 0, 0, 1},
	{C5, C3, 0, 0, 0, 0, 0, 0, 1},

	{C5, F2, 0, 0, 0, 0, 0, 0, 0},
	{C5, A2, 0, 0, 0, 0, 0, 0, 1},
	{C5, C3, 0, 0, 0, 0, 0, 0, 1},
	{D5, F3, 0, 0, 0, 0, 0, 0, 0},
	{D5, C3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A2, 0, 0, 0, 0, 0, 0, 1},

	{D5, G2, 0, 0, 0, 0, 0, 0, 0},
	{D5, B2, 0, 0, 0, 0, 0, 0, 1},
	{D5, D3, 0, 0, 0, 0, 0, 0, 1},
	{D5, G3, 0, 0, 0, 0, 0, 0, 0},
	{D5, D3, 0, 0, 0, 0, 0, 0, 1},
	{D5, B2, 0, 0, 0, 0, 0, 0, 1},

	{E5, E2, 0, 0, 0, 0, 0, 0, 0},
	{E5, Gs2, 0, 0, 0, 0, 0, 0, 1},
	{E5, B2, 0, 0, 0, 0, 0, 0, 1},
	{E5, E3, 0, 0, 0, 0, 0, 0, 0},
	{E5, B2, 0, 0, 0, 0, 0, 0, 1},
	{D5, Gs2, 0, 0, 0, 0, 0, 0, 1},

	{D5, A2, 0, 0, 0, 0, 0, 0, 0},
	{D5, C3, 0, 0, 0, 0, 0, 0, 0},
	{D5, E3, 0, 0, 0, 0, 0, 0, 1},
	{C5, A3, 0, 0, 0, 0, 0, 0, 0},
	{C5, E3, 0, 0, 0, 0, 0, 0, 0},
	{C5, C3, 0, 0, 0, 0, 0, 0, 1},

	{C5, A2, 0, 0, 0, 0, 0, 0, 0},
	{C5, C3, 0, 0, 0, 0, 0, 0, 0},
	{C5, E3, 0, 0, 0, 0, 0, 0, 1},
	{E4, A3, 0, 0, 0, 0, 0, 0, 0},
	{E4, E3, 0, 0, 0, 0, 0, 0, 1},
	{G4, C3, 0, 0, 0, 0, 0, 0, 1},

	{A4, F2, 0, 0, 0, 0, 0, 0, 0},
	{A4, A2, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{A4, F3, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 0},
	{A4, A2, 0, 0, 0, 0, 0, 0, 1},

	{A4, F2, 0, 0, 0, 0, 0, 0, 0},
	{A4, A2, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{A4, F3, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{G4, A2, 0, 0, 0, 0, 0, 0, 1},

	{E4, A2, 0, 0, 0, 0, 0, 0, 0},
	{E4, C3, 0, 0, 0, 0, 0, 0, 0},
	{E4, E3, 0, 0, 0, 0, 0, 0, 1},
	{E4, A3, 0, 0, 0, 0, 0, 0, 0},
	{E4, E3, 0, 0, 0, 0, 0, 0, 0},
	{E4, C3, 0, 0, 0, 0, 0, 0, 1},

	{E4, A2, 0, 0, 0, 0, 0, 0, 0},
	{E4, C3, 0, 0, 0, 0, 0, 0, 0},
	{E4, E3, 0, 0, 0, 0, 0, 0, 1},
	{E4, A3, 0, 0, 0, 0, 0, 0, 0},
	{E4, E3, 0, 0, 0, 0, 0, 0, 1},
	{G4, C3, 0, 0, 0, 0, 0, 0, 1},

	{A4, F2, 0, 0, 0, 0, 0, 0, 0},
	{A4, A2, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{A4, F3, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 0},
	{A4, A2, 0, 0, 0, 0, 0, 0, 1},

	{A4, F2, 0, 0, 0, 0, 0, 0, 0},
	{A4, A2, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{A4, F3, 0, 0, 0, 0, 0, 0, 0},
	{A4, C3, 0, 0, 0, 0, 0, 0, 1},
	{G4, A2, 0, 0, 0, 0, 0, 0, 1},

	{E4, C3, 0, 0, 0, 0, 0, 0, 0},
	{E4, E3, 0, 0, 0, 0, 0, 0, 0},
	{E4, G3, 0, 0, 0, 0, 0, 0, 0},
	{E4, C4, 0, 0, 0, 0, 0, 0, 0},
	{E4, G3, 0, 0, 0, 0, 0, 0, 0},
	{E4, E3, 0, 0, 0, 0, 0, 0, 1},

	{D4, G2, 0, 0, 0, 0, 0, 0, 0},
	{D4, B2, 0, 0, 0, 0, 0, 0, 0},
	{D4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D4, G3, 0, 0, 0, 0, 0, 0, 0},
	{D4, D3, 0, 0, 0, 0, 0, 0, 0},
	{D4, B2, 0, 0, 0, 0, 0, 0, 1},

	{C4, C3, 0, 0, 0, 0, 0, 0, 0},
	{C4, E3, 0, 0, 0, 0, 0, 0, 0},
	{C4, G3, 0, 0, 0, 0, 0, 0, 0},
	{C4, C4, 0, 0, 0, 0, 0, 0, 0},
	{C4, G3, 0, 0, 0, 0, 0, 0, 0},
	{C4, E3, 0, 0, 0, 0, 0, 0, 1},

	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{A3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{C3, 0, 0, 0, 0, 0, 0, 0, 1},

	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{G3, 0, 0, 0, 0, 0, 0, 0, 1},
	{C4, 0, 0, 0, 0, 0, 0, 0, 1},
	{G3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},

	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{A3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{C3, 0, 0, 0, 0, 0, 0, 0, 1},

};