#ifndef otaUpdateLib
#define otaUpdateLib

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class otaUpdate{

public:
// devUpdates(bool UpdateAvailable = false);
// int updates(String devUpdateApi);
// int autoUpdate(String devAutoapi);
otaUpdate(bool UpdateAvailable = false);
int updates(String currentVersion,String token);
void startUpdate(String url);

};

#endif
