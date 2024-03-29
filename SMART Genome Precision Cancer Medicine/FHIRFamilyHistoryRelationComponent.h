﻿/*
  Copyright (c) 2011-2013, HL7, Inc.
  All rights reserved.
  
  Redistribution and use in source and binary forms, with or without modification, 
  are permitted provided that the following conditions are met:
  
   * Redistributions of source code must retain the above copyright notice, this 
     list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright notice, 
     this list of conditions and the following disclaimer in the documentation 
     and/or other materials provided with the distribution.
   * Neither the name of HL7 nor the names of its contributors may be used to 
     endorse or promote products derived from this software without specific 
     prior written permission.
  
  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT 
  NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
  POSSIBILITY OF SUCH DAMAGE.
  

 * Generated on Fri, May 9, 2014 11:14+1000 for FHIR v0.0.81
 */
/*
 * null
 *
 * [FhirComposite("FamilyHistoryRelationComponent")]
 * [Serializable]
 */

#import "FHIRElement.h"

#import "FHIRFamilyHistory.h"

@class FHIRString;
@class FHIRCodeableConcept;
@class FHIRElement;
@class FHIRFamilyHistoryRelationConditionComponent;

@interface FHIRFamilyHistoryRelationComponent : FHIRElement

/*
 * The family member described
 */
@property (nonatomic, strong) FHIRString *nameElement;

@property (nonatomic, strong) NSString *name;

/*
 * Relationship to the subject
 */
@property (nonatomic, strong) FHIRCodeableConcept *relationship;

/*
 * (approximate) date of birth
 */
@property (nonatomic, strong) FHIRElement *born;

/*
 * Dead? How old/when?
 */
@property (nonatomic, strong) FHIRElement *deceased;

/*
 * General note about related person
 */
@property (nonatomic, strong) FHIRString *noteElement;

@property (nonatomic, strong) NSString *note;

/*
 * Condition that the related person had
 */
@property (nonatomic, strong) NSArray/*<FamilyHistoryRelationConditionComponent>*/ *condition;

- (FHIRErrorList *)validate;

@end
