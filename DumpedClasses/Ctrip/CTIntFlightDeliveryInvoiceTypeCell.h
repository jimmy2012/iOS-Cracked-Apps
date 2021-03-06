//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTIntFlightDeliveryInvoiceTypeCellModel, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface CTIntFlightDeliveryInvoiceTypeCell : UITableViewCell
{
    CTIntFlightDeliveryInvoiceTypeCellModel *_cellModel;
    id <CTIntFlightDeliveryInvoiceTypeCellDelegate> _delegate;
    NSLayoutConstraint *_separateLineHeight;
    UIButton *_hintButton;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_selectionButton;
    UIImageView *_arrowIcon;
}

+ (double)heightOfDeliveryInvoiceTypeCell:(id)arg1;
@property(nonatomic) __weak UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(nonatomic) __weak UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *hintButton; // @synthesize hintButton=_hintButton;
@property(nonatomic) __weak NSLayoutConstraint *separateLineHeight; // @synthesize separateLineHeight=_separateLineHeight;
@property(retain, nonatomic) id <CTIntFlightDeliveryInvoiceTypeCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTIntFlightDeliveryInvoiceTypeCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)clickedSelectionButton:(id)arg1;
- (void)clickedHintButton:(id)arg1;
- (void)setupDeliveryInvoiceTypeCell:(id)arg1 delegate:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

