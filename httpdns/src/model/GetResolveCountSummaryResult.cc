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

#include <alibabacloud/httpdns/model/GetResolveCountSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Httpdns;
using namespace AlibabaCloud::Httpdns::Model;

GetResolveCountSummaryResult::GetResolveCountSummaryResult() :
	ServiceResult()
{}

GetResolveCountSummaryResult::GetResolveCountSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResolveCountSummaryResult::~GetResolveCountSummaryResult()
{}

void GetResolveCountSummaryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto resolveSummaryNode = value["ResolveSummary"];
	if(!resolveSummaryNode["Http"].isNull())
		resolveSummary_.http = std::stol(resolveSummaryNode["Http"].asString());
	if(!resolveSummaryNode["Https"].isNull())
		resolveSummary_.https = std::stol(resolveSummaryNode["Https"].asString());
	if(!resolveSummaryNode["Http6"].isNull())
		resolveSummary_.http6 = std::stol(resolveSummaryNode["Http6"].asString());
	if(!resolveSummaryNode["Https6"].isNull())
		resolveSummary_.https6 = std::stol(resolveSummaryNode["Https6"].asString());

}

GetResolveCountSummaryResult::ResolveSummary GetResolveCountSummaryResult::getResolveSummary()const
{
	return resolveSummary_;
}

