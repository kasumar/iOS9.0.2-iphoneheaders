/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <AdSheet/ADKVCCopiedForwarding.h>

@class ADSAdImpression, NSMutableDictionary, NSString, NSArray, NSNumber, PKPass, WebArchive, UIColor;

@interface ADSAdAction : NSObject <ADKVCCopiedForwarding> {

	ADSAdImpression* _impression;
	NSMutableDictionary* _actionData;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) double confirmedClickTimeInterval; 
@property (nonatomic,readonly) int action; 
@property (nonatomic,copy) NSString * actionURL; 
@property (nonatomic,copy) NSString * actionWebArchiveURL; 
@property (nonatomic,readonly) char scrolling; 
@property (nonatomic,readonly) char allowSelfDismissal; 
@property (nonatomic,readonly) unsigned storyboardPresentationInterfaceOrientations; 
@property (assign,nonatomic) unsigned storyboardSupportedInterfaceOrientations; 
@property (nonatomic,readonly) int transitionType; 
@property (nonatomic,readonly) NSArray * parameters; 
@property (nonatomic,readonly) char suppressesPermissionToExitDialog; 
@property (nonatomic,readonly) NSString * titleForExitDialog; 
@property (nonatomic,readonly) NSString * messageForExitDialog; 
@property (nonatomic,readonly) NSString * cancelLabelForExitDialog; 
@property (nonatomic,readonly) NSString * continueLabelForExitDialog; 
@property (nonatomic,readonly) NSArray * allowedExternalDomains; 
@property (nonatomic,readonly) char adManagesPurchaseFlow; 
@property (nonatomic,readonly) NSString * titleForPurchaseDialog; 
@property (nonatomic,readonly) NSString * messageForPurchaseDialog; 
@property (nonatomic,readonly) NSString * cancelButtonForPurchaseDialog; 
@property (nonatomic,readonly) NSString * okButtonForPurchaseDialog; 
@property (nonatomic,readonly) NSNumber * adamIdentifier; 
@property (nonatomic,readonly) double autoDismissInterval; 
@property (nonatomic,readonly) char loadNewImpressionOnActionComplete; 
@property (nonatomic,readonly) char shouldCycleAfterAction; 
@property (nonatomic,retain) PKPass * passbookPass; 
@property (nonatomic,retain) WebArchive * actionWebArchive; 
@property (assign,nonatomic) char hasSentConfirmedClick; 
@property (nonatomic,readonly) UIColor * letterboxStoryboardColor; 
@property (nonatomic,readonly) char timeBasedConfirmedClick; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) char actionHidesStatusBar; 
@property (nonatomic,readonly) int modalPresentationStyle; 
@property (nonatomic,retain) NSMutableDictionary * actionData;                                    //@synthesize actionData=_actionData - In the implementation block
@property (nonatomic,readonly) int storyboardPresentationOrientations; 
@property (nonatomic,readonly) int storyboardSupportedOrientations; 
@property (nonatomic,readonly) ADSAdImpression * impression; 
+(id)sharedDispatchQueue;
+(void)initialize;
-(void)setStoryboardSupportedOrientations:(int)arg1 ;
-(int)storyboardSupportedOrientations;
-(void)setStoryboardPresentationOrientations:(int)arg1 ;
-(int)storyboardPresentationOrientations;
-(void)setHasSentConfirmedClick:(char)arg1 ;
-(char)hasSentConfirmedClick;
-(void)setActionWebArchive:(WebArchive *)arg1 ;
-(WebArchive *)actionWebArchive;
-(void)setPassbookPass:(PKPass *)arg1 ;
-(PKPass *)passbookPass;
-(void)setLoadNewImpressionOnActionComplete:(char)arg1 ;
-(char)loadNewImpressionOnActionComplete;
-(void)setAutoDismissInterval:(double)arg1 ;
-(void)setAdamIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)adamIdentifier;
-(void)setOkButtonForPurchaseDialog:(NSString *)arg1 ;
-(NSString *)okButtonForPurchaseDialog;
-(void)setCancelButtonForPurchaseDialog:(NSString *)arg1 ;
-(NSString *)cancelButtonForPurchaseDialog;
-(void)setMessageForPurchaseDialog:(NSString *)arg1 ;
-(NSString *)messageForPurchaseDialog;
-(void)setTitleForPurchaseDialog:(NSString *)arg1 ;
-(NSString *)titleForPurchaseDialog;
-(void)setAdManagesPurchaseFlow:(char)arg1 ;
-(char)adManagesPurchaseFlow;
-(void)setAllowedExternalDomains:(NSArray *)arg1 ;
-(NSArray *)allowedExternalDomains;
-(void)setContinueLabelForExitDialog:(NSString *)arg1 ;
-(NSString *)continueLabelForExitDialog;
-(void)setCancelLabelForExitDialog:(NSString *)arg1 ;
-(NSString *)cancelLabelForExitDialog;
-(void)setMessageForExitDialog:(NSString *)arg1 ;
-(NSString *)messageForExitDialog;
-(void)setTitleForExitDialog:(NSString *)arg1 ;
-(NSString *)titleForExitDialog;
-(void)setSuppressesPermissionToExitDialog:(char)arg1 ;
-(char)suppressesPermissionToExitDialog;
-(void)setParameters:(NSArray *)arg1 ;
-(NSArray *)parameters;
-(void)setTransitionType:(int)arg1 ;
-(int)transitionType;
-(void)setAllowSelfDismissal:(char)arg1 ;
-(char)allowSelfDismissal;
-(void)setScrolling:(char)arg1 ;
-(char)scrolling;
-(void)setActionWebArchiveURL:(NSString *)arg1 ;
-(NSString *)actionWebArchiveURL;
-(void)setActionURL:(NSString *)arg1 ;
-(NSString *)actionURL;
-(void)setAction:(int)arg1 ;
-(int)action;
-(void)setConfirmedClickTimeInterval:(double)arg1 ;
-(double)confirmedClickTimeInterval;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)publicAttributes;
-(char)shouldCycleAfterAction;
-(CGSize)storyboardSizeForContainerSize:(CGSize)arg1 ;
-(UIColor *)letterboxStoryboardColor;
-(unsigned)storyboardPresentationInterfaceOrientations;
-(unsigned)storyboardSupportedInterfaceOrientations;
-(void)setStoryboardSupportedInterfaceOrientations:(unsigned)arg1 ;
-(id)copiedValueForKey:(id)arg1 ;
-(id)URLsToVerifyWithHeadRequests;
-(id)initWithActionData:(id)arg1 forImpression:(id)arg2 ;
-(char)validateAndNormalizeActionURLs;
-(char)hasRequiredOrientationSpecifications;
-(char)actionWebArchiveIsRequired;
-(char)timeBasedConfirmedClick;
-(ADSAdImpression *)impression;
-(char)actionHidesStatusBar;
-(CFDictionaryRef)internalActionData;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(int)modalPresentationStyle;
-(double)autoDismissInterval;
-(NSMutableDictionary *)actionData;
-(void)setActionData:(NSMutableDictionary *)arg1 ;
@end
