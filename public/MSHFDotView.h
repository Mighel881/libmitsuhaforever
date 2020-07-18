#import "MSHFView.h"
#import <UIKit/UIKit.h>

@interface MSHFDotView : MSHFView

@property(nonatomic, assign) CGFloat barSpacing;
@property(nonatomic, strong) CALayer *redDots;
@property(nonatomic, strong) CALayer *greenDots;
@property(nonatomic, strong) CALayer *blueDots;

@end
