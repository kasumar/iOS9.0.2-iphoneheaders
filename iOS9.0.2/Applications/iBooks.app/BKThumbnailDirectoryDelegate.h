/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKThumbnailDirectoryDelegate <BKDirectoryContentDelegate>
@optional
-(char)thumbnailDirectoryWantsPageNumber:(id)arg1;

@required
-(id)thumbnailDirectory:(id)arg1 thumbnailForPage:(unsigned)arg2 size:(CGSize)arg3 context:(id)arg4;
-(void)thumbnailDirectory:(id)arg1 cancelPreviousRenderRequestsWithContext:(id)arg2;

@end
