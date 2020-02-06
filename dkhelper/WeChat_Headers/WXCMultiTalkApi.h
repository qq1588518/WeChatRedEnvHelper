//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXCMultiTalkApi : NSObject
{
}

+ (id)sharedInstance;
- (int)setNeedBigVideo:(_Bool)arg1 forUser:(id)arg2;
- (_Bool)requestActiveGroupBriefInfoList:(id)arg1;
- (id)genMultiTalkClientGroupId;
- (_Bool)resumeFriendOrSendPokerToFriend;
- (_Bool)reawakeFriendOrSendPokerToFriend:(id)arg1 friendUserName:(id)arg2 extData:(id)arg3;
- (_Bool)isMultiTalkWorking;
- (_Bool)holdMultiTalk:(_Bool)arg1 holdType:(int)arg2;
- (id)getMemberQualityInfoList:(id)arg1;
- (id)getTalkIngMember:(id)arg1;
- (_Bool)handleMultiTalkNotFriendNotify:(id)arg1;
- (_Bool)handleMultiTalkBanner:(id)arg1 WxGroupId:(id)arg2;
- (_Bool)handleMultiTalkNotify:(id)arg1;
- (_Bool)handleMultiTalkResp:(int)arg1 seq:(int)arg2 data:(id)arg3;
- (void)setOpenLog:(_Bool)arg1 logLevel:(int)arg2;
- (void)setMultiTalkSpeaker:(_Bool)arg1;
- (int)VideoEncAndSend:(char *)arg1 Length:(unsigned int)arg2 Format:(void *)arg3 resolutionMode:(int)arg4 cameraMode:(int)arg5;
- (void)closeMultiTalkVideo;
- (void)subscribeLargeVideoForUser:(id)arg1 isCancel:(_Bool)arg2;
- (void)setMultiTalkVideo:(_Bool)arg1;
- (void)setMultiTalkMute:(_Bool)arg1;
- (_Bool)modifyCustomGroupName:(id)arg1 grpName:(id)arg2;
- (_Bool)rejectMultiTalk:(id)arg1;
- (_Bool)exitMultiTalk:(id)arg1;
- (_Bool)addMultiTalkMember:(id)arg1 wxGroupId:(id)arg2 addMemberList:(id)arg3;
- (_Bool)enterMultiTalkFromBanner:(id)arg1 routId:(int)arg2 roomId:(unsigned int)arg3 roomKey:(unsigned long long)arg4 wxGroupId:(id)arg5;
- (_Bool)enterMultiTalk:(id)arg1 routId:(int)arg2 isAnswerCall:(_Bool)arg3 wxGroupId:(id)arg4;
- (_Bool)createMultiTalk:(id)arg1 wxGroupId:(id)arg2 memberList:(id)arg3;
- (_Bool)unInit;
- (void)setMultiTalkInfo:(id)arg1 uin:(long long)arg2;
- (_Bool)init:(id)arg1 wxDelegate:(id)arg2;
- (id)init;

@end
