SoundGen
========

Easy to use interface for playing midi notes using Sound Font (extension sf2).

To use:

Make sure you have added the AudioToolbox.framework to your project.

1. Pick a sf2 (soundfont 2.0) file that you like from online and add it into your project.  Make sure that you add it to the bundle resources in Build Phases -> Copy Bundle Resources.

2. Then make an NSURL from the file and initialize the SoundGen class with it and a patch number:
```
NSURL *presetURL = [[NSURL alloc] initFileURLWithPath:[[NSBundle mainBundle] 
                                      pathForResource:@"SoundFontFile" ofType:@"sf2"]];
SoundGen *soundGen = [[SoundGen alloc] initWithSoundFontURL:presetURL patchNumber:5];
```
After this you can always reset your patch number or soundfont URL with:
```
[soundGen setSoundFontURL:newURL]
```
or
```
[soundGen setPatchNumber:patchNumber]
```
 
3 . Then to play/stop a midi note:

```
[soundGen playMidiNote:note velocity:velocity]
[soundGen stopPlayingMidiNote:note]
```

Cheers. I will try and comment and add sample project in the future!
