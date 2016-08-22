//
//  CMTableCellView.h
//  ChromeMenu
//
//  Created by Maksym on 7/3/13.
//  Copyright (c) 2013 Maksym Stefanchuk. All rights reserved.
//


@interface CMMenuItemView : NSView

@property (weak,nonatomic) IBOutlet NSImageView *state;
@property (weak,nonatomic) IBOutlet NSImageView *icon;
@property (weak,nonatomic) IBOutlet NSTextField *title;

@end
