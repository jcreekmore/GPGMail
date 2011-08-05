/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSWindow.h"

@class NSResponder, WindowTransformAnimation;

@interface FullScreenModalCapableWindow : NSWindow
{
    WindowTransformAnimation *_windowTransformAnimation;
    NSResponder *_nextFirstResponder;
    BOOL _disableFrameConstraint;
    BOOL _hasTransform;
    BOOL _isModal;
    BOOL _shouldNotSaveFrame;
}

- (void)dealloc;
- (BOOL)makeFirstResponder:(id)arg1;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)orderOut:(id)arg1;
- (void)saveFrameUsingName:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)makeKeyAndOrderFrontForAnimation;
- (BOOL)canEnterFullScreenMode;
- (BOOL)isMainWindow;
- (void)setTransformForAnimation:(struct CGAffineTransform)arg1 anchorPoint:(struct CGPoint)arg2;
- (void)setIdentityTransform;
@property BOOL shouldNotSaveFrame; // @synthesize shouldNotSaveFrame=_shouldNotSaveFrame;
@property BOOL isModal; // @synthesize isModal=_isModal;
@property(retain) NSResponder *nextFirstResponder; // @synthesize nextFirstResponder=_nextFirstResponder;
@property BOOL disableFrameConstraint; // @synthesize disableFrameConstraint=_disableFrameConstraint;
@property WindowTransformAnimation *windowTransformAnimation; // @synthesize windowTransformAnimation=_windowTransformAnimation;

@end
