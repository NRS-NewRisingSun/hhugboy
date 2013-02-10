/*
   unGEST Game Boy emulator
   copyright 2013 taizou

   Based on GEST
   Copyright (C) 2003-2010 TM

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
/*
old GB licensee names
*/
const char* lic_names[256] =
{
  "none",
  "Nintendo",
  "none",
  "none",
  "none",
  "none",
  "none",
  "none",
  "Capcom", // 0x08
  "Hot-b",
  "Jaleco",
  "Coconuts",
  "Elite Systems",
  "none",
  "none",
  "none",
  "none",
  "none",
  "none",
  "Electronic Arts", //0x13
  "none",
  "none",
  "none",
  "none",
  "Hudsonsoft", //0x18
  "ITC Entertainment",
  "Yanoman",
  "none",
  "none",
  "Clary", //0x1D
  "none",
  "Virgin",
  "none",
  "none",
  "none",
  "none",
  "PCM Complete", //0x24
  "San-x",
  "none",
  "none",
  "Kotobuki Systems", //0x28
  "Seta",
  "none",
  "none",
  "none",
  "none",
  "none",
  "none",
  "Infogrames", //0x30
  "Nintendo",
  "Bandai",
  "SGB new lic",
  "Konami",
  "Hector",
  "none",
  "none",
  "Capcom",
  "Banpresto",
  "none",
  "none",
  "Entertainment i", //0x3C
  "none",
  "Gremlin",
  "none",
  "none",
  "Ubi Soft", //0x41
  "Atlus",
  "none",
  "Malibu",
  "none",
  "Angel",
  "Spectrum Holoby",
  "none",
  "Irem",
  "Virgin",
  "none",
  "none",
  "Malibu", //0x4D
  "none",
  "U.S. Gold",
  "Absolute",
  "Acclaim",
  "Activision",
  "American Sammy",
  "Gametek",
  "Park Place",
  "LJN",
  "Matchbox",
  "none",
  "Milton Bradley",
  "Mindscape",
  "ROMStar",
  "Naxat Soft",
  "Tradewest",
  "none",
  "none",
  "Titus", //0x60
  "Virgin",
  "none",
  "none",
  "none",
  "none",
  "none",
  "Ocean", //0x67
  "none",
  "Electronic Arts",
  "none",
  "none",
  "none",
  "none",
  "Elite Systems", //0x6E
  "Electro Brain",
  "Infogrames",
  "Interplay",
  "Broderbund",
  "Sculptered Soft",
  "none",
  "The Sales Curve",
  "none",
  "none",
  "T*HQ", //0x78
  "Accolade",
  "Triffix Entertainment",
  "none",
  "Microprose",
  "none",
  "none",
  "Kemco",
  "Misawa Entertainment",
  "none",
  "none",
  "Lozc", //0x83
  "none",
  "none",
  "Tokuma Shoten i",
  "none",
  "none",
  "none",
  "none",
  "Bullet-proof Software", //0x8B
  "Vic Tokai",
  "none",
  "Ape",
  "I'max",
  "none",
  "Chun Soft",
  "Video System",
  "Tsuburava",
  "none",
  "Varie",
  "Yonezawa/s'pal",
  "Kaneko",
  "none",
  "Arc",
  "Nihon Bussan",
  "Tecmo",
  "Imagineer",
  "Banpresto",
  "none",
  "Nova",
  "none",
  "Hori Electric", //0xA1
  "Bandai",
  "none",
  "Konami",
  "none",
  "Kawada",
  "Takara",
  "none",
  "Technos Japan",
  "Broderbund",
  "none",
  "Toei Animation",
  "Toho",
  "none",
  "Namco",
  "Acclaim",
  "Ascii or Nexoft",
  "Bandai",
  "none",
  "Enix",
  "none",
  "Hal",
  "SNK",
  "none",
  "Pony Canyon",
  "Culture Brain o",
  "Sunsoft",
  "none",
  "Sony Imagesoft",
  "none",
  "Sammy",
  "Taito",
  "none",
  "Kemco",
  "Squaresoft",
  "Tokuma Shoten i",
  "Data East",
  "Tonkin House",
  "none",
  "Koei",
  "UFL",
  "Ultra",
  "Vap",
  "Use",
  "Meldac",
  "Pony Canyon or",
  "Angel",
  "Taito", //0xD0
  "Sofel",
  "Quest",
  "Sigma Enterprises",
  "Ask Kodansha",
  "none",
  "Naxat Soft",
  "Copya Systems",
  "none",
  "Banpresto",
  "Tomy",
  "LJN",
  "none",
  "NCS",
  "Human",
  "Altron",
  "Jaleco",
  "Towachiki",
  "Uutaka",
  "Varie",
  "none",
  "Epoch",
  "none",
  "Athena", //0xE7
  "Asmik",
  "Natsume",
  "King Records",
  "Atlus",
  "Epic/Sony Records",
  "none",
  "IGS",
  "none",
  "A Wave",
  "none",
  "none",
  "Extreme Entertainment",
  "none",
  "none",
  "none",
  "none",
  "none",
  "none",
  "none",
  "none",
  "none",
  "none",
  "none",
  "LJN"
};

