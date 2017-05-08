
/*!
 *  @brief      DSActionSheet-OC
 *
 *  @author     DS-Team
 *  @copyright  Copyright © 2016年 DS-Team. All rights reserved.
 *  @version    V1.1.0
 */

/*!
 *********************************************************************************
 ************************************ 更新说明 ************************************
 *********************************************************************************
 
 最新更新时间：2017-05-08 【倒叙】
 最新Version：【Version：1.1.0】
 更新内容：
 1.1.0.1、优化方法名命名规范
 1.1.0.2、新增键盘内部处理
 1.1.0.3、用原生 autoLayout 重构，自定义 alert 的布局再也不是问题了
 1.1.0.4、优化代码结构，修复内在隐藏内存泄漏
 1.1.0.5、新增 DSAlert_OC.h 文件，只需导入 DSAlert_OC.h 一个文件就可以使用 alert 和 actionSheet 了
 1.1.0.6、删除了部分代码和属性，具体见源码 和 demo
 
 */



#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, DSCustomActionSheetStyle) {
    /*!
     *  普通样式
     */
    DSCustomActionSheetStyleNormal = 1,
    /*!
     *  带标题样式
     */
    DSCustomActionSheetStyleTitle,
    /*!
     *  带图片和标题样式
     */
    DSCustomActionSheetStyleImageAndTitle,
    /*!
     *  带图片样式
     */
    DSCustomActionSheetStyleImage,
};

/*! 进出场动画枚举 默认：1 */
typedef NS_ENUM(NSUInteger, DSActionSheetAnimatingStyle) {
    /*! 缩放显示动画 */
    DSActionSheetAnimatingStyleScale = 1,
    /*! 晃动动画 */
    DSActionSheetAnimatingStyleShake,
    /*! 天上掉下动画 / 上升动画 */
    DSActionSheetAnimatingStyleFall,
};

typedef void(^ButtonActionBlock)(NSInteger index);

@interface DSActionSheet : UIView

/*! 是否开启边缘触摸隐藏 alert 默认：NO */
@property (nonatomic, assign) BOOL isTouchEdgeHide;

/*! 是否开启进出场动画 默认：NO，如果 YES ，并且同步设置进出场动画枚举为默认值：1 */
@property (nonatomic, assign, getter=isShowAnimate) BOOL showAnimate;

/*! 进出场动画枚举 默认：1 ，并且默认开启动画开关 */
@property (nonatomic, assign) DSActionSheetAnimatingStyle animatingStyle;


/*!
 *
 *  @param style             样式
 *  @param contentArray      选项数组(NSString数组)
 *  @param imageArray        图片数组(UIImage数组)
 *  @param redIndex          特别颜色的下标数组(NSNumber数组)
 *  @param title             标题内容(可空)
 *  @param clikckButtonIndex block回调点击的选项
 */
+ (void)ds_showActionSheetWithStyle:(DSCustomActionSheetStyle)style
                       contentArray:(NSArray<NSString *> *)contentArray
                         imageArray:(NSArray<UIImage *> *)imageArray
                           redIndex:(NSInteger)redIndex
                              title:(NSString *)title
                      configuration:(void (^)(DSActionSheet *tempView)) configuration
                  ClikckButtonIndex:(ButtonActionBlock)clikckButtonIndex;

/*!
 *  隐藏 DSActionSheet
 */
- (void)ds_dismissDSActionSheet;

@end
