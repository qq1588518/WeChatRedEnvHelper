//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MemoryMappedKV, WCTDatabase, WCTTable;

@interface BrandTimelineMsgDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableTimeline;
    WCTTable *m_tableTimelineNotification;
    WCTTable *m_tableTimelineMsgItemInfo;
    MemoryMappedKV *_mappedKV;
}

@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void).cxx_destruct;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)openTable;
- (void)clearDB;
- (void)close;
- (void)open;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;
- (id)getRecommendMsgToSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2;
- (id)convertNotificaitonDBMsg2CMsgWrap:(id)arg1;
- (id)convertNotificationDBMsgArr2CMsgWrapArr:(id)arg1;
- (id)convertTLDBMsg2CMsgWrap:(id)arg1;
- (id)convertTLDBMsg2CMsgWrap:(id)arg1 changeForDisplay:(_Bool)arg2;
- (id)convertTLDBMsgArr2CMsgWrapArr:(id)arg1;
- (void)resetGroupBaseTime;
- (unsigned int)getGroupBaseTime;
- (id)getMsgItemInfoDicByMsgId:(unsigned int)arg1;
- (_Bool)updateItemInfoArrFriendsReadCount:(id)arg1;
- (void)insertOrUpdateItemInfoArr:(id)arg1;
- (void)clearAllNotificationUnreadStatus;
- (void)deleteUnreadNotificationForSession:(id)arg1;
- (_Bool)setNotificationDelFlagForUsername:(id)arg1;
- (_Bool)setNotificationDelFlag:(id)arg1 msgWrap:(id)arg2;
- (_Bool)deleteNotification:(id)arg1;
- (_Bool)insertNotification:(id)arg1;
- (id)getNotificationByMsgSvrId:(unsigned long long)arg1 userName:(id)arg2;
- (id)getNotificationFromCreateTime:(unsigned int)arg1 limit:(unsigned int)arg2 leftCount:(unsigned int *)arg3;
- (id)getUnreadNotificationFromCreateTime:(unsigned int)arg1 limit:(unsigned int)arg2 leftCount:(unsigned int *)arg3;
- (unsigned int)getNotificationUnreadCountByUserName:(id)arg1;
- (unsigned int)getNotificationUnreadCount;
- (id)getLastUnreadNotification;
- (void)deleteTooOldMsg:(unsigned int)arg1;
- (void)deleteSessionMsg:(id)arg1;
- (_Bool)deleteMsg:(id)arg1;
- (void)deleteMsg:(id)arg1 msgWrap:(id)arg2;
- (_Bool)modMsgWrap:(id)arg1;
- (_Bool)setStarContactMsgUnreadStatus:(id)arg1;
- (_Bool)clearStarContactMsgUnreadStatus:(id)arg1;
- (_Bool)clearTimelineUnreadFromSequenceId:(unsigned long long)arg1;
- (unsigned int)getTimelineUnreadMsgCount;
- (unsigned int)getStarUnreadMsgCount;
- (unsigned int)getTimelineMsgCountByCondition:(struct Expression)arg1;
- (_Bool)migrateMsgWrap:(id)arg1;
- (_Bool)insertMsgWrap:(id)arg1 createNewGroup:(_Bool)arg2 topContact:(_Bool)arg3 isBottomMsg:(_Bool)arg4 beforePos:(int)arg5;
- (_Bool)insertMsgWrap:(id)arg1 createNewGroup:(_Bool)arg2 topContact:(_Bool)arg3 isBottomMsg:(_Bool)arg4;
- (_Bool)insertMsgWrap:(id)arg1 createNewGroup:(_Bool)arg2 topContact:(_Bool)arg3;
- (unsigned long long)getDividerLineSequenceId;
- (id)getMsgDescendingBySequenceIdAtPos:(unsigned int)arg1;
- (id)getMsgByMsgSvrId:(unsigned long long)arg1 userName:(id)arg2;
- (id)getMsgArrByMsgIdArr:(id)arg1;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 toCreateTime:(unsigned int)arg2 limit:(unsigned int)arg3 leftCount:(unsigned int *)arg4;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 toSequenceId:(unsigned long long)arg2 limit:(unsigned int)arg3 leftCount:(unsigned int *)arg4;
- (id)getMsgToSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 leftCount:(unsigned int *)arg3;
- (id)getMsgFromSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 leftCount:(unsigned int *)arg3;
- (id)getNewestTimelineMsgByUserName:(id)arg1;
- (id)getNewestTimelineMsgByUserName:(id)arg1 changeForDisplay:(_Bool)arg2;
- (id)getNewestTimelineMsg;
- (id)getFirstTimelineMsg;
- (id)getFirstStarMsg;
- (unsigned long long)getTimelineMsgTotalCount;

@end
