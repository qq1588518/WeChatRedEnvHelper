//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMovieDecoderDelegate-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, MMovieDecoder, NSObject, NSString;
@protocol MMovieCompressorDelegate, OS_dispatch_queue;

@interface MMovieCompressor : MMObject <MMovieDecoderDelegate>
{
    MMovieDecoder *m_decoder;
    id <MMovieCompressorDelegate> m_delegate;
    NSString *m_moviePath;
    NSString *m_originalPath;
    struct CGSize m_videoSize;
    double m_bitrate;
    unsigned int m_type;
    AVAssetWriter *m_writer;
    AVAssetWriterInput *m_audioInput;
    AVAssetWriterInput *m_videoInput;
    AVAssetWriterInputPixelBufferAdaptor *m_PixelBufferInput;
    NSObject<OS_dispatch_queue> *m_movieWritingQueue;
    unsigned int inputTextureForMovieRendering;
    CDStruct_1b6d18a9 m_startTime;
    CDStruct_1b6d18a9 m_previousFrameTime;
    CDStruct_1b6d18a9 m_previousAudioTime;
    NSObject<OS_dispatch_queue> *audioQueue;
    _Bool audioEncodingIsFinished;
    _Bool videoEncodingIsFinished;
    _Bool hasCaptureFirstFrame;
    double inputWidth;
    double inputHeight;
    _Bool _audioOnly;
    double _zoomLevel;
}

@property(nonatomic) _Bool audioOnly; // @synthesize audioOnly=_audioOnly;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) __weak id <MMovieCompressorDelegate> delegate; // @synthesize delegate=m_delegate;
- (void).cxx_destruct;
- (void)compressMovieWithExport;
- (void)mMovieDecoderOnDecodeFinished:(id)arg1;
- (void)mMovieDecoder:(id)arg1 onNewAudioFrameReady:(struct opaqueCMSampleBuffer *)arg2;
- (void)mMovieDecoder:(id)arg1 onNewVideoFrameReady:(struct opaqueCMSampleBuffer *)arg2;
- (void)startCompress;
- (void)initWritterOutput;
- (void)dealloc;
- (id)makeNewPath:(id)arg1 gap:(unsigned long long)arg2;
- (id)initWithFilePath:(id)arg1 andSize:(struct CGSize)arg2 andBitRate:(double)arg3;
- (id)initWithFilePath:(id)arg1 andSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
