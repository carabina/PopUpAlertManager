//
//  UIAlertController+PPCategory.h
//  PatPat
//
//  Created by patpat on 2018/4/30.
//  Copyright © 2018年 http://www.patpat.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^callBackBlock)(NSInteger index);

@interface UIAlertController (PPCategory)

+(void)showAlertCntroller:(UIViewController *)viewController
     alertControllerStyle:(UIAlertControllerStyle)alertControllerStyle
                    title:(NSString *)title message:(NSString *)message
                    block:(callBackBlock)block cancelButtonTitle:(NSString *)cancelBtnTitle
            okButtonTitle:(NSString *)okButtonTitle
        otherButtonTitles:(NSString *)otherBtnTitles, ...;

+(void)showAlertCntroller:(UIViewController *)viewController
     alertControllerStyle:(UIAlertControllerStyle)alertControllerStyle
                    title:(NSString *)title
                  message:(NSString *)message
        cancelButtonTitle:(NSString *)cancelBtnTitle
                    block:(callBackBlock)block
        otherButtonTitles:(NSArray *)otherBtnTitles;

@end
