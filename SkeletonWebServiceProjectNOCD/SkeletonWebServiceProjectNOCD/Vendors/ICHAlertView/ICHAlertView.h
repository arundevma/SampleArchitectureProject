//
//  ICHAlertView.h
//  SkeletonWebServiceProjectNOCD
//
//  Created by Arun Dev M A on 7/3/14.
//  Copyright (c) 2014 iChathan.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^AlertCompletionBlock)(NSInteger index);
typedef void(^AlertCancelBlock)(void);

@interface ICHAlertView : UIAlertView

@property(nonatomic,copy) AlertCompletionBlock completionBlock;
@property(nonatomic,copy) AlertCancelBlock cancelBlock;

+ (void)showAlertWithTiTle:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *) cancelButtonTitle otherButtonTitles:(NSArray *)buttonTitles withCompletionBlock:(AlertCompletionBlock)completionblock andCancelBlock:(AlertCancelBlock)cancelBlock;


@end
