/*
 *      EduIntro Library v0.1
 *
 *
 *
 *      created on Aug 2018
 *      by D. Cuartielles
 *      based on work from Dec 2011 by F. Vanzati
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */

 #include "Arduino.h"
 #include "Servo.h"
 #include <pitches.h>

#ifndef EduIntro_h
#define EduIntro_h


// Minimum Analog In/Out that each platform have
#define D13 13
#define D12 12
#define D11 11
#define D10 10
#define D9 9
#define D8 8
#define D7 7
#define D6 6
#define D5 5
#define D4 4
#define D3 3
#define D2 2
#define D1 1
#define D0 0

#define ANALOG_MAX 1023


/*
-----------------------------------------------------------------------------
                                Generic Classes
-----------------------------------------------------------------------------
*/

class DigitalInput
{
public:
    DigitalInput(uint8_t _pin);
    DigitalInput(uint8_t _pin, uint8_t _mode);
    boolean read();

protected:
    uint8_t pin;
};


class AnalogInput
{
public:
    AnalogInput(uint8_t _pin);
    int read();
    boolean increasing();
    boolean decreasing();

protected:
    uint8_t pin;
    int _oldVal;
    boolean _increasing;
    boolean _decreasing;
};

class AnalogInput2
{
public:
    AnalogInput2(uint8_t _pinX, uint8_t _pinY);
    AnalogInput2(uint8_t _pinX, uint8_t _pinY, uint8_t _pinZ);
    int readX();
    int readY();
    int readZ();

protected:
    uint8_t pinX, pinY, pinZ;
};


class Output
{
    public:
    Output (uint8_t _pin);
    void write(int value);
    inline int state() { return _state; }
    void on();
    void off();
    void blink(int delay);
    void blink(int delay1, int delay2);

protected:
    uint8_t pin;
    int _state;
    boolean isPWM();
};

/*
 -----------------------------------------------------------------------------
                                Digital Inputs
 -----------------------------------------------------------------------------
*/


/*      Button      */

class Button: public DigitalInput
{
	public:
		Button(uint8_t _pin);
		boolean readSwitch();
		boolean pressed();
		boolean held();
		boolean released();

	protected:
		boolean _toggleState, _oldState;
		boolean _pressedState, _releasedState;
		boolean _heldState;
        int _heldTime;
        int _millisMark;

		void update();
};

/*
 -----------------------------------------------------------------------------
                                Analog Inputs
 -----------------------------------------------------------------------------
 */

/*      Potentiometer        */

class Potentiometer: public AnalogInput
{
public:
    Potentiometer(uint8_t pin);
    int read();
    int readStep(int steps);

protected:
    int _minVal, _maxVal;
    int _mappedVal;
    int _steps;
};


/*      Light Sensor        */

class LightSensor : public AnalogInput
{
    public:
        LightSensor(uint8_t _pin);
};

/*      Temperature Sensor        */

class Thermistor : public AnalogInput
{
public:
    Thermistor(uint8_t _pin);
    float readCelsius();
    float readFahrenheit();

protected:
    const static float ADCres = 1023.0;
    const static int Beta = 3950;			// Beta parameter
    const static float Kelvin = 273.15;	// 0°C = 273.15 K
    const static int Rb = 10000;			// 10 kOhm
    const static float Ginf = 120.6685;	// Ginf = 1/Rinf
    // Rinf = R0*e^(-Beta/T0) = 4700*e^(-3950/298.15)
};

/*
 -----------------------------------------------------------------------------
                                    Outputs
 -----------------------------------------------------------------------------
 */

/*      LED     */

class Led : public Output
{
	public:
        Led(uint8_t _pin);
        inline void brightness(int value) { write(value); }
};

/*      Piezo     */

class Piezo : public Output
{
	public:
        Piezo(uint8_t _pin);
        void beep(int _tone);
        void beep(int _tone, int _duration);
        void play(int melody[]);
        void play(int n, int melody[]);
  protected:
        int getMelodySize(int melody[]);
};

/*      MosFet      */

class MosFet : public Output
{
	public:
		MosFet(uint8_t _pin);
};

/*      Relay       */

class Relay : public Output
{
	public:
		Relay(uint8_t _pin);
};

/*      Relay       */

class ServoMotor : public Servo
{
	public:
		ServoMotor(uint8_t _pin);
    write(uint8_t _value);
  protected:
    Servo _servo;
};

#endif
