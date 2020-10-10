/*
   hhugboy Game Boy emulator
   copyright 2013-2016 taizou
   Based on GEST
   Copyright (C) 2003-2010 TM
   Incorporating code from VisualBoyAdvance
   Copyright (C) 1999-2004 by Forgotten

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

#ifndef HHUGBOY_MBCUNLSACHENMMC1_H
#define HHUGBOY_MBCUNLSACHENMMC1_H


#include "BasicMbc.h"
class MbcUnlSachenMMC1 : public BasicMbc {
public:
        virtual byte readMemory(unsigned short address) override;
	virtual void writeMemory(unsigned short address, register byte data) override;
        virtual void resetVars(bool preserveMulticartState) override;
        virtual void readMbcSpecificVarsFromStateFile(FILE *statefile) override;
        virtual void writeMbcSpecificVarsToStateFile(FILE *statefile) override;
private:
	byte	outerBank;
	byte	outerMask;
	bool	locked;
	byte	unlockCount;
};


#endif //HHUGBOY_MBCUNLSACHENMMC1_H
