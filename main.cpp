//
//  main.cpp
//  lo43tp
//
//  Created by 任怡桦 on 2019/10/5.
//  Copyright © 2019年 renyihua. All rights reserved.
//

#include <iostream>
#include "server.h"

int main() {
    Server s(7);
    s.consoleWrite();
    s.fileWrite();
    return 0;
}



