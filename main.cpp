//
//  main.cpp
//  Quine
//
//  Created by Evan Crabtree on 26/02/2019.
//  Copyright © 2019 QuantumFluctuator. All rights reserved.
//

#include <stdio.h>
char*s="#include <stdio.h>%cchar*s=%c%s%c;%cint main(void){printf(s,10,34,s,34,10,10);}%c";
int main(void){printf(s,10,34,s,34,10,10);}
