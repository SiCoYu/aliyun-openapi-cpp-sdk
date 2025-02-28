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

#include <alibabacloud/live/model/UpdateLiveStreamMonitorRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveStreamMonitorRequest;

UpdateLiveStreamMonitorRequest::UpdateLiveStreamMonitorRequest() :
	RpcServiceRequest("live", "2016-11-01", "UpdateLiveStreamMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateLiveStreamMonitorRequest::~UpdateLiveStreamMonitorRequest()
{}

std::string UpdateLiveStreamMonitorRequest::getMonitorId()const
{
	return monitorId_;
}

void UpdateLiveStreamMonitorRequest::setMonitorId(const std::string& monitorId)
{
	monitorId_ = monitorId;
	setParameter("MonitorId", monitorId);
}

std::string UpdateLiveStreamMonitorRequest::getMonitorName()const
{
	return monitorName_;
}

void UpdateLiveStreamMonitorRequest::setMonitorName(const std::string& monitorName)
{
	monitorName_ = monitorName;
	setParameter("MonitorName", monitorName);
}

std::string UpdateLiveStreamMonitorRequest::getStream()const
{
	return stream_;
}

void UpdateLiveStreamMonitorRequest::setStream(const std::string& stream)
{
	stream_ = stream;
	setParameter("Stream", stream);
}

std::string UpdateLiveStreamMonitorRequest::getOutputTemplate()const
{
	return outputTemplate_;
}

void UpdateLiveStreamMonitorRequest::setOutputTemplate(const std::string& outputTemplate)
{
	outputTemplate_ = outputTemplate;
	setParameter("OutputTemplate", outputTemplate);
}

std::string UpdateLiveStreamMonitorRequest::getApp()const
{
	return app_;
}

void UpdateLiveStreamMonitorRequest::setApp(const std::string& app)
{
	app_ = app;
	setParameter("App", app);
}

std::string UpdateLiveStreamMonitorRequest::getInputList()const
{
	return inputList_;
}

void UpdateLiveStreamMonitorRequest::setInputList(const std::string& inputList)
{
	inputList_ = inputList;
	setParameter("InputList", inputList);
}

long UpdateLiveStreamMonitorRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateLiveStreamMonitorRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateLiveStreamMonitorRequest::getDomain()const
{
	return domain_;
}

void UpdateLiveStreamMonitorRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

