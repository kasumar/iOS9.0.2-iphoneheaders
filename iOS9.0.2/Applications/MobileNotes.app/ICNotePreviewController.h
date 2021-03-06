/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class ICNote, ICTextView, ICTextController, NotesBackgroundView, NSString;

@interface ICNotePreviewController : UIViewController <UITextViewDelegate> {

	ICNote* _note;
	ICTextView* _textView;
	ICTextController* _textController;

}

@property (nonatomic,retain) ICNote * note;                                       //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) ICTextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) NotesBackgroundView * backgroundView; 
@property (nonatomic,retain) ICTextController * textController;                   //@synthesize textController=_textController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupPreview;
-(ICTextController *)textController;
-(void)setTextController:(ICTextController *)arg1 ;
-(id)createTextViewUsingTextController:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(char)arg2 ;
-(void)shareNote;
-(NotesBackgroundView *)backgroundView;
-(void)setTextView:(ICTextView *)arg1 ;
-(void)viewDidLoad;
-(id)previewMenuItems;
-(ICTextView *)textView;
-(void)setNote:(ICNote *)arg1 ;
-(ICNote *)note;
@end

