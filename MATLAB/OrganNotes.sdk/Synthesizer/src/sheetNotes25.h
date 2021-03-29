#include "notes.h"

int noteArray[][9] = 
{
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{C3, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},

	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{G2, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{G2, 0, 0, 0, 0, 0, 0, 0, 1},
	{G2, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},

	{D3, 0, 0, 0, 0, 0, 0, 0, 1},
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},

	{G2, 0, 0, 0, 0, 0, 0, 0, 0},

	{G2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{D3, 0, 0, 0, 0, 0, 0, 0, 1},
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},

	{D3, 0, 0, 0, 0, 0, 0, 0, 0},

	{D3, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{D3, 0, 0, 0, 0, 0, 0, 0, 1},
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},

	{D3, 0, 0, 0, 0, 0, 0, 0, 0},

	{D3, 0, 0, 0, 0, 0, 0, 0, 1},
	{C3, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{C3, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},

	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{G2, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{G2, 0, 0, 0, 0, 0, 0, 0, 1},
	{G2, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{B2, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},
	{B2, 0, 0, 0, 0, 0, 0, 0, 1},

	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{E3, 0, 0, 0, 0, 0, 0, 0, 1},
	{E3, 0, 0, 0, 0, 0, 0, 0, 1},

	{D3, 0, 0, 0, 0, 0, 0, 0, 1},
	{D3, 0, 0, 0, 0, 0, 0, 0, 1},

	{C3, 0, 0, 0, 0, 0, 0, 0, 1},
	{A2, 0, 0, 0, 0, 0, 0, 0, 1},

	{G2, 0, 0, 0, 0, 0, 0, 0, 0},

	{G2, 0, 0, 0, 0, 0, 0, 0, 1},

};