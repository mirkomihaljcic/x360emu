/**
 * x360emu - An emulator for the Xbox 360 gaming system.
 * Copyright (C) 2012 - The x360emu Project
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/.
 */

#pragma once

#include <Types.h>

enum class SeekDirection
{
	Begin,
	Current,
	End
};

class Stream
{
public:
	virtual bool IsOpen() = 0;

	virtual bool CanRead() = 0;
	virtual bool CanWrite() = 0;

	virtual u64 Length() = 0;
	virtual void Seek(s64 pos, SeekDirection direction) = 0;
	virtual u64 Position() = 0;

	virtual u64 Read(u8 *buffer, u64 count) = 0;
	virtual void Write(const u8 *buffer, u64 count) = 0;
};
