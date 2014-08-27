//
//	BeholdAPaleHorseMainPagebar.h
//	BeholdAPaleHorse v2.7.1
//
//	Created by Julius Oklamcak on 2011-09-01.
//	Copyright © 2011-2013 Julius Oklamcak. All rights reserved.
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights to
//	use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//	of the Software, and to permit persons to whom the Software is furnished to
//	do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in all
//	copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//	OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//	CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>

#import "BeholdAPaleHorseThumbView.h"

@class BeholdAPaleHorseMainPagebar;
@class BeholdAPaleHorseTrackControl;
@class BeholdAPaleHorsePagebarThumb;
@class BeholdAPaleHorseDocument;

@protocol BeholdAPaleHorseMainPagebarDelegate <NSObject>

@required // Delegate protocols

- (void)pagebar:(BeholdAPaleHorseMainPagebar *)pagebar gotoPage:(NSInteger)page;

@end

@interface BeholdAPaleHorseMainPagebar : UIView

@property (nonatomic, weak, readwrite) id <BeholdAPaleHorseMainPagebarDelegate> delegate;

- (id)initWithFrame:(CGRect)frame document:(BeholdAPaleHorseDocument *)object;

- (void)updatePagebar;

- (void)hidePagebar;
- (void)showPagebar;

@end

#pragma mark -

//
//	BeholdAPaleHorseTrackControl class interface
//

@interface BeholdAPaleHorseTrackControl : UIControl

@property (nonatomic, assign, readonly) CGFloat value;

@end

#pragma mark -

//
//	BeholdAPaleHorsePagebarThumb class interface
//

@interface BeholdAPaleHorsePagebarThumb : BeholdAPaleHorseThumbView

- (id)initWithFrame:(CGRect)frame small:(BOOL)small;

@end

#pragma mark -

//
//	BeholdAPaleHorsePagebarShadow class interface
//

@interface BeholdAPaleHorsePagebarShadow : UIView

@end
