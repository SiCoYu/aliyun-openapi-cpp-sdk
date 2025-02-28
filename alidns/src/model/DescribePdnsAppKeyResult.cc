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

#include <alibabacloud/alidns/model/DescribePdnsAppKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsAppKeyResult::DescribePdnsAppKeyResult() :
	ServiceResult()
{}

DescribePdnsAppKeyResult::DescribePdnsAppKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsAppKeyResult::~DescribePdnsAppKeyResult()
{}

void DescribePdnsAppKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto appKeyNode = value["AppKey"];
	if(!appKeyNode["State"].isNull())
		appKey_.state = appKeyNode["State"].asString();
	if(!appKeyNode["AppKeyId"].isNull())
		appKey_.appKeyId = appKeyNode["AppKeyId"].asString();
	if(!appKeyNode["CreateDate"].isNull())
		appKey_.createDate = appKeyNode["CreateDate"].asString();
	if(!appKeyNode["AppKeySecret"].isNull())
		appKey_.appKeySecret = appKeyNode["AppKeySecret"].asString();

}

DescribePdnsAppKeyResult::AppKey DescribePdnsAppKeyResult::getAppKey()const
{
	return appKey_;
}

