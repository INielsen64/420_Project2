/*
 * Stats.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *
 *  Last edited on Feb 22, 2020
 *  	By: Ian Nielsen
 */

#include <iostream>
#include "../includes/stats.h"

//
Stats::Stats(std::vector<PCB> &finished_vector){
	vec = new std::vector<PCB>();
	for(int i = 0; i<finished_vector.size();i++){
		vec->push_back(finished_vector[i]);

	}
	Stats::calcStats();
}

//prints out process info
void Stats::showAllProcessInfo(){
	std::cout<<"show "<<std::endl;
	for(int i = 0; i<vec->size(); i++){
		struct PCB tmp = vec->at(i);
	}
}

//return average response time
float Stats::get_av_response_time(){
	return av_response_time;
}

//return average turnaround time
float Stats::get_av_turnaround_time(){
	return av_turnaround_time;
}

//return average wait time
float Stats::get_av_wait_time(){
	return av_wait_time;
}

//calculate all the average times
void Stats::calcStats(){
	float waitTime = 0;
	float responseTime = 0;
	float turnaroundTime = 0;
	for(int i = 0; i<vec->size();i++){
		struct PCB tmp = vec->at(i);
		waitTime += tmp.finish_time - tmp.arrival_time - tmp.required_cpu_time;
		responseTime += tmp.start_time - tmp.arrival_time;
		turnaroundTime += tmp.finish_time - tmp.arrival_time;
	}
	if(vec->size()>0){
	waitTime = waitTime/(float)vec->size();
	responseTime = responseTime/(float)vec->size();
	turnaroundTime = turnaroundTime/(float)vec->size();
	av_wait_time = waitTime;
	av_turnaround_time = turnaroundTime;
	av_response_time = responseTime;
	}
}

