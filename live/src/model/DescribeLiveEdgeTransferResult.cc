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

#include <alibabacloud/live/model/DescribeLiveEdgeTransferResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveEdgeTransferResult::DescribeLiveEdgeTransferResult() :
	ServiceResult()
{}

DescribeLiveEdgeTransferResult::DescribeLiveEdgeTransferResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveEdgeTransferResult::~DescribeLiveEdgeTransferResult()
{}

void DescribeLiveEdgeTransferResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();
	if(!value["StreamName"].isNull())
		streamName_ = value["StreamName"].asString();
	if(!value["TargetDomainList"].isNull())
		targetDomainList_ = value["TargetDomainList"].asString();
	if(!value["TransferArgs"].isNull())
		transferArgs_ = value["TransferArgs"].asString();
	if(!value["HttpDns"].isNull())
		httpDns_ = value["HttpDns"].asString();

}

std::string DescribeLiveEdgeTransferResult::getStreamName()const
{
	return streamName_;
}

std::string DescribeLiveEdgeTransferResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeLiveEdgeTransferResult::getTransferArgs()const
{
	return transferArgs_;
}

std::string DescribeLiveEdgeTransferResult::getHttpDns()const
{
	return httpDns_;
}

std::string DescribeLiveEdgeTransferResult::getAppName()const
{
	return appName_;
}

std::string DescribeLiveEdgeTransferResult::getTargetDomainList()const
{
	return targetDomainList_;
}

