
/*!
 *  @brief      DSAlert-OC
 *
 *  @author     DS-Team
 *  @copyright  Copyright © 2016年 DS-Team. All rights reserved.
 *  @version    V1.1.0
 */


#import <UIKit/UIKit.h>

static NSString *DSASCellIdentifier = @"DSTableCell";

@interface DSTableCell : UITableViewCell

/*! 自定义图片 */
@property (weak, nonatomic) IBOutlet UIImageView  *customImageView;
/*! 自定义title */
@property (weak, nonatomic) IBOutlet UILabel      *customTextLabel;


@end
