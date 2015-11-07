/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/RCCaptureSessionObserver.h>

@class RCAVState, RCUIConfiguration, NSLayoutConstraint, RCLayoutMetrics, UIView, RCAVWaveformViewController, UILabel, NSString;

@interface RCLockScreenViewController : UIViewController <RCCaptureSessionObserver> {

	RCAVState* _AVState;
	RCUIConfiguration* _UIConfiguration;
	id _contentSizeChangeObserver;
	NSLayoutConstraint* _waveformTopOffsetCn;
	RCLayoutMetrics* _layoutMetrics;
	UIView* _containerView;
	RCAVWaveformViewController* _waveformViewController;
	UILabel* _timeDisplayLabel;

}

@property (nonatomic,retain) RCAVState * AVState;                                              //@synthesize AVState=_AVState - In the implementation block
@property (nonatomic,retain) RCUIConfiguration * UIConfiguration;                              //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
@property (nonatomic,__weak,readonly) id contentSizeChangeObserver;                            //@synthesize contentSizeChangeObserver=_contentSizeChangeObserver - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * waveformTopOffsetCn;                       //@synthesize waveformTopOffsetCn=_waveformTopOffsetCn - In the implementation block
@property (nonatomic,readonly) RCLayoutMetrics * layoutMetrics;                                //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) RCAVWaveformViewController * waveformViewController;              //@synthesize waveformViewController=_waveformViewController - In the implementation block
@property (nonatomic,retain) UILabel * timeDisplayLabel;                                       //@synthesize timeDisplayLabel=_timeDisplayLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateContentSizeAttributes;
-(void)_updateInterfaceForCaptureSession:(id)arg1 ;
-(void)setWaveformTopOffsetCn:(NSLayoutConstraint *)arg1 ;
-(id)contentSizeChangeObserver;
-(NSLayoutConstraint *)waveformTopOffsetCn;
-(UILabel *)timeDisplayLabel;
-(void)setTimeDisplayLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(id)init;
-(UIView *)containerView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2 ;
-(void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2 ;
-(void)captureSession:(id)arg1 didFinishWithSuccess:(char)arg2 ;
-(RCAVState *)AVState;
-(void)setAVState:(RCAVState *)arg1 ;
-(void)rc_screenUpdatesDisabledDidChange;
-(RCAVWaveformViewController *)waveformViewController;
-(void)setUIConfiguration:(RCUIConfiguration *)arg1 ;
-(RCUIConfiguration *)UIConfiguration;
-(RCLayoutMetrics *)layoutMetrics;
-(void)setWaveformViewController:(RCAVWaveformViewController *)arg1 ;
@end
