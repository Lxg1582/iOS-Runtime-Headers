/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAEncyclopediaEntityLink : AceObject <SAAceSerializable> {
}

@property(copy) NSString * description;
@property(copy) NSURL * image;
@property(copy) NSURL * link;
@property(copy) NSString * name;

+ (id)link;
+ (id)linkWithDictionary:(id)arg1 context:(id)arg2;

- (id)description;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)link;
- (id)name;
- (void)setDescription:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setName:(id)arg1;

@end