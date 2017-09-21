//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#import "___VARIABLE_moduleName___VMInterface.h"

@protocol ___VARIABLE_moduleName___VCInterface;
@interface ___VARIABLE_moduleName___VM : NSObject
<
    ___VARIABLE_moduleName___VMInterface
>

@property (nonatomic, weak) id<___VARIABLE_moduleName___VCInterface> vcHandler;

@end
