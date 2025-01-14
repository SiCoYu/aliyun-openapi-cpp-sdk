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

#include <alibabacloud/alidns/model/DescribePdnsUserInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsUserInfoResult::DescribePdnsUserInfoResult() :
	ServiceResult()
{}

DescribePdnsUserInfoResult::DescribePdnsUserInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsUserInfoResult::~DescribePdnsUserInfoResult()
{}

void DescribePdnsUserInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userInfoNode = value["UserInfo"];
	if(!userInfoNode["AvailableService"].isNull())
		userInfo_.availableService = userInfoNode["AvailableService"].asString();
	if(!userInfoNode["ServiceType"].isNull())
		userInfo_.serviceType = userInfoNode["ServiceType"].asString();
	if(!userInfoNode["State"].isNull())
		userInfo_.state = userInfoNode["State"].asString();
	if(!userInfoNode["StoppedService"].isNull())
		userInfo_.stoppedService = userInfoNode["StoppedService"].asString();
	if(!userInfoNode["PdnsId"].isNull())
		userInfo_.pdnsId = std::stol(userInfoNode["PdnsId"].asString());

}

DescribePdnsUserInfoResult::UserInfo DescribePdnsUserInfoResult::getUserInfo()const
{
	return userInfo_;
}

