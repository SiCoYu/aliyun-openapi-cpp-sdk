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

#include <alibabacloud/live/model/DescribeLiveDomainLogRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainLogRequest;

DescribeLiveDomainLogRequest::DescribeLiveDomainLogRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainLog")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainLogRequest::~DescribeLiveDomainLogRequest()
{}

std::string DescribeLiveDomainLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveDomainLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveDomainLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLiveDomainLogRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

long DescribeLiveDomainLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveDomainLogRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeLiveDomainLogRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainLogRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeLiveDomainLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveDomainLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeLiveDomainLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

