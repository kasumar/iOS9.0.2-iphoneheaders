/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>
#import <Podcasts/IMExpandingLabelDelegate.h>

@protocol MTPodcastHeaderDelegate;
@class MTAllPropertyChangesQueryObserver, NSString, UIImageView, UILabel, IMExpandingLabel, UIView, UIButton, UIBarButtonItem, UIToolbar, UIImage;

@interface MTPodcastHeaderView : UIView <IMExpandingLabelDelegate> {

	MTAllPropertyChangesQueryObserver* _queryObserver;
	NSString* _podcastUuid;
	NSString* _derivedPropertyCallbackToken;
	char _needsToUpdateImageSize;
	char _forcePhoneStyle;
	char _disabled;
	float _rightMargin;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _providerLabel;
	UILabel* _episodesLabel;
	UILabel* _updatedLabel;
	id<MTPodcastHeaderDelegate> _delegate;
	int _headerMode;
	IMExpandingLabel* _descriptionLabel;
	UIView* _darkView;
	UIView* _headerSeperator;
	UIImageView* _chevronImage;
	UIButton* _disclosureButton;
	MTAllPropertyChangesQueryObserver* _episodeCountObserver;
	UIBarButtonItem* _shareButtonItem;
	UIToolbar* _shareToolbar;
	UIImage* _podcastImage;
	CGSize _imageSize;

}

@property (assign,nonatomic) float rightMargin;                                                     //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) char forcePhoneStyle;                                                  //@synthesize forcePhoneStyle=_forcePhoneStyle - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * providerLabel;                                               //@synthesize providerLabel=_providerLabel - In the implementation block
@property (nonatomic,retain) UILabel * episodesLabel;                                               //@synthesize episodesLabel=_episodesLabel - In the implementation block
@property (nonatomic,retain) UILabel * updatedLabel;                                                //@synthesize updatedLabel=_updatedLabel - In the implementation block
@property (assign,nonatomic,__weak) id<MTPodcastHeaderDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int headerMode;                                                        //@synthesize headerMode=_headerMode - In the implementation block
@property (nonatomic,readonly) IMExpandingLabel * descriptionLabel;                                 //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * darkView;                                                     //@synthesize darkView=_darkView - In the implementation block
@property (assign,nonatomic) char disabled;                                                         //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) UIView * headerSeperator;                                              //@synthesize headerSeperator=_headerSeperator - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImage;                                            //@synthesize chevronImage=_chevronImage - In the implementation block
@property (nonatomic,retain) UIButton * disclosureButton;                                           //@synthesize disclosureButton=_disclosureButton - In the implementation block
@property (nonatomic,retain) MTAllPropertyChangesQueryObserver * episodeCountObserver;              //@synthesize episodeCountObserver=_episodeCountObserver - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareButtonItem;                                     //@synthesize shareButtonItem=_shareButtonItem - In the implementation block
@property (nonatomic,retain) UIToolbar * shareToolbar;                                              //@synthesize shareToolbar=_shareToolbar - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                                      //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) UIImage * podcastImage;                                                //@synthesize podcastImage=_podcastImage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)podcastImage;
-(id)initWithImage:(id)arg1 podcastUuid:(id)arg2 frame:(CGRect)arg3 forcePhoneStyle:(char)arg4 ;
-(void)setHeaderMode:(int)arg1 ;
-(char)usePad;
-(char)forcePhoneStyle;
-(void)setForcePhoneStyle:(char)arg1 ;
-(void)setPodcastImage:(UIImage *)arg1 ;
-(UIToolbar *)shareToolbar;
-(void)updateImageSize;
-(id)creatSeperatorView;
-(void)shareTapped:(id)arg1 ;
-(UIBarButtonItem *)shareButtonItem;
-(void)updateImageSizeIfNeeded;
-(UILabel *)providerLabel;
-(UILabel *)episodesLabel;
-(UILabel *)updatedLabel;
-(UIView *)headerSeperator;
-(int)headerMode;
-(id)stringForUpdatedLabel:(id)arg1 ;
-(id)stringForEpisodesLabel;
-(void)setEpisodeCountObserver:(MTAllPropertyChangesQueryObserver *)arg1 ;
-(MTAllPropertyChangesQueryObserver *)episodeCountObserver;
-(void)setMoreButtonFont:(id)arg1 ;
-(void)setProviderLabel:(UILabel *)arg1 ;
-(void)setUpdatedLabel:(UILabel *)arg1 ;
-(void)setEpisodesLabel:(UILabel *)arg1 ;
-(UIButton *)disclosureButton;
-(void)expandingLabelShouldExpand:(id)arg1 ;
-(id)initWithPodcastUUID:(id)arg1 ;
-(void)setDarkView:(UIView *)arg1 ;
-(UIView *)darkView;
-(void)setHeaderSeperator:(UIView *)arg1 ;
-(void)setChevronImage:(UIImageView *)arg1 ;
-(void)setDisclosureButton:(UIButton *)arg1 ;
-(void)setShareButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setShareToolbar:(UIToolbar *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(IMExpandingLabel *)descriptionLabel;
-(void)setImageSize:(CGSize)arg1 ;
-(void)_updateFonts;
-(void)_setupView;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(void)setDelegate:(id<MTPodcastHeaderDelegate>)arg1 ;
-(void)dealloc;
-(void)setAlpha:(float)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MTPodcastHeaderDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(void)didMoveToSuperview;
-(CGSize)imageSize;
-(void)setRightMargin:(float)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(float)rightMargin;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)chevronImage;
@end
