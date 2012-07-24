LD_ALSA=-lasound
all:
	g++ -g -o UNO.out UNO.cpp voice.cpp UNOWin.cpp $(LD_ALSA)
clean:
	indent UNO.cpp
