/*
 *   Copyright (C) 2021 by BG5HHP
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#ifndef __DelegatedSerial_h
#define __DelegatedSerial_h

#include "Config.h"
#include "Print.h"
#include "Stream.h"

/**
 * @brief A delegated serial instance for Arduino libs
 * 
 */
class DelegatedSerial : public Stream
{
public:
    DelegatedSerial(int id);
    int available(void);
    int peek(void);
    int read(void);
    void flush(void);

    size_t write(uint8_t n);
    inline size_t write(unsigned long n)
    {
        return write((uint8_t)n);
    }
    inline size_t write(long n)
    {
        return write((uint8_t)n);
    }
    inline size_t write(unsigned int n)
    {
        return write((uint8_t)n);
    }
    inline size_t write(int n)
    {
        return write((uint8_t)n);
    }
    using Print::write; // pull in write(str) and write(buf, size) from Print
    operator bool()
    {
        return true;
    }
private:
    int m_id;
};

#if defined (ENABLE_ARDUINO_SERIAL1_DELEGATE)
extern DelegatedSerial Serial;
#endif
#if defined (ENABLE_ARDUINO_SERIAL2_DELEGATE)
extern DelegatedSerial Serial2;
#endif
#if defined (ENABLE_ARDUINO_SERIAL3_DELEGATE)
extern DelegatedSerial Serial3;
#endif

#endif
