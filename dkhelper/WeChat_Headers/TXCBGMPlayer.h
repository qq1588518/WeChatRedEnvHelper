//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCBasePlayer.h"

#import "TXIAudioPlayDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol TXIAudioPlayDelegate;

@interface TXCBGMPlayer : TXCBasePlayer <TXIAudioPlayDelegate>
{
    NSMutableArray *_playPackets;
    struct TXCMutex _audioPlayLock;
    struct TXCResampleMixer *_resampler;
    id <TXIAudioPlayDelegate> _delegate;
}

@property(nonatomic) __weak id <TXIAudioPlayDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)queryData:(int)arg1;
- (long long)stopPlay;
- (long long)resetPlay;
- (long long)resumePlay;
- (long long)pausePlay;
- (long long)playAudio:(id)arg1;
- (long long)startPlay;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

