/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EMSheetMapper.h>

@class EDWorksheet, CMStyle, ECColumnWidthConvertor;

@interface EMWorksheetMapper : EMSheetMapper {

	EDWorksheet* edWorksheet;
	CMStyle* mStyle;
	int mMaxPopulatedColumn;
	int mMaxPopulatedRow;
	double* mColumnGrid;
	double* mRowGrid;
	int mWidth;
	int mHeight;
	ECColumnWidthConvertor* mColumnWidthConvertor;

}
-(void)dealloc;
-(int)width;
-(int)height;
-(char)isVisible;
-(unsigned)columnCount;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(int)preprocessWidthWithState:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg1 ;
-(id)columnWidthConvertor;
-(double*)rowGrid;
-(double*)columnGrid;
-(int)maxRowNumber;
-(double)defaultColumnWidth;
-(double)defaultRowHeight;
-(CGSize)preprocessSizeWithState:(id)arg1 ;
-(id)initWithEDWorksheet:(id)arg1 parent:(id)arg2 ;
-(void)countRowsAndColumnsWithState:(id)arg1 ;
-(void)setRowGrid;
-(double)xlColumnWidthToPoints:(double)arg1 ;
-(void)_initWithState:(id)arg1 ;
-(void)readHyperlinksWithState:(id)arg1 ;
-(void)mapTableAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDrawablesAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)preprocessDrawableSizeWithState:(id)arg1 ;
-(void)mapColumnInfosAt:(id)arg1 withState:(id)arg2 ;
-(void)mapGridAt:(id)arg1 ;
-(void)mapTableStyleAt:(id)arg1 withState:(id)arg2 ;
@end

