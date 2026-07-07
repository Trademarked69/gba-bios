
//{{BLOCK(logo_data)

//======================================================================
//
//	logo_data, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 48 tiles (t|f reduced) lz77 compressed
//	+ regular map (in SBBs), lz77 compressed, 32x32 
//	Total size: 32 + 928 + 348 = 1308
//
//	Time-stamp: 2026-07-03, 08:10:13
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LOGO_DATA_H
#define GRIT_LOGO_DATA_H

#define logo_dataTilesLen 928
extern const unsigned int logo_dataTiles[232];

#define logo_dataMapLen 348
extern const unsigned short logo_dataMap[174];

#define logo_dataPalLen 32
extern const unsigned short logo_dataPal[16];

#endif // GRIT_LOGO_DATA_H

//}}BLOCK(logo_data)
