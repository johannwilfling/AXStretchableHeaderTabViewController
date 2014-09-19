//
//  AXTabBar.h
//  Pods
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
  AXTabBarStyleDefault = 0,
  AXTabBarStyleVariableWidthButton,
} AXTabBarStyle;

@class AXTabBar;

@protocol AXTabBarDelegate <NSObject>
@optional
- (BOOL)tabBar:(AXTabBar *)tabBar shouldSelectItem:(UITabBarItem *)item;
- (void)tabBar:(AXTabBar *)tabBar didSelectItem:(UITabBarItem *)item;
@end

@interface AXTabBar : UIView
@property (copy, nonatomic) NSArray *items;
@property (assign, nonatomic) UITabBarItem *selectedItem;
@property (assign, nonatomic) id<AXTabBarDelegate> delegate;
@property (strong, nonatomic) UIFont *tabBarButtonFont;

@property (strong, nonatomic) UIImage *tabBarBackgroundImage;
@property (strong, nonatomic) UIColor *tintColorStateNormal;
@property (strong, nonatomic) UIColor *tintColorStateSelected;

@property CGFloat indicatorLayerBottomOffset;

// TODO: implement this style option.
//@property (nonatomic) AXTabBarStyle tabBarStyle;

@property (copy, nonatomic) NSArray *tabBarItemButtons;

@end
