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

#include <alibabacloud/ccc/model/ImportDoNotCallNumbersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ImportDoNotCallNumbersResult::ImportDoNotCallNumbersResult() :
	ServiceResult()
{}

ImportDoNotCallNumbersResult::ImportDoNotCallNumbersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ImportDoNotCallNumbersResult::~ImportDoNotCallNumbersResult()
{}

void ImportDoNotCallNumbersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParams = value["Params"]["Param"];
	for (const auto &item : allParams)
		params_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ImportDoNotCallNumbersResult::getMessage()const
{
	return message_;
}

int ImportDoNotCallNumbersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> ImportDoNotCallNumbersResult::getParams()const
{
	return params_;
}

std::string ImportDoNotCallNumbersResult::getCode()const
{
	return code_;
}

