/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPReportTableViewController.h>

@class RAPBadRouteSuggestionsQuestion, RAPReportComposerBadRouteSelectionSection, RAPTablePart, RAPReportComposerCommentPart;

@interface RAPReportComposerBadRouteSuggestionsViewController : RAPReportTableViewController {

	RAPBadRouteSuggestionsQuestion* _question;
	RAPReportComposerBadRouteSelectionSection* _whichRouteSection;
	RAPTablePart* _whichRoutePart;
	RAPReportComposerCommentPart* _commentPart;

}
-(id)tableParts;
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
