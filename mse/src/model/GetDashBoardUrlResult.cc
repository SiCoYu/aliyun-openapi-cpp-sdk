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

#include <alibabacloud/mse/model/GetDashBoardUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetDashBoardUrlResult::GetDashBoardUrlResult() :
	ServiceResult()
{}

GetDashBoardUrlResult::GetDashBoardUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDashBoardUrlResult::~GetDashBoardUrlResult()
{}

void GetDashBoardUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["UrlMap"].isNull())
		data_.urlMap = dataNode["UrlMap"].asString();
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();

}

std::string GetDashBoardUrlResult::getHttpCode()const
{
	return httpCode_;
}

std::string GetDashBoardUrlResult::getMessage()const
{
	return message_;
}

GetDashBoardUrlResult::Data GetDashBoardUrlResult::getData()const
{
	return data_;
}

std::string GetDashBoardUrlResult::getErrorCode()const
{
	return errorCode_;
}

bool GetDashBoardUrlResult::getSuccess()const
{
	return success_;
}

