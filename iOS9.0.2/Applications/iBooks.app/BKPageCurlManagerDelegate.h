/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKPageCurlManagerDelegate <NSObject>
@optional
-(float)pageCurlManager:(id)arg1 durationForCurl:(id)arg2;
-(void)pageCurlManager:(id)arg1 willCancelCurl:(id)arg2;
-(float)pageCurlManager:(id)arg1 delayForCurl:(id)arg2;
-(float)pageCurlManagerStabilizationFactor;
-(void)pageCurlManager:(id)arg1 didBeginCurl:(id)arg2;
-(char)pageCurlManagerRemovesViews:(id)arg1;
-(char)pageCurlManagerShouldKillLastOpposingCurl:(id)arg1;

@required
-(void)pageCurlManager:(id)arg1 willBeginCurl:(id)arg2;
-(void)pageCurlManager:(id)arg1 didFinishCurl:(id)arg2 transitionCompleted:(char)arg3;

@end
