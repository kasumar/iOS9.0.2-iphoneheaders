/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, UIPrintInteractionControllerDelegate;
#import <UIKit/UIKit-Structs.h>
@class NSObject, UIPrintInfo, UIPrintPaper, UIPrintPageRenderer, UIPrintFormatter, NSArray, PKPrinter;

@interface UIPrintInteractionController : NSObject {

	char _hidesNumberOfCopies;
	/*^block*/id _completionHandler;
	unsigned _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_queue> _previewQueue;
	id _printState;
	id _temporaryRetainCycle;
	char _showsPageRange;
	char _showsPaperSelectionForLoadedPapers;
	UIPrintInfo* _printInfo;
	id<UIPrintInteractionControllerDelegate> _delegate;
	UIPrintPaper* _printPaper;
	UIPrintPageRenderer* _printPageRenderer;
	UIPrintFormatter* _printFormatter;
	id _printingItem;
	NSArray* _printingItems;
	id<UIPrintInteractionControllerDelegate> _printActivityDelegate;

}

@property (nonatomic,retain) UIPrintInfo * printInfo;                                                            //@synthesize printInfo=_printInfo - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrintInteractionControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsPageRange;                                                                //@synthesize showsPageRange=_showsPageRange - In the implementation block
@property (assign,nonatomic) char showsNumberOfCopies; 
@property (assign,nonatomic) char showsPaperSelectionForLoadedPapers;                                            //@synthesize showsPaperSelectionForLoadedPapers=_showsPaperSelectionForLoadedPapers - In the implementation block
@property (nonatomic,readonly) UIPrintPaper * printPaper;                                                        //@synthesize printPaper=_printPaper - In the implementation block
@property (nonatomic,retain) UIPrintPageRenderer * printPageRenderer;                                            //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * printFormatter;                                                  //@synthesize printFormatter=_printFormatter - In the implementation block
@property (nonatomic,copy) id printingItem;                                                                      //@synthesize printingItem=_printingItem - In the implementation block
@property (nonatomic,copy) NSArray * printingItems;                                                              //@synthesize printingItems=_printingItems - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrintInteractionControllerDelegate> printActivityDelegate;              //@synthesize printActivityDelegate=_printActivityDelegate - In the implementation block
@property (nonatomic,readonly) int pageCount; 
@property (nonatomic,retain) NSArray * pageRanges; 
@property (nonatomic,retain) PKPrinter * printer; 
@property (nonatomic,retain) UIPrintPaper * paper; 
+(id)sharedPrintController;
+(char)isPrintingAvailable;
+(id)printableUTIs;
+(char)canPrintURL:(id)arg1 ;
+(char)canPrintData:(id)arg1 ;
-(void)setDelegate:(id<UIPrintInteractionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<UIPrintInteractionControllerDelegate>)delegate;
-(id)_init;
-(UIPrintInfo *)printInfo;
-(char)savePDFToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(void)setPrintFormatter:(UIPrintFormatter *)arg1 ;
-(void)setPrintInfo:(UIPrintInfo *)arg1 ;
-(void)dismissAnimated:(char)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(int)pageCount;
-(NSArray *)pageRanges;
-(void)setPageRanges:(NSArray *)arg1 ;
-(char)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)presentAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)presentFromBarButtonItem:(id)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(id)_currentPrintInfo;
-(char)_canShowColor;
-(UIPrintPaper *)paper;
-(void)_generatePrintPreview:(/*^block*/id)arg1 ;
-(void)_printPanelDidPresent;
-(void)_printPanelWillDismiss:(char)arg1 ;
-(void)_printPanelDidDismiss;
-(void)_cancelAllPreviewGeneration;
-(void)_updatePageCount;
-(CGSize)_printItemContentSize;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(char)_canShowDuplex;
-(char)_canShowPageRange;
-(char)_canShowCopies;
-(char)_canShowPaperList;
-(char)_canShowPreview;
-(char)_canShowStaple;
-(void)_cleanPrintState;
-(char)_setupPrintPanel:(/*^block*/id)arg1 ;
-(void)_endPrintJob:(char)arg1 error:(id)arg2 ;
-(void)_ensurePDFIsUnlockedFirstAttempt:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setPrintInfoState:(int)arg1 ;
-(char)_canPrintPDFURL:(id)arg1 ;
-(char)_canPrintPDFData:(id)arg1 ;
-(id)printingItem;
-(id)_paperForPDFItem:(id)arg1 withDuplexMode:(int)arg2 ;
-(void)_updatePrintPaper;
-(CGContextRef)_newSaveContext:(id)arg1 withMediaRect:(CGRect)arg2 ;
-(void)_startPrinting;
-(void)_updateCutterBehavior;
-(CGSize)_printablePDFURLSize:(id)arg1 ;
-(CGSize)_printablePDFDataSize:(id)arg1 ;
-(float)_getCutLengthFromDelegateForPaper:(id)arg1 ;
-(id)_getChosenPaperFromDelegateForPaperList:(id)arg1 ;
-(id)_paperForContentType:(int)arg1 ;
-(void)_preparePrintInfo;
-(void)_printPage;
-(id)_printPageRenderer:(id)arg1 ;
-(id)_printItem:(id)arg1 ;
-(void)setPrintingItem:(id)arg1 ;
-(char)printToPrinter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)showsNumberOfCopies;
-(void)setShowsNumberOfCopies:(char)arg1 ;
-(char)_canShowPunch;
-(char)showsPageRange;
-(void)setShowsPageRange:(char)arg1 ;
-(char)showsPaperSelectionForLoadedPapers;
-(void)setShowsPaperSelectionForLoadedPapers:(char)arg1 ;
-(UIPrintPaper *)printPaper;
-(UIPrintFormatter *)printFormatter;
-(NSArray *)printingItems;
-(void)setPrintingItems:(NSArray *)arg1 ;
-(id<UIPrintInteractionControllerDelegate>)printActivityDelegate;
-(void)setPrintActivityDelegate:(id<UIPrintInteractionControllerDelegate>)arg1 ;
-(void)_enableManualPrintPage:(char)arg1 ;
-(void)_manualPrintPage;
-(void)_cancelManualPrintPage;
@end

