//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSSet.h>

@interface NSSet (DVTNSSetAdditions)
- (id)dvt_objectByFoldingWithBlock:(CDUnknownBlockType)arg1;
- (id)dvt_sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)dvt_sortedArrayUsingSelector:(SEL)arg1;
- (id)dvt_sortedArray;
- (id)dvt_onlyObject;
- (BOOL)dvt_isNonEmpty;
- (id)dvt_objectsPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)dvt_areAllObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_anyObjectPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)dvt_areAnyObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_setByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_setByApplyingBlockStrictly:(CDUnknownBlockType)arg1;
- (id)dvt_arrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_setByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_setByApplyingSelector:(SEL)arg1;
- (id)dvt_setByRemovingObject:(id)arg1;
- (id)dvt_setBySubtractingSet:(id)arg1;
- (id)dvt_setByIntersectingSet:(id)arg1;
- (Class)dvt_mutableClass;
@end
