/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRBaseMediaProvider.h>

@interface BRNetworkMediaProvider : BRBaseMediaProvider
{
}

- (int)status;
- (id)objectsWithEntityName:(id)fp8 qualifiedByPredicate:(id)fp12 sortDescriptors:(id)fp16 error:(id *)fp20;
- (id)loadDocumentFromURL:(id)fp8;
- (id)convertData:(id)fp8 fromEncoding:(unsigned int)fp12 toEncoding:(unsigned int)fp16;

@end

