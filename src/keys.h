#ifndef __TIMEBOXED_KEYS_
#define __TIMEBOXED_KEYS_

#define KEY_TEMP 0
#define KEY_MAX 1
#define KEY_MIN 2
#define KEY_WEATHER 3
#define KEY_ENABLEHEALTH 4
#define KEY_USEKM 5
#define KEY_SHOWSLEEP 6
#define KEY_ENABLEWEATHER 7
#define KEY_WEATHERKEY 8
#define KEY_USECELSIUS 9
#define KEY_TIMEZONES 10
#define KEY_BGCOLOR 11
#define KEY_HOURSCOLOR 12
#define KEY_ENABLEADVANCED 13
#define KEY_DATECOLOR 14
#define KEY_ALTHOURSCOLOR 15
#define KEY_BATTERYCOLOR 16
#define KEY_BATTERYLOWCOLOR 17
#define KEY_WEATHERCOLOR 18
#define KEY_TEMPCOLOR 19
#define KEY_MINCOLOR 20
#define KEY_MAXCOLOR 21
#define KEY_STEPSCOLOR 22
#define KEY_DISTCOLOR 23
#define KEY_TIMEZONESCODE 24
#define KEY_TIMEZONESMINUTES 25
#define KEY_FONTTYPE 26
#define KEY_STEPS 27
#define KEY_DIST 28
#define KEY_BLUETOOTHDISCONNECT 29
#define KEY_BLUETOOTHCOLOR 30
#define KEY_OVERRIDELOCATION 31
#define KEY_ERROR 32
#define KEY_UPDATE 33
#define KEY_UPDATECOLOR 34
#define KEY_HASUPDATE 35
#define KEY_LOCALE 36
#define KEY_DATEFORMAT 37
#define KEY_TEXTALIGN 38
#define KEY_STEPSBEHINDCOLOR 39
#define KEY_DISTBEHINDCOLOR 40
#define KEY_SLEEP 41
#define KEY_DEEP 42
#define KEY_WEATHERPROVIDER 43
#define KEY_YAHOOKEY 44
#define KEY_CONFIGS 45
#define KEY_LEADINGZERO 46
#define KEY_USECAL 47
#define KEY_SIMPLEMODE 48
#define KEY_SLOTA 49
#define KEY_SLOTB 50
#define KEY_SLOTC 51
#define KEY_SLOTD 52
#define KEY_SLEEPSLOTA 53
#define KEY_SLEEPSLOTB 54
#define KEY_SLEEPSLOTC 55
#define KEY_SLEEPSLOTD 56
#define KEY_CAL 57
#define KEY_FEELS 58
#define KEY_SPEED 59
#define KEY_DIRECTION 60

#define FLAG_WEATHER 0x0001
#define FLAG_HEALTH 0x0002
#define FLAG_KM 0x0004
#define FLAG_SLEEP 0x0008
#define FLAG_CELSIUS 0x0010
#define FLAG_ADVANCED 0x0020
#define FLAG_BLUETOOTH 0x0040
#define FLAG_UPDATE 0x0080
#define FLAG_LEADINGZERO 0x0100
#define FLAG_CALORIES 0x0200
#define FLAG_SIMPLEMODE 0x0400
#define FLAG_TIMEZONES 0x0800

#define BLOCKO_FONT 0
#define BLOCKO_BIG_FONT 1
#define SYSTEM_FONT 2
#define ARCHIVO_FONT 3
#define DIN_FONT 4
#define PROTOTYPE_FONT 5

#define ALIGN_LEFT 0
#define ALIGN_CENTER 1
#define ALIGN_RIGHT 2

#define LC_ENGLISH 0
#define LC_PORTUGUESE 1
#define LC_FRENCH 2
#define LC_GERMAN 3
#define LC_SPANISH 4
#define LC_ITALIAN 5
#define LC_DUTCH 6
#define LC_DANISH 7
#define LC_TURKISH 8
#define LC_CZECH 9
#define LC_POLISH 10
#define LC_SWEDISH 11
#define LC_FINNISH 12
#define LC_SLOVAK 13

#define FORMAT_WMD 0
#define FORMAT_WDM 1

#define SLOT_A 0
#define SLOT_B 1
#define SLOT_C 2
#define SLOT_D 3

#define MODULE_NONE -1
#define MODULE_WEATHER 1
#define MODULE_FORECAST 2
#define MODULE_STEPS 3
#define MODULE_DIST 4
#define MODULE_CAL 5
#define MODULE_SLEEP 6
#define MODULE_DEEP 7
#define MODULE_WIND 8
#define MODULE_FEELS 9
#define MODULE_WEATHER_FEELS 10

#define MODE_NORMAL 0
#define MODE_SIMPLE 1

#define WEATHER_ITEM 0
#define TEMP_ITEM 1
#define TEMPMIN_ITEM 2
#define TEMPMAX_ITEM 3
#define STEPS_ITEM 4
#define DIST_ITEM 5
#define CAL_ITEM 6
#define SLEEP_ITEM 7
#define DEEP_ITEM 8
#define WIND_ITEM 9
#define FEELS_ITEM 10
#define WEATHER_FEELS_WEATHER_ITEM 11
#define WEATHER_FEELS_FEELS_ITEM 12

#endif
