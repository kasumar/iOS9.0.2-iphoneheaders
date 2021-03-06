/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFTiltedTabViewDelegate <NSObject>
@required
-(void)tiltedTabViewWillPresent:(id)arg1;
-(void)tiltedTabViewDidPresent:(id)arg1;
-(void)tiltedTabViewWillDismiss:(id)arg1;
-(void)tiltedTabViewDidDismiss:(id)arg1;
-(void)tiltedTabViewDidScroll:(id)arg1;
-(int)numberOfItemsInTiltedTabView:(id)arg1;
-(id)tiltedTabView:(id)arg1 contentViewForItemAtIndex:(unsigned)arg2;
-(id)tiltedTabView:(id)arg1 snapshotViewForItemAtIndex:(unsigned)arg2;
-(void)tiltedTabView:(id)arg1 relinquishContentView:(id)arg2 forItemAtIndex:(unsigned)arg3;
-(void)tiltedTabView:(id)arg1 relinquishSnapshotView:(id)arg2 forItemAtIndex:(unsigned)arg3;
-(void)tiltedTabView:(id)arg1 didSelectItemAtIndex:(unsigned)arg2;
-(char)tiltedTabView:(id)arg1 canCloseItemAtIndex:(unsigned)arg2;
-(void)tiltedTabView:(id)arg1 closeItemAtIndex:(unsigned)arg2;
-(void)tiltedTabView:(id)arg1 didMoveItemAtIndex:(unsigned)arg2 toIndex:(unsigned)arg3;
-(float)tiltedTabView:(id)arg1 headerHeightForItemAtIndex:(unsigned)arg2;
-(CGRect*)tiltedTabView:(id)arg1 frameForItemAtIndex:(unsigned)arg2;
-(CATransform3D*)tiltedTabView:(id)arg1 expanded:(char)arg2 layerTransformForItemAtIndex:(unsigned)arg3;
-(UIEdgeInsets*)tiltedTabView:(id)arg1 expanded:(char)arg2 edgeInsetsForItemAtIndex:(unsigned)arg3;
-(float)tiltedTabView:(id)arg1 alphaValueForItemAtIndex:(unsigned)arg2;

@end

