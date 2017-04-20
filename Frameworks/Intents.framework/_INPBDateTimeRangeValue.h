/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDateTimeRangeValue : PBCodable <NSCopying> {
    long long  _endCalendar;
    _INPBDateTime * _endDateTime;
    struct { 
        unsigned int endCalendar : 1; 
        unsigned int startCalendar : 1; 
    }  _has;
    long long  _startCalendar;
    _INPBDateTime * _startDateTime;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic) long long endCalendar;
@property (nonatomic, retain) _INPBDateTime *endDateTime;
@property (nonatomic) BOOL hasEndCalendar;
@property (nonatomic, readonly) BOOL hasEndDateTime;
@property (nonatomic) BOOL hasStartCalendar;
@property (nonatomic, readonly) BOOL hasStartDateTime;
@property (nonatomic, readonly) BOOL hasValueMetadata;
@property (nonatomic) long long startCalendar;
@property (nonatomic, retain) _INPBDateTime *startDateTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endCalendar;
- (id)endDateTime;
- (BOOL)hasEndCalendar;
- (BOOL)hasEndDateTime;
- (BOOL)hasStartCalendar;
- (BOOL)hasStartDateTime;
- (BOOL)hasValueMetadata;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEndCalendar:(long long)arg1;
- (void)setEndDateTime:(id)arg1;
- (void)setHasEndCalendar:(BOOL)arg1;
- (void)setHasStartCalendar:(BOOL)arg1;
- (void)setStartCalendar:(long long)arg1;
- (void)setStartDateTime:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (long long)startCalendar;
- (id)startDateTime;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end