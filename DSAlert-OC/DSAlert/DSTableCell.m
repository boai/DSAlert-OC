
/*!
 *  @brief      DSAlert-OC
 *
 *  @author     DS-Team
 *  @copyright  Copyright © 2016年 DS-Team. All rights reserved.
 *  @version    V1.1.0
 */


#import "DSTableCell.h"

@implementation DSTableCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)drawRect:(CGRect)rect {
    [super drawRect:rect];
    
    CGContextRef context = UIGraphicsGetCurrentContext();
    
    CGContextSetFillColorWithColor(context, [UIColor clearColor].CGColor);
    
    CGContextFillRect(context, rect);
    
    //下分割线
    
    CGContextSetStrokeColorWithColor(context,[UIColor colorWithWhite:0.8 alpha:1].CGColor);
    
    CGContextStrokeRect(context,CGRectMake(0, rect.size.height, rect.size.width, 0.5f));
}

@end
