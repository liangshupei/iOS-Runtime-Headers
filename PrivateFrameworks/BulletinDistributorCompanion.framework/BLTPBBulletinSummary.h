/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class NSMutableArray, NSString;

@interface BLTPBBulletinSummary : PBCodable <NSCopying> {
    unsigned int _destinations;
    NSMutableArray *_keys;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

@property unsigned int destinations;
@property(readonly) bool hasPublisherBulletinID;
@property(readonly) bool hasRecordID;
@property(retain) NSMutableArray * keys;
@property(retain) NSString * publisherBulletinID;
@property(retain) NSString * recordID;
@property(retain) NSString * sectionID;

- (void).cxx_destruct;
- (void)addKey:(id)arg1;
- (void)clearKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)destinations;
- (id)dictionaryRepresentation;
- (bool)hasPublisherBulletinID;
- (bool)hasRecordID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)keys;
- (unsigned long long)keysCount;
- (void)mergeFrom:(id)arg1;
- (id)publisherBulletinID;
- (bool)readFrom:(id)arg1;
- (id)recordID;
- (id)sectionID;
- (void)setDestinations:(unsigned int)arg1;
- (void)setKeys:(id)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end