//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@class DVTSourceCodeLanguage;

@interface IDESwiftCompletionsArray : NSArray
{
    CDStruct_4c46f3f5 _completions;
    CDUnknownBlockType _deallocHandler;
    id *_items;
    unsigned long long _itemCount;
    DVTSourceCodeLanguage *_language;
}

- (void).cxx_destruct;
- (unsigned long long)indexOfFirstObjectWithCaseInsensitivePrefix:(const char *)arg1 length:(unsigned long long)arg2;
- (void)enumerateSourceKitObjectsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSourceKitObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithSourceKitArray:(CDStruct_4c46f3f5)arg1 kind:(struct _sourcekit_uid_s *)arg2 language:(id)arg3 options:(unsigned long long)arg4 deallocHandler:(CDUnknownBlockType)arg5;

@end
