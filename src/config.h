#ifndef CONFIG_H
#define CONFIG_H

// Audio System Configurations
#define AUDIO_SERVER JACK // ALSA, JACK,
#define MIDI_SERVER JACK // ALSA, JACK,
#define SAMPLE_RATE 44100 // 44100, 48000, 96000, 192000
#define BUFFER_SIZE 512 // 512 for most systems, 128 for low latency
#define NUM_CHANNELS 2 // 1 = mono, 2 = stereo
#define BIT_DEPTH 16 // 16, 24, 32
#define AUDIO_LATENCY 12 // milliseconds
#define MIDI_LATENCY_TIME 5 // milliseconds


// Enable/Disable Features
#define AUDIO_ENABLED 1 // 0 = disable, 1 = enable
#define AUDIO_OUT 1 // 0 = disable, 1 = enable
#define AUDIO_IN 0 // 0 = disable, 1 = enable
#define AUDIO_RECORD 0 // 0 = disable, 1 = enable

#define MIDI 0 // 0 = disable, 1 = enable
#define MIDI_OUT 0 // 0 = disable, 1 = enable
#define MIDI_IN 0 // 0 = disable, 1 = enable

// Plugins
#define Monitors 0 // 0 = off, 1 = on
#define MIXER 0 // 0 = off, 1 = on
#define VST 0 // 0 = off, 1 = on
#define CLAP 0 // 0 = off, 1 = on
#define LV2 0 // 0 = off, 1 = on
#define SF2 0 // 0 = off, 1 = on
#define LUA 0 // 0 = off, 1 = on

// GUI 
#define GUI SDL // SDL, (More to come)


// Audio File Formats
#define WAV 0 // 0 = disable, 1 = enable
#define FLAC 1 // 0 = disable, 1 = enable
#define MP3 0 // 0 = disable, 1 = enable

// Project File Formats
#define MOD 0 // 0 = disable, 1 = enable
#define XM 0 // 0 = disable, 1 = enable
#define IT 0 // 0 = disable, 1 = enable
#define S3M 0 // 0 = disable, 1 = enable
#define NSTM 0 // 0 = disable, 1 = enable

// Defaults for New Projects
#define DEFAULT_ROWS 64 // 64, 128, 256, 512+
#define DEFAULT_COLUMNS 4 // 4, 8, 16, 32, 64+
#define DEFAULT_LPB 4 // 4, 8, 16, 32, 64+
#define DEFAULT_BPM 120 // 60, 120, 240, 480, 960+
#define DEFAULT_SPEED 6 // 6, 12, 24, 48, 96+
#define DEFAULT_VOLUME 64 // 0-64
#define DEFAULT_INSTRUMENT 0 // 0-127
#define INSTRUMENT_COLUMNS 1 // 1, 2, 4, 8, 16+
#define EFFECT_COLUMNS 2 // 1, 2, 4, 8, 16+

#endif // CONFIG_H
