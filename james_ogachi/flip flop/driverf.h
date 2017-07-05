#ifndef DRIVER_H_
#define DRIVER_H_

#include<systemc.h>

SC_MODULE(driver){
sc_out<bool> d_a;

SC_CTOR(driver){
	SC_THREAD(drive);
}

void drive(void){
	while(1){
		d_a=0;
		wait(5,SC_NS);
		d_a=1;
		wait(10,SC_NS);
		
	}
}
};
#endif /* DRIVER_H_ */
