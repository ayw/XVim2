//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEBuildIssueAnnotation.h>

@interface IDEBuildIssueNoticeAnnotation : IDEBuildIssueAnnotation
{
    BOOL _isCurrentNote;
}

+ (id)nonCurrentTheme;
+ (id)inactiveCurrentTheme;
+ (id)activeTheme;
+ (id)sidebarIconBorderMask;
+ (id)sidebarIcon;
+ (unsigned long long)severity;
+ (double)precedence;
@property BOOL isCurrentNote; // @synthesize isCurrentNote=_isCurrentNote;
- (BOOL)isHighlightedRangesVisible;
- (id)currentStateInTextView:(id)arg1;
- (id)annotationDisplayName;
- (id)init;

@end
