/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITableViewDataSourcePrivate <UITableViewDataSource>
@optional
-(id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
-(id)tableView:(id)arg1 detailTextForHeaderInSection:(int)arg2;

@required
-(char)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
-(char)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;

@end

