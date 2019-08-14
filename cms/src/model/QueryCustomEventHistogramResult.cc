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

#include <alibabacloud/cms/model/QueryCustomEventHistogramResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

QueryCustomEventHistogramResult::QueryCustomEventHistogramResult() :
	ServiceResult()
{}

QueryCustomEventHistogramResult::QueryCustomEventHistogramResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCustomEventHistogramResult::~QueryCustomEventHistogramResult()
{}

void QueryCustomEventHistogramResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string QueryCustomEventHistogramResult::getMessage()const
{
	return message_;
}

std::string QueryCustomEventHistogramResult::getData()const
{
	return data_;
}

std::string QueryCustomEventHistogramResult::getCode()const
{
	return code_;
}

std::string QueryCustomEventHistogramResult::getSuccess()const
{
	return success_;
}

