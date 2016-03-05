#ifndef GLOBAL_H
#define GLOBAL_H

// particle cloud product identification
#define PROD_ID 355

// firmware version for EEPROM data integrity check
#define VERSION_MAJOR 0x01
#define VERSION_MINOR 0x04

// boolean constants
//#define FALSE 0x00
//#define TRUE 0x01

// adds debug messages through the serial interface
#define APPDEBUG TRUE

// switches in simulated door mode
#define APPVIRTUAL FALSE

// maximum payload size for variable according to spark.io documentation
#define MAXVARSIZE 622

// pin assignments
#define PIN_LASER D2
#define PIN_RELAY D3
#define PIN_PHOTO A0

// delay between sensor scans (mS)
// more frequent scans result in faster status update but blinking may be
// irritating to the consumer
#define DEFAULT_READTIME 1000
// expected time for the door to complete full open or close (mS)
// should be set to how long it takes for the door to fully open
#define DEFAULT_MOTIONTIME 10000
// time for garage door button press (mS)
// must be long enough enough for the door opener to register the click
#define DEFAULT_RELAYTIME 300
// minimum time between garage door button presses (mS)
// must be long enough for the door opener to recongnize individual clicks
#define DEFAULT_RELAYPAUSE 1000
// number of sensor reads, results are averaged
// can be increased if status is not reliably determined
#define DEFAULT_SENSORREADS 3
// minimum brightness change that triggers the sensor (0-100%)
// can be adjusted down if target is too far but this can result in false
// positives if objects cross the beam closer to the device
#define DEFAULT_SENSORTRESHOLD 25
// time in seconds for door to remain open before alert is sent
// 0 disables the alert
#define DEFAULT_ALERTOPENTIMEOUT 20*60
// time in minutes for beginning and end of night alert timeframe
// equal values disable alert
#define DEFAULT_ALERTNIGHTSTART 22*60
#define DEFAULT_ALERTNIGHTEND 06*60
// timezone's offset from UTC in hours
#define DEFAULT_TIMEZONE -7.0;
#endif
