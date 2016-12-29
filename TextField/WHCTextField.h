//
//  WHCTextField.h
//  WHCAPP
//
//  Created by Haochen Wang on 12/2/16.
//  Copyright © 2016 WHC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WHCTextField;

typedef NS_ENUM(NSInteger, WHCTextFieldStyle)
{
    WHCTextFieldStyleEmail,          //Default placeholder: 'Email';   Default validation: email validation regular expression
    WHCTextFieldStylePhone,          //Default placeholder: 'Phone';   Default format: '###-###-####'
    WHCTextFieldStylePassword,       //Default placeholder: 'Password; Default: secure text entry
    WHCTextFieldStyleNone,           //Default style
};

@interface WHCTextField : UITextField

/**
 * Style of text: email, phone, password
 * Default is nil.
 */
@property (nonatomic, assign) WHCTextFieldStyle style;

/**
 * Text color to be applied to floating placeholder text when editing.
 * Default is tint color.
 */
@property (nonatomic, strong) IBInspectable UIColor *placeholderActiveColor;

/**
 * Text color to be applied to floating placeholder text when not editing.
 * Default is 70% gray.
 */
@property (nonatomic, strong) IBInspectable UIColor *placeholderInactiveColor;

+(instancetype)textFieldCreateWithPlaceHolder:(NSString *)placeHolder;

+(instancetype)textFieldCreateWithStyle:(WHCTextFieldStyle)style;

@end
