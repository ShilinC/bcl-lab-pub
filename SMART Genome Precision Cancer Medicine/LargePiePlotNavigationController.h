//
//  LargePiePlotNavigationController.h
//  SMART Genomics Precision Cancer Medicine
//
//  Created by Daniel Carbone on 9/23/14.
//  Copyright (c) 2014 Vanderbilt-Ingram Cancer Center. All rights reserved.
// 
//  Licensed to the Apache Software Foundation (ASF) under one
//  or more contributor license agreements.  See the NOTICE file
//  distributed with this work for additional information
//  regarding copyright ownership.  The ASF licenses this file
//  to you under the Apache License, Version 2.0 (the
//  "License"); you may not use this file except in compliance
//  with the License.  You may obtain a copy of the License at
//  
//    http://www.apache.org/licenses/LICENSE-2.0
//  
//  Unless required by applicable law or agreed to in writing,
//  software distributed under the License is distributed on an
//  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
//  KIND, either express or implied.  See the License for the
//  specific language governing permissions and limitations
//  under the License.
//

#import <UIKit/UIKit.h>

#import "GeneData.h"

#import "CorePlot-CocoaTouch.h"


@interface LargePiePlotNavigationController : UINavigationController

- (void) closeSelf:(id)sender;

- (void) renderBigGenePieChartWithIdentifier:(NSString *)identifier
                               andDataSource:(id<CPTPieChartDataSource>)pieChartDataSource
                                 andDelegate:(id<CPTPieChartDelegate>)delegate
                                    andTitle:(NSString *)title;

@end
