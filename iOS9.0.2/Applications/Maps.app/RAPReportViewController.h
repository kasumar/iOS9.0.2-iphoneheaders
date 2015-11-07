/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Maps/RAPReportViewControllerProtocol.h>

@class RAPReportViewControllerDelegate, NSString, RAPReport, UIBarButtonItem;

@interface RAPReportViewController : UIViewController <RAPReportViewControllerProtocol> {

	RAPReportViewControllerDelegate* _rapDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RAPReport * report; 
@property (nonatomic,readonly) UIBarButtonItem * sendButtonItem; 
@property (nonatomic,copy,readonly) id completion; 
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_send;
-(UIBarButtonItem *)sendButtonItem;
-(void)invokeCompletionWithOutcome:(int)arg1 ;
-(id)completion;
-(RAPReport *)report;
@end
