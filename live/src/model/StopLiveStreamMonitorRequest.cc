/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/live/model/StopLiveStreamMonitorRequest.h>

using AlibabaCloud::Live::Model::StopLiveStreamMonitorRequest;

StopLiveStreamMonitorRequest::StopLiveStreamMonitorRequest() :
	RpcServiceRequest("live", "2016-11-01", "StopLiveStreamMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

StopLiveStreamMonitorRequest::~StopLiveStreamMonitorRequest()
{}

std::string StopLiveStreamMonitorRequest::getMonitorId()const
{
	return monitorId_;
}

void StopLiveStreamMonitorRequest::setMonitorId(const std::string& monitorId)
{
	monitorId_ = monitorId;
	setParameter("MonitorId", monitorId);
}

long StopLiveStreamMonitorRequest::getOwnerId()const
{
	return ownerId_;
}

void StopLiveStreamMonitorRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

