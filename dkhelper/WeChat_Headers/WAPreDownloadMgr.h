//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"

@class NSMutableDictionary, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAPreDownloadMgr : MMService <WAAppTaskMgrExt, MMService>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_dicAppID2PreDownloadHandler;
    NSMutableDictionary *_dicAppID2PreResUrls;
    NSMutableDictionary *_dicAppID2CoverImageURL;
    NSString *_appId;
    NSNumber *__hasDownloadedFileNum;
    NSNumber *__hasDownloadedSubPackageNum;
    NSNumber *__bothDownloadedFileNum;
}

@property(retain) NSNumber *_bothDownloadedFileNum; // @synthesize _bothDownloadedFileNum=__bothDownloadedFileNum;
@property(retain) NSNumber *_hasDownloadedSubPackageNum; // @synthesize _hasDownloadedSubPackageNum=__hasDownloadedSubPackageNum;
@property(retain) NSNumber *_hasDownloadedFileNum; // @synthesize _hasDownloadedFileNum=__hasDownloadedFileNum;
- (void).cxx_destruct;
- (void)startUpTime;
- (void)beforeInjectUserScript:(unsigned long long)arg1;
- (void)joinMainScene;
- (void)clearCoverImage:(id)arg1;
- (id)getCoverImageURL:(id)arg1;
- (void)setCoverImageURL:(id)arg1 appID:(id)arg2;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)clearAllPreResources;
- (void)clearAllDownloadHandler;
- (void)clear;
- (void)clearWithAppID:(id)arg1;
- (void)clearPreResourcesWithAppID:(id)arg1;
- (void)clearDownloadHandlerWithAppID:(id)arg1;
- (void)interruptDownloadHandlerWithAppID:(id)arg1;
- (id)getDownloadHandler:(id)arg1;
- (_Bool)isDownloading:(id)arg1 url:(id)arg2;
- (void)removeUrl:(id)arg1 url:(id)arg2;
- (void)downloadFileWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(_Bool)arg3 taskID:(id)arg4 url:(id)arg5 httpHeaders:(id)arg6 context:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)downloadFile:(id)arg1 url:(id)arg2 context:(id)arg3 contact:(id)arg4;
- (void)downloadSubPackage:(id)arg1 pkgconfig:(id)arg2 module:(id)arg3 instanceId:(id)arg4;
- (void)downloadPreResources:(id)arg1 pkgconfig:(id)arg2 reses:(id)arg3 subpkgs:(id)arg4 instanceId:(id)arg5;
- (id)getAndNewDownloadHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (void)initStatis;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
