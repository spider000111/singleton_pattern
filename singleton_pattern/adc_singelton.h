#pragma once
#include <memory.h>
class adc_singelton
{
	adc_singelton() {}

	int count;
	
public:
	static adc_singelton& get_instance() {
		static adc_singelton  instance;
		return instance;
	}

	int get_count() {
		return count++;
	}

};

