/*
 * SchedulerSRTF.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *
 *  Last edited on Feb 22, 2020
 *  	By: Ian Nielsen
 *
 *      implements shortest remaining time first scheduling algorithm
 *      not pre-emptive
 */

#include <climits>
#include "../includes/scheduler_SRTF.h"

//sort using SRTF algorithm
void Scheduler_SRTF::sort(){
	std::queue<PCB> *sorted_q = new std::queue<PCB>();
	while(!ready_q->empty()){
		struct PCB min;
		min.remaining_cpu_time = INT_MAX;
		int queueSize = ready_q->size();
		for(int j = 0; j<queueSize; j++){
			PCB tmp = ready_q->front();
			if(tmp.remaining_cpu_time<=min.remaining_cpu_time){
				if(min.remaining_cpu_time!=INT_MAX){
					ready_q->push(min);
				}
				min = tmp;
				ready_q->pop();
			}
			else{
				ready_q->pop();
				ready_q->push(tmp);
			}
		}
		sorted_q->push(min);

	}
	while(!sorted_q->empty()){
		PCB holderReturn;
		holderReturn = sorted_q->front();
		sorted_q->pop();
		ready_q->push(holderReturn);

	}
	return;
}

