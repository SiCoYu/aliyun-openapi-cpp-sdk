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

#include <alibabacloud/ivpd/model/RecognizeImageColorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivpd;
using namespace AlibabaCloud::Ivpd::Model;

RecognizeImageColorResult::RecognizeImageColorResult() :
	ServiceResult()
{}

RecognizeImageColorResult::RecognizeImageColorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeImageColorResult::~RecognizeImageColorResult()
{}

void RecognizeImageColorResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allColorTemplateList = value["ColorTemplateList"]["ColorTemplate"];
	for (auto value : allColorTemplateList)
	{
		Data::ColorTemplate colorTemplateObject;
		if(!value["Color"].isNull())
			colorTemplateObject.color = value["Color"].asString();
		if(!value["Label"].isNull())
			colorTemplateObject.label = value["Label"].asString();
		if(!value["Percentage"].isNull())
			colorTemplateObject.percentage = std::stof(value["Percentage"].asString());
		data_.colorTemplateList.push_back(colorTemplateObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeImageColorResult::getMessage()const
{
	return message_;
}

RecognizeImageColorResult::Data RecognizeImageColorResult::getData()const
{
	return data_;
}

std::string RecognizeImageColorResult::getCode()const
{
	return code_;
}
