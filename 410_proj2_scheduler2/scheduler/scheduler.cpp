/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 *
 *  Last edited on Feb 22, 2020
 * 		By: Ian Nielsen
 *
 * 	Chooses next process and determine when to switch processes
 */
//Scheduler
#include "../includes/scheduler.h"

//add a process to the queue
void Scheduler::add(PCB p){
	ready_q->push(p);
	sort();
}

//get the next process from the queue
PCB Scheduler::getNext(){
	if(ready_q->empty()){
		struct PCB empty;
		empty.process_number = -1;
		return empty;
	}
	struct PCB result;
	result = ready_q->front();
	ready_q->pop();
	return result;

}

//check if the scheduler is empty
bool Scheduler::isEmpty(){
	if(ready_q->empty()){
		return true;
	}
	else{
		return false;
	}
}

static int timeSliceTick = 0;

//handles if it is time to switch process and how it switches
bool Scheduler::time_to_switch_processes(int tick_count, PCB &p){
	if(preemptive == true){
		if(tick_count % time_slice == 0){
			timeSliceTick = 0;
			return true;
		}
		else if(timeSliceTick == time_slice -1){
			timeSliceTick = 0;
			return true;
		}
		else if(p.remaining_cpu_time <= 0){
			timeSliceTick = 0;
			return true;
		}
		else{
			timeSliceTick++;
			return false;
		}
	}
	else{
		if(p.remaining_cpu_time <= 0){
			return true;
		}
		else{
			return false;
		}
	}
}



