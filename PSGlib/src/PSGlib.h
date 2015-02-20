/* **************************************************
   PSGlib - C programming library for the SMS' PSG
   ( part of devkitSMS - github.com/sverx/devkitSMS )
   ************************************************** */

#define PSG_STOPPED         0
#define PSG_PLAYING         1

#define SFX_CHANNEL2        #0x01
#define SFX_CHANNEL3        #0x02
#define SFX_CHANNELS2AND3   SFX_CHANNEL2|SFX_CHANNEL3

void PSGInit (void);

void PSGPlay (unsigned char *song);
void PSGCancelLoop (void);
void PSGPlayNoRepeat (unsigned char *song);
void PSGStop (void);
unsigned char PSGGetStatus (void);

void PSGSFXPlay (unsigned char *sfx, unsigned char channels);
void PSGSFXPlayLoop (unsigned char *sfx, unsigned char channels);
void PSGSFXCancelLoop (void);
void PSGSFXStop (void);
unsigned char PSGSFXGetStatus (void);

void PSGFrame (void);
void PSGSFXFrame (void);
