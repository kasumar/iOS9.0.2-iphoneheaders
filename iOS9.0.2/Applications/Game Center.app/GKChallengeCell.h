/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKCollectionViewCell.h>

@class GKPlayerPhotoView, UILabel, GKContiguousContainerView, NSLayoutConstraint, GKChallenge;

@interface GKChallengeCell : GKCollectionViewCell {

	char _padLeftMargin;
	GKPlayerPhotoView* _iconView;
	UILabel* _titleLabel;
	UILabel* _goalLabel;
	GKContiguousContainerView* _textContainerView;
	NSLayoutConstraint* _iconLeftConstraint;
	NSLayoutConstraint* _textLeftConstraint;
	NSLayoutConstraint* _trailingMarginConstraint;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) GKChallenge * challenge; 
@property (assign,nonatomic) char padLeftMargin;                                         //@synthesize padLeftMargin=_padLeftMargin - In the implementation block
@property (nonatomic,retain) GKPlayerPhotoView * iconView;                               //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                  //@synthesize marginInsets=_marginInsets - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * goalLabel;                                        //@synthesize goalLabel=_goalLabel - In the implementation block
@property (nonatomic,retain) GKContiguousContainerView * textContainerView;              //@synthesize textContainerView=_textContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconLeftConstraint;                    //@synthesize iconLeftConstraint=_iconLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLeftConstraint;                    //@synthesize textLeftConstraint=_textLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingMarginConstraint;              //@synthesize trailingMarginConstraint=_trailingMarginConstraint - In the implementation block
+(id)itemHeightList;
+(float)defaultRowHeight;
-(void)setIconLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconLeftConstraint;
-(void)setTextLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPadLeftMargin:(char)arg1 ;
-(char)padLeftMargin;
-(UILabel *)goalLabel;
-(void)setGoalLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)textLeftConstraint;
-(NSLayoutConstraint *)trailingMarginConstraint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(GKPlayerPhotoView *)iconView;
-(void)setIconView:(GKPlayerPhotoView *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)didUpdateModel;
-(CGRect)alignmentRectForText;
-(void)setRepresentedItem:(id)arg1 ;
-(char)canRemoveItem;
-(void)establishConstraints;
-(GKChallenge *)challenge;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(void)setTextContainerView:(GKContiguousContainerView *)arg1 ;
-(GKContiguousContainerView *)textContainerView;
@end

