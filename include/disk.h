#pragma once

#include "ram.h"
#include <fstream>
#include <iostream>


void save(int(&buffer)[8]);

void load(int(&buffer)[8]);