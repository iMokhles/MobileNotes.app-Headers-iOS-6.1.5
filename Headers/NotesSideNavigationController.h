/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIPopoverControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIPopoverController;

__attribute__((visibility("hidden")))
@interface NotesSideNavigationController : XXUnknownSuperclass <UIPopoverControllerDelegate> {
	UIPopoverController* _portraitPopoverController;
}
-(void).cxx_destruct;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)isVisible;
-(void)delayedHide;
-(void)hide;
-(void)hideAnimated:(BOOL)animated;
-(void)showFromTop;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(BOOL)popoverControllerShouldDismissPopover:(id)popoverController;
-(id)init;
@end
