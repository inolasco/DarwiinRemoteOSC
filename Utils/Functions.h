//
//  Functions.h
//

#include "Config.h"


#if !defined(DR_DEBUG) || DR_DEBUG == 0

#define LOG(__FORMAT__, ...)
#define LOG_OBJECT(__OBJECT__)
#define LOG_MINI(__FORMAT__, ...)

#elif DR_DEBUG >= 1

#define LOG(__FORMAT__, ...) NSLog(@"%s %@", __PRETTY_FUNCTION__,[NSString stringWithFormat:__FORMAT__, ##__VA_ARGS__])

#define LOG_OBJECT(__OBJECT__) LOG(@"%@",__OBJECT__)

#define LOG_MINI(__FORMAT__, ...) NSLog(@"%@", [NSString stringWithFormat:__FORMAT__, ##__VA_ARGS__])

#endif //
