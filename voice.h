
/*
This example reads standard from input and writes
to the default PCM device for 5 seconds of data.
*/

#ifndef _voice_h
#define _voice_h
/* Use the newer ALSA API */
#define ALSA_PCM_NEW_HW_PARAMS_API

#include <alsa/asoundlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int outputVoice(char* filename, double time);
#endif
