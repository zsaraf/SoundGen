//
//  SoundGen.h
//  SoundRunner
//
//  Created by Zachary Waleed Saraf on 3/1/14.
//  Copyright (c) 2014 Zachary Waleed Saraf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreAudio/CoreAudioTypes.h>

@interface SoundGen : NSObject <AVAudioSessionDelegate>

-(id)initWithSoundFontURL:(NSURL *)soundFontURL patchNumber:(NSInteger)patchNumber;
-(void)playMidiNote:(NSInteger)note velocity:(NSInteger)velocity;
-(void)stopPlayingMidiNote:(NSInteger)note;
-(void)stopPlayingAllNotes;

@property (nonatomic, strong) NSURL *soundFontURL;
@property (nonatomic) NSInteger patchNumber;

@end
