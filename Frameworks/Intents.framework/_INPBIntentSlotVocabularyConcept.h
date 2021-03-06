/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotVocabularyConcept : PBCodable <NSCopying> {
    NSString * _identifier;
    NSMutableArray * _synonyms;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *synonyms;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (Class)synonymsType;

- (void).cxx_destruct;
- (void)addSynonyms:(id)arg1;
- (void)clearSynonyms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdentifier;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;
- (id)synonymsAtIndex:(unsigned int)arg1;
- (unsigned int)synonymsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
