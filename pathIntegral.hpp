//
//  pathIntegral.hpp
//  PocketSimulator
//
//  Created on 9/20/17.
//  Copyright © 2017. All rights reserved.
//

#ifndef pathIntegral_hpp
#define pathIntegral_hpp

#include <stdio.h>
using namespace std;

void complexPathStep(streampos pos, int changesLeft, complex<double> currPhase, int currDepth);

void pathIntegral(string gatePath, int N, int startState, int endState, int numChanges, bool showRuntime);

#endif /* pathIntegral_hpp */
