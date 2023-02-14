/*
 * Dispatcher.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 *
 *  Last edited on Feb 22, 2020
 *  	By: Ian Nielsen
 */

#include "../includes/dispatcher.h"

//get process from cpu
PCB Dispatcher::get_from_CPU(){
	struct PCB getCPU;
	getCPU = cpu->get_process_off_core();
	is_valid_job_on_cpu = false;
	return getCPU;
}

//put a process on the cpu
void Dispatcher::put_on_CPU(PCB &process){
	cpu->put_process_on_core(process);
	is_valid_job_on_cpu = true;
}

//check if process is on cpu
bool Dispatcher::isValidJobOnCPU(){

	return is_valid_job_on_cpu;
}

