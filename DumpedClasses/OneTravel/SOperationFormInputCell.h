//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOperationFormCell.h"

#import "UITextFieldDelegate.h"

@class NSString, SOperationFormInputCellModel, UITextField;

@interface SOperationFormInputCell : SOperationFormCell <UITextFieldDelegate>
{
    SOperationFormInputCellModel *_model;
    UITextField *_textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) SOperationFormInputCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)animationDictWithUserInfo:(id)arg1;
- (void)setDataModel:(id)arg1;
- (void)didHomeAnimDidFinished:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
