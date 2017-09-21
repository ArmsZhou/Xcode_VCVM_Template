//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#import "BaseWithCustomNaviBarViewController.h"
#import "___VARIABLE_moduleName___VCInterface.h"

@protocol ___VARIABLE_moduleName___VMInterface;
@interface ___VARIABLE_moduleName___VC : BaseWithCustomNaviBarViewController
<
    ___VARIABLE_moduleName___VCInterface
>

@property (nonatomic, strong) id<___VARIABLE_moduleName___VMInterface> vmHandler;

@end
